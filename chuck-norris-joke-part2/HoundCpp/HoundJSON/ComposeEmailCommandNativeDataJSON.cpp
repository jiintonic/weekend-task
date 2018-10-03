/* file "ComposeEmailCommandNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ComposeEmailCommandNativeDataJSON.h"

#include "ComposeEmailCommandNativeDataJSON.h"


ComposeEmailCommandNativeDataJSON::TypeFocusHint ComposeEmailCommandNativeDataJSON::stringToFocusHint(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            switch ((unsigned char)(chars[1]))
              {
                case 'c':
                    if (strcmp(&(chars[2]), "c") == 0)
                        return FocusHint_Bcc;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "dy") == 0)
                        return FocusHint_Body;
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(chars[1]), "c") == 0)
                return FocusHint_Cc;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ubject") == 0)
                return FocusHint_Subject;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "o") == 0)
                return FocusHint_To;
            break;
        default:
            break;
      }
    throw("The value for field `FocusHint' is not one of the legal values.");
  }

const char *ComposeEmailCommandNativeDataJSON::stringFromFocusHint(TypeFocusHint the_enum)
  {
    switch (the_enum)
      {
        case FocusHint_To:
            return "To";
        case FocusHint_Cc:
            return "Cc";
        case FocusHint_Bcc:
            return "Bcc";
        case FocusHint_Subject:
            return "Subject";
        case FocusHint_Body:
            return "Body";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeEmailCommandNativeDataJSON::TypeDeleteType ComposeEmailCommandNativeDataJSON::stringToDeleteType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "ENTENCE") == 0)
                return DeleteType_SENTENCE;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ORD") == 0)
                return DeleteType_WORD;
            break;
        default:
            break;
      }
    throw("The value for field `DeleteType' is not one of the legal values.");
  }

const char *ComposeEmailCommandNativeDataJSON::stringFromDeleteType(TypeDeleteType the_enum)
  {
    switch (the_enum)
      {
        case DeleteType_WORD:
            return "WORD";
        case DeleteType_SENTENCE:
            return "SENTENCE";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeEmailCommandNativeDataJSON::TypeEditBodyState ComposeEmailCommandNativeDataJSON::stringToEditBodyState(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "PPENDED") == 0)
                return EditBodyState_APPENDED;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "O_CHANGE") == 0)
                return EditBodyState_NO_CHANGE;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ET") == 0)
                return EditBodyState_SET;
            break;
        default:
            break;
      }
    throw("The value for field `EditBodyState' is not one of the legal values.");
  }

const char *ComposeEmailCommandNativeDataJSON::stringFromEditBodyState(TypeEditBodyState the_enum)
  {
    switch (the_enum)
      {
        case EditBodyState_APPENDED:
            return "APPENDED";
        case EditBodyState_SET:
            return "SET";
        case EditBodyState_NO_CHANGE:
            return "NO_CHANGE";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeEmailCommandNativeDataJSON::TypeNotUnderstoodType ComposeEmailCommandNativeDataJSON::stringToNotUnderstoodType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "MAIL_ADDRESS") == 0)
                return NotUnderstoodType_EMAIL_ADDRESS;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "NKNOWN") == 0)
                return NotUnderstoodType_UNKNOWN;
            break;
        case 'Y':
            if (strcmp(&(chars[1]), "ES_NO") == 0)
                return NotUnderstoodType_YES_NO;
            break;
        default:
            break;
      }
    throw("The value for field `NotUnderstoodType' is not one of the legal values.");
  }

const char *ComposeEmailCommandNativeDataJSON::stringFromNotUnderstoodType(TypeNotUnderstoodType the_enum)
  {
    switch (the_enum)
      {
        case NotUnderstoodType_EMAIL_ADDRESS:
            return "EMAIL_ADDRESS";
        case NotUnderstoodType_YES_NO:
            return "YES_NO";
        case NotUnderstoodType_UNKNOWN:
            return "UNKNOWN";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeEmailCommandNativeDataJSON::ComposeEmailCommandNativeDataJSON(const ComposeEmailCommandNativeDataJSON &)
  {
    assert(false);
  }

ComposeEmailCommandNativeDataJSON &ComposeEmailCommandNativeDataJSON::operator=(const ComposeEmailCommandNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ComposeEmailCommandNativeDataJSON::fromJSONEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailJSON *convert_classy = EmailJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmail(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONEmptySubjectOK(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field EmptySubjectOK of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setEmptySubjectOK(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field EmptyBodyOK of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setEmptyBodyOK(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONFocusHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FocusHint of ComposeEmailCommandNativeDataJSON is not a string.");
    TypeFocusHint the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'c':
                    if (strcmp(&(json_string->getData()[2]), "c") == 0)
                          {
                            the_enum = FocusHint_Bcc;
                            goto enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "dy") == 0)
                          {
                            the_enum = FocusHint_Body;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "c") == 0)
                  {
                    the_enum = FocusHint_Cc;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ubject") == 0)
                  {
                    the_enum = FocusHint_Subject;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "o") == 0)
                  {
                    the_enum = FocusHint_To;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field FocusHint of ComposeEmailCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setFocusHint(the_enum);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONSendEmailNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field SendEmailNow of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setSendEmailNow(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailFieldTypeJSON *convert_classy = EmailFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastEditedTextFieldType(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNewRecipientsAlreadyInEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewRecipientsAlreadyInEmail of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_NewRecipientsAlreadyInEmail1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewRecipientsAlreadyInEmail1[num1] = convert_classy;
      }
    initNewRecipientsAlreadyInEmail();
    for (size_t num7 = 0; num7 < vector_NewRecipientsAlreadyInEmail1.size(); ++num7)
        appendNewRecipientsAlreadyInEmail(vector_NewRecipientsAlreadyInEmail1[num7]);
    for (size_t num1 = 0; num1 < vector_NewRecipientsAlreadyInEmail1.size(); ++num1)
      {
        vector_NewRecipientsAlreadyInEmail1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNewRecipientsNotInEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewRecipientsNotInEmail of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_NewRecipientsNotInEmail1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewRecipientsNotInEmail1[num1] = convert_classy;
      }
    initNewRecipientsNotInEmail();
    for (size_t num8 = 0; num8 < vector_NewRecipientsNotInEmail1.size(); ++num8)
        appendNewRecipientsNotInEmail(vector_NewRecipientsNotInEmail1[num8]);
    for (size_t num1 = 0; num1 < vector_NewRecipientsNotInEmail1.size(); ++num1)
      {
        vector_NewRecipientsNotInEmail1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONEmailAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field EmailAlreadyHadRecipients of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setEmailAlreadyHadRecipients(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field AlreadyHadRecipients of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setAlreadyHadRecipients(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONOverwroteSubject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field OverwroteSubject of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setOverwroteSubject(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONOverwroteBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field OverwroteBody of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setOverwroteBody(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNewSubject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewSubject of ComposeEmailCommandNativeDataJSON is not a string.");
    setNewSubject(std::string(json_string->getData()));
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNewBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewBody of ComposeEmailCommandNativeDataJSON is not a string.");
    setNewBody(std::string(json_string->getData()));
  }

void ComposeEmailCommandNativeDataJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field AutoListen of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNotUnderstoodUsedWordTo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field NotUnderstoodUsedWordTo of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setNotUnderstoodUsedWordTo(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of ComposeEmailCommandNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

void ComposeEmailCommandNativeDataJSON::fromJSONDeleteType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DeleteType of ComposeEmailCommandNativeDataJSON is not a string.");
    TypeDeleteType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ENTENCE") == 0)
                  {
                    the_enum = DeleteType_SENTENCE;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ORD") == 0)
                  {
                    the_enum = DeleteType_WORD;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field DeleteType of ComposeEmailCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setDeleteType(the_enum);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNumToDelete(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumToDelete of ComposeEmailCommandNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumToDelete of ComposeEmailCommandNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumToDelete(extracted_integer);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNumDeleted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumDeleted of ComposeEmailCommandNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumDeleted of ComposeEmailCommandNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumDeleted(extracted_integer);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONDeleteFromBack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field DeleteFromBack of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setDeleteFromBack(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNothingToDelete(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field NothingToDelete of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setNothingToDelete(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONDeleteFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailFieldTypeJSON *convert_classy = EmailFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDeleteFieldType(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailStateJSON *convert_classy = EmailStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setState(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONEditBodyState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EditBodyState of ComposeEmailCommandNativeDataJSON is not a string.");
    TypeEditBodyState the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "PPENDED") == 0)
                  {
                    the_enum = EditBodyState_APPENDED;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "O_CHANGE") == 0)
                  {
                    the_enum = EditBodyState_NO_CHANGE;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ET") == 0)
                  {
                    the_enum = EditBodyState_SET;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field EditBodyState of ComposeEmailCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setEditBodyState(the_enum);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONRecipientsAdded(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsAdded of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_RecipientsAdded1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsAdded1[num1] = convert_classy;
      }
    initRecipientsAdded();
    for (size_t num9 = 0; num9 < vector_RecipientsAdded1.size(); ++num9)
        appendRecipientsAdded(vector_RecipientsAdded1[num9]);
    for (size_t num1 = 0; num1 < vector_RecipientsAdded1.size(); ++num1)
      {
        vector_RecipientsAdded1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONRecipientsRemoved(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsRemoved of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_RecipientsRemoved1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsRemoved1[num1] = convert_classy;
      }
    initRecipientsRemoved();
    for (size_t num10 = 0; num10 < vector_RecipientsRemoved1.size(); ++num10)
        appendRecipientsRemoved(vector_RecipientsRemoved1[num10]);
    for (size_t num1 = 0; num1 < vector_RecipientsRemoved1.size(); ++num1)
      {
        vector_RecipientsRemoved1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONRecipientsCouldNotAdd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsCouldNotAdd of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_RecipientsCouldNotAdd1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsCouldNotAdd1[num1] = convert_classy;
      }
    initRecipientsCouldNotAdd();
    for (size_t num11 = 0; num11 < vector_RecipientsCouldNotAdd1.size(); ++num11)
        appendRecipientsCouldNotAdd(vector_RecipientsCouldNotAdd1[num11]);
    for (size_t num1 = 0; num1 < vector_RecipientsCouldNotAdd1.size(); ++num1)
      {
        vector_RecipientsCouldNotAdd1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONRecipientsCouldNotRemove(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsCouldNotRemove of ComposeEmailCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< EmailContactResultJSON * > vector_RecipientsCouldNotRemove1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsCouldNotRemove1[num1] = convert_classy;
      }
    initRecipientsCouldNotRemove();
    for (size_t num12 = 0; num12 < vector_RecipientsCouldNotRemove1.size(); ++num12)
        appendRecipientsCouldNotRemove(vector_RecipientsCouldNotRemove1[num12]);
    for (size_t num1 = 0; num1 < vector_RecipientsCouldNotRemove1.size(); ++num1)
      {
        vector_RecipientsCouldNotRemove1[num1]->remove_reference();
      }
  }

void ComposeEmailCommandNativeDataJSON::fromJSONOpenEndedEditRequestFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailContactResultFieldTypeJSON *convert_classy = EmailContactResultFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpenEndedEditRequestFieldType(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONOpenEndedEditRequestAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailContactResultActionJSON *convert_classy = EmailContactResultActionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpenEndedEditRequestAction(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeEmailCommandNativeDataJSON::fromJSONRemovedAllRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field RemovedAllRecipients of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setRemovedAllRecipients(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNotUnderstoodType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodType of ComposeEmailCommandNativeDataJSON is not a string.");
    TypeNotUnderstoodType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "MAIL_ADDRESS") == 0)
                  {
                    the_enum = NotUnderstoodType_EMAIL_ADDRESS;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "NKNOWN") == 0)
                  {
                    the_enum = NotUnderstoodType_UNKNOWN;
                    goto enum_is_done;
                  }
            break;
        case 'Y':
            if (strcmp(&(json_string->getData()[1]), "ES_NO") == 0)
                  {
                    the_enum = NotUnderstoodType_YES_NO;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NotUnderstoodType of ComposeEmailCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setNotUnderstoodType(the_enum);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONNotUnderstoodWordsFound(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWordsFound of ComposeEmailCommandNativeDataJSON is not a string.");
    setNotUnderstoodWordsFound(std::string(json_string->getData()));
  }

void ComposeEmailCommandNativeDataJSON::fromJSONReadRecipients(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ReadRecipients of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setReadRecipients(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONReadSubject(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ReadSubject of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setReadSubject(the_bool);
  }

void ComposeEmailCommandNativeDataJSON::fromJSONReadBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONTrueValue *json_true = json_value->true_value();
    bool the_bool;
    if (json_true != NULL)
      {
        the_bool = true;
      }
    else
      {
        const JSONFalseValue *json_false = json_value->false_value();
        if (json_false != NULL)
          {
            the_bool = false;
          }
        else
          {
            throw("The value for field ReadBody of ComposeEmailCommandNativeDataJSON is not true for false.");
          }
      }
    setReadBody(the_bool);
  }

ComposeEmailCommandNativeDataJSON::ComposeEmailCommandNativeDataJSON(void) :
        flagHasEmail(false),
        flagHasEmptySubjectOK(false),
        flagHasEmptyBodyOK(false),
        flagHasFocusHint(false),
        flagHasSendEmailNow(false),
        flagHasLastEditedTextFieldType(false),
        flagHasNewRecipientsAlreadyInEmail(false),
        flagHasNewRecipientsNotInEmail(false),
        flagHasEmailAlreadyHadRecipients(false),
        flagHasAlreadyHadRecipients(false),
        flagHasOverwroteSubject(false),
        flagHasOverwroteBody(false),
        flagHasNewSubject(false),
        flagHasNewBody(false),
        flagHasAutoListen(false),
        flagHasNotUnderstoodUsedWordTo(false),
        flagHasNotUnderstoodWords(false),
        flagHasDeleteType(false),
        flagHasNumToDelete(false),
        flagHasNumDeleted(false),
        flagHasDeleteFromBack(false),
        flagHasNothingToDelete(false),
        flagHasDeleteFieldType(false),
        flagHasState(false),
        flagHasEditBodyState(false),
        flagHasRecipientsAdded(false),
        flagHasRecipientsRemoved(false),
        flagHasRecipientsCouldNotAdd(false),
        flagHasRecipientsCouldNotRemove(false),
        flagHasOpenEndedEditRequestFieldType(false),
        flagHasOpenEndedEditRequestAction(false),
        flagHasRemovedAllRecipients(false),
        flagHasNotUnderstoodType(false),
        flagHasNotUnderstoodWordsFound(false),
        flagHasReadRecipients(false),
        flagHasReadSubject(false),
        flagHasReadBody(false)
  {
  }

ComposeEmailCommandNativeDataJSON::~ComposeEmailCommandNativeDataJSON(void)
  {
    if (flagHasEmail)
      {
        storeEmail->remove_reference();
      }
    if (flagHasLastEditedTextFieldType)
      {
        storeLastEditedTextFieldType->remove_reference();
      }
    if (flagHasNewRecipientsAlreadyInEmail)
      {
        for (size_t num19 = 0; num19 < storeNewRecipientsAlreadyInEmail.size(); ++num19)
          {
            storeNewRecipientsAlreadyInEmail[num19]->remove_reference();
          }
      }
    if (flagHasNewRecipientsNotInEmail)
      {
        for (size_t num20 = 0; num20 < storeNewRecipientsNotInEmail.size(); ++num20)
          {
            storeNewRecipientsNotInEmail[num20]->remove_reference();
          }
      }
    if (flagHasDeleteFieldType)
      {
        storeDeleteFieldType->remove_reference();
      }
    if (flagHasState)
      {
        storeState->remove_reference();
      }
    if (flagHasRecipientsAdded)
      {
        for (size_t num21 = 0; num21 < storeRecipientsAdded.size(); ++num21)
          {
            storeRecipientsAdded[num21]->remove_reference();
          }
      }
    if (flagHasRecipientsRemoved)
      {
        for (size_t num22 = 0; num22 < storeRecipientsRemoved.size(); ++num22)
          {
            storeRecipientsRemoved[num22]->remove_reference();
          }
      }
    if (flagHasRecipientsCouldNotAdd)
      {
        for (size_t num23 = 0; num23 < storeRecipientsCouldNotAdd.size(); ++num23)
          {
            storeRecipientsCouldNotAdd[num23]->remove_reference();
          }
      }
    if (flagHasRecipientsCouldNotRemove)
      {
        for (size_t num24 = 0; num24 < storeRecipientsCouldNotRemove.size(); ++num24)
          {
            storeRecipientsCouldNotRemove[num24]->remove_reference();
          }
      }
    if (flagHasOpenEndedEditRequestFieldType)
      {
        storeOpenEndedEditRequestFieldType->remove_reference();
      }
    if (flagHasOpenEndedEditRequestAction)
      {
        storeOpenEndedEditRequestAction->remove_reference();
      }
  }

bool ComposeEmailCommandNativeDataJSON::hasEmail(void) const
  {
    return flagHasEmail;
  }

EmailJSON * ComposeEmailCommandNativeDataJSON::getEmail(void)
  {
    assert(flagHasEmail);
    return storeEmail;
  }

const EmailJSON * ComposeEmailCommandNativeDataJSON::getEmail(void) const
  {
    assert(flagHasEmail);
    return storeEmail;
  }

bool ComposeEmailCommandNativeDataJSON::hasEmptySubjectOK(void) const
  {
    return flagHasEmptySubjectOK;
  }

bool ComposeEmailCommandNativeDataJSON::getEmptySubjectOK(void)
  {
    assert(flagHasEmptySubjectOK);
    return storeEmptySubjectOK;
  }

const bool ComposeEmailCommandNativeDataJSON::getEmptySubjectOK(void) const
  {
    assert(flagHasEmptySubjectOK);
    return storeEmptySubjectOK;
  }

bool ComposeEmailCommandNativeDataJSON::hasEmptyBodyOK(void) const
  {
    return flagHasEmptyBodyOK;
  }

bool ComposeEmailCommandNativeDataJSON::getEmptyBodyOK(void)
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

const bool ComposeEmailCommandNativeDataJSON::getEmptyBodyOK(void) const
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

bool ComposeEmailCommandNativeDataJSON::hasFocusHint(void) const
  {
    return flagHasFocusHint;
  }

ComposeEmailCommandNativeDataJSON::TypeFocusHint ComposeEmailCommandNativeDataJSON::getFocusHint(void)
  {
    assert(flagHasFocusHint);
    return storeFocusHint;
  }

const ComposeEmailCommandNativeDataJSON::TypeFocusHint ComposeEmailCommandNativeDataJSON::getFocusHint(void) const
  {
    assert(flagHasFocusHint);
    return storeFocusHint;
  }

const char *ComposeEmailCommandNativeDataJSON::getFocusHintAsChars(void) const
  {
    return stringFromFocusHint(getFocusHint());
  }

std::string ComposeEmailCommandNativeDataJSON::getFocusHintAsString(void) const
  {
    return stringFromFocusHint(getFocusHint());
  }

bool ComposeEmailCommandNativeDataJSON::hasSendEmailNow(void) const
  {
    return flagHasSendEmailNow;
  }

bool ComposeEmailCommandNativeDataJSON::getSendEmailNow(void)
  {
    assert(flagHasSendEmailNow);
    return storeSendEmailNow;
  }

const bool ComposeEmailCommandNativeDataJSON::getSendEmailNow(void) const
  {
    assert(flagHasSendEmailNow);
    return storeSendEmailNow;
  }

bool ComposeEmailCommandNativeDataJSON::hasLastEditedTextFieldType(void) const
  {
    return flagHasLastEditedTextFieldType;
  }

EmailFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldType(void)
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

const EmailFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldType(void) const
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

EmailFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldTypeValue(void)
  {
    return getLastEditedTextFieldType()->getValue();
  }

const EmailFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldTypeValue(void) const
  {
    return getLastEditedTextFieldType()->getValue();
  }

const char *ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldTypeAsChars(void) const
  {
    return getLastEditedTextFieldType()->getValueAsChars();
  }

std::string ComposeEmailCommandNativeDataJSON::getLastEditedTextFieldTypeAsString(void) const
  {
    return getLastEditedTextFieldType()->getValueAsString();
  }

bool ComposeEmailCommandNativeDataJSON::hasNewRecipientsAlreadyInEmail(void) const
  {
    return flagHasNewRecipientsAlreadyInEmail;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfNewRecipientsAlreadyInEmail(void) const
  {
    assert(flagHasNewRecipientsAlreadyInEmail);
    return storeNewRecipientsAlreadyInEmail.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfNewRecipientsAlreadyInEmail(size_t element_num)
  {
    assert(flagHasNewRecipientsAlreadyInEmail);
    return storeNewRecipientsAlreadyInEmail[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfNewRecipientsAlreadyInEmail(size_t element_num) const
  {
    assert(flagHasNewRecipientsAlreadyInEmail);
    return storeNewRecipientsAlreadyInEmail[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getNewRecipientsAlreadyInEmail(void)
  {
    assert(flagHasNewRecipientsAlreadyInEmail);
    return storeNewRecipientsAlreadyInEmail;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getNewRecipientsAlreadyInEmail(void) const
  {
    assert(flagHasNewRecipientsAlreadyInEmail);
    return storeNewRecipientsAlreadyInEmail;
  }

bool ComposeEmailCommandNativeDataJSON::hasNewRecipientsNotInEmail(void) const
  {
    return flagHasNewRecipientsNotInEmail;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfNewRecipientsNotInEmail(void) const
  {
    assert(flagHasNewRecipientsNotInEmail);
    return storeNewRecipientsNotInEmail.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfNewRecipientsNotInEmail(size_t element_num)
  {
    assert(flagHasNewRecipientsNotInEmail);
    return storeNewRecipientsNotInEmail[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfNewRecipientsNotInEmail(size_t element_num) const
  {
    assert(flagHasNewRecipientsNotInEmail);
    return storeNewRecipientsNotInEmail[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getNewRecipientsNotInEmail(void)
  {
    assert(flagHasNewRecipientsNotInEmail);
    return storeNewRecipientsNotInEmail;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getNewRecipientsNotInEmail(void) const
  {
    assert(flagHasNewRecipientsNotInEmail);
    return storeNewRecipientsNotInEmail;
  }

bool ComposeEmailCommandNativeDataJSON::hasEmailAlreadyHadRecipients(void) const
  {
    return flagHasEmailAlreadyHadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::getEmailAlreadyHadRecipients(void)
  {
    assert(flagHasEmailAlreadyHadRecipients);
    return storeEmailAlreadyHadRecipients;
  }

const bool ComposeEmailCommandNativeDataJSON::getEmailAlreadyHadRecipients(void) const
  {
    assert(flagHasEmailAlreadyHadRecipients);
    return storeEmailAlreadyHadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::hasAlreadyHadRecipients(void) const
  {
    return flagHasAlreadyHadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::getAlreadyHadRecipients(void)
  {
    assert(flagHasAlreadyHadRecipients);
    return storeAlreadyHadRecipients;
  }

const bool ComposeEmailCommandNativeDataJSON::getAlreadyHadRecipients(void) const
  {
    assert(flagHasAlreadyHadRecipients);
    return storeAlreadyHadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::hasOverwroteSubject(void) const
  {
    return flagHasOverwroteSubject;
  }

bool ComposeEmailCommandNativeDataJSON::getOverwroteSubject(void)
  {
    assert(flagHasOverwroteSubject);
    return storeOverwroteSubject;
  }

const bool ComposeEmailCommandNativeDataJSON::getOverwroteSubject(void) const
  {
    assert(flagHasOverwroteSubject);
    return storeOverwroteSubject;
  }

bool ComposeEmailCommandNativeDataJSON::hasOverwroteBody(void) const
  {
    return flagHasOverwroteBody;
  }

bool ComposeEmailCommandNativeDataJSON::getOverwroteBody(void)
  {
    assert(flagHasOverwroteBody);
    return storeOverwroteBody;
  }

const bool ComposeEmailCommandNativeDataJSON::getOverwroteBody(void) const
  {
    assert(flagHasOverwroteBody);
    return storeOverwroteBody;
  }

bool ComposeEmailCommandNativeDataJSON::hasNewSubject(void) const
  {
    return flagHasNewSubject;
  }

std::string ComposeEmailCommandNativeDataJSON::getNewSubject(void)
  {
    assert(flagHasNewSubject);
    return storeNewSubject;
  }

const std::string ComposeEmailCommandNativeDataJSON::getNewSubject(void) const
  {
    assert(flagHasNewSubject);
    return storeNewSubject;
  }

bool ComposeEmailCommandNativeDataJSON::hasNewBody(void) const
  {
    return flagHasNewBody;
  }

std::string ComposeEmailCommandNativeDataJSON::getNewBody(void)
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

const std::string ComposeEmailCommandNativeDataJSON::getNewBody(void) const
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

bool ComposeEmailCommandNativeDataJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool ComposeEmailCommandNativeDataJSON::getAutoListen(void)
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

const bool ComposeEmailCommandNativeDataJSON::getAutoListen(void) const
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

bool ComposeEmailCommandNativeDataJSON::hasNotUnderstoodUsedWordTo(void) const
  {
    return flagHasNotUnderstoodUsedWordTo;
  }

bool ComposeEmailCommandNativeDataJSON::getNotUnderstoodUsedWordTo(void)
  {
    assert(flagHasNotUnderstoodUsedWordTo);
    return storeNotUnderstoodUsedWordTo;
  }

const bool ComposeEmailCommandNativeDataJSON::getNotUnderstoodUsedWordTo(void) const
  {
    assert(flagHasNotUnderstoodUsedWordTo);
    return storeNotUnderstoodUsedWordTo;
  }

bool ComposeEmailCommandNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string ComposeEmailCommandNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string ComposeEmailCommandNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

bool ComposeEmailCommandNativeDataJSON::hasDeleteType(void) const
  {
    return flagHasDeleteType;
  }

ComposeEmailCommandNativeDataJSON::TypeDeleteType ComposeEmailCommandNativeDataJSON::getDeleteType(void)
  {
    assert(flagHasDeleteType);
    return storeDeleteType;
  }

const ComposeEmailCommandNativeDataJSON::TypeDeleteType ComposeEmailCommandNativeDataJSON::getDeleteType(void) const
  {
    assert(flagHasDeleteType);
    return storeDeleteType;
  }

const char *ComposeEmailCommandNativeDataJSON::getDeleteTypeAsChars(void) const
  {
    return stringFromDeleteType(getDeleteType());
  }

std::string ComposeEmailCommandNativeDataJSON::getDeleteTypeAsString(void) const
  {
    return stringFromDeleteType(getDeleteType());
  }

bool ComposeEmailCommandNativeDataJSON::hasNumToDelete(void) const
  {
    return flagHasNumToDelete;
  }

OInteger ComposeEmailCommandNativeDataJSON::getNumToDelete(void)
  {
    assert(flagHasNumToDelete);
    return storeNumToDelete;
  }

const OInteger ComposeEmailCommandNativeDataJSON::getNumToDelete(void) const
  {
    assert(flagHasNumToDelete);
    return storeNumToDelete;
  }

bool ComposeEmailCommandNativeDataJSON::hasNumDeleted(void) const
  {
    return flagHasNumDeleted;
  }

OInteger ComposeEmailCommandNativeDataJSON::getNumDeleted(void)
  {
    assert(flagHasNumDeleted);
    return storeNumDeleted;
  }

const OInteger ComposeEmailCommandNativeDataJSON::getNumDeleted(void) const
  {
    assert(flagHasNumDeleted);
    return storeNumDeleted;
  }

bool ComposeEmailCommandNativeDataJSON::hasDeleteFromBack(void) const
  {
    return flagHasDeleteFromBack;
  }

bool ComposeEmailCommandNativeDataJSON::getDeleteFromBack(void)
  {
    assert(flagHasDeleteFromBack);
    return storeDeleteFromBack;
  }

const bool ComposeEmailCommandNativeDataJSON::getDeleteFromBack(void) const
  {
    assert(flagHasDeleteFromBack);
    return storeDeleteFromBack;
  }

bool ComposeEmailCommandNativeDataJSON::hasNothingToDelete(void) const
  {
    return flagHasNothingToDelete;
  }

bool ComposeEmailCommandNativeDataJSON::getNothingToDelete(void)
  {
    assert(flagHasNothingToDelete);
    return storeNothingToDelete;
  }

const bool ComposeEmailCommandNativeDataJSON::getNothingToDelete(void) const
  {
    assert(flagHasNothingToDelete);
    return storeNothingToDelete;
  }

bool ComposeEmailCommandNativeDataJSON::hasDeleteFieldType(void) const
  {
    return flagHasDeleteFieldType;
  }

EmailFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getDeleteFieldType(void)
  {
    assert(flagHasDeleteFieldType);
    return storeDeleteFieldType;
  }

const EmailFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getDeleteFieldType(void) const
  {
    assert(flagHasDeleteFieldType);
    return storeDeleteFieldType;
  }

EmailFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getDeleteFieldTypeValue(void)
  {
    return getDeleteFieldType()->getValue();
  }

const EmailFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getDeleteFieldTypeValue(void) const
  {
    return getDeleteFieldType()->getValue();
  }

const char *ComposeEmailCommandNativeDataJSON::getDeleteFieldTypeAsChars(void) const
  {
    return getDeleteFieldType()->getValueAsChars();
  }

std::string ComposeEmailCommandNativeDataJSON::getDeleteFieldTypeAsString(void) const
  {
    return getDeleteFieldType()->getValueAsString();
  }

bool ComposeEmailCommandNativeDataJSON::hasState(void) const
  {
    return flagHasState;
  }

EmailStateJSON * ComposeEmailCommandNativeDataJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const EmailStateJSON * ComposeEmailCommandNativeDataJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

EmailStateJSON::TypeValue ComposeEmailCommandNativeDataJSON::getStateValue(void)
  {
    return getState()->getValue();
  }

const EmailStateJSON::TypeValue ComposeEmailCommandNativeDataJSON::getStateValue(void) const
  {
    return getState()->getValue();
  }

const char *ComposeEmailCommandNativeDataJSON::getStateAsChars(void) const
  {
    return getState()->getValueAsChars();
  }

std::string ComposeEmailCommandNativeDataJSON::getStateAsString(void) const
  {
    return getState()->getValueAsString();
  }

bool ComposeEmailCommandNativeDataJSON::hasEditBodyState(void) const
  {
    return flagHasEditBodyState;
  }

ComposeEmailCommandNativeDataJSON::TypeEditBodyState ComposeEmailCommandNativeDataJSON::getEditBodyState(void)
  {
    assert(flagHasEditBodyState);
    return storeEditBodyState;
  }

const ComposeEmailCommandNativeDataJSON::TypeEditBodyState ComposeEmailCommandNativeDataJSON::getEditBodyState(void) const
  {
    assert(flagHasEditBodyState);
    return storeEditBodyState;
  }

const char *ComposeEmailCommandNativeDataJSON::getEditBodyStateAsChars(void) const
  {
    return stringFromEditBodyState(getEditBodyState());
  }

std::string ComposeEmailCommandNativeDataJSON::getEditBodyStateAsString(void) const
  {
    return stringFromEditBodyState(getEditBodyState());
  }

bool ComposeEmailCommandNativeDataJSON::hasRecipientsAdded(void) const
  {
    return flagHasRecipientsAdded;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfRecipientsAdded(void) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsAdded(size_t element_num)
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsAdded(size_t element_num) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsAdded(void)
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsAdded(void) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded;
  }

bool ComposeEmailCommandNativeDataJSON::hasRecipientsRemoved(void) const
  {
    return flagHasRecipientsRemoved;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfRecipientsRemoved(void) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsRemoved(size_t element_num)
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsRemoved(size_t element_num) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsRemoved(void)
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsRemoved(void) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved;
  }

bool ComposeEmailCommandNativeDataJSON::hasRecipientsCouldNotAdd(void) const
  {
    return flagHasRecipientsCouldNotAdd;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfRecipientsCouldNotAdd(void) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsCouldNotAdd(size_t element_num)
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsCouldNotAdd(size_t element_num) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsCouldNotAdd(void)
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsCouldNotAdd(void) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd;
  }

bool ComposeEmailCommandNativeDataJSON::hasRecipientsCouldNotRemove(void) const
  {
    return flagHasRecipientsCouldNotRemove;
  }

size_t ComposeEmailCommandNativeDataJSON::countOfRecipientsCouldNotRemove(void) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove.size();
  }

EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsCouldNotRemove(size_t element_num)
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove[element_num];
  }

const EmailContactResultJSON * ComposeEmailCommandNativeDataJSON::elementOfRecipientsCouldNotRemove(size_t element_num) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove[element_num];
  }

std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsCouldNotRemove(void)
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove;
  }

const std::vector< EmailContactResultJSON * > ComposeEmailCommandNativeDataJSON::getRecipientsCouldNotRemove(void) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove;
  }

bool ComposeEmailCommandNativeDataJSON::hasOpenEndedEditRequestFieldType(void) const
  {
    return flagHasOpenEndedEditRequestFieldType;
  }

EmailContactResultFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldType(void)
  {
    assert(flagHasOpenEndedEditRequestFieldType);
    return storeOpenEndedEditRequestFieldType;
  }

const EmailContactResultFieldTypeJSON * ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldType(void) const
  {
    assert(flagHasOpenEndedEditRequestFieldType);
    return storeOpenEndedEditRequestFieldType;
  }

EmailContactResultFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldTypeValue(void)
  {
    return getOpenEndedEditRequestFieldType()->getValue();
  }

const EmailContactResultFieldTypeJSON::TypeValue ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldTypeValue(void) const
  {
    return getOpenEndedEditRequestFieldType()->getValue();
  }

const char *ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldTypeAsChars(void) const
  {
    return getOpenEndedEditRequestFieldType()->getValueAsChars();
  }

std::string ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestFieldTypeAsString(void) const
  {
    return getOpenEndedEditRequestFieldType()->getValueAsString();
  }

bool ComposeEmailCommandNativeDataJSON::hasOpenEndedEditRequestAction(void) const
  {
    return flagHasOpenEndedEditRequestAction;
  }

EmailContactResultActionJSON * ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestAction(void)
  {
    assert(flagHasOpenEndedEditRequestAction);
    return storeOpenEndedEditRequestAction;
  }

const EmailContactResultActionJSON * ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestAction(void) const
  {
    assert(flagHasOpenEndedEditRequestAction);
    return storeOpenEndedEditRequestAction;
  }

EmailContactResultActionJSON::TypeValue ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestActionValue(void)
  {
    return getOpenEndedEditRequestAction()->getValue();
  }

const EmailContactResultActionJSON::TypeValue ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestActionValue(void) const
  {
    return getOpenEndedEditRequestAction()->getValue();
  }

const char *ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestActionAsChars(void) const
  {
    return getOpenEndedEditRequestAction()->getValueAsChars();
  }

std::string ComposeEmailCommandNativeDataJSON::getOpenEndedEditRequestActionAsString(void) const
  {
    return getOpenEndedEditRequestAction()->getValueAsString();
  }

bool ComposeEmailCommandNativeDataJSON::hasRemovedAllRecipients(void) const
  {
    return flagHasRemovedAllRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::getRemovedAllRecipients(void)
  {
    assert(flagHasRemovedAllRecipients);
    return storeRemovedAllRecipients;
  }

const bool ComposeEmailCommandNativeDataJSON::getRemovedAllRecipients(void) const
  {
    assert(flagHasRemovedAllRecipients);
    return storeRemovedAllRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::hasNotUnderstoodType(void) const
  {
    return flagHasNotUnderstoodType;
  }

ComposeEmailCommandNativeDataJSON::TypeNotUnderstoodType ComposeEmailCommandNativeDataJSON::getNotUnderstoodType(void)
  {
    assert(flagHasNotUnderstoodType);
    return storeNotUnderstoodType;
  }

const ComposeEmailCommandNativeDataJSON::TypeNotUnderstoodType ComposeEmailCommandNativeDataJSON::getNotUnderstoodType(void) const
  {
    assert(flagHasNotUnderstoodType);
    return storeNotUnderstoodType;
  }

const char *ComposeEmailCommandNativeDataJSON::getNotUnderstoodTypeAsChars(void) const
  {
    return stringFromNotUnderstoodType(getNotUnderstoodType());
  }

std::string ComposeEmailCommandNativeDataJSON::getNotUnderstoodTypeAsString(void) const
  {
    return stringFromNotUnderstoodType(getNotUnderstoodType());
  }

bool ComposeEmailCommandNativeDataJSON::hasNotUnderstoodWordsFound(void) const
  {
    return flagHasNotUnderstoodWordsFound;
  }

std::string ComposeEmailCommandNativeDataJSON::getNotUnderstoodWordsFound(void)
  {
    assert(flagHasNotUnderstoodWordsFound);
    return storeNotUnderstoodWordsFound;
  }

const std::string ComposeEmailCommandNativeDataJSON::getNotUnderstoodWordsFound(void) const
  {
    assert(flagHasNotUnderstoodWordsFound);
    return storeNotUnderstoodWordsFound;
  }

bool ComposeEmailCommandNativeDataJSON::hasReadRecipients(void) const
  {
    return flagHasReadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::getReadRecipients(void)
  {
    assert(flagHasReadRecipients);
    return storeReadRecipients;
  }

const bool ComposeEmailCommandNativeDataJSON::getReadRecipients(void) const
  {
    assert(flagHasReadRecipients);
    return storeReadRecipients;
  }

bool ComposeEmailCommandNativeDataJSON::hasReadSubject(void) const
  {
    return flagHasReadSubject;
  }

bool ComposeEmailCommandNativeDataJSON::getReadSubject(void)
  {
    assert(flagHasReadSubject);
    return storeReadSubject;
  }

const bool ComposeEmailCommandNativeDataJSON::getReadSubject(void) const
  {
    assert(flagHasReadSubject);
    return storeReadSubject;
  }

bool ComposeEmailCommandNativeDataJSON::hasReadBody(void) const
  {
    return flagHasReadBody;
  }

bool ComposeEmailCommandNativeDataJSON::getReadBody(void)
  {
    assert(flagHasReadBody);
    return storeReadBody;
  }

const bool ComposeEmailCommandNativeDataJSON::getReadBody(void) const
  {
    assert(flagHasReadBody);
    return storeReadBody;
  }

char ComposeEmailCommandNativeDataJSON::Generator::lowerBoundNumToDelete[] = "0";
char ComposeEmailCommandNativeDataJSON::Generator::lowerBoundNumDeleted[] = "0";
ComposeEmailCommandNativeDataJSON *ComposeEmailCommandNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ComposeEmailCommandNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ComposeEmailCommandNativeDataJSON>, ComposeEmailCommandNativeDataJSON *, bool> generator("Type ComposeEmailCommandNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
