/* file "SMSConversationStateContentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SMSCONVERSATIONSTATECONTENTJSON_H
#define SMSCONVERSATIONSTATECONTENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "SMSJSON.h"
#include "SMSFieldTypeJSON.h"
#include "SMSStateJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SMSConversationStateContentJSON : public ReferenceCounted
  {
  public:
    enum TypeCommandKind
      {
        CommandKind_ComposeSMSCommand,
        CommandKind_DiscardSMSCommand
      };

    static TypeCommandKind  stringToCommandKind(const char *chars);
    static const char * stringFromCommandKind(TypeCommandKind the_enum);
    enum TypeComposeSMSCommandKind
      {
        ComposeSMSCommandKind_SMSAddNonspecificRecipientsCommand,
        ComposeSMSCommandKind_SMSCreateCommand,
        ComposeSMSCommandKind_SMSCreateWithNotUnderstoodArgsCommand,
        ComposeSMSCommandKind_SMSDeleteSentencesCommand,
        ComposeSMSCommandKind_SMSDeleteBodyCommand,
        ComposeSMSCommandKind_SMSDeleteMessageCommand,
        ComposeSMSCommandKind_SMSDeleteSpecificWordsCommand,
        ComposeSMSCommandKind_SMSDeleteWordsCommand,
        ComposeSMSCommandKind_SMSDiscardCommand,
        ComposeSMSCommandKind_SMSEditBodyCommand,
        ComposeSMSCommandKind_SMSEditRecipientsCommand,
        ComposeSMSCommandKind_SMSEmptyBodyOkFollowupCommand,
        ComposeSMSCommandKind_SMSErrorCommand,
        ComposeSMSCommandKind_SMSInsertWordsCommand,
        ComposeSMSCommandKind_SMSNotUnderstoodCommand,
        ComposeSMSCommandKind_SMSReadBackCommand,
        ComposeSMSCommandKind_SMSReadyFollowupCommand,
        ComposeSMSCommandKind_SMSRemoveNonspecificRecipientsCommand,
        ComposeSMSCommandKind_SMSRemoveRecipientsFollowupCommand,
        ComposeSMSCommandKind_SMSReplaceWordsCommand,
        ComposeSMSCommandKind_SMSSendCommand,
        ComposeSMSCommandKind_SMSSendItNowFollowupCommand,
        ComposeSMSCommandKind_SMSWordsToDeleteNotFoundCommand,
        ComposeSMSCommandKind_SMSWordsToReplaceNotFoundCommand,
        ComposeSMSCommandKind_SMSWordsToMatchForInsertionNotFoundCommand
      };

    static TypeComposeSMSCommandKind  stringToComposeSMSCommandKind(const char *chars);
    static const char * stringFromComposeSMSCommandKind(TypeComposeSMSCommandKind the_enum);
    class TypePropagatedDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasSMS;
        SMSJSON * storeSMS;
        bool flagHasEmptyBodyOK;
        bool storeEmptyBodyOK;
        bool flagHasLastEditedTextFieldType;
        SMSFieldTypeJSON * storeLastEditedTextFieldType;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypePropagatedDataJSON(const TypePropagatedDataJSON &);
        TypePropagatedDataJSON & operator=(const TypePropagatedDataJSON &other);

        void  fromJSONSMS(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypePropagatedDataJSON(void);
        virtual ~TypePropagatedDataJSON(void);
        bool  hasSMS(void) const;
        SMSJSON *  getSMS(void);
        const SMSJSON *  getSMS(void) const;
        bool  hasEmptyBodyOK(void) const;
        bool  getEmptyBodyOK(void);
        const bool  getEmptyBodyOK(void) const;
        bool  hasLastEditedTextFieldType(void) const;
        SMSFieldTypeJSON *  getLastEditedTextFieldType(void);
        const SMSFieldTypeJSON *  getLastEditedTextFieldType(void) const;
        SMSFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void);
        const SMSFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void) const;
        const char * getLastEditedTextFieldTypeAsChars(void) const;
        std::string  getLastEditedTextFieldTypeAsString(void) const;

        virtual size_t extraTypePropagatedDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypePropagatedDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypePropagatedDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypePropagatedDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypePropagatedDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypePropagatedDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setSMS(SMSJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasSMS)
              {
                storeSMS->remove_reference();
              }
            flagHasSMS = true;
            storeSMS = new_value;
          }
        void unsetSMS(void)
          {
            if (flagHasSMS)
              {
                storeSMS->remove_reference();
              }
            flagHasSMS = false;
          }
        void setEmptyBodyOK(bool new_value)
          {
            flagHasEmptyBodyOK = true;
            storeEmptyBodyOK = new_value;
          }
        void unsetEmptyBodyOK(void)
          {
            flagHasEmptyBodyOK = false;
          }
        void setLastEditedTextFieldType(SMSFieldTypeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasLastEditedTextFieldType)
              {
                storeLastEditedTextFieldType->remove_reference();
              }
            flagHasLastEditedTextFieldType = true;
            storeLastEditedTextFieldType = new_value;
          }
        void setLastEditedTextFieldType(SMSFieldTypeJSON::TypeValue new_value)
          {
            setLastEditedTextFieldType(new SMSFieldTypeJSON(new_value));
          }
        void setLastEditedTextFieldType(const char *chars)
          {
            setLastEditedTextFieldType(new SMSFieldTypeJSON(chars));
          }
        void setLastEditedTextFieldType(std::string the_string)
          {
            setLastEditedTextFieldType(new SMSFieldTypeJSON(the_string));
          }
        void unsetLastEditedTextFieldType(void)
          {
            if (flagHasLastEditedTextFieldType)
              {
                storeLastEditedTextFieldType->remove_reference();
              }
            flagHasLastEditedTextFieldType = false;
          }

        virtual void extraTypePropagatedDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypePropagatedDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypePropagatedDataLookup(key);
            if (old_field == NULL)
              {
                extraTypePropagatedDataAppendPair(key, new_component);
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
            assert(flagHasSMS);
            handler->start_pair("SMS");
            storeSMS->write_as_json(handler);
            if (flagHasEmptyBodyOK)
              {
                handler->start_pair("EmptyBodyOK");
                handler->boolean_value(storeEmptyBodyOK);
              }
            if (flagHasLastEditedTextFieldType)
              {
                handler->start_pair("LastEditedTextFieldType");
                storeLastEditedTextFieldType->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSMS()))
              {
                return "When parsing the object for %what%, the \"SMS\" field was missing.";
              }
            return NULL;
          }

        static TypePropagatedDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypePropagatedDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypePropagatedDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePropagatedDataJSON>, TypePropagatedDataJSON *, bool> generator("Type TypePropagatedData", ignore_extras);
                parse_json_value(text, "Text for TypePropagatedDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypePropagatedDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypePropagatedDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypePropagatedDataJSON>, TypePropagatedDataJSON *, bool> generator("Type TypePropagatedData", ignore_extras);
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
            JSONHoldingGenerator<SMSJSON::Generator, RCHandle<SMSJSON>, SMSJSON *, bool > fieldGeneratorSMS;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEmptyBodyOK;
            JSONHoldingGenerator<SMSFieldTypeJSON::Generator, RCHandle<SMSFieldTypeJSON>, SMSFieldTypeJSON *, bool > fieldGeneratorLastEditedTextFieldType;
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
                TypePropagatedDataJSON *result = new TypePropagatedDataJSON();
                assert(result != NULL);
                RCHandle<TypePropagatedDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypePropagatedDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypePropagatedDataJSON *result)
              {
                if (fieldGeneratorSMS.have_value)
                  {
                    result->setSMS(fieldGeneratorSMS.value.referenced());
                    fieldGeneratorSMS.have_value = false;
                  }
                else if (!(result->hasSMS()))
                  {
                    error("When parsing the object for %what%, the \"SMS\" field was missing.");
                  }
                if (fieldGeneratorEmptyBodyOK.have_value)
                  {
                    result->setEmptyBodyOK(fieldGeneratorEmptyBodyOK.value);
                    fieldGeneratorEmptyBodyOK.have_value = false;
                  }
                if (fieldGeneratorLastEditedTextFieldType.have_value)
                  {
                    result->setLastEditedTextFieldType(fieldGeneratorLastEditedTextFieldType.value.referenced());
                    fieldGeneratorLastEditedTextFieldType.have_value = false;
                  }
              }
            virtual void handle_result(TypePropagatedDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'E':
                        if (strcmp(&(field_name[1]), "mptyBodyOK") == 0)
                            return &fieldGeneratorEmptyBodyOK;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "astEditedTextFieldType") == 0)
                            return &fieldGeneratorLastEditedTextFieldType;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "MS") == 0)
                            return &fieldGeneratorSMS;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorSMS("field \"SMS\" of the TypePropagatedData class", ignore_extras), fieldGeneratorEmptyBodyOK("field \"EmptyBodyOK\" of the TypePropagatedData class"), fieldGeneratorLastEditedTextFieldType("field \"LastEditedTextFieldType\" of the TypePropagatedData class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypePropagatedData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSMS.reset();
                fieldGeneratorEmptyBodyOK.reset();
                fieldGeneratorLastEditedTextFieldType.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    enum TypeSMSDynamicResponseKind
      {
        SMSDynamicResponseKind_NoSMSAppResult,
        SMSDynamicResponseKind_ComposeSMSResult,
        SMSDynamicResponseKind_DisambiguatePhoneNumberResult,
        SMSDynamicResponseKind_SendingSMSResult,
        SMSDynamicResponseKind_SentSMSResult,
        SMSDynamicResponseKind_ExitSMSResult,
        SMSDynamicResponseKind_Succeeded,
        SMSDynamicResponseKind_Failed
      };

    static TypeSMSDynamicResponseKind  stringToSMSDynamicResponseKind(const char *chars);
    static const char * stringFromSMSDynamicResponseKind(TypeSMSDynamicResponseKind the_enum);

  private:
    bool flagHasCommandKind;
    TypeCommandKind storeCommandKind;
    bool flagHasComposeSMSCommandKind;
    TypeComposeSMSCommandKind storeComposeSMSCommandKind;
    bool flagHasPropagatedData;
    TypePropagatedDataJSON * storePropagatedData;
    bool flagHasState;
    SMSStateJSON * storeState;
    bool flagHasSMSDynamicResponseKind;
    TypeSMSDynamicResponseKind storeSMSDynamicResponseKind;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SMSConversationStateContentJSON(const SMSConversationStateContentJSON &);
    SMSConversationStateContentJSON & operator=(const SMSConversationStateContentJSON &other);

    void  fromJSONCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONComposeSMSCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPropagatedData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSMSDynamicResponseKind(JSONValue *json_value, bool ignore_extras = false);


  public:
    SMSConversationStateContentJSON(void);
    virtual ~SMSConversationStateContentJSON(void);
    bool  hasCommandKind(void) const;
    TypeCommandKind  getCommandKind(void);
    const TypeCommandKind  getCommandKind(void) const;
    const char * getCommandKindAsChars(void) const;
    std::string  getCommandKindAsString(void) const;
    bool  hasComposeSMSCommandKind(void) const;
    TypeComposeSMSCommandKind  getComposeSMSCommandKind(void);
    const TypeComposeSMSCommandKind  getComposeSMSCommandKind(void) const;
    const char * getComposeSMSCommandKindAsChars(void) const;
    std::string  getComposeSMSCommandKindAsString(void) const;
    bool  hasPropagatedData(void) const;
    TypePropagatedDataJSON *  getPropagatedData(void);
    const TypePropagatedDataJSON *  getPropagatedData(void) const;
    bool  hasState(void) const;
    SMSStateJSON *  getState(void);
    const SMSStateJSON *  getState(void) const;
    SMSStateJSON::TypeValue  getStateValue(void);
    const SMSStateJSON::TypeValue  getStateValue(void) const;
    const char * getStateAsChars(void) const;
    std::string  getStateAsString(void) const;
    bool  hasSMSDynamicResponseKind(void) const;
    TypeSMSDynamicResponseKind  getSMSDynamicResponseKind(void);
    const TypeSMSDynamicResponseKind  getSMSDynamicResponseKind(void) const;
    const char * getSMSDynamicResponseKindAsChars(void) const;
    std::string  getSMSDynamicResponseKindAsString(void) const;

    virtual size_t extraSMSConversationStateContentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSMSConversationStateContentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSMSConversationStateContentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSMSConversationStateContentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSMSConversationStateContentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSMSConversationStateContentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCommandKind(TypeCommandKind new_value)
      {
        flagHasCommandKind = true;
        storeCommandKind = new_value;
      }
    void setCommandKind(const char *chars)
      {
        setCommandKind(stringToCommandKind(chars));
      }
    void setCommandKind(std::string the_string)
      {
        setCommandKind(stringToCommandKind(the_string.c_str()));
      }
    void unsetCommandKind(void)
      {
        flagHasCommandKind = false;
      }
    void setComposeSMSCommandKind(TypeComposeSMSCommandKind new_value)
      {
        flagHasComposeSMSCommandKind = true;
        storeComposeSMSCommandKind = new_value;
      }
    void setComposeSMSCommandKind(const char *chars)
      {
        setComposeSMSCommandKind(stringToComposeSMSCommandKind(chars));
      }
    void setComposeSMSCommandKind(std::string the_string)
      {
        setComposeSMSCommandKind(stringToComposeSMSCommandKind(the_string.c_str()));
      }
    void unsetComposeSMSCommandKind(void)
      {
        flagHasComposeSMSCommandKind = false;
      }
    void setPropagatedData(TypePropagatedDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPropagatedData)
          {
            storePropagatedData->remove_reference();
          }
        flagHasPropagatedData = true;
        storePropagatedData = new_value;
      }
    void unsetPropagatedData(void)
      {
        if (flagHasPropagatedData)
          {
            storePropagatedData->remove_reference();
          }
        flagHasPropagatedData = false;
      }
    void setState(SMSStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasState)
          {
            storeState->remove_reference();
          }
        flagHasState = true;
        storeState = new_value;
      }
    void setState(SMSStateJSON::TypeValue new_value)
      {
        setState(new SMSStateJSON(new_value));
      }
    void setState(const char *chars)
      {
        setState(new SMSStateJSON(chars));
      }
    void setState(std::string the_string)
      {
        setState(new SMSStateJSON(the_string));
      }
    void unsetState(void)
      {
        if (flagHasState)
          {
            storeState->remove_reference();
          }
        flagHasState = false;
      }
    void setSMSDynamicResponseKind(TypeSMSDynamicResponseKind new_value)
      {
        flagHasSMSDynamicResponseKind = true;
        storeSMSDynamicResponseKind = new_value;
      }
    void setSMSDynamicResponseKind(const char *chars)
      {
        setSMSDynamicResponseKind(stringToSMSDynamicResponseKind(chars));
      }
    void setSMSDynamicResponseKind(std::string the_string)
      {
        setSMSDynamicResponseKind(stringToSMSDynamicResponseKind(the_string.c_str()));
      }
    void unsetSMSDynamicResponseKind(void)
      {
        flagHasSMSDynamicResponseKind = false;
      }

    virtual void extraSMSConversationStateContentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSMSConversationStateContentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSMSConversationStateContentLookup(key);
        if (old_field == NULL)
          {
            extraSMSConversationStateContentAppendPair(key, new_component);
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
        if (flagHasCommandKind)
          {
            handler->start_pair("CommandKind");
            switch (storeCommandKind)
              {
                case CommandKind_ComposeSMSCommand:
                    handler->string_value("ComposeSMSCommand");
                    break;
                case CommandKind_DiscardSMSCommand:
                    handler->string_value("DiscardSMSCommand");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasComposeSMSCommandKind)
          {
            handler->start_pair("ComposeSMSCommandKind");
            switch (storeComposeSMSCommandKind)
              {
                case ComposeSMSCommandKind_SMSAddNonspecificRecipientsCommand:
                    handler->string_value("SMSAddNonspecificRecipientsCommand");
                    break;
                case ComposeSMSCommandKind_SMSCreateCommand:
                    handler->string_value("SMSCreateCommand");
                    break;
                case ComposeSMSCommandKind_SMSCreateWithNotUnderstoodArgsCommand:
                    handler->string_value("SMSCreateWithNotUnderstoodArgsCommand");
                    break;
                case ComposeSMSCommandKind_SMSDeleteSentencesCommand:
                    handler->string_value("SMSDeleteSentencesCommand");
                    break;
                case ComposeSMSCommandKind_SMSDeleteBodyCommand:
                    handler->string_value("SMSDeleteBodyCommand");
                    break;
                case ComposeSMSCommandKind_SMSDeleteMessageCommand:
                    handler->string_value("SMSDeleteMessageCommand");
                    break;
                case ComposeSMSCommandKind_SMSDeleteSpecificWordsCommand:
                    handler->string_value("SMSDeleteSpecificWordsCommand");
                    break;
                case ComposeSMSCommandKind_SMSDeleteWordsCommand:
                    handler->string_value("SMSDeleteWordsCommand");
                    break;
                case ComposeSMSCommandKind_SMSDiscardCommand:
                    handler->string_value("SMSDiscardCommand");
                    break;
                case ComposeSMSCommandKind_SMSEditBodyCommand:
                    handler->string_value("SMSEditBodyCommand");
                    break;
                case ComposeSMSCommandKind_SMSEditRecipientsCommand:
                    handler->string_value("SMSEditRecipientsCommand");
                    break;
                case ComposeSMSCommandKind_SMSEmptyBodyOkFollowupCommand:
                    handler->string_value("SMSEmptyBodyOkFollowupCommand");
                    break;
                case ComposeSMSCommandKind_SMSErrorCommand:
                    handler->string_value("SMSErrorCommand");
                    break;
                case ComposeSMSCommandKind_SMSInsertWordsCommand:
                    handler->string_value("SMSInsertWordsCommand");
                    break;
                case ComposeSMSCommandKind_SMSNotUnderstoodCommand:
                    handler->string_value("SMSNotUnderstoodCommand");
                    break;
                case ComposeSMSCommandKind_SMSReadBackCommand:
                    handler->string_value("SMSReadBackCommand");
                    break;
                case ComposeSMSCommandKind_SMSReadyFollowupCommand:
                    handler->string_value("SMSReadyFollowupCommand");
                    break;
                case ComposeSMSCommandKind_SMSRemoveNonspecificRecipientsCommand:
                    handler->string_value("SMSRemoveNonspecificRecipientsCommand");
                    break;
                case ComposeSMSCommandKind_SMSRemoveRecipientsFollowupCommand:
                    handler->string_value("SMSRemoveRecipientsFollowupCommand");
                    break;
                case ComposeSMSCommandKind_SMSReplaceWordsCommand:
                    handler->string_value("SMSReplaceWordsCommand");
                    break;
                case ComposeSMSCommandKind_SMSSendCommand:
                    handler->string_value("SMSSendCommand");
                    break;
                case ComposeSMSCommandKind_SMSSendItNowFollowupCommand:
                    handler->string_value("SMSSendItNowFollowupCommand");
                    break;
                case ComposeSMSCommandKind_SMSWordsToDeleteNotFoundCommand:
                    handler->string_value("SMSWordsToDeleteNotFoundCommand");
                    break;
                case ComposeSMSCommandKind_SMSWordsToReplaceNotFoundCommand:
                    handler->string_value("SMSWordsToReplaceNotFoundCommand");
                    break;
                case ComposeSMSCommandKind_SMSWordsToMatchForInsertionNotFoundCommand:
                    handler->string_value("SMSWordsToMatchForInsertionNotFoundCommand");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasPropagatedData)
          {
            handler->start_pair("PropagatedData");
            storePropagatedData->write_as_json(handler);
          }
        if (flagHasState)
          {
            handler->start_pair("State");
            storeState->write_as_json(handler);
          }
        if (flagHasSMSDynamicResponseKind)
          {
            handler->start_pair("SMSDynamicResponseKind");
            switch (storeSMSDynamicResponseKind)
              {
                case SMSDynamicResponseKind_NoSMSAppResult:
                    handler->string_value("NoSMSAppResult");
                    break;
                case SMSDynamicResponseKind_ComposeSMSResult:
                    handler->string_value("ComposeSMSResult");
                    break;
                case SMSDynamicResponseKind_DisambiguatePhoneNumberResult:
                    handler->string_value("DisambiguatePhoneNumberResult");
                    break;
                case SMSDynamicResponseKind_SendingSMSResult:
                    handler->string_value("SendingSMSResult");
                    break;
                case SMSDynamicResponseKind_SentSMSResult:
                    handler->string_value("SentSMSResult");
                    break;
                case SMSDynamicResponseKind_ExitSMSResult:
                    handler->string_value("ExitSMSResult");
                    break;
                case SMSDynamicResponseKind_Succeeded:
                    handler->string_value("Succeeded");
                    break;
                case SMSDynamicResponseKind_Failed:
                    handler->string_value("Failed");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SMSConversationStateContentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SMSConversationStateContentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SMSConversationStateContentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSConversationStateContentJSON>, SMSConversationStateContentJSON *, bool> generator("Type SMSConversationStateContent", ignore_extras);
            parse_json_value(text, "Text for SMSConversationStateContentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SMSConversationStateContentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SMSConversationStateContentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SMSConversationStateContentJSON>, SMSConversationStateContentJSON *, bool> generator("Type SMSConversationStateContent", ignore_extras);
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
    class FieldGeneratorCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandKind(result));
              }
            virtual void handle_result(TypeCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandKind, TypeCommandKind, TypeCommandKind > fieldGeneratorCommandKind;
    class FieldGeneratorComposeSMSCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorComposeSMSCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorComposeSMSCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToComposeSMSCommandKind(result));
              }
            virtual void handle_result(TypeComposeSMSCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorComposeSMSCommandKind, TypeComposeSMSCommandKind, TypeComposeSMSCommandKind > fieldGeneratorComposeSMSCommandKind;
        JSONHoldingGenerator<TypePropagatedDataJSON::Generator, RCHandle<TypePropagatedDataJSON>, TypePropagatedDataJSON *, bool > fieldGeneratorPropagatedData;
        JSONHoldingGenerator<SMSStateJSON::Generator, RCHandle<SMSStateJSON>, SMSStateJSON *, bool > fieldGeneratorState;
    class FieldGeneratorSMSDynamicResponseKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorSMSDynamicResponseKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorSMSDynamicResponseKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToSMSDynamicResponseKind(result));
              }
            virtual void handle_result(TypeSMSDynamicResponseKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorSMSDynamicResponseKind, TypeSMSDynamicResponseKind, TypeSMSDynamicResponseKind > fieldGeneratorSMSDynamicResponseKind;
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
            SMSConversationStateContentJSON *result = new SMSConversationStateContentJSON();
            assert(result != NULL);
            RCHandle<SMSConversationStateContentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSMSConversationStateContentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SMSConversationStateContentJSON *result)
          {
            if (fieldGeneratorCommandKind.have_value)
              {
                result->setCommandKind(fieldGeneratorCommandKind.value);
                fieldGeneratorCommandKind.have_value = false;
              }
            if (fieldGeneratorComposeSMSCommandKind.have_value)
              {
                result->setComposeSMSCommandKind(fieldGeneratorComposeSMSCommandKind.value);
                fieldGeneratorComposeSMSCommandKind.have_value = false;
              }
            if (fieldGeneratorPropagatedData.have_value)
              {
                result->setPropagatedData(fieldGeneratorPropagatedData.value.referenced());
                fieldGeneratorPropagatedData.have_value = false;
              }
            if (fieldGeneratorState.have_value)
              {
                result->setState(fieldGeneratorState.value.referenced());
                fieldGeneratorState.have_value = false;
              }
            if (fieldGeneratorSMSDynamicResponseKind.have_value)
              {
                result->setSMSDynamicResponseKind(fieldGeneratorSMSDynamicResponseKind.value);
                fieldGeneratorSMSDynamicResponseKind.have_value = false;
              }
          }
        virtual void handle_result(SMSConversationStateContentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strncmp(&(field_name[1]), "om", 2) == 0)
                      {
                        switch ((unsigned char)(field_name[3]))
                          {
                            case 'm':
                                if (strcmp(&(field_name[4]), "andKind") == 0)
                                    return &fieldGeneratorCommandKind;
                                break;
                            case 'p':
                                if (strcmp(&(field_name[4]), "oseSMSCommandKind") == 0)
                                    return &fieldGeneratorComposeSMSCommandKind;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "ropagatedData") == 0)
                        return &fieldGeneratorPropagatedData;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'M':
                            if (strcmp(&(field_name[2]), "SDynamicResponseKind") == 0)
                                return &fieldGeneratorSMSDynamicResponseKind;
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "ate") == 0)
                                return &fieldGeneratorState;
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
        Generator(bool ignore_extras = false) : fieldGeneratorCommandKind("field \"CommandKind\" of the SMSConversationStateContent class"), fieldGeneratorComposeSMSCommandKind("field \"ComposeSMSCommandKind\" of the SMSConversationStateContent class"), fieldGeneratorPropagatedData("field \"PropagatedData\" of the SMSConversationStateContent class", ignore_extras), fieldGeneratorState("field \"State\" of the SMSConversationStateContent class", ignore_extras), fieldGeneratorSMSDynamicResponseKind("field \"SMSDynamicResponseKind\" of the SMSConversationStateContent class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SMSConversationStateContent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandKind.reset();
            fieldGeneratorComposeSMSCommandKind.reset();
            fieldGeneratorPropagatedData.reset();
            fieldGeneratorState.reset();
            fieldGeneratorSMSDynamicResponseKind.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SMSCONVERSATIONSTATECONTENTJSON_H */
