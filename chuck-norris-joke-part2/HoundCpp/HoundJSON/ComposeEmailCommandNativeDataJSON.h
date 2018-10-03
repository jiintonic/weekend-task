/* file "ComposeEmailCommandNativeDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COMPOSEEMAILCOMMANDNATIVEDATAJSON_H
#define COMPOSEEMAILCOMMANDNATIVEDATAJSON_H

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
#include "EmailJSON.h"
#include "EmailFieldTypeJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailFieldTypeJSON.h"
#include "EmailStateJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailContactResultJSON.h"
#include "EmailContactResultFieldTypeJSON.h"
#include "EmailContactResultActionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ComposeEmailCommandNativeDataJSON : public ReferenceCounted
  {
  public:
    enum TypeFocusHint
      {
        FocusHint_To,
        FocusHint_Cc,
        FocusHint_Bcc,
        FocusHint_Subject,
        FocusHint_Body
      };

    static TypeFocusHint  stringToFocusHint(const char *chars);
    static const char * stringFromFocusHint(TypeFocusHint the_enum);
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
        NotUnderstoodType_EMAIL_ADDRESS,
        NotUnderstoodType_YES_NO,
        NotUnderstoodType_UNKNOWN
      };

    static TypeNotUnderstoodType  stringToNotUnderstoodType(const char *chars);
    static const char * stringFromNotUnderstoodType(TypeNotUnderstoodType the_enum);

  private:
    bool flagHasEmail;
    EmailJSON * storeEmail;
    bool flagHasEmptySubjectOK;
    bool storeEmptySubjectOK;
    bool flagHasEmptyBodyOK;
    bool storeEmptyBodyOK;
    bool flagHasFocusHint;
    TypeFocusHint storeFocusHint;
    bool flagHasSendEmailNow;
    bool storeSendEmailNow;
    bool flagHasLastEditedTextFieldType;
    EmailFieldTypeJSON * storeLastEditedTextFieldType;
    bool flagHasNewRecipientsAlreadyInEmail;
    std::vector< EmailContactResultJSON * > storeNewRecipientsAlreadyInEmail;
    bool flagHasNewRecipientsNotInEmail;
    std::vector< EmailContactResultJSON * > storeNewRecipientsNotInEmail;
    bool flagHasEmailAlreadyHadRecipients;
    bool storeEmailAlreadyHadRecipients;
    bool flagHasAlreadyHadRecipients;
    bool storeAlreadyHadRecipients;
    bool flagHasOverwroteSubject;
    bool storeOverwroteSubject;
    bool flagHasOverwroteBody;
    bool storeOverwroteBody;
    bool flagHasNewSubject;
    std::string storeNewSubject;
    bool flagHasNewBody;
    std::string storeNewBody;
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
    bool flagHasDeleteFieldType;
    EmailFieldTypeJSON * storeDeleteFieldType;
    bool flagHasState;
    EmailStateJSON * storeState;
    bool flagHasEditBodyState;
    TypeEditBodyState storeEditBodyState;
    bool flagHasRecipientsAdded;
    std::vector< EmailContactResultJSON * > storeRecipientsAdded;
    bool flagHasRecipientsRemoved;
    std::vector< EmailContactResultJSON * > storeRecipientsRemoved;
    bool flagHasRecipientsCouldNotAdd;
    std::vector< EmailContactResultJSON * > storeRecipientsCouldNotAdd;
    bool flagHasRecipientsCouldNotRemove;
    std::vector< EmailContactResultJSON * > storeRecipientsCouldNotRemove;
    bool flagHasOpenEndedEditRequestFieldType;
    EmailContactResultFieldTypeJSON * storeOpenEndedEditRequestFieldType;
    bool flagHasOpenEndedEditRequestAction;
    EmailContactResultActionJSON * storeOpenEndedEditRequestAction;
    bool flagHasRemovedAllRecipients;
    bool storeRemovedAllRecipients;
    bool flagHasNotUnderstoodType;
    TypeNotUnderstoodType storeNotUnderstoodType;
    bool flagHasNotUnderstoodWordsFound;
    std::string storeNotUnderstoodWordsFound;
    bool flagHasReadRecipients;
    bool storeReadRecipients;
    bool flagHasReadSubject;
    bool storeReadSubject;
    bool flagHasReadBody;
    bool storeReadBody;

    ComposeEmailCommandNativeDataJSON(const ComposeEmailCommandNativeDataJSON &);
    ComposeEmailCommandNativeDataJSON & operator=(const ComposeEmailCommandNativeDataJSON &other);

    void  fromJSONEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmptySubjectOK(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFocusHint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSendEmailNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewRecipientsAlreadyInEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewRecipientsNotInEmail(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEmailAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOverwroteSubject(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOverwroteBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewSubject(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNewBody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAutoListen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodUsedWordTo(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumToDelete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNumDeleted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteFromBack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNothingToDelete(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeleteFieldType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEditBodyState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsAdded(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsRemoved(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsCouldNotAdd(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecipientsCouldNotRemove(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenEndedEditRequestFieldType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpenEndedEditRequestAction(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRemovedAllRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNotUnderstoodWordsFound(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadRecipients(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadSubject(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReadBody(JSONValue *json_value, bool ignore_extras = false);


  public:
    ComposeEmailCommandNativeDataJSON(void);
    virtual ~ComposeEmailCommandNativeDataJSON(void);
    bool  hasEmail(void) const;
    EmailJSON *  getEmail(void);
    const EmailJSON *  getEmail(void) const;
    bool  hasEmptySubjectOK(void) const;
    bool  getEmptySubjectOK(void);
    const bool  getEmptySubjectOK(void) const;
    bool  hasEmptyBodyOK(void) const;
    bool  getEmptyBodyOK(void);
    const bool  getEmptyBodyOK(void) const;
    bool  hasFocusHint(void) const;
    TypeFocusHint  getFocusHint(void);
    const TypeFocusHint  getFocusHint(void) const;
    const char * getFocusHintAsChars(void) const;
    std::string  getFocusHintAsString(void) const;
    bool  hasSendEmailNow(void) const;
    bool  getSendEmailNow(void);
    const bool  getSendEmailNow(void) const;
    bool  hasLastEditedTextFieldType(void) const;
    EmailFieldTypeJSON *  getLastEditedTextFieldType(void);
    const EmailFieldTypeJSON *  getLastEditedTextFieldType(void) const;
    EmailFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void);
    const EmailFieldTypeJSON::TypeValue  getLastEditedTextFieldTypeValue(void) const;
    const char * getLastEditedTextFieldTypeAsChars(void) const;
    std::string  getLastEditedTextFieldTypeAsString(void) const;
    bool  hasNewRecipientsAlreadyInEmail(void) const;
    size_t  countOfNewRecipientsAlreadyInEmail(void) const;
    EmailContactResultJSON *  elementOfNewRecipientsAlreadyInEmail(size_t element_num);
    const EmailContactResultJSON *  elementOfNewRecipientsAlreadyInEmail(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getNewRecipientsAlreadyInEmail(void);
    const std::vector< EmailContactResultJSON * >  getNewRecipientsAlreadyInEmail(void) const;
    bool  hasNewRecipientsNotInEmail(void) const;
    size_t  countOfNewRecipientsNotInEmail(void) const;
    EmailContactResultJSON *  elementOfNewRecipientsNotInEmail(size_t element_num);
    const EmailContactResultJSON *  elementOfNewRecipientsNotInEmail(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getNewRecipientsNotInEmail(void);
    const std::vector< EmailContactResultJSON * >  getNewRecipientsNotInEmail(void) const;
    bool  hasEmailAlreadyHadRecipients(void) const;
    bool  getEmailAlreadyHadRecipients(void);
    const bool  getEmailAlreadyHadRecipients(void) const;
    bool  hasAlreadyHadRecipients(void) const;
    bool  getAlreadyHadRecipients(void);
    const bool  getAlreadyHadRecipients(void) const;
    bool  hasOverwroteSubject(void) const;
    bool  getOverwroteSubject(void);
    const bool  getOverwroteSubject(void) const;
    bool  hasOverwroteBody(void) const;
    bool  getOverwroteBody(void);
    const bool  getOverwroteBody(void) const;
    bool  hasNewSubject(void) const;
    std::string  getNewSubject(void);
    const std::string  getNewSubject(void) const;
    bool  hasNewBody(void) const;
    std::string  getNewBody(void);
    const std::string  getNewBody(void) const;
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
    bool  hasDeleteFieldType(void) const;
    EmailFieldTypeJSON *  getDeleteFieldType(void);
    const EmailFieldTypeJSON *  getDeleteFieldType(void) const;
    EmailFieldTypeJSON::TypeValue  getDeleteFieldTypeValue(void);
    const EmailFieldTypeJSON::TypeValue  getDeleteFieldTypeValue(void) const;
    const char * getDeleteFieldTypeAsChars(void) const;
    std::string  getDeleteFieldTypeAsString(void) const;
    bool  hasState(void) const;
    EmailStateJSON *  getState(void);
    const EmailStateJSON *  getState(void) const;
    EmailStateJSON::TypeValue  getStateValue(void);
    const EmailStateJSON::TypeValue  getStateValue(void) const;
    const char * getStateAsChars(void) const;
    std::string  getStateAsString(void) const;
    bool  hasEditBodyState(void) const;
    TypeEditBodyState  getEditBodyState(void);
    const TypeEditBodyState  getEditBodyState(void) const;
    const char * getEditBodyStateAsChars(void) const;
    std::string  getEditBodyStateAsString(void) const;
    bool  hasRecipientsAdded(void) const;
    size_t  countOfRecipientsAdded(void) const;
    EmailContactResultJSON *  elementOfRecipientsAdded(size_t element_num);
    const EmailContactResultJSON *  elementOfRecipientsAdded(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getRecipientsAdded(void);
    const std::vector< EmailContactResultJSON * >  getRecipientsAdded(void) const;
    bool  hasRecipientsRemoved(void) const;
    size_t  countOfRecipientsRemoved(void) const;
    EmailContactResultJSON *  elementOfRecipientsRemoved(size_t element_num);
    const EmailContactResultJSON *  elementOfRecipientsRemoved(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getRecipientsRemoved(void);
    const std::vector< EmailContactResultJSON * >  getRecipientsRemoved(void) const;
    bool  hasRecipientsCouldNotAdd(void) const;
    size_t  countOfRecipientsCouldNotAdd(void) const;
    EmailContactResultJSON *  elementOfRecipientsCouldNotAdd(size_t element_num);
    const EmailContactResultJSON *  elementOfRecipientsCouldNotAdd(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getRecipientsCouldNotAdd(void);
    const std::vector< EmailContactResultJSON * >  getRecipientsCouldNotAdd(void) const;
    bool  hasRecipientsCouldNotRemove(void) const;
    size_t  countOfRecipientsCouldNotRemove(void) const;
    EmailContactResultJSON *  elementOfRecipientsCouldNotRemove(size_t element_num);
    const EmailContactResultJSON *  elementOfRecipientsCouldNotRemove(size_t element_num) const;
    std::vector< EmailContactResultJSON * >  getRecipientsCouldNotRemove(void);
    const std::vector< EmailContactResultJSON * >  getRecipientsCouldNotRemove(void) const;
    bool  hasOpenEndedEditRequestFieldType(void) const;
    EmailContactResultFieldTypeJSON *  getOpenEndedEditRequestFieldType(void);
    const EmailContactResultFieldTypeJSON *  getOpenEndedEditRequestFieldType(void) const;
    EmailContactResultFieldTypeJSON::TypeValue  getOpenEndedEditRequestFieldTypeValue(void);
    const EmailContactResultFieldTypeJSON::TypeValue  getOpenEndedEditRequestFieldTypeValue(void) const;
    const char * getOpenEndedEditRequestFieldTypeAsChars(void) const;
    std::string  getOpenEndedEditRequestFieldTypeAsString(void) const;
    bool  hasOpenEndedEditRequestAction(void) const;
    EmailContactResultActionJSON *  getOpenEndedEditRequestAction(void);
    const EmailContactResultActionJSON *  getOpenEndedEditRequestAction(void) const;
    EmailContactResultActionJSON::TypeValue  getOpenEndedEditRequestActionValue(void);
    const EmailContactResultActionJSON::TypeValue  getOpenEndedEditRequestActionValue(void) const;
    const char * getOpenEndedEditRequestActionAsChars(void) const;
    std::string  getOpenEndedEditRequestActionAsString(void) const;
    bool  hasRemovedAllRecipients(void) const;
    bool  getRemovedAllRecipients(void);
    const bool  getRemovedAllRecipients(void) const;
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
    bool  hasReadSubject(void) const;
    bool  getReadSubject(void);
    const bool  getReadSubject(void) const;
    bool  hasReadBody(void) const;
    bool  getReadBody(void);
    const bool  getReadBody(void) const;


    void setEmail(EmailJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasEmail)
          {
            storeEmail->remove_reference();
          }
        flagHasEmail = true;
        storeEmail = new_value;
      }
    void unsetEmail(void)
      {
        if (flagHasEmail)
          {
            storeEmail->remove_reference();
          }
        flagHasEmail = false;
      }
    void setEmptySubjectOK(bool new_value)
      {
        flagHasEmptySubjectOK = true;
        storeEmptySubjectOK = new_value;
      }
    void unsetEmptySubjectOK(void)
      {
        flagHasEmptySubjectOK = false;
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
    void setSendEmailNow(bool new_value)
      {
        flagHasSendEmailNow = true;
        storeSendEmailNow = new_value;
      }
    void unsetSendEmailNow(void)
      {
        flagHasSendEmailNow = false;
      }
    void setLastEditedTextFieldType(EmailFieldTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasLastEditedTextFieldType)
          {
            storeLastEditedTextFieldType->remove_reference();
          }
        flagHasLastEditedTextFieldType = true;
        storeLastEditedTextFieldType = new_value;
      }
    void setLastEditedTextFieldType(EmailFieldTypeJSON::TypeValue new_value)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(new_value));
      }
    void setLastEditedTextFieldType(const char *chars)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(chars));
      }
    void setLastEditedTextFieldType(std::string the_string)
      {
        setLastEditedTextFieldType(new EmailFieldTypeJSON(the_string));
      }
    void unsetLastEditedTextFieldType(void)
      {
        if (flagHasLastEditedTextFieldType)
          {
            storeLastEditedTextFieldType->remove_reference();
          }
        flagHasLastEditedTextFieldType = false;
      }
    void initNewRecipientsAlreadyInEmail(void)
      {
        if (flagHasNewRecipientsAlreadyInEmail)
          {
            for (size_t num7 = 0; num7 < storeNewRecipientsAlreadyInEmail.size(); ++num7)
              {
                storeNewRecipientsAlreadyInEmail[num7]->remove_reference();
              }
          }
        flagHasNewRecipientsAlreadyInEmail = true;
        storeNewRecipientsAlreadyInEmail.clear();
      }
    void appendNewRecipientsAlreadyInEmail(EmailContactResultJSON * to_append)
      {
        if (!flagHasNewRecipientsAlreadyInEmail)
          {
            flagHasNewRecipientsAlreadyInEmail = true;
            storeNewRecipientsAlreadyInEmail.clear();
          }
        assert(flagHasNewRecipientsAlreadyInEmail);
        to_append->add_reference();
        storeNewRecipientsAlreadyInEmail.push_back(to_append);
      }
    void unsetNewRecipientsAlreadyInEmail(void)
      {
        if (flagHasNewRecipientsAlreadyInEmail)
          {
            for (size_t num8 = 0; num8 < storeNewRecipientsAlreadyInEmail.size(); ++num8)
              {
                storeNewRecipientsAlreadyInEmail[num8]->remove_reference();
              }
          }
        flagHasNewRecipientsAlreadyInEmail = false;
        storeNewRecipientsAlreadyInEmail.clear();
      }
    void initNewRecipientsNotInEmail(void)
      {
        if (flagHasNewRecipientsNotInEmail)
          {
            for (size_t num9 = 0; num9 < storeNewRecipientsNotInEmail.size(); ++num9)
              {
                storeNewRecipientsNotInEmail[num9]->remove_reference();
              }
          }
        flagHasNewRecipientsNotInEmail = true;
        storeNewRecipientsNotInEmail.clear();
      }
    void appendNewRecipientsNotInEmail(EmailContactResultJSON * to_append)
      {
        if (!flagHasNewRecipientsNotInEmail)
          {
            flagHasNewRecipientsNotInEmail = true;
            storeNewRecipientsNotInEmail.clear();
          }
        assert(flagHasNewRecipientsNotInEmail);
        to_append->add_reference();
        storeNewRecipientsNotInEmail.push_back(to_append);
      }
    void unsetNewRecipientsNotInEmail(void)
      {
        if (flagHasNewRecipientsNotInEmail)
          {
            for (size_t num10 = 0; num10 < storeNewRecipientsNotInEmail.size(); ++num10)
              {
                storeNewRecipientsNotInEmail[num10]->remove_reference();
              }
          }
        flagHasNewRecipientsNotInEmail = false;
        storeNewRecipientsNotInEmail.clear();
      }
    void setEmailAlreadyHadRecipients(bool new_value)
      {
        flagHasEmailAlreadyHadRecipients = true;
        storeEmailAlreadyHadRecipients = new_value;
      }
    void unsetEmailAlreadyHadRecipients(void)
      {
        flagHasEmailAlreadyHadRecipients = false;
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
    void setOverwroteSubject(bool new_value)
      {
        flagHasOverwroteSubject = true;
        storeOverwroteSubject = new_value;
      }
    void unsetOverwroteSubject(void)
      {
        flagHasOverwroteSubject = false;
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
    void setNewSubject(std::string new_value)
      {
        flagHasNewSubject = true;
        storeNewSubject = new_value;
      }
    void unsetNewSubject(void)
      {
        flagHasNewSubject = false;
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
            throw("The value for field NumToDelete of ComposeEmailCommandNativeDataJSON is less than the lower bound (0) for that field.");
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
            throw("The value for field NumDeleted of ComposeEmailCommandNativeDataJSON is less than the lower bound (0) for that field.");
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
    void setDeleteFieldType(EmailFieldTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDeleteFieldType)
          {
            storeDeleteFieldType->remove_reference();
          }
        flagHasDeleteFieldType = true;
        storeDeleteFieldType = new_value;
      }
    void setDeleteFieldType(EmailFieldTypeJSON::TypeValue new_value)
      {
        setDeleteFieldType(new EmailFieldTypeJSON(new_value));
      }
    void setDeleteFieldType(const char *chars)
      {
        setDeleteFieldType(new EmailFieldTypeJSON(chars));
      }
    void setDeleteFieldType(std::string the_string)
      {
        setDeleteFieldType(new EmailFieldTypeJSON(the_string));
      }
    void unsetDeleteFieldType(void)
      {
        if (flagHasDeleteFieldType)
          {
            storeDeleteFieldType->remove_reference();
          }
        flagHasDeleteFieldType = false;
      }
    void setState(EmailStateJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasState)
          {
            storeState->remove_reference();
          }
        flagHasState = true;
        storeState = new_value;
      }
    void setState(EmailStateJSON::TypeValue new_value)
      {
        setState(new EmailStateJSON(new_value));
      }
    void setState(const char *chars)
      {
        setState(new EmailStateJSON(chars));
      }
    void setState(std::string the_string)
      {
        setState(new EmailStateJSON(the_string));
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
    void initRecipientsAdded(void)
      {
        if (flagHasRecipientsAdded)
          {
            for (size_t num11 = 0; num11 < storeRecipientsAdded.size(); ++num11)
              {
                storeRecipientsAdded[num11]->remove_reference();
              }
          }
        flagHasRecipientsAdded = true;
        storeRecipientsAdded.clear();
      }
    void appendRecipientsAdded(EmailContactResultJSON * to_append)
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
            for (size_t num12 = 0; num12 < storeRecipientsAdded.size(); ++num12)
              {
                storeRecipientsAdded[num12]->remove_reference();
              }
          }
        flagHasRecipientsAdded = false;
        storeRecipientsAdded.clear();
      }
    void initRecipientsRemoved(void)
      {
        if (flagHasRecipientsRemoved)
          {
            for (size_t num13 = 0; num13 < storeRecipientsRemoved.size(); ++num13)
              {
                storeRecipientsRemoved[num13]->remove_reference();
              }
          }
        flagHasRecipientsRemoved = true;
        storeRecipientsRemoved.clear();
      }
    void appendRecipientsRemoved(EmailContactResultJSON * to_append)
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
            for (size_t num14 = 0; num14 < storeRecipientsRemoved.size(); ++num14)
              {
                storeRecipientsRemoved[num14]->remove_reference();
              }
          }
        flagHasRecipientsRemoved = false;
        storeRecipientsRemoved.clear();
      }
    void initRecipientsCouldNotAdd(void)
      {
        if (flagHasRecipientsCouldNotAdd)
          {
            for (size_t num15 = 0; num15 < storeRecipientsCouldNotAdd.size(); ++num15)
              {
                storeRecipientsCouldNotAdd[num15]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotAdd = true;
        storeRecipientsCouldNotAdd.clear();
      }
    void appendRecipientsCouldNotAdd(EmailContactResultJSON * to_append)
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
            for (size_t num16 = 0; num16 < storeRecipientsCouldNotAdd.size(); ++num16)
              {
                storeRecipientsCouldNotAdd[num16]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotAdd = false;
        storeRecipientsCouldNotAdd.clear();
      }
    void initRecipientsCouldNotRemove(void)
      {
        if (flagHasRecipientsCouldNotRemove)
          {
            for (size_t num17 = 0; num17 < storeRecipientsCouldNotRemove.size(); ++num17)
              {
                storeRecipientsCouldNotRemove[num17]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotRemove = true;
        storeRecipientsCouldNotRemove.clear();
      }
    void appendRecipientsCouldNotRemove(EmailContactResultJSON * to_append)
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
            for (size_t num18 = 0; num18 < storeRecipientsCouldNotRemove.size(); ++num18)
              {
                storeRecipientsCouldNotRemove[num18]->remove_reference();
              }
          }
        flagHasRecipientsCouldNotRemove = false;
        storeRecipientsCouldNotRemove.clear();
      }
    void setOpenEndedEditRequestFieldType(EmailContactResultFieldTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpenEndedEditRequestFieldType)
          {
            storeOpenEndedEditRequestFieldType->remove_reference();
          }
        flagHasOpenEndedEditRequestFieldType = true;
        storeOpenEndedEditRequestFieldType = new_value;
      }
    void setOpenEndedEditRequestFieldType(EmailContactResultFieldTypeJSON::TypeValue new_value)
      {
        setOpenEndedEditRequestFieldType(new EmailContactResultFieldTypeJSON(new_value));
      }
    void setOpenEndedEditRequestFieldType(const char *chars)
      {
        setOpenEndedEditRequestFieldType(new EmailContactResultFieldTypeJSON(chars));
      }
    void setOpenEndedEditRequestFieldType(std::string the_string)
      {
        setOpenEndedEditRequestFieldType(new EmailContactResultFieldTypeJSON(the_string));
      }
    void unsetOpenEndedEditRequestFieldType(void)
      {
        if (flagHasOpenEndedEditRequestFieldType)
          {
            storeOpenEndedEditRequestFieldType->remove_reference();
          }
        flagHasOpenEndedEditRequestFieldType = false;
      }
    void setOpenEndedEditRequestAction(EmailContactResultActionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasOpenEndedEditRequestAction)
          {
            storeOpenEndedEditRequestAction->remove_reference();
          }
        flagHasOpenEndedEditRequestAction = true;
        storeOpenEndedEditRequestAction = new_value;
      }
    void setOpenEndedEditRequestAction(EmailContactResultActionJSON::TypeValue new_value)
      {
        setOpenEndedEditRequestAction(new EmailContactResultActionJSON(new_value));
      }
    void setOpenEndedEditRequestAction(const char *chars)
      {
        setOpenEndedEditRequestAction(new EmailContactResultActionJSON(chars));
      }
    void setOpenEndedEditRequestAction(std::string the_string)
      {
        setOpenEndedEditRequestAction(new EmailContactResultActionJSON(the_string));
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
    void setReadSubject(bool new_value)
      {
        flagHasReadSubject = true;
        storeReadSubject = new_value;
      }
    void unsetReadSubject(void)
      {
        flagHasReadSubject = false;
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


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasEmail);
        handler->start_pair("Email");
        storeEmail->write_as_json(handler);
        if (flagHasEmptySubjectOK)
          {
            handler->start_pair("EmptySubjectOK");
            handler->boolean_value(storeEmptySubjectOK);
          }
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
                case FocusHint_Cc:
                    handler->string_value("Cc");
                    break;
                case FocusHint_Bcc:
                    handler->string_value("Bcc");
                    break;
                case FocusHint_Subject:
                    handler->string_value("Subject");
                    break;
                case FocusHint_Body:
                    handler->string_value("Body");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasSendEmailNow)
          {
            handler->start_pair("SendEmailNow");
            handler->boolean_value(storeSendEmailNow);
          }
        if (flagHasLastEditedTextFieldType)
          {
            handler->start_pair("LastEditedTextFieldType");
            storeLastEditedTextFieldType->write_as_json(handler);
          }
        if (flagHasNewRecipientsAlreadyInEmail)
          {
            handler->start_pair("NewRecipientsAlreadyInEmail");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeNewRecipientsAlreadyInEmail.size(); ++num1)
              {
                storeNewRecipientsAlreadyInEmail[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasNewRecipientsNotInEmail)
          {
            handler->start_pair("NewRecipientsNotInEmail");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeNewRecipientsNotInEmail.size(); ++num2)
              {
                storeNewRecipientsNotInEmail[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasEmailAlreadyHadRecipients)
          {
            handler->start_pair("EmailAlreadyHadRecipients");
            handler->boolean_value(storeEmailAlreadyHadRecipients);
          }
        if (flagHasAlreadyHadRecipients)
          {
            handler->start_pair("AlreadyHadRecipients");
            handler->boolean_value(storeAlreadyHadRecipients);
          }
        if (flagHasOverwroteSubject)
          {
            handler->start_pair("OverwroteSubject");
            handler->boolean_value(storeOverwroteSubject);
          }
        if (flagHasOverwroteBody)
          {
            handler->start_pair("OverwroteBody");
            handler->boolean_value(storeOverwroteBody);
          }
        if (flagHasNewSubject)
          {
            handler->start_pair("NewSubject");
            handler->string_value(storeNewSubject);
          }
        if (flagHasNewBody)
          {
            handler->start_pair("NewBody");
            handler->string_value(storeNewBody);
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
        if (flagHasDeleteFieldType)
          {
            handler->start_pair("DeleteFieldType");
            storeDeleteFieldType->write_as_json(handler);
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
        if (flagHasRecipientsAdded)
          {
            handler->start_pair("RecipientsAdded");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeRecipientsAdded.size(); ++num3)
              {
                storeRecipientsAdded[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsRemoved)
          {
            handler->start_pair("RecipientsRemoved");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeRecipientsRemoved.size(); ++num4)
              {
                storeRecipientsRemoved[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsCouldNotAdd)
          {
            handler->start_pair("RecipientsCouldNotAdd");
            handler->start_array();
            for (size_t num5 = 0; num5 < storeRecipientsCouldNotAdd.size(); ++num5)
              {
                storeRecipientsCouldNotAdd[num5]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasRecipientsCouldNotRemove)
          {
            handler->start_pair("RecipientsCouldNotRemove");
            handler->start_array();
            for (size_t num6 = 0; num6 < storeRecipientsCouldNotRemove.size(); ++num6)
              {
                storeRecipientsCouldNotRemove[num6]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasOpenEndedEditRequestFieldType)
          {
            handler->start_pair("OpenEndedEditRequestFieldType");
            storeOpenEndedEditRequestFieldType->write_as_json(handler);
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
        if (flagHasNotUnderstoodType)
          {
            handler->start_pair("NotUnderstoodType");
            switch (storeNotUnderstoodType)
              {
                case NotUnderstoodType_EMAIL_ADDRESS:
                    handler->string_value("EMAIL_ADDRESS");
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
        if (flagHasReadSubject)
          {
            handler->start_pair("ReadSubject");
            handler->boolean_value(storeReadSubject);
          }
        if (flagHasReadBody)
          {
            handler->start_pair("ReadBody");
            handler->boolean_value(storeReadBody);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasEmail()))
          {
            return "When parsing the object for %what%, the \"Email\" field was missing.";
          }
        if (!(hasState()))
          {
            return "When parsing the object for %what%, the \"State\" field was missing.";
          }
        return NULL;
      }

    static ComposeEmailCommandNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ComposeEmailCommandNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ComposeEmailCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandNativeDataJSON>, ComposeEmailCommandNativeDataJSON *, bool> generator("Type ComposeEmailCommandNativeData", ignore_extras);
            parse_json_value(text, "Text for ComposeEmailCommandNativeDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ComposeEmailCommandNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ComposeEmailCommandNativeDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandNativeDataJSON>, ComposeEmailCommandNativeDataJSON *, bool> generator("Type ComposeEmailCommandNativeData", ignore_extras);
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
        JSONHoldingGenerator<EmailJSON::Generator, RCHandle<EmailJSON>, EmailJSON *, bool > fieldGeneratorEmail;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEmptySubjectOK;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSendEmailNow;
        JSONHoldingGenerator<EmailFieldTypeJSON::Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool > fieldGeneratorLastEditedTextFieldType;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorNewRecipientsAlreadyInEmail;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorNewRecipientsNotInEmail;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorEmailAlreadyHadRecipients;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAlreadyHadRecipients;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOverwroteSubject;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOverwroteBody;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewSubject;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorNewBody;
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
        JSONHoldingGenerator<EmailFieldTypeJSON::Generator, RCHandle<EmailFieldTypeJSON>, EmailFieldTypeJSON *, bool > fieldGeneratorDeleteFieldType;
        JSONHoldingGenerator<EmailStateJSON::Generator, RCHandle<EmailStateJSON>, EmailStateJSON *, bool > fieldGeneratorState;
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
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorRecipientsAdded;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorRecipientsRemoved;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorRecipientsCouldNotAdd;
        JSONHoldingArrayGenerator<EmailContactResultJSON::Generator, RCHandle<EmailContactResultJSON>, EmailContactResultJSON *, bool > fieldGeneratorRecipientsCouldNotRemove;
        JSONHoldingGenerator<EmailContactResultFieldTypeJSON::Generator, RCHandle<EmailContactResultFieldTypeJSON>, EmailContactResultFieldTypeJSON *, bool > fieldGeneratorOpenEndedEditRequestFieldType;
        JSONHoldingGenerator<EmailContactResultActionJSON::Generator, RCHandle<EmailContactResultActionJSON>, EmailContactResultActionJSON *, bool > fieldGeneratorOpenEndedEditRequestAction;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRemovedAllRecipients;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReadSubject;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReadBody;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            ComposeEmailCommandNativeDataJSON *result = new ComposeEmailCommandNativeDataJSON();
            assert(result != NULL);
            RCHandle<ComposeEmailCommandNativeDataJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(ComposeEmailCommandNativeDataJSON *result)
          {
            if (fieldGeneratorEmail.have_value)
              {
                result->setEmail(fieldGeneratorEmail.value.referenced());
                fieldGeneratorEmail.have_value = false;
              }
            else if (!(result->hasEmail()))
              {
                error("When parsing the object for %what%, the \"Email\" field was missing.");
              }
            if (fieldGeneratorEmptySubjectOK.have_value)
              {
                result->setEmptySubjectOK(fieldGeneratorEmptySubjectOK.value);
                fieldGeneratorEmptySubjectOK.have_value = false;
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
            if (fieldGeneratorSendEmailNow.have_value)
              {
                result->setSendEmailNow(fieldGeneratorSendEmailNow.value);
                fieldGeneratorSendEmailNow.have_value = false;
              }
            if (fieldGeneratorLastEditedTextFieldType.have_value)
              {
                result->setLastEditedTextFieldType(fieldGeneratorLastEditedTextFieldType.value.referenced());
                fieldGeneratorLastEditedTextFieldType.have_value = false;
              }
            if (fieldGeneratorNewRecipientsAlreadyInEmail.have_value)
              {
                result->initNewRecipientsAlreadyInEmail();
                size_t count = fieldGeneratorNewRecipientsAlreadyInEmail.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewRecipientsAlreadyInEmail(fieldGeneratorNewRecipientsAlreadyInEmail.value[num].referenced());
                  }
                fieldGeneratorNewRecipientsAlreadyInEmail.value.clear();
                fieldGeneratorNewRecipientsAlreadyInEmail.have_value = false;
              }
            if (fieldGeneratorNewRecipientsNotInEmail.have_value)
              {
                result->initNewRecipientsNotInEmail();
                size_t count = fieldGeneratorNewRecipientsNotInEmail.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendNewRecipientsNotInEmail(fieldGeneratorNewRecipientsNotInEmail.value[num].referenced());
                  }
                fieldGeneratorNewRecipientsNotInEmail.value.clear();
                fieldGeneratorNewRecipientsNotInEmail.have_value = false;
              }
            if (fieldGeneratorEmailAlreadyHadRecipients.have_value)
              {
                result->setEmailAlreadyHadRecipients(fieldGeneratorEmailAlreadyHadRecipients.value);
                fieldGeneratorEmailAlreadyHadRecipients.have_value = false;
              }
            if (fieldGeneratorAlreadyHadRecipients.have_value)
              {
                result->setAlreadyHadRecipients(fieldGeneratorAlreadyHadRecipients.value);
                fieldGeneratorAlreadyHadRecipients.have_value = false;
              }
            if (fieldGeneratorOverwroteSubject.have_value)
              {
                result->setOverwroteSubject(fieldGeneratorOverwroteSubject.value);
                fieldGeneratorOverwroteSubject.have_value = false;
              }
            if (fieldGeneratorOverwroteBody.have_value)
              {
                result->setOverwroteBody(fieldGeneratorOverwroteBody.value);
                fieldGeneratorOverwroteBody.have_value = false;
              }
            if (fieldGeneratorNewSubject.have_value)
              {
                result->setNewSubject(fieldGeneratorNewSubject.value);
                fieldGeneratorNewSubject.have_value = false;
              }
            if (fieldGeneratorNewBody.have_value)
              {
                result->setNewBody(fieldGeneratorNewBody.value);
                fieldGeneratorNewBody.have_value = false;
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
            if (fieldGeneratorDeleteFieldType.have_value)
              {
                result->setDeleteFieldType(fieldGeneratorDeleteFieldType.value.referenced());
                fieldGeneratorDeleteFieldType.have_value = false;
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
            if (fieldGeneratorOpenEndedEditRequestFieldType.have_value)
              {
                result->setOpenEndedEditRequestFieldType(fieldGeneratorOpenEndedEditRequestFieldType.value.referenced());
                fieldGeneratorOpenEndedEditRequestFieldType.have_value = false;
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
            if (fieldGeneratorReadSubject.have_value)
              {
                result->setReadSubject(fieldGeneratorReadSubject.value);
                fieldGeneratorReadSubject.have_value = false;
              }
            if (fieldGeneratorReadBody.have_value)
              {
                result->setReadBody(fieldGeneratorReadBody.value);
                fieldGeneratorReadBody.have_value = false;
              }
          }
        virtual void handle_result(ComposeEmailCommandNativeDataJSON *new_result) = 0;
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
                    if (strncmp(&(field_name[1]), "elete", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'F':
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'i':
                                        if (strcmp(&(field_name[8]), "eldType") == 0)
                                            return &fieldGeneratorDeleteFieldType;
                                        break;
                                    case 'r':
                                        if (strcmp(&(field_name[8]), "omBack") == 0)
                                            return &fieldGeneratorDeleteFromBack;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'T':
                                if (strcmp(&(field_name[7]), "ype") == 0)
                                    return &fieldGeneratorDeleteType;
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
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    if (strncmp(&(field_name[3]), "il", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 0:
                                                return &fieldGeneratorEmail;
                                            case 'A':
                                                if (strcmp(&(field_name[6]), "lreadyHadRecipients") == 0)
                                                    return &fieldGeneratorEmailAlreadyHadRecipients;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'p':
                                    if (strncmp(&(field_name[3]), "ty", 2) == 0)
                                      {
                                        switch ((unsigned char)(field_name[5]))
                                          {
                                            case 'B':
                                                if (strcmp(&(field_name[6]), "odyOK") == 0)
                                                    return &fieldGeneratorEmptyBodyOK;
                                                break;
                                            case 'S':
                                                if (strcmp(&(field_name[6]), "ubjectOK") == 0)
                                                    return &fieldGeneratorEmptySubjectOK;
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
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "ocusHint") == 0)
                        return &fieldGeneratorFocusHint;
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
                                                    if (strcmp(&(field_name[14]), "lreadyInEmail") == 0)
                                                        return &fieldGeneratorNewRecipientsAlreadyInEmail;
                                                    break;
                                                case 'N':
                                                    if (strcmp(&(field_name[14]), "otInEmail") == 0)
                                                        return &fieldGeneratorNewRecipientsNotInEmail;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[4]), "ubject") == 0)
                                            return &fieldGeneratorNewSubject;
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
                                    case 'A':
                                        if (strcmp(&(field_name[21]), "ction") == 0)
                                            return &fieldGeneratorOpenEndedEditRequestAction;
                                        break;
                                    case 'F':
                                        if (strcmp(&(field_name[21]), "ieldType") == 0)
                                            return &fieldGeneratorOpenEndedEditRequestFieldType;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'v':
                            if (strncmp(&(field_name[2]), "erwrote", 7) == 0)
                              {
                                switch ((unsigned char)(field_name[9]))
                                  {
                                    case 'B':
                                        if (strcmp(&(field_name[10]), "ody") == 0)
                                            return &fieldGeneratorOverwroteBody;
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[10]), "ubject") == 0)
                                            return &fieldGeneratorOverwroteSubject;
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
                                        case 'S':
                                            if (strcmp(&(field_name[5]), "ubject") == 0)
                                                return &fieldGeneratorReadSubject;
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
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "ndEmailNow") == 0)
                                return &fieldGeneratorSendEmailNow;
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
        Generator(bool ignore_extras = false) : fieldGeneratorEmail("field \"Email\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorEmptySubjectOK("field \"EmptySubjectOK\" of the ComposeEmailCommandNativeData class"), fieldGeneratorEmptyBodyOK("field \"EmptyBodyOK\" of the ComposeEmailCommandNativeData class"), fieldGeneratorFocusHint("field \"FocusHint\" of the ComposeEmailCommandNativeData class"), fieldGeneratorSendEmailNow("field \"SendEmailNow\" of the ComposeEmailCommandNativeData class"), fieldGeneratorLastEditedTextFieldType("field \"LastEditedTextFieldType\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorNewRecipientsAlreadyInEmail("field \"NewRecipientsAlreadyInEmail\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorNewRecipientsNotInEmail("field \"NewRecipientsNotInEmail\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorEmailAlreadyHadRecipients("field \"EmailAlreadyHadRecipients\" of the ComposeEmailCommandNativeData class"), fieldGeneratorAlreadyHadRecipients("field \"AlreadyHadRecipients\" of the ComposeEmailCommandNativeData class"), fieldGeneratorOverwroteSubject("field \"OverwroteSubject\" of the ComposeEmailCommandNativeData class"), fieldGeneratorOverwroteBody("field \"OverwroteBody\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNewSubject("field \"NewSubject\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNewBody("field \"NewBody\" of the ComposeEmailCommandNativeData class"), fieldGeneratorAutoListen("field \"AutoListen\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNotUnderstoodUsedWordTo("field \"NotUnderstoodUsedWordTo\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNotUnderstoodWords("field \"NotUnderstoodWords\" of the ComposeEmailCommandNativeData class"), fieldGeneratorDeleteType("field \"DeleteType\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNumToDelete("field \"NumToDelete\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNumDeleted("field \"NumDeleted\" of the ComposeEmailCommandNativeData class"), fieldGeneratorDeleteFromBack("field \"DeleteFromBack\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNothingToDelete("field \"NothingToDelete\" of the ComposeEmailCommandNativeData class"), fieldGeneratorDeleteFieldType("field \"DeleteFieldType\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorState("field \"State\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorEditBodyState("field \"EditBodyState\" of the ComposeEmailCommandNativeData class"), fieldGeneratorRecipientsAdded("field \"RecipientsAdded\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorRecipientsRemoved("field \"RecipientsRemoved\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorRecipientsCouldNotAdd("field \"RecipientsCouldNotAdd\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorRecipientsCouldNotRemove("field \"RecipientsCouldNotRemove\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorOpenEndedEditRequestFieldType("field \"OpenEndedEditRequestFieldType\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorOpenEndedEditRequestAction("field \"OpenEndedEditRequestAction\" of the ComposeEmailCommandNativeData class", ignore_extras), fieldGeneratorRemovedAllRecipients("field \"RemovedAllRecipients\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNotUnderstoodType("field \"NotUnderstoodType\" of the ComposeEmailCommandNativeData class"), fieldGeneratorNotUnderstoodWordsFound("field \"NotUnderstoodWordsFound\" of the ComposeEmailCommandNativeData class"), fieldGeneratorReadRecipients("field \"ReadRecipients\" of the ComposeEmailCommandNativeData class"), fieldGeneratorReadSubject("field \"ReadSubject\" of the ComposeEmailCommandNativeData class"), fieldGeneratorReadBody("field \"ReadBody\" of the ComposeEmailCommandNativeData class")
          {
            set_what("the ComposeEmailCommandNativeData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorEmail.reset();
            fieldGeneratorEmptySubjectOK.reset();
            fieldGeneratorEmptyBodyOK.reset();
            fieldGeneratorFocusHint.reset();
            fieldGeneratorSendEmailNow.reset();
            fieldGeneratorLastEditedTextFieldType.reset();
            fieldGeneratorNewRecipientsAlreadyInEmail.reset();
            fieldGeneratorNewRecipientsNotInEmail.reset();
            fieldGeneratorEmailAlreadyHadRecipients.reset();
            fieldGeneratorAlreadyHadRecipients.reset();
            fieldGeneratorOverwroteSubject.reset();
            fieldGeneratorOverwroteBody.reset();
            fieldGeneratorNewSubject.reset();
            fieldGeneratorNewBody.reset();
            fieldGeneratorAutoListen.reset();
            fieldGeneratorNotUnderstoodUsedWordTo.reset();
            fieldGeneratorNotUnderstoodWords.reset();
            fieldGeneratorDeleteType.reset();
            fieldGeneratorNumToDelete.reset();
            fieldGeneratorNumDeleted.reset();
            fieldGeneratorDeleteFromBack.reset();
            fieldGeneratorNothingToDelete.reset();
            fieldGeneratorDeleteFieldType.reset();
            fieldGeneratorState.reset();
            fieldGeneratorEditBodyState.reset();
            fieldGeneratorRecipientsAdded.reset();
            fieldGeneratorRecipientsRemoved.reset();
            fieldGeneratorRecipientsCouldNotAdd.reset();
            fieldGeneratorRecipientsCouldNotRemove.reset();
            fieldGeneratorOpenEndedEditRequestFieldType.reset();
            fieldGeneratorOpenEndedEditRequestAction.reset();
            fieldGeneratorRemovedAllRecipients.reset();
            fieldGeneratorNotUnderstoodType.reset();
            fieldGeneratorNotUnderstoodWordsFound.reset();
            fieldGeneratorReadRecipients.reset();
            fieldGeneratorReadSubject.reset();
            fieldGeneratorReadBody.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* COMPOSEEMAILCOMMANDNATIVEDATAJSON_H */
