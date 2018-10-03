/* file "ComposeSMSCommandNativeDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOSESMSCOMMANDNATIVEDATAJSON_H
#define COMPOSESMSCOMMANDNATIVEDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "SMSJSON.h"
#include "SMSFieldTypeJSON.h"
#include "SMSStateJSON.h"
#include "UnambiguousSMSRecipientJSON.h"
#include "UnambiguousSMSRecipientJSON.h"
#include "UnambiguousSMSRecipientJSON.h"
#include "SMSRecipientsJSON.h"
#include "SMSContactResultActionJSON.h"
#include "SMSContactResultJSON.h"
#include "SMSContactResultJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ComposeSMSCommandNativeDataJSON : public ReferenceCounted
  {
  public:
    enum TypeFocusHint
      {
        FocusHint_To,
        FocusHint_Body
      };

    static TypeFocusHint  stringToFocusHint(const char *chars);
    static const char * stringFromFocusHint(TypeFocusHint the_enum);
    class TypeNewRecipientsInfoJSON : public ReferenceCounted
      {
      private:
        bool flagHasSpokenName;
        std::string storeSpokenName;
        bool flagHasWrittenName;
        std::string storeWrittenName;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNewRecipientsInfoJSON(const TypeNewRecipientsInfoJSON &);
        TypeNewRecipientsInfoJSON & operator=(const TypeNewRecipientsInfoJSON &other);

        void  fromJSONSpokenName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONWrittenName(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNewRecipientsInfoJSON(void);
        virtual ~TypeNewRecipientsInfoJSON(void);
        bool  hasSpokenName(void) const;
        std::string  getSpokenName(void);
        const std::string  getSpokenName(void) const;
        bool  hasWrittenName(void) const;
        std::string  getWrittenName(void);
        const std::string  getWrittenName(void) const;

        virtual size_t extraTypeNewRecipientsInfoComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNewRecipientsInfoComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNewRecipientsInfoComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNewRecipientsInfoComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNewRecipientsInfoLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNewRecipientsInfoLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setSpokenName(std::string new_value)
          {
            flagHasSpokenName = true;
            storeSpokenName = new_value;
          }
        void unsetSpokenName(void)
          {
            flagHasSpokenName = false;
          }
        void setWrittenName(std::string new_value)
          {
            flagHasWrittenName = true;
            storeWrittenName = new_value;
          }
        void unsetWrittenName(void)
          {
            flagHasWrittenName = false;
          }

        virtual void extraTypeNewRecipientsInfoAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNewRecipientsInfoSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNewRecipientsInfoLookup(key);
            if (old_field == NULL)
              {
                extraTypeNewRecipientsInfoAppendPair(key, new_component);
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
            assert(flagHasSpokenName);
            handler->start_pair("SpokenName");
            handler->string_value(storeSpokenName);
            assert(flagHasWrittenName);
            handler->start_pair("WrittenName");
            handler->string_value(storeWrittenName);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasSpokenName()))
              {
                return "When parsing the object for %what%, the \"SpokenName\" field was missing.";
              }
            if (!(hasWrittenName()))
              {
                return "When parsing the object for %what%, the \"WrittenName\" field was missing.";
              }
            return NULL;
          }

        static TypeNewRecipientsInfoJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNewRecipientsInfoJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNewRecipientsInfoJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNewRecipientsInfoJSON>, TypeNewRecipientsInfoJSON *, bool> generator("Type TypeNewRecipientsInfo", ignore_extras);
                parse_json_value(text, "Text for TypeNewRecipientsInfoJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNewRecipientsInfoJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNewRecipientsInfoJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNewRecipientsInfoJSON>, TypeNewRecipientsInfoJSON *, bool> generator("Type TypeNewRecipientsInfo", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenName;
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
                TypeNewRecipientsInfoJSON *result = new TypeNewRecipientsInfoJSON();
                assert(result != NULL);
                RCHandle<TypeNewRecipientsInfoJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNewRecipientsInfoAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNewRecipientsInfoJSON *result)
              {
                if (fieldGeneratorSpokenName.have_value)
                  {
                    result->setSpokenName(fieldGeneratorSpokenName.value);
                    fieldGeneratorSpokenName.have_value = false;
                  }
                else if (!(result->hasSpokenName()))
                  {
                    error("When parsing the object for %what%, the \"SpokenName\" field was missing.");
                  }
                if (fieldGeneratorWrittenName.have_value)
                  {
                    result->setWrittenName(fieldGeneratorWrittenName.value);
                    fieldGeneratorWrittenName.have_value = false;
                  }
                else if (!(result->hasWrittenName()))
                  {
                    error("When parsing the object for %what%, the \"WrittenName\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNewRecipientsInfoJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'S':
                        if (strcmp(&(field_name[1]), "pokenName") == 0)
                            return &fieldGeneratorSpokenName;
                        break;
                    case 'W':
                        if (strcmp(&(field_name[1]), "rittenName") == 0)
                            return &fieldGeneratorWrittenName;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorSpokenName("field \"SpokenName\" of the TypeNewRecipientsInfo class"), fieldGeneratorWrittenName("field \"WrittenName\" of the TypeNewRecipientsInfo class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNewRecipientsInfo class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorSpokenName.reset();
                fieldGeneratorWrittenName.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    enum TypeDeleteType
      {
        DeleteType_WORD,
        DeleteType_SENTENCE
      };

    static TypeDeleteType  stringToDeleteType(const char *chars);
    static const char * stringFromDeleteType(TypeDeleteType the_enum);
    enum TypeEditBodyState
      {
        EditBodyState_APPENDED,
        EditBodyState_SET,
        EditBodyState_NO_CHANGE
      };

    static TypeEditBodyState  stringToEditBodyState(const char *chars);
    static const char * stringFromEditBodyState(TypeEditBodyState the_enum);
    enum TypeNotUnderstoodType
      {
        NotUnderstoodType_SMS_PHONE_NUMBER,
        NotUnderstoodType_YES_NO,
        NotUnderstoodType_UNKNOWN
      };

    static TypeNotUnderstoodType  stringToNotUnderstoodType(const char *chars);
    static const char * stringFromNotUnderstoodType(TypeNotUnderstoodType the_enum);

  private:
    bool flagHasSMS;
    SMSJSON * storeSMS;
    bool flagHasEmptyBodyOK;
    bool storeEmptyBodyOK;
    bool flagHasFocusHint;
    TypeFocusHint storeFocusHint;
    bool flagHasSendSMSNow;
    bool storeSendSMSNow;
    bool flagHasLastEditedTextFieldType;
    SMSFieldTypeJSON * storeLastEditedTextFieldType;
    bool flagHasSMSAlreadyHadRecipients;
    bool storeSMSAlreadyHadRecipients;
    bool flagHasNewBody;
    std::string storeNewBody;
    bool flagHasNewRecipientsInfo;
    std::vector< TypeNewRecipientsInfoJSON * > storeNewRecipientsInfo;
    bool flagHasSpokenMessageFromPreviousTransaction;
    std::string storeSpokenMessageFromPreviousTransaction;
    bool flagHasAutoListen;
    bool storeAutoListen;
    bool flagHasNotUnderstoodUsedWordTo;
    bool storeNotUnderstoodUsedWordTo;
    bool flagHasNotUnderstoodWords;
    std::string storeNotUnderstoodWords;
    bool flagHasDeleteType;
    TypeDeleteType storeDeleteType;
    bool flagHasNumToDelete;
    OInteger storeNumToDelete;
    bool flagHasNumDeleted;
    OInteger storeNumDeleted;
    bool flagHasDeleteFromBack;
    bool storeDeleteFromBack;
    bool flagHasNothingToDelete;
    bool storeNothingToDelete;
    bool flagHasState;
    SMSStateJSON * storeState;
    bool flagHasEditBodyState;
    TypeEditBodyState storeEditBodyState;
    bool flagHasFirstTimeAddingToBody;
    bool storeFirstTimeAddingToBody;
    bool flagHasRecipientsAdded;
    std::vector< UnambiguousSMSRecipientJSON * > storeRecipientsAdded;
    bool flagHasRecipientsRemoved;
    std::vector< UnambiguousSMSRecipientJSON * > storeRecipientsRemoved;
    bool flagHasRecipientsCouldNotAdd;
    std::vector< UnambiguousSMSRecipientJSON * > storeRecipientsCouldNotAdd;
    bool flagHasRecipientsCouldNotRemove;
    std::vector< SMSRecipientsJSON * > storeRecipientsCouldNotRemove;
    bool flagHasOpenEndedEditRequest;
    bool storeOpenEndedEditRequest;
    bool flagHasOpenEndedEditRequestAction;
    SMSContactResultActionJSON * storeOpenEndedEditRequestAction;
    bool flagHasRemovedAllRecipients;
    bool storeRemovedAllRecipients;
    bool flagHasAlreadyHadRecipients;
    bool storeAlreadyHadRecipients;
    bool flagHasNotUnderstoodType;
    TypeNotUnderstoodType storeNotUnderstoodType;
    bool flagHasNotUnderstoodWordsFound;
    std::string storeNotUnderstoodWordsFound;
    bool flagHasReadRecipients;
    bool storeReadRecipients;
    bool flagHasReadBody;
    bool storeReadBody;
    bool flagHasWordsToReplace;
    std::string storeWordsToReplace;
    bool flagHasReplacementWords;
    std::string storeReplacementWords;
    bool flagHasReplaceAll;
    bool storeReplaceAll;
    bool flagHasReplacementStartIndices;
    std::vector< OInteger > storeReplacementStartIndices;
    bool flagHasWordsToMatchForInsertion;
    std::string storeWordsToMatchForInsertion;
    bool flagHasInsertionWords;
    std::string storeInsertionWords;
    bool flagHasInsertBefore;
    bool storeInsertBefore;
    bool flagHasInsertAll;
    bool storeInsertAll;
    bool flagHasInsertionStartIndices;
    std::vector< OInteger > storeInsertionStartIndices;
    bool flagHasWordsToDelete;
    std::string storeWordsToDelete;
    bool flagHasDeleteAll;
    bool storeDeleteAll;
    bool flagHasDeletionStartIndices;
    std::vector< OInteger > storeDeletionStartIndices;
    bool flagHasSpokenErrorMessage;
    std::string storeSpokenErrorMessage;
    bool flagHasWrittenErrorMessage;
    std::string storeWrittenErrorMessage;
    bool flagHasNewRecipientsAlreadyInSMS;
    std::vector< SMSContactResultJSON * > storeNewRecipientsAlreadyInSMS;
    bool flagHasNewRecipientsNotInSMS;
    std::vector< SMSContactResultJSON * > storeNewRecipientsNotInSMS;
    bool flagHasOverwroteBody;
    bool storeOverwroteBody;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ComposeSMSCommandNativeDataJSON(const ComposeSMSCommandNativeDataJSON &);
    ComposeSMSCommandNativeDataJSON & operator=(const ComposeSMSCommandNativeDataJSON &other);

    void  fromJSONSMS(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFocusHint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendSMSNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSMSAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewRecipientsInfo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenMessageFromPreviousTransaction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodUsedWordTo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumToDelete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumDeleted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteFromBack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNothingToDelete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEditBodyState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFirstTimeAddingToBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsAdded(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsRemoved(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsCouldNotAdd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsCouldNotRemove(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenEndedEditRequest(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenEndedEditRequestAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRemovedAllRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodWordsFound(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWordsToReplace(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReplacementWords(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReplaceAll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReplacementStartIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWordsToMatchForInsertion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInsertionWords(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInsertBefore(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInsertAll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInsertionStartIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWordsToDelete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteAll(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeletionStartIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenErrorMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenErrorMessage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewRecipientsAlreadyInSMS(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewRecipientsNotInSMS(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOverwroteBody(JSONValue *json_value, bool ignore_extras = false);


  public:
    ComposeSMSCommandNativeDataJSON(void);
    virtual ~ComposeSMSCommandNativeDataJSON(void);
    bool  hasSMS(void) const;
    SMSJSON *  getSMS(void);
    const SMSJSON *  getSMS(void) const;
    bool  hasEmptyBodyOK(void) const;
    bool  getEmptyBodyOK(void);
    const bool  getEmptyBodyOK(void) const;
    bool  hasFocusHint(void) const;
    TypeFocusHint  getFocusHint(void);
    const TypeFocusHint  getFocusHint(void) const;
    const char * getFocusHintAsChars(void) const;
    std::string  getFocusHintAsString(void) const;
    bool  hasSendSMSNow(void) const;
    bool  getSendSMSNow(void);
    const bool  getSendSMSNow(void) const;
    bool  hasLastEditedTextFieldType(void) const;
    SMSFieldTypeJSON *  getLastEditedTextFieldType(void);
    const SMSFieldTypeJSON *  getLastEditedTextFieldType(void) const;
    SMSFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void);
    const SMSFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void) const;
    const char * getLastEditedTextFieldTypeAsChars(void) const;
    std::string  getLastEditedTextFieldTypeAsString(void) const;
    bool  hasSMSAlreadyHadRecipients(void) const;
    bool  getSMSAlreadyHadRecipients(void);
    const bool  getSMSAlreadyHadRecipients(void) const;
    bool  hasNewBody(void) const;
    std::string  getNewBody(void);
    const std::string  getNewBody(void) const;
    bool  hasNewRecipientsInfo(void) const;
    size_t  countOfNewRecipientsInfo(void) const;
    TypeNewRecipientsInfoJSON *  elementOfNewRecipientsInfo(size_t element_num);
    const TypeNewRecipientsInfoJSON *  elementOfNewRecipientsInfo(size_t element_num) const;
    std::vector< TypeNewRecipientsInfoJSON * >  getNewRecipientsInfo(void);
    const std::vector< TypeNewRecipientsInfoJSON * >  getNewRecipientsInfo(void) const;
    bool  hasSpokenMessageFromPreviousTransaction(void) const;
    std::string  getSpokenMessageFromPreviousTransaction(void);
    const std::string  getSpokenMessageFromPreviousTransaction(void) const;
    bool  hasAutoListen(void) const;
    bool  getAutoListen(void);
    const bool  getAutoListen(void) const;
    bool  hasNotUnderstoodUsedWordTo(void) const;
    bool  getNotUnderstoodUsedWordTo(void);
    const bool  getNotUnderstoodUsedWordTo(void) const;
    bool  hasNotUnderstoodWords(void) const;
    std::string  getNotUnderstoodWords(void);
    const std::string  getNotUnderstoodWords(void) const;
    bool  hasDeleteType(void) const;
    TypeDeleteType  getDeleteType(void);
    const TypeDeleteType  getDeleteType(void) const;
    const char * getDeleteTypeAsChars(void) const;
    std::string  getDeleteTypeAsString(void) const;
    bool  hasNumToDelete(void) const;
    OInteger  getNumToDelete(void);
    const OInteger  getNumToDelete(void) const;
    bool  hasNumDeleted(void) const;
    OInteger  getNumDeleted(void);
    const OInteger  getNumDeleted(void) const;
    bool  hasDeleteFromBack(void) const;
    bool  getDeleteFromBack(void);
    const bool  getDeleteFromBack(void) const;
    bool  hasNothingToDelete(void) const;
    bool  getNothingToDelete(void);
    const bool  getNothingToDelete(void) const;
    bool  hasState(void) const;
    SMSStateJSON *  getState(void);
    const SMSStateJSON *  getState(void) const;
    SMSStateJSON::TypeValue  getStateValue(void);
    const SMSStateJSON::TypeValue  getStateValue(void) const;
    const char * getStateAsChars(void) const;
    std::string  getStateAsString(void) const;
    bool  hasEditBodyState(void) const;
    TypeEditBodyState  getEditBodyState(void);
    const TypeEditBodyState  getEditBodyState(void) const;
    const char * getEditBodyStateAsChars(void) const;
    std::string  getEditBodyStateAsString(void) const;
    bool  hasFirstTimeAddingToBody(void) const;
    bool  getFirstTimeAddingToBody(void);
    const bool  getFirstTimeAddingToBody(void) const;
    bool  hasRecipientsAdded(void) const;
    size_t  countOfRecipientsAdded(void) const;
    UnambiguousSMSRecipientJSON *  elementOfRecipientsAdded(size_t element_num);
    const UnambiguousSMSRecipientJSON *  elementOfRecipientsAdded(size_t element_num) const;
    std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsAdded(void);
    const std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsAdded(void) const;
    bool  hasRecipientsRemoved(void) const;
    size_t  countOfRecipientsRemoved(void) const;
    UnambiguousSMSRecipientJSON *  elementOfRecipientsRemoved(size_t element_num);
    const UnambiguousSMSRecipientJSON *  elementOfRecipientsRemoved(size_t element_num) const;
    std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsRemoved(void);
    const std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsRemoved(void) const;
    bool  hasRecipientsCouldNotAdd(void) const;
    size_t  countOfRecipientsCouldNotAdd(void) const;
    UnambiguousSMSRecipientJSON *  elementOfRecipientsCouldNotAdd(size_t element_num);
    const UnambiguousSMSRecipientJSON *  elementOfRecipientsCouldNotAdd(size_t element_num) const;
    std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsCouldNotAdd(void);
    const std::vector< UnambiguousSMSRecipientJSON * >  getRecipientsCouldNotAdd(void) const;
    bool  hasRecipientsCouldNotRemove(void) const;
    size_t  countOfRecipientsCouldNotRemove(void) const;
    SMSRecipientsJSON *  elementOfRecipientsCouldNotRemove(size_t element_num);
    const SMSRecipientsJSON *  elementOfRecipientsCouldNotRemove(size_t element_num) const;
    std::vector< SMSRecipientsJSON * >  getRecipientsCouldNotRemove(void);
    const std::vector< SMSRecipientsJSON * >  getRecipientsCouldNotRemove(void) const;
    bool  hasOpenEndedEditRequest(void) const;
    bool  getOpenEndedEditRequest(void);
    const bool  getOpenEndedEditRequest(void) const;
    bool  hasOpenEndedEditRequestAction(void) const;
    SMSContactResultActionJSON *  getOpenEndedEditRequestAction(void);
    const SMSContactResultActionJSON *  getOpenEndedEditRequestAction(void) const;
    SMSContactResultActionJSON::TypeValue  getOpenEndedEditRequestActionValue(void);
    const SMSContactResultActionJSON::TypeValue  getOpenEndedEditRequestActionValue(void) const;
    const char * getOpenEndedEditRequestActionAsChars(void) const;
    std::string  getOpenEndedEditRequestActionAsString(void) const;
    bool  hasRemovedAllRecipients(void) const;
    bool  getRemovedAllRecipients(void);
    const bool  getRemovedAllRecipients(void) const;
    bool  hasAlreadyHadRecipients(void) const;
    bool  getAlreadyHadRecipients(void);
    const bool  getAlreadyHadRecipients(void) const;
    bool  hasNotUnderstoodType(void) const;
    TypeNotUnderstoodType  getNotUnderstoodType(void);
    const TypeNotUnderstoodType  getNotUnderstoodType(void) const;
    const char * getNotUnderstoodTypeAsChars(void) const;
    std::string  getNotUnderstoodTypeAsString(void) const;
    bool  hasNotUnderstoodWordsFound(void) const;
    std::string  getNotUnderstoodWordsFound(void);
    const std::string  getNotUnderstoodWordsFound(void) const;
    bool  hasReadRecipients(void) const;
    bool  getReadRecipients(void);
    const bool  getReadRecipients(void) const;
    bool  hasReadBody(void) const;
    bool  getReadBody(void);
    const bool  getReadBody(void) const;
    bool  hasWordsToReplace(void) const;
    std::string  getWordsToReplace(void);
    const std::string  getWordsToReplace(void) const;
    bool  hasReplacementWords(void) const;
    std::string  getReplacementWords(void);
    const std::string  getReplacementWords(void) const;
    bool  hasReplaceAll(void) const;
    bool  getReplaceAll(void);
    const bool  getReplaceAll(void) const;
    bool  hasReplacementStartIndices(void) const;
    size_t  countOfReplacementStartIndices(void) const;
    OInteger  elementOfReplacementStartIndices(size_t element_num);
    const OInteger  elementOfReplacementStartIndices(size_t element_num) const;
    std::vector< OInteger >  getReplacementStartIndices(void);
    const std::vector< OInteger >  getReplacementStartIndices(void) const;
    bool  hasWordsToMatchForInsertion(void) const;
    std::string  getWordsToMatchForInsertion(void);
    const std::string  getWordsToMatchForInsertion(void) const;
    bool  hasInsertionWords(void) const;
    std::string  getInsertionWords(void);
    const std::string  getInsertionWords(void) const;
    bool  hasInsertBefore(void) const;
    bool  getInsertBefore(void);
    const bool  getInsertBefore(void) const;
    bool  hasInsertAll(void) const;
    bool  getInsertAll(void);
    const bool  getInsertAll(void) const;
    bool  hasInsertionStartIndices(void) const;
    size_t  countOfInsertionStartIndices(void) const;
    OInteger  elementOfInsertionStartIndices(size_t element_num);
    const OInteger  elementOfInsertionStartIndices(size_t element_num) const;
    std::vector< OInteger >  getInsertionStartIndices(void);
    const std::vector< OInteger >  getInsertionStartIndices(void) const;
    bool  hasWordsToDelete(void) const;
    std::string  getWordsToDelete(void);
    const std::string  getWordsToDelete(void) const;
    bool  hasDeleteAll(void) const;
    bool  getDeleteAll(void);
    const bool  getDeleteAll(void) const;
    bool  hasDeletionStartIndices(void) const;
    size_t  countOfDeletionStartIndices(void) const;
    OInteger  elementOfDeletionStartIndices(size_t element_num);
    const OInteger  elementOfDeletionStartIndices(size_t element_num) const;
    std::vector< OInteger >  getDeletionStartIndices(void);
    const std::vector< OInteger >  getDeletionStartIndices(void) const;
    bool  hasSpokenErrorMessage(void) const;
    std::string  getSpokenErrorMessage(void);
    const std::string  getSpokenErrorMessage(void) const;
    bool  hasWrittenErrorMessage(void) const;
    std::string  getWrittenErrorMessage(void);
    const std::string  getWrittenErrorMessage(void) const;
    bool  hasNewRecipientsAlreadyInSMS(void) const;
    size_t  countOfNewRecipientsAlreadyInSMS(void) const;
    SMSContactResultJSON *  elementOfNewRecipientsAlreadyInSMS(size_t element_num);
    const SMSContactResultJSON *  elementOfNewRecipientsAlreadyInSMS(size_t element_num) const;
    std::vector< SMSContactResultJSON * >  getNewRecipientsAlreadyInSMS(void);
    const std::vector< SMSContactResultJSON * >  getNewRecipientsAlreadyInSMS(void) const;
    bool  hasNewRecipientsNotInSMS(void) const;
    size_t  countOfNewRecipientsNotInSMS(void) const;
    SMSContactResultJSON *  elementOfNewRecipientsNotInSMS(size_t element_num);
    const SMSContactResultJSON *  elementOfNewRecipientsNotInSMS(size_t element_num) const;
    std::vector< SMSContactResultJSON * >  getNewRecipientsNotInSMS(void);
    const std::vector< SMSContactResultJSON * >  getNewRecipientsNotInSMS(void) const;
    bool  hasOverwroteBody(void) const;
    bool  getOverwroteBody(void);
    const bool  getOverwroteBody(void) const;

    virtual size_t extraComposeSMSCommandNativeDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraComposeSMSCommandNativeDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraComposeSMSCommandNativeDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraComposeSMSCommandNativeDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraComposeSMSCommandNativeDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraComposeSMSCommandNativeDataLookup(const char *field_name) const
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
    void setFocusHint(TypeFocusHint new_value)
      {
        flagHasFocusHint = true;
        storeFocusHint = new_value;
      }
    void setFocusHint(const char *chars)
      {
        setFocusHint(stringToFocusHint(chars));
      }
    void setFocusHint(std::string the_string)
      {
        setFocusHint(stringToFocusHint(the_string.c_str()));
      }
    void unsetFocusHint(void)
      {
        flagHasFocusHint = false;
      }
    void setSendSMSNow(bool new_value)
      {
        flagHasSendSMSNow = true;
        storeSendSMSNow = new_value;
      }
    void unsetSendSMSNow(void)
      {
        flagHasSendSMSNow = false;
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
    void setSMSAlreadyHadRecipients(bool new_value)
      {
        flagHasSMSAlreadyHadRecipients = true;
        storeSMSAlreadyHadRecipients = new_value;
      }
    void unsetSMSAlreadyHadRecipients(void)
      {
        flagHasSMSAlreadyHadRecipients = false;
      }
    void setNewBody(std::string new_value)
      {
        flagHasNewBody = true;
        storeNewBody = new_value;
      }
    void unsetNewBody(void)
      {
        flagHasNewBody = false;
      }
    void initNewRecipientsInfo(void)
      {
        if (flagHasNewRecipientsInfo)
          {
            for (size_t num8 = 0; num8 < storeNewRecipientsInfo.size(); ++num8)
              {
                storeNewRecipientsInfo[num8]->remove_reference();
              }
          }
        flagHasNewRecipientsInfo = true;
        storeNewRecipientsInfo.clear();
      }
    void appendNewRecipientsInfo(TypeNewRecipientsInfoJSON * to_append)
      {
        if (!flagHasNewRecipientsInfo)
          {
            flagHasNewRecipientsInfo = true;
            storeNewRecipientsInfo.clear();
          }
        assert(flagHasNewRecipientsInfo);
        to_append->add_reference();
        storeNewRecipientsInfo.push_back(to_append);
      }
    void unsetNewRecipientsInfo(void)
      {
        if (flagHasNewRecipientsInfo)
          {
            for (size_t num9 = 0; num9 < storeNewRecipientsInfo.size(); ++num9)
              {
                storeNewRecipientsInfo[num9]->remove_reference();
              }
          }
        flagHasNewRecipientsInfo = false;
        storeNewRecipientsInfo.clear();
      }
    void setSpokenMessageFromPreviousTransaction(std::string new_value)
      {
        flagHasSpokenMessageFromPreviousTransaction = true;
        storeSpokenMessageFromPreviousTransaction = new_value;
      }
    void unsetSpokenMessageFromPreviousTransaction(void)
      {
        flagHasSpokenMessageFromPreviousTransaction = false;
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
    void setNotUnderstoodUsedWordTo(bool new_value)
      {
        flagHasNotUnderstoodUsedWordTo = true;
        storeNotUnderstoodUsedWordTo = new_value;
      }
    void unsetNotUnderstoodUsedWordTo(void)
      {
        flagHasNotUnderstoodUsedWordTo = false;
      }
    void setNotUnderstoodWords(std::string new_value)
      {
        flagHasNotUnderstoodWords = true;
        storeNotUnderstoodWords = new_value;
      }
    void unsetNotUnderstoodWords(void)
      {
        flagHasNotUnderstoodWords = false;
      }
    void setDeleteType(TypeDeleteType new_value)
      {
        flagHasDeleteType = true;
        storeDeleteType = new_value;
      }
    void setDeleteType(const char *chars)
      {
        setDeleteType(stringToDeleteType(chars));
      }
    void setDeleteType(std::string the_string)
      {
        setDeleteType(stringToDeleteType(the_string.c_str()));
      }
    void unsetDeleteType(void)
      {
        flagHasDeleteType = false;
      }
    void setNumToDelete(OInteger new_value)
      {
        flagHasNumToDelete = true;
        if (new_value < 0)
            throw("The value for field NumToDelete of ComposeSMSCommandNativeDataJSON is less than the lower bound (0) for that field.");
        storeNumToDelete = new_value;
      }
    void unsetNumToDelete(void)
      {
        flagHasNumToDelete = false;
      }
    void setNumDeleted(OInteger new_value)
      {
        flagHasNumDeleted = true;
        if (new_value < 0)
            throw("The value for field NumDeleted of ComposeSMSCommandNativeDataJSON is less than the lower bound (0) for that field.");
        storeNumDeleted = new_value;
      }
    void unsetNumDeleted(void)
      {
        flagHasNumDeleted = false;
      }
    void setDeleteFromBack(bool new_value)
      {
        flagHasDeleteFromBack = true;
        storeDeleteFromBack = new_value;
      }
    void unsetDeleteFromBack(void)
      {
        flagHasDeleteFromBack = false;
      }
    void setNothingToDelete(bool new_value)
      {
        flagHasNothingToDelete = true;
        storeNothingToDelete = new_value;
      }
    void unsetNothingToDelete(void)
      {
        flagHasNothingToDelete = false;
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
    void setEditBodyState(TypeEditBodyState new_value)
      {
        flagHasEditBodyState = true;
        storeEditBodyState = new_value;
      }
    void setEditBodyState(const char *chars)
      {
        setEditBodyState(stringToEditBodyState(chars));
      }
    void setEditBodyState(std::string the_string)
      {
        setEditBodyState(stringToEditBodyState(the_string.c_str()));
      }
    void unsetEditBodyState(void)
      {
        flagHasEditBodyState = false;
      }
    void setFirstTimeAddingToBody(bool new_value)
      {
        flagHasFirstTimeAddingToBody = true;
        storeFirstTimeAddingToBody = new_value;
      }
    void unsetFirstTimeAddingToBody(void)
      {
        flagHasFirstTimeAddingToBody = false;
      }
    void initRecipientsAdded(void)
      {
        if (flagHasRecipientsAdded)
          {
            for (size_t num10 = 0; num10 < storeRecipientsAdded.size(); ++num10)
              {
                storeRecipientsAdded[num10]->remove_reference();
              }
          }
        flagHasRecipientsAdded = true;
        storeRecipientsAdded.clear();
      }
    void appendRecipientsAdded(UnambiguousSMSRecipientJSON * to_append)
      {
        if (!flagHasRecipientsAdded)
          {
            flagHasRecipientsAdded = true;
            storeRecipientsAdded.clear();
          }
        assert(flagHasRecipientsAdded);
        to_append->add_reference();
        storeRecipientsAdded.push_back(to_append);
      }
    void unsetRecipientsAdded(void)
      {
        if (flagHasRecipientsAdded)
          {
            for (size_t num11 = 0; num11 < storeRecipientsAdded.size(); ++num11)
              {
                storeRecipientsAdded[num11]->remove_reference();
              }
          }
        flagHasRecipientsAdded = false;
        storeRecipientsAdded.clear();
      }
    void initRecipientsRemoved(void)
      {
        if (flagHasRecipientsRemoved)
          {
            for (size_t num12 = 0; num12 < storeRecipientsRemoved.size(); ++num12)
              {
                storeRecipientsRemoved[num12]->remove_reference();
              }
          }
        flagHasRecipientsRemoved = true;
        storeRecipientsRemoved.clear();
      }
    void appendRecipientsRemoved(UnambiguousSMSRecipientJSON * to_append)
      {
        if (!flagHasRecipientsRemoved)
          {
            flagHasRecipientsRemoved = true;
            storeRecipientsRemoved.clear();
          }
        assert(flagHasRecipientsRemoved);
        to_append->add_reference();
        storeRecipientsRemoved.push_back(to_append);
      }
    void unsetRecipientsRemoved(void)
      {
        if (flagHasRecipientsRemoved)
          {
            for (size_t num13 = 0; num13 < storeRecipientsRemoved.size(); ++num13)
              {
                storeRecipientsRemoved[num13]->remove_reference();
              }
          }
        flagHasRecipientsRemoved = false;
        storeRecipientsRemoved.clear();
      }
    void initRecipientsCouldNotAdd(void)
      {
        if (flagHasRecipientsCouldNotAdd)
          {
            for (size_t num14 = 0; num14 < storeRecipientsCouldNotAdd.size(); ++num14)
              {
                storeRecipientsCouldNotAdd[num14]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotAdd = true;
        storeRecipientsCouldNotAdd.clear();
      }
    void appendRecipientsCouldNotAdd(UnambiguousSMSRecipientJSON * to_append)
      {
        if (!flagHasRecipientsCouldNotAdd)
          {
            flagHasRecipientsCouldNotAdd = true;
            storeRecipientsCouldNotAdd.clear();
          }
        assert(flagHasRecipientsCouldNotAdd);
        to_append->add_reference();
        storeRecipientsCouldNotAdd.push_back(to_append);
      }
    void unsetRecipientsCouldNotAdd(void)
      {
        if (flagHasRecipientsCouldNotAdd)
          {
            for (size_t num15 = 0; num15 < storeRecipientsCouldNotAdd.size(); ++num15)
              {
                storeRecipientsCouldNotAdd[num15]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotAdd = false;
        storeRecipientsCouldNotAdd.clear();
      }
    void initRecipientsCouldNotRemove(void)
      {
        if (flagHasRecipientsCouldNotRemove)
          {
            for (size_t num16 = 0; num16 < storeRecipientsCouldNotRemove.size(); ++num16)
              {
                storeRecipientsCouldNotRemove[num16]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotRemove = true;
        storeRecipientsCouldNotRemove.clear();
      }
    void appendRecipientsCouldNotRemove(SMSRecipientsJSON * to_append)
      {
        if (!flagHasRecipientsCouldNotRemove)
          {
            flagHasRecipientsCouldNotRemove = true;
            storeRecipientsCouldNotRemove.clear();
          }
        assert(flagHasRecipientsCouldNotRemove);
        to_append->add_reference();
        storeRecipientsCouldNotRemove.push_back(to_append);
      }
    void unsetRecipientsCouldNotRemove(void)
      {
        if (flagHasRecipientsCouldNotRemove)
          {
            for (size_t num17 = 0; num17 < storeRecipientsCouldNotRemove.size(); ++num17)
              {
                storeRecipientsCouldNotRemove[num17]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotRemove = false;
        storeRecipientsCouldNotRemove.clear();
      }
    void setOpenEndedEditRequest(bool new_value)
      {
        flagHasOpenEndedEditRequest = true;
        storeOpenEndedEditRequest = new_value;
      }
    void unsetOpenEndedEditRequest(void)
      {
        flagHasOpenEndedEditRequest = false;
      }
    void setOpenEndedEditRequestAction(SMSContactResultActionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpenEndedEditRequestAction)
          {
            storeOpenEndedEditRequestAction->remove_reference();
          }
        flagHasOpenEndedEditRequestAction = true;
        storeOpenEndedEditRequestAction = new_value;
      }
    void setOpenEndedEditRequestAction(SMSContactResultActionJSON::TypeValue new_value)
      {
        setOpenEndedEditRequestAction(new SMSContactResultActionJSON(new_value));
      }
    void setOpenEndedEditRequestAction(const char *chars)
      {
        setOpenEndedEditRequestAction(new SMSContactResultActionJSON(chars));
      }
    void setOpenEndedEditRequestAction(std::string the_string)
      {
        setOpenEndedEditRequestAction(new SMSContactResultActionJSON(the_string));
      }
    void unsetOpenEndedEditRequestAction(void)
      {
        if (flagHasOpenEndedEditRequestAction)
          {
            storeOpenEndedEditRequestAction->remove_reference();
          }
        flagHasOpenEndedEditRequestAction = false;
      }
    void setRemovedAllRecipients(bool new_value)
      {
        flagHasRemovedAllRecipients = true;
        storeRemovedAllRecipients = new_value;
      }
    void unsetRemovedAllRecipients(void)
      {
        flagHasRemovedAllRecipients = false;
      }
    void setAlreadyHadRecipients(bool new_value)
      {
        flagHasAlreadyHadRecipients = true;
        storeAlreadyHadRecipients = new_value;
      }
    void unsetAlreadyHadRecipients(void)
      {
        flagHasAlreadyHadRecipients = false;
      }
    void setNotUnderstoodType(TypeNotUnderstoodType new_value)
      {
        flagHasNotUnderstoodType = true;
        storeNotUnderstoodType = new_value;
      }
    void setNotUnderstoodType(const char *chars)
      {
        setNotUnderstoodType(stringToNotUnderstoodType(chars));
      }
    void setNotUnderstoodType(std::string the_string)
      {
        setNotUnderstoodType(stringToNotUnderstoodType(the_string.c_str()));
      }
    void unsetNotUnderstoodType(void)
      {
        flagHasNotUnderstoodType = false;
      }
    void setNotUnderstoodWordsFound(std::string new_value)
      {
        flagHasNotUnderstoodWordsFound = true;
        storeNotUnderstoodWordsFound = new_value;
      }
    void unsetNotUnderstoodWordsFound(void)
      {
        flagHasNotUnderstoodWordsFound = false;
      }
    void setReadRecipients(bool new_value)
      {
        flagHasReadRecipients = true;
        storeReadRecipients = new_value;
      }
    void unsetReadRecipients(void)
      {
        flagHasReadRecipients = false;
      }
    void setReadBody(bool new_value)
      {
        flagHasReadBody = true;
        storeReadBody = new_value;
      }
    void unsetReadBody(void)
      {
        flagHasReadBody = false;
      }
    void setWordsToReplace(std::string new_value)
      {
        flagHasWordsToReplace = true;
        storeWordsToReplace = new_value;
      }
    void unsetWordsToReplace(void)
      {
        flagHasWordsToReplace = false;
      }
    void setReplacementWords(std::string new_value)
      {
        flagHasReplacementWords = true;
        storeReplacementWords = new_value;
      }
    void unsetReplacementWords(void)
      {
        flagHasReplacementWords = false;
      }
    void setReplaceAll(bool new_value)
      {
        flagHasReplaceAll = true;
        storeReplaceAll = new_value;
      }
    void unsetReplaceAll(void)
      {
        flagHasReplaceAll = false;
      }
    void initReplacementStartIndices(void)
      {
        flagHasReplacementStartIndices = true;
        storeReplacementStartIndices.clear();
      }
    void appendReplacementStartIndices(OInteger to_append)
      {
        if (!flagHasReplacementStartIndices)
          {
            flagHasReplacementStartIndices = true;
            storeReplacementStartIndices.clear();
          }
        assert(flagHasReplacementStartIndices);
        storeReplacementStartIndices.push_back(to_append);
      }
    void unsetReplacementStartIndices(void)
      {
        flagHasReplacementStartIndices = false;
        storeReplacementStartIndices.clear();
      }
    void setWordsToMatchForInsertion(std::string new_value)
      {
        flagHasWordsToMatchForInsertion = true;
        storeWordsToMatchForInsertion = new_value;
      }
    void unsetWordsToMatchForInsertion(void)
      {
        flagHasWordsToMatchForInsertion = false;
      }
    void setInsertionWords(std::string new_value)
      {
        flagHasInsertionWords = true;
        storeInsertionWords = new_value;
      }
    void unsetInsertionWords(void)
      {
        flagHasInsertionWords = false;
      }
    void setInsertBefore(bool new_value)
      {
        flagHasInsertBefore = true;
        storeInsertBefore = new_value;
      }
    void unsetInsertBefore(void)
      {
        flagHasInsertBefore = false;
      }
    void setInsertAll(bool new_value)
      {
        flagHasInsertAll = true;
        storeInsertAll = new_value;
      }
    void unsetInsertAll(void)
      {
        flagHasInsertAll = false;
      }
    void initInsertionStartIndices(void)
      {
        flagHasInsertionStartIndices = true;
        storeInsertionStartIndices.clear();
      }
    void appendInsertionStartIndices(OInteger to_append)
      {
        if (!flagHasInsertionStartIndices)
          {
            flagHasInsertionStartIndices = true;
            storeInsertionStartIndices.clear();
          }
        assert(flagHasInsertionStartIndices);
        storeInsertionStartIndices.push_back(to_append);
      }
    void unsetInsertionStartIndices(void)
      {
        flagHasInsertionStartIndices = false;
        storeInsertionStartIndices.clear();
      }
    void setWordsToDelete(std::string new_value)
      {
        flagHasWordsToDelete = true;
        storeWordsToDelete = new_value;
      }
    void unsetWordsToDelete(void)
      {
        flagHasWordsToDelete = false;
      }
    void setDeleteAll(bool new_value)
      {
        flagHasDeleteAll = true;
        storeDeleteAll = new_value;
      }
    void unsetDeleteAll(void)
      {
        flagHasDeleteAll = false;
      }
    void initDeletionStartIndices(void)
      {
        flagHasDeletionStartIndices = true;
        storeDeletionStartIndices.clear();
      }
    void appendDeletionStartIndices(OInteger to_append)
      {
        if (!flagHasDeletionStartIndices)
          {
            flagHasDeletionStartIndices = true;
            storeDeletionStartIndices.clear();
          }
        assert(flagHasDeletionStartIndices);
        storeDeletionStartIndices.push_back(to_append);
      }
    void unsetDeletionStartIndices(void)
      {
        flagHasDeletionStartIndices = false;
        storeDeletionStartIndices.clear();
      }
    void setSpokenErrorMessage(std::string new_value)
      {
        flagHasSpokenErrorMessage = true;
        storeSpokenErrorMessage = new_value;
      }
    void unsetSpokenErrorMessage(void)
      {
        flagHasSpokenErrorMessage = false;
      }
    void setWrittenErrorMessage(std::string new_value)
      {
        flagHasWrittenErrorMessage = true;
        storeWrittenErrorMessage = new_value;
      }
    void unsetWrittenErrorMessage(void)
      {
        flagHasWrittenErrorMessage = false;
      }
    void initNewRecipientsAlreadyInSMS(void)
      {
        if (flagHasNewRecipientsAlreadyInSMS)
          {
            for (size_t num18 = 0; num18 < storeNewRecipientsAlreadyInSMS.size(); ++num18)
              {
                storeNewRecipientsAlreadyInSMS[num18]->remove_reference();
              }
          }
        flagHasNewRecipientsAlreadyInSMS = true;
        storeNewRecipientsAlreadyInSMS.clear();
      }
    void appendNewRecipientsAlreadyInSMS(SMSContactResultJSON * to_append)
      {
        if (!flagHasNewRecipientsAlreadyInSMS)
          {
            flagHasNewRecipientsAlreadyInSMS = true;
            storeNewRecipientsAlreadyInSMS.clear();
          }
        assert(flagHasNewRecipientsAlreadyInSMS);
        to_append->add_reference();
        storeNewRecipientsAlreadyInSMS.push_back(to_append);
      }
    void unsetNewRecipientsAlreadyInSMS(void)
      {
        if (flagHasNewRecipientsAlreadyInSMS)
          {
            for (size_t num19 = 0; num19 < storeNewRecipientsAlreadyInSMS.size(); ++num19)
              {
                storeNewRecipientsAlreadyInSMS[num19]->remove_reference();
              }
          }
        flagHasNewRecipientsAlreadyInSMS = false;
        storeNewRecipientsAlreadyInSMS.clear();
      }
    void initNewRecipientsNotInSMS(void)
      {
        if (flagHasNewRecipientsNotInSMS)
          {
            for (size_t num20 = 0; num20 < storeNewRecipientsNotInSMS.size(); ++num20)
              {
                storeNewRecipientsNotInSMS[num20]->remove_reference();
              }
          }
        flagHasNewRecipientsNotInSMS = true;
        storeNewRecipientsNotInSMS.clear();
      }
    void appendNewRecipientsNotInSMS(SMSContactResultJSON * to_append)
      {
        if (!flagHasNewRecipientsNotInSMS)
          {
            flagHasNewRecipientsNotInSMS = true;
            storeNewRecipientsNotInSMS.clear();
          }
        assert(flagHasNewRecipientsNotInSMS);
        to_append->add_reference();
        storeNewRecipientsNotInSMS.push_back(to_append);
      }
    void unsetNewRecipientsNotInSMS(void)
      {
        if (flagHasNewRecipientsNotInSMS)
          {
            for (size_t num21 = 0; num21 < storeNewRecipientsNotInSMS.size(); ++num21)
              {
                storeNewRecipientsNotInSMS[num21]->remove_reference();
              }
          }
        flagHasNewRecipientsNotInSMS = false;
        storeNewRecipientsNotInSMS.clear();
      }
    void setOverwroteBody(bool new_value)
      {
        flagHasOverwroteBody = true;
        storeOverwroteBody = new_value;
      }
    void unsetOverwroteBody(void)
      {
        flagHasOverwroteBody = false;
      }

    virtual void extraComposeSMSCommandNativeDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraComposeSMSCommandNativeDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraComposeSMSCommandNativeDataLookup(key);
        if (old_field == NULL)
          {
            extraComposeSMSCommandNativeDataAppendPair(key, new_component);
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
        if (flagHasFocusHint)
          {
            handler->start_pair("FocusHint");
            switch (storeFocusHint)
              {
                case FocusHint_To:
                    handler->string_value("To");
                    break;
                case FocusHint_Body:
                    handler->string_value("Body");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasSendSMSNow)
          {
            handler->start_pair("SendSMSNow");
            handler->boolean_value(storeSendSMSNow);
          }
        if (flagHasLastEditedTextFieldType)
          {
            handler->start_pair("LastEditedTextFieldType");
            storeLastEditedTextFieldType->write_as_json(handler);
          }
        if (flagHasSMSAlreadyHadRecipients)
          {
            handler->start_pair("SMSAlreadyHadRecipients");
            handler->boolean_value(storeSMSAlreadyHadRecipients);
          }
        if (flagHasNewBody)
          {
            handler->start_pair("NewBody");
            handler->string_value(storeNewBody);
          }
        if (flagHasNewRecipientsInfo)
          {
            handler->start_pair("NewRecipientsInfo");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeNewRecipientsInfo.size(); ++num1)
              {
                storeNewRecipientsInfo[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSpokenMessageFromPreviousTransaction)
          {
            handler->start_pair("SpokenMessageFromPreviousTransaction");
            handler->string_value(storeSpokenMessageFromPreviousTransaction);
          }
        if (flagHasAutoListen)
          {
            handler->start_pair("AutoListen");
            handler->boolean_value(storeAutoListen);
          }
        if (flagHasNotUnderstoodUsedWordTo)
          {
            handler->start_pair("NotUnderstoodUsedWordTo");
            handler->boolean_value(storeNotUnderstoodUsedWordTo);
          }
        if (flagHasNotUnderstoodWords)
          {
            handler->start_pair("NotUnderstoodWords");
            handler->string_value(storeNotUnderstoodWords);
          }
        if (flagHasDeleteType)
          {
            handler->start_pair("DeleteType");
            switch (storeDeleteType)
              {
                case DeleteType_WORD:
                    handler->string_value("WORD");
                    break;
                case DeleteType_SENTENCE:
                    handler->string_value("SENTENCE");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasNumToDelete)
          {
            handler->start_pair("NumToDelete");
            handler->number_value(storeNumToDelete.get_o_integer());
          }
        if (flagHasNumDeleted)
          {
            handler->start_pair("NumDeleted");
            handler->number_value(storeNumDeleted.get_o_integer());
          }
        if (flagHasDeleteFromBack)
          {
            handler->start_pair("DeleteFromBack");
            handler->boolean_value(storeDeleteFromBack);
          }
        if (flagHasNothingToDelete)
          {
            handler->start_pair("NothingToDelete");
            handler->boolean_value(storeNothingToDelete);
          }
        assert(flagHasState);
        handler->start_pair("State");
        storeState->write_as_json(handler);
        if (flagHasEditBodyState)
          {
            handler->start_pair("EditBodyState");
            switch (storeEditBodyState)
              {
                case EditBodyState_APPENDED:
                    handler->string_value("APPENDED");
                    break;
                case EditBodyState_SET:
                    handler->string_value("SET");
                    break;
                case EditBodyState_NO_CHANGE:
                    handler->string_value("NO_CHANGE");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasFirstTimeAddingToBody)
          {
            handler->start_pair("FirstTimeAddingToBody");
            handler->boolean_value(storeFirstTimeAddingToBody);
          }
        if (flagHasRecipientsAdded)
          {
            handler->start_pair("RecipientsAdded");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeRecipientsAdded.size(); ++num2)
              {
                storeRecipientsAdded[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsRemoved)
          {
            handler->start_pair("RecipientsRemoved");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeRecipientsRemoved.size(); ++num3)
              {
                storeRecipientsRemoved[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsCouldNotAdd)
          {
            handler->start_pair("RecipientsCouldNotAdd");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeRecipientsCouldNotAdd.size(); ++num4)
              {
                storeRecipientsCouldNotAdd[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsCouldNotRemove)
          {
            handler->start_pair("RecipientsCouldNotRemove");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeRecipientsCouldNotRemove.size(); ++num5)
              {
                storeRecipientsCouldNotRemove[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOpenEndedEditRequest)
          {
            handler->start_pair("OpenEndedEditRequest");
            handler->boolean_value(storeOpenEndedEditRequest);
          }
        if (flagHasOpenEndedEditRequestAction)
          {
            handler->start_pair("OpenEndedEditRequestAction");
            storeOpenEndedEditRequestAction->write_as_json(handler);
          }
        if (flagHasRemovedAllRecipients)
          {
            handler->start_pair("RemovedAllRecipients");
            handler->boolean_value(storeRemovedAllRecipients);
          }
        if (flagHasAlreadyHadRecipients)
          {
            handler->start_pair("AlreadyHadRecipients");
            handler->boolean_value(storeAlreadyHadRecipients);
          }
        if (flagHasNotUnderstoodType)
          {
            handler->start_pair("NotUnderstoodType");
            switch (storeNotUnderstoodType)
              {
                case NotUnderstoodType_SMS_PHONE_NUMBER:
                    handler->string_value("SMS_PHONE_NUMBER");
                    break;
                case NotUnderstoodType_YES_NO:
                    handler->string_value("YES_NO");
                    break;
                case NotUnderstoodType_UNKNOWN:
                    handler->string_value("UNKNOWN");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasNotUnderstoodWordsFound)
          {
            handler->start_pair("NotUnderstoodWordsFound");
            handler->string_value(storeNotUnderstoodWordsFound);
          }
        if (flagHasReadRecipients)
          {
            handler->start_pair("ReadRecipients");
            handler->boolean_value(storeReadRecipients);
          }
        if (flagHasReadBody)
          {
            handler->start_pair("ReadBody");
            handler->boolean_value(storeReadBody);
          }
        if (flagHasWordsToReplace)
          {
            handler->start_pair("WordsToReplace");
            handler->string_value(storeWordsToReplace);
          }
        if (flagHasReplacementWords)
          {
            handler->start_pair("ReplacementWords");
            handler->string_value(storeReplacementWords);
          }
        if (flagHasReplaceAll)
          {
            handler->start_pair("ReplaceAll");
            handler->boolean_value(storeReplaceAll);
          }
        if (flagHasReplacementStartIndices)
          {
            handler->start_pair("ReplacementStartIndices");
            assert(storeReplacementStartIndices.size() >= 1);
            handler->start_array();
            for (size_t num6 = 0; num6 < storeReplacementStartIndices.size(); ++num6)
              {
                handler->number_value(storeReplacementStartIndices[num6].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasWordsToMatchForInsertion)
          {
            handler->start_pair("WordsToMatchForInsertion");
            handler->string_value(storeWordsToMatchForInsertion);
          }
        if (flagHasInsertionWords)
          {
            handler->start_pair("InsertionWords");
            handler->string_value(storeInsertionWords);
          }
        if (flagHasInsertBefore)
          {
            handler->start_pair("InsertBefore");
            handler->boolean_value(storeInsertBefore);
          }
        if (flagHasInsertAll)
          {
            handler->start_pair("InsertAll");
            handler->boolean_value(storeInsertAll);
          }
        if (flagHasInsertionStartIndices)
          {
            handler->start_pair("InsertionStartIndices");
            assert(storeInsertionStartIndices.size() >= 1);
            handler->start_array();
            for (size_t num7 = 0; num7 < storeInsertionStartIndices.size(); ++num7)
              {
                handler->number_value(storeInsertionStartIndices[num7].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasWordsToDelete)
          {
            handler->start_pair("WordsToDelete");
            handler->string_value(storeWordsToDelete);
          }
        if (flagHasDeleteAll)
          {
            handler->start_pair("DeleteAll");
            handler->boolean_value(storeDeleteAll);
          }
        if (flagHasDeletionStartIndices)
          {
            handler->start_pair("DeletionStartIndices");
            assert(storeDeletionStartIndices.size() >= 1);
            handler->start_array();
            for (size_t num8 = 0; num8 < storeDeletionStartIndices.size(); ++num8)
              {
                handler->number_value(storeDeletionStartIndices[num8].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasSpokenErrorMessage)
          {
            handler->start_pair("SpokenErrorMessage");
            handler->string_value(storeSpokenErrorMessage);
          }
        if (flagHasWrittenErrorMessage)
          {
            handler->start_pair("WrittenErrorMessage");
            handler->string_value(storeWrittenErrorMessage);
          }
        if (flagHasNewRecipientsAlreadyInSMS)
          {
            handler->start_pair("NewRecipientsAlreadyInSMS");
            handler->start_array();
            for (size_t num9 = 0; num9 < storeNewRecipientsAlreadyInSMS.size(); ++num9)
              {
                storeNewRecipientsAlreadyInSMS[num9]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNewRecipientsNotInSMS)
          {
            handler->start_pair("NewRecipientsNotInSMS");
            handler->start_array();
            for (size_t num10 = 0; num10 < storeNewRecipientsNotInSMS.size(); ++num10)
              {
                storeNewRecipientsNotInSMS[num10]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOverwroteBody)
          {
            handler->start_pair("OverwroteBody");
            handler->boolean_value(storeOverwroteBody);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSMS()))
          {
            return "When parsing the object for %what%, the \"SMS\" field was missing.";
          }
        if (!(hasState()))
          {
            return "When parsing the object for %what%, the \"State\" field was missing.";
          }
        return NULL;
      }

    static ComposeSMSCommandNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ComposeSMSCommandNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ComposeSMSCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandNativeDataJSON>, ComposeSMSCommandNativeDataJSON *, bool> generator("Type ComposeSMSCommandNativeData", ignore_extras);
            parse_json_value(text, "Text for ComposeSMSCommandNativeDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ComposeSMSCommandNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ComposeSMSCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandNativeDataJSON>, ComposeSMSCommandNativeDataJSON *, bool> generator("Type ComposeSMSCommandNativeData", ignore_extras);
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
    class FieldGeneratorFocusHint : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFocusHint(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFocusHint(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFocusHint(result));
              }
            virtual void handle_result(TypeFocusHint result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFocusHint, TypeFocusHint, TypeFocusHint > fieldGeneratorFocusHint;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSendSMSNow;
        JSONHoldingGenerator<SMSFieldTypeJSON::Generator, RCHandle<SMSFieldTypeJSON>, SMSFieldTypeJSON *, bool > fieldGeneratorLastEditedTextFieldType;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSMSAlreadyHadRecipients;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewBody;
        JSONHoldingArrayGenerator<TypeNewRecipientsInfoJSON::Generator, RCHandle<TypeNewRecipientsInfoJSON>, TypeNewRecipientsInfoJSON *, bool > fieldGeneratorNewRecipientsInfo;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenMessageFromPreviousTransaction;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAutoListen;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNotUnderstoodUsedWordTo;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNotUnderstoodWords;
    class FieldGeneratorDeleteType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDeleteType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDeleteType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDeleteType(result));
              }
            virtual void handle_result(TypeDeleteType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDeleteType, TypeDeleteType, TypeDeleteType > fieldGeneratorDeleteType;
        static char lowerBoundNumToDelete[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumToDelete>, OInteger, o_integer > fieldGeneratorNumToDelete;
        static char lowerBoundNumDeleted[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundNumDeleted>, OInteger, o_integer > fieldGeneratorNumDeleted;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDeleteFromBack;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNothingToDelete;
        JSONHoldingGenerator<SMSStateJSON::Generator, RCHandle<SMSStateJSON>, SMSStateJSON *, bool > fieldGeneratorState;
    class FieldGeneratorEditBodyState : public JSONStringGenerator
          {
          protected:
            FieldGeneratorEditBodyState(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorEditBodyState(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToEditBodyState(result));
              }
            virtual void handle_result(TypeEditBodyState result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorEditBodyState, TypeEditBodyState, TypeEditBodyState > fieldGeneratorEditBodyState;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFirstTimeAddingToBody;
        JSONHoldingArrayGenerator<UnambiguousSMSRecipientJSON::Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool > fieldGeneratorRecipientsAdded;
        JSONHoldingArrayGenerator<UnambiguousSMSRecipientJSON::Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool > fieldGeneratorRecipientsRemoved;
        JSONHoldingArrayGenerator<UnambiguousSMSRecipientJSON::Generator, RCHandle<UnambiguousSMSRecipientJSON>, UnambiguousSMSRecipientJSON *, bool > fieldGeneratorRecipientsCouldNotAdd;
        JSONHoldingArrayGenerator<SMSRecipientsJSON::Generator, RCHandle<SMSRecipientsJSON>, SMSRecipientsJSON *, bool > fieldGeneratorRecipientsCouldNotRemove;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpenEndedEditRequest;
        JSONHoldingGenerator<SMSContactResultActionJSON::Generator, RCHandle<SMSContactResultActionJSON>, SMSContactResultActionJSON *, bool > fieldGeneratorOpenEndedEditRequestAction;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRemovedAllRecipients;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAlreadyHadRecipients;
    class FieldGeneratorNotUnderstoodType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorNotUnderstoodType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorNotUnderstoodType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToNotUnderstoodType(result));
              }
            virtual void handle_result(TypeNotUnderstoodType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorNotUnderstoodType, TypeNotUnderstoodType, TypeNotUnderstoodType > fieldGeneratorNotUnderstoodType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNotUnderstoodWordsFound;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReadRecipients;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReadBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWordsToReplace;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorReplacementWords;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReplaceAll;
        static char lowerBoundReplacementStartIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundReplacementStartIndices>, OInteger, o_integer > fieldGeneratorReplacementStartIndices;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWordsToMatchForInsertion;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInsertionWords;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInsertBefore;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorInsertAll;
        static char lowerBoundInsertionStartIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundInsertionStartIndices>, OInteger, o_integer > fieldGeneratorInsertionStartIndices;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWordsToDelete;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDeleteAll;
        static char lowerBoundDeletionStartIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundDeletionStartIndices>, OInteger, o_integer > fieldGeneratorDeletionStartIndices;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenErrorMessage;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenErrorMessage;
        JSONHoldingArrayGenerator<SMSContactResultJSON::Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool > fieldGeneratorNewRecipientsAlreadyInSMS;
        JSONHoldingArrayGenerator<SMSContactResultJSON::Generator, RCHandle<SMSContactResultJSON>, SMSContactResultJSON *, bool > fieldGeneratorNewRecipientsNotInSMS;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOverwroteBody;
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
            ComposeSMSCommandNativeDataJSON *result = new ComposeSMSCommandNativeDataJSON();
            assert(result != NULL);
            RCHandle<ComposeSMSCommandNativeDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraComposeSMSCommandNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ComposeSMSCommandNativeDataJSON *result)
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
            if (fieldGeneratorFocusHint.have_value)
              {
                result->setFocusHint(fieldGeneratorFocusHint.value);
                fieldGeneratorFocusHint.have_value = false;
              }
            if (fieldGeneratorSendSMSNow.have_value)
              {
                result->setSendSMSNow(fieldGeneratorSendSMSNow.value);
                fieldGeneratorSendSMSNow.have_value = false;
              }
            if (fieldGeneratorLastEditedTextFieldType.have_value)
              {
                result->setLastEditedTextFieldType(fieldGeneratorLastEditedTextFieldType.value.referenced());
                fieldGeneratorLastEditedTextFieldType.have_value = false;
              }
            if (fieldGeneratorSMSAlreadyHadRecipients.have_value)
              {
                result->setSMSAlreadyHadRecipients(fieldGeneratorSMSAlreadyHadRecipients.value);
                fieldGeneratorSMSAlreadyHadRecipients.have_value = false;
              }
            if (fieldGeneratorNewBody.have_value)
              {
                result->setNewBody(fieldGeneratorNewBody.value);
                fieldGeneratorNewBody.have_value = false;
              }
            if (fieldGeneratorNewRecipientsInfo.have_value)
              {
                result->initNewRecipientsInfo();
                size_t count = fieldGeneratorNewRecipientsInfo.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewRecipientsInfo(fieldGeneratorNewRecipientsInfo.value[num].referenced());
                  }
                fieldGeneratorNewRecipientsInfo.value.clear();
                fieldGeneratorNewRecipientsInfo.have_value = false;
              }
            if (fieldGeneratorSpokenMessageFromPreviousTransaction.have_value)
              {
                result->setSpokenMessageFromPreviousTransaction(fieldGeneratorSpokenMessageFromPreviousTransaction.value);
                fieldGeneratorSpokenMessageFromPreviousTransaction.have_value = false;
              }
            if (fieldGeneratorAutoListen.have_value)
              {
                result->setAutoListen(fieldGeneratorAutoListen.value);
                fieldGeneratorAutoListen.have_value = false;
              }
            if (fieldGeneratorNotUnderstoodUsedWordTo.have_value)
              {
                result->setNotUnderstoodUsedWordTo(fieldGeneratorNotUnderstoodUsedWordTo.value);
                fieldGeneratorNotUnderstoodUsedWordTo.have_value = false;
              }
            if (fieldGeneratorNotUnderstoodWords.have_value)
              {
                result->setNotUnderstoodWords(fieldGeneratorNotUnderstoodWords.value);
                fieldGeneratorNotUnderstoodWords.have_value = false;
              }
            if (fieldGeneratorDeleteType.have_value)
              {
                result->setDeleteType(fieldGeneratorDeleteType.value);
                fieldGeneratorDeleteType.have_value = false;
              }
            if (fieldGeneratorNumToDelete.have_value)
              {
                result->setNumToDelete(fieldGeneratorNumToDelete.value);
                fieldGeneratorNumToDelete.have_value = false;
              }
            if (fieldGeneratorNumDeleted.have_value)
              {
                result->setNumDeleted(fieldGeneratorNumDeleted.value);
                fieldGeneratorNumDeleted.have_value = false;
              }
            if (fieldGeneratorDeleteFromBack.have_value)
              {
                result->setDeleteFromBack(fieldGeneratorDeleteFromBack.value);
                fieldGeneratorDeleteFromBack.have_value = false;
              }
            if (fieldGeneratorNothingToDelete.have_value)
              {
                result->setNothingToDelete(fieldGeneratorNothingToDelete.value);
                fieldGeneratorNothingToDelete.have_value = false;
              }
            if (fieldGeneratorState.have_value)
              {
                result->setState(fieldGeneratorState.value.referenced());
                fieldGeneratorState.have_value = false;
              }
            else if (!(result->hasState()))
              {
                error("When parsing the object for %what%, the \"State\" field was missing.");
              }
            if (fieldGeneratorEditBodyState.have_value)
              {
                result->setEditBodyState(fieldGeneratorEditBodyState.value);
                fieldGeneratorEditBodyState.have_value = false;
              }
            if (fieldGeneratorFirstTimeAddingToBody.have_value)
              {
                result->setFirstTimeAddingToBody(fieldGeneratorFirstTimeAddingToBody.value);
                fieldGeneratorFirstTimeAddingToBody.have_value = false;
              }
            if (fieldGeneratorRecipientsAdded.have_value)
              {
                result->initRecipientsAdded();
                size_t count = fieldGeneratorRecipientsAdded.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRecipientsAdded(fieldGeneratorRecipientsAdded.value[num].referenced());
                  }
                fieldGeneratorRecipientsAdded.value.clear();
                fieldGeneratorRecipientsAdded.have_value = false;
              }
            if (fieldGeneratorRecipientsRemoved.have_value)
              {
                result->initRecipientsRemoved();
                size_t count = fieldGeneratorRecipientsRemoved.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRecipientsRemoved(fieldGeneratorRecipientsRemoved.value[num].referenced());
                  }
                fieldGeneratorRecipientsRemoved.value.clear();
                fieldGeneratorRecipientsRemoved.have_value = false;
              }
            if (fieldGeneratorRecipientsCouldNotAdd.have_value)
              {
                result->initRecipientsCouldNotAdd();
                size_t count = fieldGeneratorRecipientsCouldNotAdd.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRecipientsCouldNotAdd(fieldGeneratorRecipientsCouldNotAdd.value[num].referenced());
                  }
                fieldGeneratorRecipientsCouldNotAdd.value.clear();
                fieldGeneratorRecipientsCouldNotAdd.have_value = false;
              }
            if (fieldGeneratorRecipientsCouldNotRemove.have_value)
              {
                result->initRecipientsCouldNotRemove();
                size_t count = fieldGeneratorRecipientsCouldNotRemove.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendRecipientsCouldNotRemove(fieldGeneratorRecipientsCouldNotRemove.value[num].referenced());
                  }
                fieldGeneratorRecipientsCouldNotRemove.value.clear();
                fieldGeneratorRecipientsCouldNotRemove.have_value = false;
              }
            if (fieldGeneratorOpenEndedEditRequest.have_value)
              {
                result->setOpenEndedEditRequest(fieldGeneratorOpenEndedEditRequest.value);
                fieldGeneratorOpenEndedEditRequest.have_value = false;
              }
            if (fieldGeneratorOpenEndedEditRequestAction.have_value)
              {
                result->setOpenEndedEditRequestAction(fieldGeneratorOpenEndedEditRequestAction.value.referenced());
                fieldGeneratorOpenEndedEditRequestAction.have_value = false;
              }
            if (fieldGeneratorRemovedAllRecipients.have_value)
              {
                result->setRemovedAllRecipients(fieldGeneratorRemovedAllRecipients.value);
                fieldGeneratorRemovedAllRecipients.have_value = false;
              }
            if (fieldGeneratorAlreadyHadRecipients.have_value)
              {
                result->setAlreadyHadRecipients(fieldGeneratorAlreadyHadRecipients.value);
                fieldGeneratorAlreadyHadRecipients.have_value = false;
              }
            if (fieldGeneratorNotUnderstoodType.have_value)
              {
                result->setNotUnderstoodType(fieldGeneratorNotUnderstoodType.value);
                fieldGeneratorNotUnderstoodType.have_value = false;
              }
            if (fieldGeneratorNotUnderstoodWordsFound.have_value)
              {
                result->setNotUnderstoodWordsFound(fieldGeneratorNotUnderstoodWordsFound.value);
                fieldGeneratorNotUnderstoodWordsFound.have_value = false;
              }
            if (fieldGeneratorReadRecipients.have_value)
              {
                result->setReadRecipients(fieldGeneratorReadRecipients.value);
                fieldGeneratorReadRecipients.have_value = false;
              }
            if (fieldGeneratorReadBody.have_value)
              {
                result->setReadBody(fieldGeneratorReadBody.value);
                fieldGeneratorReadBody.have_value = false;
              }
            if (fieldGeneratorWordsToReplace.have_value)
              {
                result->setWordsToReplace(fieldGeneratorWordsToReplace.value);
                fieldGeneratorWordsToReplace.have_value = false;
              }
            if (fieldGeneratorReplacementWords.have_value)
              {
                result->setReplacementWords(fieldGeneratorReplacementWords.value);
                fieldGeneratorReplacementWords.have_value = false;
              }
            if (fieldGeneratorReplaceAll.have_value)
              {
                result->setReplaceAll(fieldGeneratorReplaceAll.value);
                fieldGeneratorReplaceAll.have_value = false;
              }
            if (fieldGeneratorReplacementStartIndices.have_value)
              {
                result->initReplacementStartIndices();
                size_t count = fieldGeneratorReplacementStartIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendReplacementStartIndices(fieldGeneratorReplacementStartIndices.value[num]);
                  }
                fieldGeneratorReplacementStartIndices.value.clear();
                fieldGeneratorReplacementStartIndices.have_value = false;
              }
            if (fieldGeneratorWordsToMatchForInsertion.have_value)
              {
                result->setWordsToMatchForInsertion(fieldGeneratorWordsToMatchForInsertion.value);
                fieldGeneratorWordsToMatchForInsertion.have_value = false;
              }
            if (fieldGeneratorInsertionWords.have_value)
              {
                result->setInsertionWords(fieldGeneratorInsertionWords.value);
                fieldGeneratorInsertionWords.have_value = false;
              }
            if (fieldGeneratorInsertBefore.have_value)
              {
                result->setInsertBefore(fieldGeneratorInsertBefore.value);
                fieldGeneratorInsertBefore.have_value = false;
              }
            if (fieldGeneratorInsertAll.have_value)
              {
                result->setInsertAll(fieldGeneratorInsertAll.value);
                fieldGeneratorInsertAll.have_value = false;
              }
            if (fieldGeneratorInsertionStartIndices.have_value)
              {
                result->initInsertionStartIndices();
                size_t count = fieldGeneratorInsertionStartIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInsertionStartIndices(fieldGeneratorInsertionStartIndices.value[num]);
                  }
                fieldGeneratorInsertionStartIndices.value.clear();
                fieldGeneratorInsertionStartIndices.have_value = false;
              }
            if (fieldGeneratorWordsToDelete.have_value)
              {
                result->setWordsToDelete(fieldGeneratorWordsToDelete.value);
                fieldGeneratorWordsToDelete.have_value = false;
              }
            if (fieldGeneratorDeleteAll.have_value)
              {
                result->setDeleteAll(fieldGeneratorDeleteAll.value);
                fieldGeneratorDeleteAll.have_value = false;
              }
            if (fieldGeneratorDeletionStartIndices.have_value)
              {
                result->initDeletionStartIndices();
                size_t count = fieldGeneratorDeletionStartIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDeletionStartIndices(fieldGeneratorDeletionStartIndices.value[num]);
                  }
                fieldGeneratorDeletionStartIndices.value.clear();
                fieldGeneratorDeletionStartIndices.have_value = false;
              }
            if (fieldGeneratorSpokenErrorMessage.have_value)
              {
                result->setSpokenErrorMessage(fieldGeneratorSpokenErrorMessage.value);
                fieldGeneratorSpokenErrorMessage.have_value = false;
              }
            if (fieldGeneratorWrittenErrorMessage.have_value)
              {
                result->setWrittenErrorMessage(fieldGeneratorWrittenErrorMessage.value);
                fieldGeneratorWrittenErrorMessage.have_value = false;
              }
            if (fieldGeneratorNewRecipientsAlreadyInSMS.have_value)
              {
                result->initNewRecipientsAlreadyInSMS();
                size_t count = fieldGeneratorNewRecipientsAlreadyInSMS.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewRecipientsAlreadyInSMS(fieldGeneratorNewRecipientsAlreadyInSMS.value[num].referenced());
                  }
                fieldGeneratorNewRecipientsAlreadyInSMS.value.clear();
                fieldGeneratorNewRecipientsAlreadyInSMS.have_value = false;
              }
            if (fieldGeneratorNewRecipientsNotInSMS.have_value)
              {
                result->initNewRecipientsNotInSMS();
                size_t count = fieldGeneratorNewRecipientsNotInSMS.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewRecipientsNotInSMS(fieldGeneratorNewRecipientsNotInSMS.value[num].referenced());
                  }
                fieldGeneratorNewRecipientsNotInSMS.value.clear();
                fieldGeneratorNewRecipientsNotInSMS.have_value = false;
              }
            if (fieldGeneratorOverwroteBody.have_value)
              {
                result->setOverwroteBody(fieldGeneratorOverwroteBody.value);
                fieldGeneratorOverwroteBody.have_value = false;
              }
          }
        virtual void handle_result(ComposeSMSCommandNativeDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "readyHadRecipients") == 0)
                                return &fieldGeneratorAlreadyHadRecipients;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "toListen") == 0)
                                return &fieldGeneratorAutoListen;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strncmp(&(field_name[1]), "elet", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'e':
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'A':
                                        if (strcmp(&(field_name[7]), "ll") == 0)
                                            return &fieldGeneratorDeleteAll;
                                        break;
                                    case 'F':
                                        if (strcmp(&(field_name[7]), "romBack") == 0)
                                            return &fieldGeneratorDeleteFromBack;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[7]), "ype") == 0)
                                            return &fieldGeneratorDeleteType;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'i':
                                if (strcmp(&(field_name[6]), "onStartIndices") == 0)
                                    return &fieldGeneratorDeletionStartIndices;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'E':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'd':
                            if (strcmp(&(field_name[2]), "itBodyState") == 0)
                                return &fieldGeneratorEditBodyState;
                            break;
                        case 'm':
                            if (strcmp(&(field_name[2]), "ptyBodyOK") == 0)
                                return &fieldGeneratorEmptyBodyOK;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "rstTimeAddingToBody") == 0)
                                return &fieldGeneratorFirstTimeAddingToBody;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "cusHint") == 0)
                                return &fieldGeneratorFocusHint;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "nsert", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "ll") == 0)
                                    return &fieldGeneratorInsertAll;
                                break;
                            case 'B':
                                if (strcmp(&(field_name[7]), "efore") == 0)
                                    return &fieldGeneratorInsertBefore;
                                break;
                            case 'i':
                                if (strncmp(&(field_name[7]), "on", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'S':
                                            if (strcmp(&(field_name[10]), "tartIndices") == 0)
                                                return &fieldGeneratorInsertionStartIndices;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[10]), "ords") == 0)
                                                return &fieldGeneratorInsertionWords;
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
                case 'L':
                    if (strcmp(&(field_name[1]), "astEditedTextFieldType") == 0)
                        return &fieldGeneratorLastEditedTextFieldType;
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strncmp(&(field_name[2]), "w", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'B':
                                        if (strcmp(&(field_name[4]), "ody") == 0)
                                            return &fieldGeneratorNewBody;
                                        break;
                                    case 'R':
                                        if (strncmp(&(field_name[4]), "ecipients", 9) == 0)
                                          {
                                            switch ((unsigned char)(field_name[13]))
                                              {
                                                case 'A':
                                                    if (strcmp(&(field_name[14]), "lreadyInSMS") == 0)
                                                        return &fieldGeneratorNewRecipientsAlreadyInSMS;
                                                    break;
                                                case 'I':
                                                    if (strcmp(&(field_name[14]), "nfo") == 0)
                                                        return &fieldGeneratorNewRecipientsInfo;
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(field_name[14]), "otInSMS") == 0)
                                                        return &fieldGeneratorNewRecipientsNotInSMS;
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
                        case 'o':
                            if (strncmp(&(field_name[2]), "t", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'U':
                                        if (strncmp(&(field_name[4]), "nderstood", 9) == 0)
                                          {
                                            switch ((unsigned char)(field_name[13]))
                                              {
                                                case 'T':
                                                    if (strcmp(&(field_name[14]), "ype") == 0)
                                                        return &fieldGeneratorNotUnderstoodType;
                                                    break;
                                                case 'U':
                                                    if (strcmp(&(field_name[14]), "sedWordTo") == 0)
                                                        return &fieldGeneratorNotUnderstoodUsedWordTo;
                                                    break;
                                                case 'W':
                                                    if (strncmp(&(field_name[14]), "ords", 4) == 0)
                                                      {
                                                        switch ((unsigned char)(field_name[18]))
                                                          {
                                                            case 0:
                                                                return &fieldGeneratorNotUnderstoodWords;
                                                            case 'F':
                                                                if (strcmp(&(field_name[19]), "ound") == 0)
                                                                    return &fieldGeneratorNotUnderstoodWordsFound;
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
                                    case 'h':
                                        if (strcmp(&(field_name[4]), "ingToDelete") == 0)
                                            return &fieldGeneratorNothingToDelete;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "m", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[4]), "eleted") == 0)
                                            return &fieldGeneratorNumDeleted;
                                        break;
                                    case 'T':
                                        if (strcmp(&(field_name[4]), "oDelete") == 0)
                                            return &fieldGeneratorNumToDelete;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'p':
                            if (strncmp(&(field_name[2]), "enEndedEditRequest", 18) == 0)
                              {
                                switch ((unsigned char)(field_name[20]))
                                  {
                                    case 0:
                                        return &fieldGeneratorOpenEndedEditRequest;
                                    case 'A':
                                        if (strcmp(&(field_name[21]), "ction") == 0)
                                            return &fieldGeneratorOpenEndedEditRequestAction;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strcmp(&(field_name[2]), "erwroteBody") == 0)
                                return &fieldGeneratorOverwroteBody;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "e", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strncmp(&(field_name[3]), "d", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[4]))
                                      {
                                        case 'B':
                                            if (strcmp(&(field_name[5]), "ody") == 0)
                                                return &fieldGeneratorReadBody;
                                            break;
                                        case 'R':
                                            if (strcmp(&(field_name[5]), "ecipients") == 0)
                                                return &fieldGeneratorReadRecipients;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'c':
                                if (strncmp(&(field_name[3]), "ipients", 7) == 0)
                                  {
                                    switch ((unsigned char)(field_name[10]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[11]), "dded") == 0)
                                                return &fieldGeneratorRecipientsAdded;
                                            break;
                                        case 'C':
                                            if (strncmp(&(field_name[11]), "ouldNot", 7) == 0)
                                              {
                                                switch ((unsigned char)(field_name[18]))
                                                  {
                                                    case 'A':
                                                        if (strcmp(&(field_name[19]), "dd") == 0)
                                                            return &fieldGeneratorRecipientsCouldNotAdd;
                                                        break;
                                                    case 'R':
                                                        if (strcmp(&(field_name[19]), "emove") == 0)
                                                            return &fieldGeneratorRecipientsCouldNotRemove;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                              }
                                            break;
                                        case 'R':
                                            if (strcmp(&(field_name[11]), "emoved") == 0)
                                                return &fieldGeneratorRecipientsRemoved;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'm':
                                if (strcmp(&(field_name[3]), "ovedAllRecipients") == 0)
                                    return &fieldGeneratorRemovedAllRecipients;
                                break;
                            case 'p':
                                if (strncmp(&(field_name[3]), "lace", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 'A':
                                            if (strcmp(&(field_name[8]), "ll") == 0)
                                                return &fieldGeneratorReplaceAll;
                                            break;
                                        case 'm':
                                            if (strncmp(&(field_name[8]), "ent", 3) == 0)
                                              {
                                                switch ((unsigned char)(field_name[11]))
                                                  {
                                                    case 'S':
                                                        if (strcmp(&(field_name[12]), "tartIndices") == 0)
                                                            return &fieldGeneratorReplacementStartIndices;
                                                        break;
                                                    case 'W':
                                                        if (strcmp(&(field_name[12]), "ords") == 0)
                                                            return &fieldGeneratorReplacementWords;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'M':
                            if (strncmp(&(field_name[2]), "S", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 0:
                                        return &fieldGeneratorSMS;
                                    case 'A':
                                        if (strcmp(&(field_name[4]), "lreadyHadRecipients") == 0)
                                            return &fieldGeneratorSMSAlreadyHadRecipients;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'e':
                            if (strcmp(&(field_name[2]), "ndSMSNow") == 0)
                                return &fieldGeneratorSendSMSNow;
                            break;
                        case 'p':
                            if (strncmp(&(field_name[2]), "oken", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[7]), "rrorMessage") == 0)
                                            return &fieldGeneratorSpokenErrorMessage;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[7]), "essageFromPreviousTransaction") == 0)
                                            return &fieldGeneratorSpokenMessageFromPreviousTransaction;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 't':
                            if (strcmp(&(field_name[2]), "ate") == 0)
                                return &fieldGeneratorState;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'W':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strncmp(&(field_name[2]), "rdsTo", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'D':
                                        if (strcmp(&(field_name[8]), "elete") == 0)
                                            return &fieldGeneratorWordsToDelete;
                                        break;
                                    case 'M':
                                        if (strcmp(&(field_name[8]), "atchForInsertion") == 0)
                                            return &fieldGeneratorWordsToMatchForInsertion;
                                        break;
                                    case 'R':
                                        if (strcmp(&(field_name[8]), "eplace") == 0)
                                            return &fieldGeneratorWordsToReplace;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "ittenErrorMessage") == 0)
                                return &fieldGeneratorWrittenErrorMessage;
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
        Generator(bool ignore_extras = false) : fieldGeneratorSMS("field \"SMS\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorEmptyBodyOK("field \"EmptyBodyOK\" of the ComposeSMSCommandNativeData class"), fieldGeneratorFocusHint("field \"FocusHint\" of the ComposeSMSCommandNativeData class"), fieldGeneratorSendSMSNow("field \"SendSMSNow\" of the ComposeSMSCommandNativeData class"), fieldGeneratorLastEditedTextFieldType("field \"LastEditedTextFieldType\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorSMSAlreadyHadRecipients("field \"SMSAlreadyHadRecipients\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNewBody("field \"NewBody\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNewRecipientsInfo("field \"NewRecipientsInfo\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorSpokenMessageFromPreviousTransaction("field \"SpokenMessageFromPreviousTransaction\" of the ComposeSMSCommandNativeData class"), fieldGeneratorAutoListen("field \"AutoListen\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNotUnderstoodUsedWordTo("field \"NotUnderstoodUsedWordTo\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNotUnderstoodWords("field \"NotUnderstoodWords\" of the ComposeSMSCommandNativeData class"), fieldGeneratorDeleteType("field \"DeleteType\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNumToDelete("field \"NumToDelete\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNumDeleted("field \"NumDeleted\" of the ComposeSMSCommandNativeData class"), fieldGeneratorDeleteFromBack("field \"DeleteFromBack\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNothingToDelete("field \"NothingToDelete\" of the ComposeSMSCommandNativeData class"), fieldGeneratorState("field \"State\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorEditBodyState("field \"EditBodyState\" of the ComposeSMSCommandNativeData class"), fieldGeneratorFirstTimeAddingToBody("field \"FirstTimeAddingToBody\" of the ComposeSMSCommandNativeData class"), fieldGeneratorRecipientsAdded("field \"RecipientsAdded\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorRecipientsRemoved("field \"RecipientsRemoved\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorRecipientsCouldNotAdd("field \"RecipientsCouldNotAdd\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorRecipientsCouldNotRemove("field \"RecipientsCouldNotRemove\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorOpenEndedEditRequest("field \"OpenEndedEditRequest\" of the ComposeSMSCommandNativeData class"), fieldGeneratorOpenEndedEditRequestAction("field \"OpenEndedEditRequestAction\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorRemovedAllRecipients("field \"RemovedAllRecipients\" of the ComposeSMSCommandNativeData class"), fieldGeneratorAlreadyHadRecipients("field \"AlreadyHadRecipients\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNotUnderstoodType("field \"NotUnderstoodType\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNotUnderstoodWordsFound("field \"NotUnderstoodWordsFound\" of the ComposeSMSCommandNativeData class"), fieldGeneratorReadRecipients("field \"ReadRecipients\" of the ComposeSMSCommandNativeData class"), fieldGeneratorReadBody("field \"ReadBody\" of the ComposeSMSCommandNativeData class"), fieldGeneratorWordsToReplace("field \"WordsToReplace\" of the ComposeSMSCommandNativeData class"), fieldGeneratorReplacementWords("field \"ReplacementWords\" of the ComposeSMSCommandNativeData class"), fieldGeneratorReplaceAll("field \"ReplaceAll\" of the ComposeSMSCommandNativeData class"), fieldGeneratorReplacementStartIndices("field \"ReplacementStartIndices\" of the ComposeSMSCommandNativeData class"), fieldGeneratorWordsToMatchForInsertion("field \"WordsToMatchForInsertion\" of the ComposeSMSCommandNativeData class"), fieldGeneratorInsertionWords("field \"InsertionWords\" of the ComposeSMSCommandNativeData class"), fieldGeneratorInsertBefore("field \"InsertBefore\" of the ComposeSMSCommandNativeData class"), fieldGeneratorInsertAll("field \"InsertAll\" of the ComposeSMSCommandNativeData class"), fieldGeneratorInsertionStartIndices("field \"InsertionStartIndices\" of the ComposeSMSCommandNativeData class"), fieldGeneratorWordsToDelete("field \"WordsToDelete\" of the ComposeSMSCommandNativeData class"), fieldGeneratorDeleteAll("field \"DeleteAll\" of the ComposeSMSCommandNativeData class"), fieldGeneratorDeletionStartIndices("field \"DeletionStartIndices\" of the ComposeSMSCommandNativeData class"), fieldGeneratorSpokenErrorMessage("field \"SpokenErrorMessage\" of the ComposeSMSCommandNativeData class"), fieldGeneratorWrittenErrorMessage("field \"WrittenErrorMessage\" of the ComposeSMSCommandNativeData class"), fieldGeneratorNewRecipientsAlreadyInSMS("field \"NewRecipientsAlreadyInSMS\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorNewRecipientsNotInSMS("field \"NewRecipientsNotInSMS\" of the ComposeSMSCommandNativeData class", ignore_extras), fieldGeneratorOverwroteBody("field \"OverwroteBody\" of the ComposeSMSCommandNativeData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ComposeSMSCommandNativeData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSMS.reset();
            fieldGeneratorEmptyBodyOK.reset();
            fieldGeneratorFocusHint.reset();
            fieldGeneratorSendSMSNow.reset();
            fieldGeneratorLastEditedTextFieldType.reset();
            fieldGeneratorSMSAlreadyHadRecipients.reset();
            fieldGeneratorNewBody.reset();
            fieldGeneratorNewRecipientsInfo.reset();
            fieldGeneratorSpokenMessageFromPreviousTransaction.reset();
            fieldGeneratorAutoListen.reset();
            fieldGeneratorNotUnderstoodUsedWordTo.reset();
            fieldGeneratorNotUnderstoodWords.reset();
            fieldGeneratorDeleteType.reset();
            fieldGeneratorNumToDelete.reset();
            fieldGeneratorNumDeleted.reset();
            fieldGeneratorDeleteFromBack.reset();
            fieldGeneratorNothingToDelete.reset();
            fieldGeneratorState.reset();
            fieldGeneratorEditBodyState.reset();
            fieldGeneratorFirstTimeAddingToBody.reset();
            fieldGeneratorRecipientsAdded.reset();
            fieldGeneratorRecipientsRemoved.reset();
            fieldGeneratorRecipientsCouldNotAdd.reset();
            fieldGeneratorRecipientsCouldNotRemove.reset();
            fieldGeneratorOpenEndedEditRequest.reset();
            fieldGeneratorOpenEndedEditRequestAction.reset();
            fieldGeneratorRemovedAllRecipients.reset();
            fieldGeneratorAlreadyHadRecipients.reset();
            fieldGeneratorNotUnderstoodType.reset();
            fieldGeneratorNotUnderstoodWordsFound.reset();
            fieldGeneratorReadRecipients.reset();
            fieldGeneratorReadBody.reset();
            fieldGeneratorWordsToReplace.reset();
            fieldGeneratorReplacementWords.reset();
            fieldGeneratorReplaceAll.reset();
            fieldGeneratorReplacementStartIndices.reset();
            fieldGeneratorWordsToMatchForInsertion.reset();
            fieldGeneratorInsertionWords.reset();
            fieldGeneratorInsertBefore.reset();
            fieldGeneratorInsertAll.reset();
            fieldGeneratorInsertionStartIndices.reset();
            fieldGeneratorWordsToDelete.reset();
            fieldGeneratorDeleteAll.reset();
            fieldGeneratorDeletionStartIndices.reset();
            fieldGeneratorSpokenErrorMessage.reset();
            fieldGeneratorWrittenErrorMessage.reset();
            fieldGeneratorNewRecipientsAlreadyInSMS.reset();
            fieldGeneratorNewRecipientsNotInSMS.reset();
            fieldGeneratorOverwroteBody.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COMPOSESMSCOMMANDNATIVEDATAJSON_H */
