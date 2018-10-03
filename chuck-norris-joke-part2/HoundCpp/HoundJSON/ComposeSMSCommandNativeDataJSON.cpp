/* file "ComposeSMSCommandNativeDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ComposeSMSCommandNativeDataJSON.h"

#include "ComposeSMSCommandNativeDataJSON.h"


ComposeSMSCommandNativeDataJSON::TypeFocusHint ComposeSMSCommandNativeDataJSON::stringToFocusHint(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ody") == 0)
                return FocusHint_Body;
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

const char *ComposeSMSCommandNativeDataJSON::stringFromFocusHint(TypeFocusHint the_enum)
  {
    switch (the_enum)
      {
        case FocusHint_To:
            return "To";
        case FocusHint_Body:
            return "Body";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::TypeNewRecipientsInfoJSON(const TypeNewRecipientsInfoJSON &)
  {
    assert(false);
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON &ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::operator=(const TypeNewRecipientsInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::fromJSONSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenName of TypeNewRecipientsInfoJSON is not a string.");
    setSpokenName(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::fromJSONWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenName of TypeNewRecipientsInfoJSON is not a string.");
    setWrittenName(std::string(json_string->getData()));
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::TypeNewRecipientsInfoJSON(void) :
        flagHasSpokenName(false),
        flagHasWrittenName(false)
  {
    extraIndex = create_string_index();
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::~TypeNewRecipientsInfoJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::hasSpokenName(void) const
  {
    return flagHasSpokenName;
  }

std::string ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::getSpokenName(void)
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

const std::string ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::getSpokenName(void) const
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

bool ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::hasWrittenName(void) const
  {
    return flagHasWrittenName;
  }

std::string ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::getWrittenName(void)
  {
    assert(flagHasWrittenName);
    return storeWrittenName;
  }

const std::string ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::getWrittenName(void) const
  {
    assert(flagHasWrittenName);
    return storeWrittenName;
  }

ComposeSMSCommandNativeDataJSON::TypeDeleteType ComposeSMSCommandNativeDataJSON::stringToDeleteType(const char *chars)
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

const char *ComposeSMSCommandNativeDataJSON::stringFromDeleteType(TypeDeleteType the_enum)
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

ComposeSMSCommandNativeDataJSON::TypeEditBodyState ComposeSMSCommandNativeDataJSON::stringToEditBodyState(const char *chars)
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

const char *ComposeSMSCommandNativeDataJSON::stringFromEditBodyState(TypeEditBodyState the_enum)
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

ComposeSMSCommandNativeDataJSON::TypeNotUnderstoodType ComposeSMSCommandNativeDataJSON::stringToNotUnderstoodType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "MS_PHONE_NUMBER") == 0)
                return NotUnderstoodType_SMS_PHONE_NUMBER;
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

const char *ComposeSMSCommandNativeDataJSON::stringFromNotUnderstoodType(TypeNotUnderstoodType the_enum)
  {
    switch (the_enum)
      {
        case NotUnderstoodType_SMS_PHONE_NUMBER:
            return "SMS_PHONE_NUMBER";
        case NotUnderstoodType_YES_NO:
            return "YES_NO";
        case NotUnderstoodType_UNKNOWN:
            return "UNKNOWN";
        default:
            assert(false);
            return NULL;
      }
  }

ComposeSMSCommandNativeDataJSON::ComposeSMSCommandNativeDataJSON(const ComposeSMSCommandNativeDataJSON &)
  {
    assert(false);
  }

ComposeSMSCommandNativeDataJSON &ComposeSMSCommandNativeDataJSON::operator=(const ComposeSMSCommandNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ComposeSMSCommandNativeDataJSON::fromJSONSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSJSON *convert_classy = SMSJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSMS(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandNativeDataJSON::fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EmptyBodyOK of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setEmptyBodyOK(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONFocusHint(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FocusHint of ComposeSMSCommandNativeDataJSON is not a string.");
    TypeFocusHint the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ody") == 0)
                  {
                    the_enum = FocusHint_Body;
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
    throw("The value for field FocusHint of ComposeSMSCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setFocusHint(the_enum);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONSendSMSNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SendSMSNow of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setSendSMSNow(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSFieldTypeJSON *convert_classy = SMSFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastEditedTextFieldType(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandNativeDataJSON::fromJSONSMSAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SMSAlreadyHadRecipients of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setSMSAlreadyHadRecipients(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNewBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NewBody of ComposeSMSCommandNativeDataJSON is not a string.");
    setNewBody(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNewRecipientsInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewRecipientsInfo of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeNewRecipientsInfoJSON * > vector_NewRecipientsInfo1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeNewRecipientsInfoJSON *convert_classy = TypeNewRecipientsInfoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewRecipientsInfo1[num1] = convert_classy;
      }
    initNewRecipientsInfo();
    for (size_t num11 = 0; num11 < vector_NewRecipientsInfo1.size(); ++num11)
        appendNewRecipientsInfo(vector_NewRecipientsInfo1[num11]);
    for (size_t num1 = 0; num1 < vector_NewRecipientsInfo1.size(); ++num1)
      {
        vector_NewRecipientsInfo1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONSpokenMessageFromPreviousTransaction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenMessageFromPreviousTransaction of ComposeSMSCommandNativeDataJSON is not a string.");
    setSpokenMessageFromPreviousTransaction(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNotUnderstoodUsedWordTo(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NotUnderstoodUsedWordTo of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setNotUnderstoodUsedWordTo(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNotUnderstoodWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWords of ComposeSMSCommandNativeDataJSON is not a string.");
    setNotUnderstoodWords(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONDeleteType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DeleteType of ComposeSMSCommandNativeDataJSON is not a string.");
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
    throw("The value for field DeleteType of ComposeSMSCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setDeleteType(the_enum);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNumToDelete(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumToDelete of ComposeSMSCommandNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumToDelete of ComposeSMSCommandNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumToDelete(extracted_integer);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNumDeleted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumDeleted of ComposeSMSCommandNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumDeleted of ComposeSMSCommandNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumDeleted(extracted_integer);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONDeleteFromBack(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DeleteFromBack of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setDeleteFromBack(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNothingToDelete(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field NothingToDelete of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setNothingToDelete(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSStateJSON *convert_classy = SMSStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setState(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandNativeDataJSON::fromJSONEditBodyState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EditBodyState of ComposeSMSCommandNativeDataJSON is not a string.");
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
    throw("The value for field EditBodyState of ComposeSMSCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setEditBodyState(the_enum);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONFirstTimeAddingToBody(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field FirstTimeAddingToBody of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setFirstTimeAddingToBody(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONRecipientsAdded(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsAdded of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnambiguousSMSRecipientJSON * > vector_RecipientsAdded1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnambiguousSMSRecipientJSON *convert_classy = UnambiguousSMSRecipientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsAdded1[num1] = convert_classy;
      }
    initRecipientsAdded();
    for (size_t num12 = 0; num12 < vector_RecipientsAdded1.size(); ++num12)
        appendRecipientsAdded(vector_RecipientsAdded1[num12]);
    for (size_t num1 = 0; num1 < vector_RecipientsAdded1.size(); ++num1)
      {
        vector_RecipientsAdded1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONRecipientsRemoved(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsRemoved of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnambiguousSMSRecipientJSON * > vector_RecipientsRemoved1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnambiguousSMSRecipientJSON *convert_classy = UnambiguousSMSRecipientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsRemoved1[num1] = convert_classy;
      }
    initRecipientsRemoved();
    for (size_t num13 = 0; num13 < vector_RecipientsRemoved1.size(); ++num13)
        appendRecipientsRemoved(vector_RecipientsRemoved1[num13]);
    for (size_t num1 = 0; num1 < vector_RecipientsRemoved1.size(); ++num1)
      {
        vector_RecipientsRemoved1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONRecipientsCouldNotAdd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsCouldNotAdd of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UnambiguousSMSRecipientJSON * > vector_RecipientsCouldNotAdd1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnambiguousSMSRecipientJSON *convert_classy = UnambiguousSMSRecipientJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsCouldNotAdd1[num1] = convert_classy;
      }
    initRecipientsCouldNotAdd();
    for (size_t num14 = 0; num14 < vector_RecipientsCouldNotAdd1.size(); ++num14)
        appendRecipientsCouldNotAdd(vector_RecipientsCouldNotAdd1[num14]);
    for (size_t num1 = 0; num1 < vector_RecipientsCouldNotAdd1.size(); ++num1)
      {
        vector_RecipientsCouldNotAdd1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONRecipientsCouldNotRemove(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RecipientsCouldNotRemove of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SMSRecipientsJSON * > vector_RecipientsCouldNotRemove1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SMSRecipientsJSON *convert_classy = SMSRecipientsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RecipientsCouldNotRemove1[num1] = convert_classy;
      }
    initRecipientsCouldNotRemove();
    for (size_t num15 = 0; num15 < vector_RecipientsCouldNotRemove1.size(); ++num15)
        appendRecipientsCouldNotRemove(vector_RecipientsCouldNotRemove1[num15]);
    for (size_t num1 = 0; num1 < vector_RecipientsCouldNotRemove1.size(); ++num1)
      {
        vector_RecipientsCouldNotRemove1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONOpenEndedEditRequest(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenEndedEditRequest of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setOpenEndedEditRequest(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONOpenEndedEditRequestAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSContactResultActionJSON *convert_classy = SMSContactResultActionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOpenEndedEditRequestAction(convert_classy);
    convert_classy->remove_reference();
  }

void ComposeSMSCommandNativeDataJSON::fromJSONRemovedAllRecipients(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RemovedAllRecipients of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setRemovedAllRecipients(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONAlreadyHadRecipients(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AlreadyHadRecipients of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setAlreadyHadRecipients(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNotUnderstoodType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodType of ComposeSMSCommandNativeDataJSON is not a string.");
    TypeNotUnderstoodType the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "MS_PHONE_NUMBER") == 0)
                  {
                    the_enum = NotUnderstoodType_SMS_PHONE_NUMBER;
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
    throw("The value for field NotUnderstoodType of ComposeSMSCommandNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setNotUnderstoodType(the_enum);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNotUnderstoodWordsFound(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NotUnderstoodWordsFound of ComposeSMSCommandNativeDataJSON is not a string.");
    setNotUnderstoodWordsFound(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONReadRecipients(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ReadRecipients of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setReadRecipients(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONReadBody(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ReadBody of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setReadBody(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONWordsToReplace(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WordsToReplace of ComposeSMSCommandNativeDataJSON is not a string.");
    setWordsToReplace(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONReplacementWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ReplacementWords of ComposeSMSCommandNativeDataJSON is not a string.");
    setReplacementWords(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONReplaceAll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ReplaceAll of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setReplaceAll(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONReplacementStartIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ReplacementStartIndices of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ReplacementStartIndices of ComposeSMSCommandNativeDataJSON has too few elements.");
    std::vector< OInteger > vector_ReplacementStartIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field ReplacementStartIndices of ComposeSMSCommandNativeDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field ReplacementStartIndices of ComposeSMSCommandNativeDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_ReplacementStartIndices1[num1] = extracted_integer;
      }
    assert(vector_ReplacementStartIndices1.size() >= 1);
    initReplacementStartIndices();
    for (size_t num16 = 0; num16 < vector_ReplacementStartIndices1.size(); ++num16)
        appendReplacementStartIndices(vector_ReplacementStartIndices1[num16]);
    for (size_t num1 = 0; num1 < vector_ReplacementStartIndices1.size(); ++num1)
      {
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONWordsToMatchForInsertion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WordsToMatchForInsertion of ComposeSMSCommandNativeDataJSON is not a string.");
    setWordsToMatchForInsertion(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONInsertionWords(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InsertionWords of ComposeSMSCommandNativeDataJSON is not a string.");
    setInsertionWords(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONInsertBefore(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InsertBefore of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setInsertBefore(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONInsertAll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field InsertAll of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setInsertAll(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONInsertionStartIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InsertionStartIndices of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field InsertionStartIndices of ComposeSMSCommandNativeDataJSON has too few elements.");
    std::vector< OInteger > vector_InsertionStartIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field InsertionStartIndices of ComposeSMSCommandNativeDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field InsertionStartIndices of ComposeSMSCommandNativeDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_InsertionStartIndices1[num1] = extracted_integer;
      }
    assert(vector_InsertionStartIndices1.size() >= 1);
    initInsertionStartIndices();
    for (size_t num17 = 0; num17 < vector_InsertionStartIndices1.size(); ++num17)
        appendInsertionStartIndices(vector_InsertionStartIndices1[num17]);
    for (size_t num1 = 0; num1 < vector_InsertionStartIndices1.size(); ++num1)
      {
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONWordsToDelete(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WordsToDelete of ComposeSMSCommandNativeDataJSON is not a string.");
    setWordsToDelete(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONDeleteAll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DeleteAll of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setDeleteAll(the_bool);
  }

void ComposeSMSCommandNativeDataJSON::fromJSONDeletionStartIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DeletionStartIndices of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DeletionStartIndices of ComposeSMSCommandNativeDataJSON has too few elements.");
    std::vector< OInteger > vector_DeletionStartIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field DeletionStartIndices of ComposeSMSCommandNativeDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field DeletionStartIndices of ComposeSMSCommandNativeDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_DeletionStartIndices1[num1] = extracted_integer;
      }
    assert(vector_DeletionStartIndices1.size() >= 1);
    initDeletionStartIndices();
    for (size_t num18 = 0; num18 < vector_DeletionStartIndices1.size(); ++num18)
        appendDeletionStartIndices(vector_DeletionStartIndices1[num18]);
    for (size_t num1 = 0; num1 < vector_DeletionStartIndices1.size(); ++num1)
      {
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONSpokenErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenErrorMessage of ComposeSMSCommandNativeDataJSON is not a string.");
    setSpokenErrorMessage(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONWrittenErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenErrorMessage of ComposeSMSCommandNativeDataJSON is not a string.");
    setWrittenErrorMessage(std::string(json_string->getData()));
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNewRecipientsAlreadyInSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewRecipientsAlreadyInSMS of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SMSContactResultJSON * > vector_NewRecipientsAlreadyInSMS1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SMSContactResultJSON *convert_classy = SMSContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewRecipientsAlreadyInSMS1[num1] = convert_classy;
      }
    initNewRecipientsAlreadyInSMS();
    for (size_t num19 = 0; num19 < vector_NewRecipientsAlreadyInSMS1.size(); ++num19)
        appendNewRecipientsAlreadyInSMS(vector_NewRecipientsAlreadyInSMS1[num19]);
    for (size_t num1 = 0; num1 < vector_NewRecipientsAlreadyInSMS1.size(); ++num1)
      {
        vector_NewRecipientsAlreadyInSMS1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONNewRecipientsNotInSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NewRecipientsNotInSMS of ComposeSMSCommandNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< SMSContactResultJSON * > vector_NewRecipientsNotInSMS1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SMSContactResultJSON *convert_classy = SMSContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NewRecipientsNotInSMS1[num1] = convert_classy;
      }
    initNewRecipientsNotInSMS();
    for (size_t num20 = 0; num20 < vector_NewRecipientsNotInSMS1.size(); ++num20)
        appendNewRecipientsNotInSMS(vector_NewRecipientsNotInSMS1[num20]);
    for (size_t num1 = 0; num1 < vector_NewRecipientsNotInSMS1.size(); ++num1)
      {
        vector_NewRecipientsNotInSMS1[num1]->remove_reference();
      }
  }

void ComposeSMSCommandNativeDataJSON::fromJSONOverwroteBody(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OverwroteBody of ComposeSMSCommandNativeDataJSON is not true for false.");
          }
      }
    setOverwroteBody(the_bool);
  }

ComposeSMSCommandNativeDataJSON::ComposeSMSCommandNativeDataJSON(void) :
        flagHasSMS(false),
        flagHasEmptyBodyOK(false),
        flagHasFocusHint(false),
        flagHasSendSMSNow(false),
        flagHasLastEditedTextFieldType(false),
        flagHasSMSAlreadyHadRecipients(false),
        flagHasNewBody(false),
        flagHasNewRecipientsInfo(false),
        flagHasSpokenMessageFromPreviousTransaction(false),
        flagHasAutoListen(false),
        flagHasNotUnderstoodUsedWordTo(false),
        flagHasNotUnderstoodWords(false),
        flagHasDeleteType(false),
        flagHasNumToDelete(false),
        flagHasNumDeleted(false),
        flagHasDeleteFromBack(false),
        flagHasNothingToDelete(false),
        flagHasState(false),
        flagHasEditBodyState(false),
        flagHasFirstTimeAddingToBody(false),
        flagHasRecipientsAdded(false),
        flagHasRecipientsRemoved(false),
        flagHasRecipientsCouldNotAdd(false),
        flagHasRecipientsCouldNotRemove(false),
        flagHasOpenEndedEditRequest(false),
        flagHasOpenEndedEditRequestAction(false),
        flagHasRemovedAllRecipients(false),
        flagHasAlreadyHadRecipients(false),
        flagHasNotUnderstoodType(false),
        flagHasNotUnderstoodWordsFound(false),
        flagHasReadRecipients(false),
        flagHasReadBody(false),
        flagHasWordsToReplace(false),
        flagHasReplacementWords(false),
        flagHasReplaceAll(false),
        flagHasReplacementStartIndices(false),
        flagHasWordsToMatchForInsertion(false),
        flagHasInsertionWords(false),
        flagHasInsertBefore(false),
        flagHasInsertAll(false),
        flagHasInsertionStartIndices(false),
        flagHasWordsToDelete(false),
        flagHasDeleteAll(false),
        flagHasDeletionStartIndices(false),
        flagHasSpokenErrorMessage(false),
        flagHasWrittenErrorMessage(false),
        flagHasNewRecipientsAlreadyInSMS(false),
        flagHasNewRecipientsNotInSMS(false),
        flagHasOverwroteBody(false)
  {
    extraIndex = create_string_index();
  }

ComposeSMSCommandNativeDataJSON::~ComposeSMSCommandNativeDataJSON(void)
  {
    if (flagHasSMS)
      {
        storeSMS->remove_reference();
      }
    if (flagHasLastEditedTextFieldType)
      {
        storeLastEditedTextFieldType->remove_reference();
      }
    if (flagHasNewRecipientsInfo)
      {
        for (size_t num22 = 0; num22 < storeNewRecipientsInfo.size(); ++num22)
          {
            storeNewRecipientsInfo[num22]->remove_reference();
          }
      }
    if (flagHasState)
      {
        storeState->remove_reference();
      }
    if (flagHasRecipientsAdded)
      {
        for (size_t num23 = 0; num23 < storeRecipientsAdded.size(); ++num23)
          {
            storeRecipientsAdded[num23]->remove_reference();
          }
      }
    if (flagHasRecipientsRemoved)
      {
        for (size_t num24 = 0; num24 < storeRecipientsRemoved.size(); ++num24)
          {
            storeRecipientsRemoved[num24]->remove_reference();
          }
      }
    if (flagHasRecipientsCouldNotAdd)
      {
        for (size_t num25 = 0; num25 < storeRecipientsCouldNotAdd.size(); ++num25)
          {
            storeRecipientsCouldNotAdd[num25]->remove_reference();
          }
      }
    if (flagHasRecipientsCouldNotRemove)
      {
        for (size_t num26 = 0; num26 < storeRecipientsCouldNotRemove.size(); ++num26)
          {
            storeRecipientsCouldNotRemove[num26]->remove_reference();
          }
      }
    if (flagHasOpenEndedEditRequestAction)
      {
        storeOpenEndedEditRequestAction->remove_reference();
      }
    if (flagHasNewRecipientsAlreadyInSMS)
      {
        for (size_t num27 = 0; num27 < storeNewRecipientsAlreadyInSMS.size(); ++num27)
          {
            storeNewRecipientsAlreadyInSMS[num27]->remove_reference();
          }
      }
    if (flagHasNewRecipientsNotInSMS)
      {
        for (size_t num28 = 0; num28 < storeNewRecipientsNotInSMS.size(); ++num28)
          {
            storeNewRecipientsNotInSMS[num28]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ComposeSMSCommandNativeDataJSON::hasSMS(void) const
  {
    return flagHasSMS;
  }

SMSJSON * ComposeSMSCommandNativeDataJSON::getSMS(void)
  {
    assert(flagHasSMS);
    return storeSMS;
  }

const SMSJSON * ComposeSMSCommandNativeDataJSON::getSMS(void) const
  {
    assert(flagHasSMS);
    return storeSMS;
  }

bool ComposeSMSCommandNativeDataJSON::hasEmptyBodyOK(void) const
  {
    return flagHasEmptyBodyOK;
  }

bool ComposeSMSCommandNativeDataJSON::getEmptyBodyOK(void)
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

const bool ComposeSMSCommandNativeDataJSON::getEmptyBodyOK(void) const
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

bool ComposeSMSCommandNativeDataJSON::hasFocusHint(void) const
  {
    return flagHasFocusHint;
  }

ComposeSMSCommandNativeDataJSON::TypeFocusHint ComposeSMSCommandNativeDataJSON::getFocusHint(void)
  {
    assert(flagHasFocusHint);
    return storeFocusHint;
  }

const ComposeSMSCommandNativeDataJSON::TypeFocusHint ComposeSMSCommandNativeDataJSON::getFocusHint(void) const
  {
    assert(flagHasFocusHint);
    return storeFocusHint;
  }

const char *ComposeSMSCommandNativeDataJSON::getFocusHintAsChars(void) const
  {
    return stringFromFocusHint(getFocusHint());
  }

std::string ComposeSMSCommandNativeDataJSON::getFocusHintAsString(void) const
  {
    return stringFromFocusHint(getFocusHint());
  }

bool ComposeSMSCommandNativeDataJSON::hasSendSMSNow(void) const
  {
    return flagHasSendSMSNow;
  }

bool ComposeSMSCommandNativeDataJSON::getSendSMSNow(void)
  {
    assert(flagHasSendSMSNow);
    return storeSendSMSNow;
  }

const bool ComposeSMSCommandNativeDataJSON::getSendSMSNow(void) const
  {
    assert(flagHasSendSMSNow);
    return storeSendSMSNow;
  }

bool ComposeSMSCommandNativeDataJSON::hasLastEditedTextFieldType(void) const
  {
    return flagHasLastEditedTextFieldType;
  }

SMSFieldTypeJSON * ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldType(void)
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

const SMSFieldTypeJSON * ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldType(void) const
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

SMSFieldTypeJSON::TypeValue ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldTypeValue(void)
  {
    return getLastEditedTextFieldType()->getValue();
  }

const SMSFieldTypeJSON::TypeValue ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldTypeValue(void) const
  {
    return getLastEditedTextFieldType()->getValue();
  }

const char *ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldTypeAsChars(void) const
  {
    return getLastEditedTextFieldType()->getValueAsChars();
  }

std::string ComposeSMSCommandNativeDataJSON::getLastEditedTextFieldTypeAsString(void) const
  {
    return getLastEditedTextFieldType()->getValueAsString();
  }

bool ComposeSMSCommandNativeDataJSON::hasSMSAlreadyHadRecipients(void) const
  {
    return flagHasSMSAlreadyHadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::getSMSAlreadyHadRecipients(void)
  {
    assert(flagHasSMSAlreadyHadRecipients);
    return storeSMSAlreadyHadRecipients;
  }

const bool ComposeSMSCommandNativeDataJSON::getSMSAlreadyHadRecipients(void) const
  {
    assert(flagHasSMSAlreadyHadRecipients);
    return storeSMSAlreadyHadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::hasNewBody(void) const
  {
    return flagHasNewBody;
  }

std::string ComposeSMSCommandNativeDataJSON::getNewBody(void)
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

const std::string ComposeSMSCommandNativeDataJSON::getNewBody(void) const
  {
    assert(flagHasNewBody);
    return storeNewBody;
  }

bool ComposeSMSCommandNativeDataJSON::hasNewRecipientsInfo(void) const
  {
    return flagHasNewRecipientsInfo;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfNewRecipientsInfo(void) const
  {
    assert(flagHasNewRecipientsInfo);
    return storeNewRecipientsInfo.size();
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsInfo(size_t element_num)
  {
    assert(flagHasNewRecipientsInfo);
    return storeNewRecipientsInfo[element_num];
  }

const ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsInfo(size_t element_num) const
  {
    assert(flagHasNewRecipientsInfo);
    return storeNewRecipientsInfo[element_num];
  }

std::vector< ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsInfo(void)
  {
    assert(flagHasNewRecipientsInfo);
    return storeNewRecipientsInfo;
  }

const std::vector< ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsInfo(void) const
  {
    assert(flagHasNewRecipientsInfo);
    return storeNewRecipientsInfo;
  }

bool ComposeSMSCommandNativeDataJSON::hasSpokenMessageFromPreviousTransaction(void) const
  {
    return flagHasSpokenMessageFromPreviousTransaction;
  }

std::string ComposeSMSCommandNativeDataJSON::getSpokenMessageFromPreviousTransaction(void)
  {
    assert(flagHasSpokenMessageFromPreviousTransaction);
    return storeSpokenMessageFromPreviousTransaction;
  }

const std::string ComposeSMSCommandNativeDataJSON::getSpokenMessageFromPreviousTransaction(void) const
  {
    assert(flagHasSpokenMessageFromPreviousTransaction);
    return storeSpokenMessageFromPreviousTransaction;
  }

bool ComposeSMSCommandNativeDataJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool ComposeSMSCommandNativeDataJSON::getAutoListen(void)
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

const bool ComposeSMSCommandNativeDataJSON::getAutoListen(void) const
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

bool ComposeSMSCommandNativeDataJSON::hasNotUnderstoodUsedWordTo(void) const
  {
    return flagHasNotUnderstoodUsedWordTo;
  }

bool ComposeSMSCommandNativeDataJSON::getNotUnderstoodUsedWordTo(void)
  {
    assert(flagHasNotUnderstoodUsedWordTo);
    return storeNotUnderstoodUsedWordTo;
  }

const bool ComposeSMSCommandNativeDataJSON::getNotUnderstoodUsedWordTo(void) const
  {
    assert(flagHasNotUnderstoodUsedWordTo);
    return storeNotUnderstoodUsedWordTo;
  }

bool ComposeSMSCommandNativeDataJSON::hasNotUnderstoodWords(void) const
  {
    return flagHasNotUnderstoodWords;
  }

std::string ComposeSMSCommandNativeDataJSON::getNotUnderstoodWords(void)
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

const std::string ComposeSMSCommandNativeDataJSON::getNotUnderstoodWords(void) const
  {
    assert(flagHasNotUnderstoodWords);
    return storeNotUnderstoodWords;
  }

bool ComposeSMSCommandNativeDataJSON::hasDeleteType(void) const
  {
    return flagHasDeleteType;
  }

ComposeSMSCommandNativeDataJSON::TypeDeleteType ComposeSMSCommandNativeDataJSON::getDeleteType(void)
  {
    assert(flagHasDeleteType);
    return storeDeleteType;
  }

const ComposeSMSCommandNativeDataJSON::TypeDeleteType ComposeSMSCommandNativeDataJSON::getDeleteType(void) const
  {
    assert(flagHasDeleteType);
    return storeDeleteType;
  }

const char *ComposeSMSCommandNativeDataJSON::getDeleteTypeAsChars(void) const
  {
    return stringFromDeleteType(getDeleteType());
  }

std::string ComposeSMSCommandNativeDataJSON::getDeleteTypeAsString(void) const
  {
    return stringFromDeleteType(getDeleteType());
  }

bool ComposeSMSCommandNativeDataJSON::hasNumToDelete(void) const
  {
    return flagHasNumToDelete;
  }

OInteger ComposeSMSCommandNativeDataJSON::getNumToDelete(void)
  {
    assert(flagHasNumToDelete);
    return storeNumToDelete;
  }

const OInteger ComposeSMSCommandNativeDataJSON::getNumToDelete(void) const
  {
    assert(flagHasNumToDelete);
    return storeNumToDelete;
  }

bool ComposeSMSCommandNativeDataJSON::hasNumDeleted(void) const
  {
    return flagHasNumDeleted;
  }

OInteger ComposeSMSCommandNativeDataJSON::getNumDeleted(void)
  {
    assert(flagHasNumDeleted);
    return storeNumDeleted;
  }

const OInteger ComposeSMSCommandNativeDataJSON::getNumDeleted(void) const
  {
    assert(flagHasNumDeleted);
    return storeNumDeleted;
  }

bool ComposeSMSCommandNativeDataJSON::hasDeleteFromBack(void) const
  {
    return flagHasDeleteFromBack;
  }

bool ComposeSMSCommandNativeDataJSON::getDeleteFromBack(void)
  {
    assert(flagHasDeleteFromBack);
    return storeDeleteFromBack;
  }

const bool ComposeSMSCommandNativeDataJSON::getDeleteFromBack(void) const
  {
    assert(flagHasDeleteFromBack);
    return storeDeleteFromBack;
  }

bool ComposeSMSCommandNativeDataJSON::hasNothingToDelete(void) const
  {
    return flagHasNothingToDelete;
  }

bool ComposeSMSCommandNativeDataJSON::getNothingToDelete(void)
  {
    assert(flagHasNothingToDelete);
    return storeNothingToDelete;
  }

const bool ComposeSMSCommandNativeDataJSON::getNothingToDelete(void) const
  {
    assert(flagHasNothingToDelete);
    return storeNothingToDelete;
  }

bool ComposeSMSCommandNativeDataJSON::hasState(void) const
  {
    return flagHasState;
  }

SMSStateJSON * ComposeSMSCommandNativeDataJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const SMSStateJSON * ComposeSMSCommandNativeDataJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

SMSStateJSON::TypeValue ComposeSMSCommandNativeDataJSON::getStateValue(void)
  {
    return getState()->getValue();
  }

const SMSStateJSON::TypeValue ComposeSMSCommandNativeDataJSON::getStateValue(void) const
  {
    return getState()->getValue();
  }

const char *ComposeSMSCommandNativeDataJSON::getStateAsChars(void) const
  {
    return getState()->getValueAsChars();
  }

std::string ComposeSMSCommandNativeDataJSON::getStateAsString(void) const
  {
    return getState()->getValueAsString();
  }

bool ComposeSMSCommandNativeDataJSON::hasEditBodyState(void) const
  {
    return flagHasEditBodyState;
  }

ComposeSMSCommandNativeDataJSON::TypeEditBodyState ComposeSMSCommandNativeDataJSON::getEditBodyState(void)
  {
    assert(flagHasEditBodyState);
    return storeEditBodyState;
  }

const ComposeSMSCommandNativeDataJSON::TypeEditBodyState ComposeSMSCommandNativeDataJSON::getEditBodyState(void) const
  {
    assert(flagHasEditBodyState);
    return storeEditBodyState;
  }

const char *ComposeSMSCommandNativeDataJSON::getEditBodyStateAsChars(void) const
  {
    return stringFromEditBodyState(getEditBodyState());
  }

std::string ComposeSMSCommandNativeDataJSON::getEditBodyStateAsString(void) const
  {
    return stringFromEditBodyState(getEditBodyState());
  }

bool ComposeSMSCommandNativeDataJSON::hasFirstTimeAddingToBody(void) const
  {
    return flagHasFirstTimeAddingToBody;
  }

bool ComposeSMSCommandNativeDataJSON::getFirstTimeAddingToBody(void)
  {
    assert(flagHasFirstTimeAddingToBody);
    return storeFirstTimeAddingToBody;
  }

const bool ComposeSMSCommandNativeDataJSON::getFirstTimeAddingToBody(void) const
  {
    assert(flagHasFirstTimeAddingToBody);
    return storeFirstTimeAddingToBody;
  }

bool ComposeSMSCommandNativeDataJSON::hasRecipientsAdded(void) const
  {
    return flagHasRecipientsAdded;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfRecipientsAdded(void) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded.size();
  }

UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsAdded(size_t element_num)
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded[element_num];
  }

const UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsAdded(size_t element_num) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded[element_num];
  }

std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsAdded(void)
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded;
  }

const std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsAdded(void) const
  {
    assert(flagHasRecipientsAdded);
    return storeRecipientsAdded;
  }

bool ComposeSMSCommandNativeDataJSON::hasRecipientsRemoved(void) const
  {
    return flagHasRecipientsRemoved;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfRecipientsRemoved(void) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved.size();
  }

UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsRemoved(size_t element_num)
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved[element_num];
  }

const UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsRemoved(size_t element_num) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved[element_num];
  }

std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsRemoved(void)
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved;
  }

const std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsRemoved(void) const
  {
    assert(flagHasRecipientsRemoved);
    return storeRecipientsRemoved;
  }

bool ComposeSMSCommandNativeDataJSON::hasRecipientsCouldNotAdd(void) const
  {
    return flagHasRecipientsCouldNotAdd;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfRecipientsCouldNotAdd(void) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd.size();
  }

UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsCouldNotAdd(size_t element_num)
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd[element_num];
  }

const UnambiguousSMSRecipientJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsCouldNotAdd(size_t element_num) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd[element_num];
  }

std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsCouldNotAdd(void)
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd;
  }

const std::vector< UnambiguousSMSRecipientJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsCouldNotAdd(void) const
  {
    assert(flagHasRecipientsCouldNotAdd);
    return storeRecipientsCouldNotAdd;
  }

bool ComposeSMSCommandNativeDataJSON::hasRecipientsCouldNotRemove(void) const
  {
    return flagHasRecipientsCouldNotRemove;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfRecipientsCouldNotRemove(void) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove.size();
  }

SMSRecipientsJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsCouldNotRemove(size_t element_num)
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove[element_num];
  }

const SMSRecipientsJSON * ComposeSMSCommandNativeDataJSON::elementOfRecipientsCouldNotRemove(size_t element_num) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove[element_num];
  }

std::vector< SMSRecipientsJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsCouldNotRemove(void)
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove;
  }

const std::vector< SMSRecipientsJSON * > ComposeSMSCommandNativeDataJSON::getRecipientsCouldNotRemove(void) const
  {
    assert(flagHasRecipientsCouldNotRemove);
    return storeRecipientsCouldNotRemove;
  }

bool ComposeSMSCommandNativeDataJSON::hasOpenEndedEditRequest(void) const
  {
    return flagHasOpenEndedEditRequest;
  }

bool ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequest(void)
  {
    assert(flagHasOpenEndedEditRequest);
    return storeOpenEndedEditRequest;
  }

const bool ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequest(void) const
  {
    assert(flagHasOpenEndedEditRequest);
    return storeOpenEndedEditRequest;
  }

bool ComposeSMSCommandNativeDataJSON::hasOpenEndedEditRequestAction(void) const
  {
    return flagHasOpenEndedEditRequestAction;
  }

SMSContactResultActionJSON * ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestAction(void)
  {
    assert(flagHasOpenEndedEditRequestAction);
    return storeOpenEndedEditRequestAction;
  }

const SMSContactResultActionJSON * ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestAction(void) const
  {
    assert(flagHasOpenEndedEditRequestAction);
    return storeOpenEndedEditRequestAction;
  }

SMSContactResultActionJSON::TypeValue ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestActionValue(void)
  {
    return getOpenEndedEditRequestAction()->getValue();
  }

const SMSContactResultActionJSON::TypeValue ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestActionValue(void) const
  {
    return getOpenEndedEditRequestAction()->getValue();
  }

const char *ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestActionAsChars(void) const
  {
    return getOpenEndedEditRequestAction()->getValueAsChars();
  }

std::string ComposeSMSCommandNativeDataJSON::getOpenEndedEditRequestActionAsString(void) const
  {
    return getOpenEndedEditRequestAction()->getValueAsString();
  }

bool ComposeSMSCommandNativeDataJSON::hasRemovedAllRecipients(void) const
  {
    return flagHasRemovedAllRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::getRemovedAllRecipients(void)
  {
    assert(flagHasRemovedAllRecipients);
    return storeRemovedAllRecipients;
  }

const bool ComposeSMSCommandNativeDataJSON::getRemovedAllRecipients(void) const
  {
    assert(flagHasRemovedAllRecipients);
    return storeRemovedAllRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::hasAlreadyHadRecipients(void) const
  {
    return flagHasAlreadyHadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::getAlreadyHadRecipients(void)
  {
    assert(flagHasAlreadyHadRecipients);
    return storeAlreadyHadRecipients;
  }

const bool ComposeSMSCommandNativeDataJSON::getAlreadyHadRecipients(void) const
  {
    assert(flagHasAlreadyHadRecipients);
    return storeAlreadyHadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::hasNotUnderstoodType(void) const
  {
    return flagHasNotUnderstoodType;
  }

ComposeSMSCommandNativeDataJSON::TypeNotUnderstoodType ComposeSMSCommandNativeDataJSON::getNotUnderstoodType(void)
  {
    assert(flagHasNotUnderstoodType);
    return storeNotUnderstoodType;
  }

const ComposeSMSCommandNativeDataJSON::TypeNotUnderstoodType ComposeSMSCommandNativeDataJSON::getNotUnderstoodType(void) const
  {
    assert(flagHasNotUnderstoodType);
    return storeNotUnderstoodType;
  }

const char *ComposeSMSCommandNativeDataJSON::getNotUnderstoodTypeAsChars(void) const
  {
    return stringFromNotUnderstoodType(getNotUnderstoodType());
  }

std::string ComposeSMSCommandNativeDataJSON::getNotUnderstoodTypeAsString(void) const
  {
    return stringFromNotUnderstoodType(getNotUnderstoodType());
  }

bool ComposeSMSCommandNativeDataJSON::hasNotUnderstoodWordsFound(void) const
  {
    return flagHasNotUnderstoodWordsFound;
  }

std::string ComposeSMSCommandNativeDataJSON::getNotUnderstoodWordsFound(void)
  {
    assert(flagHasNotUnderstoodWordsFound);
    return storeNotUnderstoodWordsFound;
  }

const std::string ComposeSMSCommandNativeDataJSON::getNotUnderstoodWordsFound(void) const
  {
    assert(flagHasNotUnderstoodWordsFound);
    return storeNotUnderstoodWordsFound;
  }

bool ComposeSMSCommandNativeDataJSON::hasReadRecipients(void) const
  {
    return flagHasReadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::getReadRecipients(void)
  {
    assert(flagHasReadRecipients);
    return storeReadRecipients;
  }

const bool ComposeSMSCommandNativeDataJSON::getReadRecipients(void) const
  {
    assert(flagHasReadRecipients);
    return storeReadRecipients;
  }

bool ComposeSMSCommandNativeDataJSON::hasReadBody(void) const
  {
    return flagHasReadBody;
  }

bool ComposeSMSCommandNativeDataJSON::getReadBody(void)
  {
    assert(flagHasReadBody);
    return storeReadBody;
  }

const bool ComposeSMSCommandNativeDataJSON::getReadBody(void) const
  {
    assert(flagHasReadBody);
    return storeReadBody;
  }

bool ComposeSMSCommandNativeDataJSON::hasWordsToReplace(void) const
  {
    return flagHasWordsToReplace;
  }

std::string ComposeSMSCommandNativeDataJSON::getWordsToReplace(void)
  {
    assert(flagHasWordsToReplace);
    return storeWordsToReplace;
  }

const std::string ComposeSMSCommandNativeDataJSON::getWordsToReplace(void) const
  {
    assert(flagHasWordsToReplace);
    return storeWordsToReplace;
  }

bool ComposeSMSCommandNativeDataJSON::hasReplacementWords(void) const
  {
    return flagHasReplacementWords;
  }

std::string ComposeSMSCommandNativeDataJSON::getReplacementWords(void)
  {
    assert(flagHasReplacementWords);
    return storeReplacementWords;
  }

const std::string ComposeSMSCommandNativeDataJSON::getReplacementWords(void) const
  {
    assert(flagHasReplacementWords);
    return storeReplacementWords;
  }

bool ComposeSMSCommandNativeDataJSON::hasReplaceAll(void) const
  {
    return flagHasReplaceAll;
  }

bool ComposeSMSCommandNativeDataJSON::getReplaceAll(void)
  {
    assert(flagHasReplaceAll);
    return storeReplaceAll;
  }

const bool ComposeSMSCommandNativeDataJSON::getReplaceAll(void) const
  {
    assert(flagHasReplaceAll);
    return storeReplaceAll;
  }

bool ComposeSMSCommandNativeDataJSON::hasReplacementStartIndices(void) const
  {
    return flagHasReplacementStartIndices;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfReplacementStartIndices(void) const
  {
    assert(flagHasReplacementStartIndices);
    return storeReplacementStartIndices.size();
  }

OInteger ComposeSMSCommandNativeDataJSON::elementOfReplacementStartIndices(size_t element_num)
  {
    assert(flagHasReplacementStartIndices);
    return storeReplacementStartIndices[element_num];
  }

const OInteger ComposeSMSCommandNativeDataJSON::elementOfReplacementStartIndices(size_t element_num) const
  {
    assert(flagHasReplacementStartIndices);
    return storeReplacementStartIndices[element_num];
  }

std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getReplacementStartIndices(void)
  {
    assert(flagHasReplacementStartIndices);
    return storeReplacementStartIndices;
  }

const std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getReplacementStartIndices(void) const
  {
    assert(flagHasReplacementStartIndices);
    return storeReplacementStartIndices;
  }

bool ComposeSMSCommandNativeDataJSON::hasWordsToMatchForInsertion(void) const
  {
    return flagHasWordsToMatchForInsertion;
  }

std::string ComposeSMSCommandNativeDataJSON::getWordsToMatchForInsertion(void)
  {
    assert(flagHasWordsToMatchForInsertion);
    return storeWordsToMatchForInsertion;
  }

const std::string ComposeSMSCommandNativeDataJSON::getWordsToMatchForInsertion(void) const
  {
    assert(flagHasWordsToMatchForInsertion);
    return storeWordsToMatchForInsertion;
  }

bool ComposeSMSCommandNativeDataJSON::hasInsertionWords(void) const
  {
    return flagHasInsertionWords;
  }

std::string ComposeSMSCommandNativeDataJSON::getInsertionWords(void)
  {
    assert(flagHasInsertionWords);
    return storeInsertionWords;
  }

const std::string ComposeSMSCommandNativeDataJSON::getInsertionWords(void) const
  {
    assert(flagHasInsertionWords);
    return storeInsertionWords;
  }

bool ComposeSMSCommandNativeDataJSON::hasInsertBefore(void) const
  {
    return flagHasInsertBefore;
  }

bool ComposeSMSCommandNativeDataJSON::getInsertBefore(void)
  {
    assert(flagHasInsertBefore);
    return storeInsertBefore;
  }

const bool ComposeSMSCommandNativeDataJSON::getInsertBefore(void) const
  {
    assert(flagHasInsertBefore);
    return storeInsertBefore;
  }

bool ComposeSMSCommandNativeDataJSON::hasInsertAll(void) const
  {
    return flagHasInsertAll;
  }

bool ComposeSMSCommandNativeDataJSON::getInsertAll(void)
  {
    assert(flagHasInsertAll);
    return storeInsertAll;
  }

const bool ComposeSMSCommandNativeDataJSON::getInsertAll(void) const
  {
    assert(flagHasInsertAll);
    return storeInsertAll;
  }

bool ComposeSMSCommandNativeDataJSON::hasInsertionStartIndices(void) const
  {
    return flagHasInsertionStartIndices;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfInsertionStartIndices(void) const
  {
    assert(flagHasInsertionStartIndices);
    return storeInsertionStartIndices.size();
  }

OInteger ComposeSMSCommandNativeDataJSON::elementOfInsertionStartIndices(size_t element_num)
  {
    assert(flagHasInsertionStartIndices);
    return storeInsertionStartIndices[element_num];
  }

const OInteger ComposeSMSCommandNativeDataJSON::elementOfInsertionStartIndices(size_t element_num) const
  {
    assert(flagHasInsertionStartIndices);
    return storeInsertionStartIndices[element_num];
  }

std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getInsertionStartIndices(void)
  {
    assert(flagHasInsertionStartIndices);
    return storeInsertionStartIndices;
  }

const std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getInsertionStartIndices(void) const
  {
    assert(flagHasInsertionStartIndices);
    return storeInsertionStartIndices;
  }

bool ComposeSMSCommandNativeDataJSON::hasWordsToDelete(void) const
  {
    return flagHasWordsToDelete;
  }

std::string ComposeSMSCommandNativeDataJSON::getWordsToDelete(void)
  {
    assert(flagHasWordsToDelete);
    return storeWordsToDelete;
  }

const std::string ComposeSMSCommandNativeDataJSON::getWordsToDelete(void) const
  {
    assert(flagHasWordsToDelete);
    return storeWordsToDelete;
  }

bool ComposeSMSCommandNativeDataJSON::hasDeleteAll(void) const
  {
    return flagHasDeleteAll;
  }

bool ComposeSMSCommandNativeDataJSON::getDeleteAll(void)
  {
    assert(flagHasDeleteAll);
    return storeDeleteAll;
  }

const bool ComposeSMSCommandNativeDataJSON::getDeleteAll(void) const
  {
    assert(flagHasDeleteAll);
    return storeDeleteAll;
  }

bool ComposeSMSCommandNativeDataJSON::hasDeletionStartIndices(void) const
  {
    return flagHasDeletionStartIndices;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfDeletionStartIndices(void) const
  {
    assert(flagHasDeletionStartIndices);
    return storeDeletionStartIndices.size();
  }

OInteger ComposeSMSCommandNativeDataJSON::elementOfDeletionStartIndices(size_t element_num)
  {
    assert(flagHasDeletionStartIndices);
    return storeDeletionStartIndices[element_num];
  }

const OInteger ComposeSMSCommandNativeDataJSON::elementOfDeletionStartIndices(size_t element_num) const
  {
    assert(flagHasDeletionStartIndices);
    return storeDeletionStartIndices[element_num];
  }

std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getDeletionStartIndices(void)
  {
    assert(flagHasDeletionStartIndices);
    return storeDeletionStartIndices;
  }

const std::vector< OInteger > ComposeSMSCommandNativeDataJSON::getDeletionStartIndices(void) const
  {
    assert(flagHasDeletionStartIndices);
    return storeDeletionStartIndices;
  }

bool ComposeSMSCommandNativeDataJSON::hasSpokenErrorMessage(void) const
  {
    return flagHasSpokenErrorMessage;
  }

std::string ComposeSMSCommandNativeDataJSON::getSpokenErrorMessage(void)
  {
    assert(flagHasSpokenErrorMessage);
    return storeSpokenErrorMessage;
  }

const std::string ComposeSMSCommandNativeDataJSON::getSpokenErrorMessage(void) const
  {
    assert(flagHasSpokenErrorMessage);
    return storeSpokenErrorMessage;
  }

bool ComposeSMSCommandNativeDataJSON::hasWrittenErrorMessage(void) const
  {
    return flagHasWrittenErrorMessage;
  }

std::string ComposeSMSCommandNativeDataJSON::getWrittenErrorMessage(void)
  {
    assert(flagHasWrittenErrorMessage);
    return storeWrittenErrorMessage;
  }

const std::string ComposeSMSCommandNativeDataJSON::getWrittenErrorMessage(void) const
  {
    assert(flagHasWrittenErrorMessage);
    return storeWrittenErrorMessage;
  }

bool ComposeSMSCommandNativeDataJSON::hasNewRecipientsAlreadyInSMS(void) const
  {
    return flagHasNewRecipientsAlreadyInSMS;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfNewRecipientsAlreadyInSMS(void) const
  {
    assert(flagHasNewRecipientsAlreadyInSMS);
    return storeNewRecipientsAlreadyInSMS.size();
  }

SMSContactResultJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsAlreadyInSMS(size_t element_num)
  {
    assert(flagHasNewRecipientsAlreadyInSMS);
    return storeNewRecipientsAlreadyInSMS[element_num];
  }

const SMSContactResultJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsAlreadyInSMS(size_t element_num) const
  {
    assert(flagHasNewRecipientsAlreadyInSMS);
    return storeNewRecipientsAlreadyInSMS[element_num];
  }

std::vector< SMSContactResultJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsAlreadyInSMS(void)
  {
    assert(flagHasNewRecipientsAlreadyInSMS);
    return storeNewRecipientsAlreadyInSMS;
  }

const std::vector< SMSContactResultJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsAlreadyInSMS(void) const
  {
    assert(flagHasNewRecipientsAlreadyInSMS);
    return storeNewRecipientsAlreadyInSMS;
  }

bool ComposeSMSCommandNativeDataJSON::hasNewRecipientsNotInSMS(void) const
  {
    return flagHasNewRecipientsNotInSMS;
  }

size_t ComposeSMSCommandNativeDataJSON::countOfNewRecipientsNotInSMS(void) const
  {
    assert(flagHasNewRecipientsNotInSMS);
    return storeNewRecipientsNotInSMS.size();
  }

SMSContactResultJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsNotInSMS(size_t element_num)
  {
    assert(flagHasNewRecipientsNotInSMS);
    return storeNewRecipientsNotInSMS[element_num];
  }

const SMSContactResultJSON * ComposeSMSCommandNativeDataJSON::elementOfNewRecipientsNotInSMS(size_t element_num) const
  {
    assert(flagHasNewRecipientsNotInSMS);
    return storeNewRecipientsNotInSMS[element_num];
  }

std::vector< SMSContactResultJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsNotInSMS(void)
  {
    assert(flagHasNewRecipientsNotInSMS);
    return storeNewRecipientsNotInSMS;
  }

const std::vector< SMSContactResultJSON * > ComposeSMSCommandNativeDataJSON::getNewRecipientsNotInSMS(void) const
  {
    assert(flagHasNewRecipientsNotInSMS);
    return storeNewRecipientsNotInSMS;
  }

bool ComposeSMSCommandNativeDataJSON::hasOverwroteBody(void) const
  {
    return flagHasOverwroteBody;
  }

bool ComposeSMSCommandNativeDataJSON::getOverwroteBody(void)
  {
    assert(flagHasOverwroteBody);
    return storeOverwroteBody;
  }

const bool ComposeSMSCommandNativeDataJSON::getOverwroteBody(void) const
  {
    assert(flagHasOverwroteBody);
    return storeOverwroteBody;
  }

ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON *ComposeSMSCommandNativeDataJSON::TypeNewRecipientsInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNewRecipientsInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNewRecipientsInfoJSON>, TypeNewRecipientsInfoJSON *, bool> generator("Type TypeNewRecipientsInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char ComposeSMSCommandNativeDataJSON::Generator::lowerBoundNumToDelete[] = "0";
char ComposeSMSCommandNativeDataJSON::Generator::lowerBoundNumDeleted[] = "0";
char ComposeSMSCommandNativeDataJSON::Generator::lowerBoundReplacementStartIndices[] = "0";
char ComposeSMSCommandNativeDataJSON::Generator::lowerBoundInsertionStartIndices[] = "0";
char ComposeSMSCommandNativeDataJSON::Generator::lowerBoundDeletionStartIndices[] = "0";
ComposeSMSCommandNativeDataJSON *ComposeSMSCommandNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ComposeSMSCommandNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ComposeSMSCommandNativeDataJSON>, ComposeSMSCommandNativeDataJSON *, bool> generator("Type ComposeSMSCommandNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
