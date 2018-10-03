/* file "SMSConversationStateContentJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSConversationStateContentJSON.h"

#include "SMSConversationStateContentJSON.h"


SMSConversationStateContentJSON::TypeCommandKind SMSConversationStateContentJSON::stringToCommandKind(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "omposeSMSCommand") == 0)
                return CommandKind_ComposeSMSCommand;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "iscardSMSCommand") == 0)
                return CommandKind_DiscardSMSCommand;
            break;
        default:
            break;
      }
    throw("The value for field `CommandKind' is not one of the legal values.");
  }

const char *SMSConversationStateContentJSON::stringFromCommandKind(TypeCommandKind the_enum)
  {
    switch (the_enum)
      {
        case CommandKind_ComposeSMSCommand:
            return "ComposeSMSCommand";
        case CommandKind_DiscardSMSCommand:
            return "DiscardSMSCommand";
        default:
            assert(false);
            return NULL;
      }
  }

SMSConversationStateContentJSON::TypeComposeSMSCommandKind SMSConversationStateContentJSON::stringToComposeSMSCommandKind(const char *chars)
  {
    if (strncmp(chars, "SMS", 3) == 0)
      {
        switch ((unsigned char)(chars[3]))
          {
            case 'A':
                if (strcmp(&(chars[4]), "ddNonspecificRecipientsCommand") == 0)
                    return ComposeSMSCommandKind_SMSAddNonspecificRecipientsCommand;
                break;
            case 'C':
                if (strncmp(&(chars[4]), "reate", 5) == 0)
                  {
                    switch ((unsigned char)(chars[9]))
                      {
                        case 'C':
                            if (strcmp(&(chars[10]), "ommand") == 0)
                                return ComposeSMSCommandKind_SMSCreateCommand;
                            break;
                        case 'W':
                            if (strcmp(&(chars[10]), "ithNotUnderstoodArgsCommand") == 0)
                                return ComposeSMSCommandKind_SMSCreateWithNotUnderstoodArgsCommand;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(chars[4]))
                  {
                    case 'e':
                        if (strncmp(&(chars[5]), "lete", 4) == 0)
                          {
                            switch ((unsigned char)(chars[9]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[10]), "odyCommand") == 0)
                                        return ComposeSMSCommandKind_SMSDeleteBodyCommand;
                                    break;
                                case 'M':
                                    if (strcmp(&(chars[10]), "essageCommand") == 0)
                                        return ComposeSMSCommandKind_SMSDeleteMessageCommand;
                                    break;
                                case 'S':
                                    switch ((unsigned char)(chars[10]))
                                      {
                                        case 'e':
                                            if (strcmp(&(chars[11]), "ntencesCommand") == 0)
                                                return ComposeSMSCommandKind_SMSDeleteSentencesCommand;
                                            break;
                                        case 'p':
                                            if (strcmp(&(chars[11]), "ecificWordsCommand") == 0)
                                                return ComposeSMSCommandKind_SMSDeleteSpecificWordsCommand;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'W':
                                    if (strcmp(&(chars[10]), "ordsCommand") == 0)
                                        return ComposeSMSCommandKind_SMSDeleteWordsCommand;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strcmp(&(chars[5]), "scardCommand") == 0)
                            return ComposeSMSCommandKind_SMSDiscardCommand;
                        break;
                    default:
                        break;
                  }
                break;
            case 'E':
                switch ((unsigned char)(chars[4]))
                  {
                    case 'd':
                        if (strncmp(&(chars[5]), "it", 2) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[8]), "odyCommand") == 0)
                                        return ComposeSMSCommandKind_SMSEditBodyCommand;
                                    break;
                                case 'R':
                                    if (strcmp(&(chars[8]), "ecipientsCommand") == 0)
                                        return ComposeSMSCommandKind_SMSEditRecipientsCommand;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'm':
                        if (strcmp(&(chars[5]), "ptyBodyOkFollowupCommand") == 0)
                            return ComposeSMSCommandKind_SMSEmptyBodyOkFollowupCommand;
                        break;
                    case 'r':
                        if (strcmp(&(chars[5]), "rorCommand") == 0)
                            return ComposeSMSCommandKind_SMSErrorCommand;
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(chars[4]), "nsertWordsCommand") == 0)
                    return ComposeSMSCommandKind_SMSInsertWordsCommand;
                break;
            case 'N':
                if (strcmp(&(chars[4]), "otUnderstoodCommand") == 0)
                    return ComposeSMSCommandKind_SMSNotUnderstoodCommand;
                break;
            case 'R':
                if (strncmp(&(chars[4]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(chars[5]))
                      {
                        case 'a':
                            if (strncmp(&(chars[6]), "d", 1) == 0)
                              {
                                switch ((unsigned char)(chars[7]))
                                  {
                                    case 'B':
                                        if (strcmp(&(chars[8]), "ackCommand") == 0)
                                            return ComposeSMSCommandKind_SMSReadBackCommand;
                                        break;
                                    case 'y':
                                        if (strcmp(&(chars[8]), "FollowupCommand") == 0)
                                            return ComposeSMSCommandKind_SMSReadyFollowupCommand;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'm':
                            if (strncmp(&(chars[6]), "ove", 3) == 0)
                              {
                                switch ((unsigned char)(chars[9]))
                                  {
                                    case 'N':
                                        if (strcmp(&(chars[10]), "onspecificRecipientsCommand") == 0)
                                            return ComposeSMSCommandKind_SMSRemoveNonspecificRecipientsCommand;
                                        break;
                                    case 'R':
                                        if (strcmp(&(chars[10]), "ecipientsFollowupCommand") == 0)
                                            return ComposeSMSCommandKind_SMSRemoveRecipientsFollowupCommand;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (strcmp(&(chars[6]), "laceWordsCommand") == 0)
                                return ComposeSMSCommandKind_SMSReplaceWordsCommand;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(chars[4]), "end", 3) == 0)
                  {
                    switch ((unsigned char)(chars[7]))
                      {
                        case 'C':
                            if (strcmp(&(chars[8]), "ommand") == 0)
                                return ComposeSMSCommandKind_SMSSendCommand;
                            break;
                        case 'I':
                            if (strcmp(&(chars[8]), "tNowFollowupCommand") == 0)
                                return ComposeSMSCommandKind_SMSSendItNowFollowupCommand;
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(chars[4]), "ordsTo", 6) == 0)
                  {
                    switch ((unsigned char)(chars[10]))
                      {
                        case 'D':
                            if (strcmp(&(chars[11]), "eleteNotFoundCommand") == 0)
                                return ComposeSMSCommandKind_SMSWordsToDeleteNotFoundCommand;
                            break;
                        case 'M':
                            if (strcmp(&(chars[11]), "atchForInsertionNotFoundCommand") == 0)
                                return ComposeSMSCommandKind_SMSWordsToMatchForInsertionNotFoundCommand;
                            break;
                        case 'R':
                            if (strcmp(&(chars[11]), "eplaceNotFoundCommand") == 0)
                                return ComposeSMSCommandKind_SMSWordsToReplaceNotFoundCommand;
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
    throw("The value for field `ComposeSMSCommandKind' is not one of the legal values.");
  }

const char *SMSConversationStateContentJSON::stringFromComposeSMSCommandKind(TypeComposeSMSCommandKind the_enum)
  {
    switch (the_enum)
      {
        case ComposeSMSCommandKind_SMSAddNonspecificRecipientsCommand:
            return "SMSAddNonspecificRecipientsCommand";
        case ComposeSMSCommandKind_SMSCreateCommand:
            return "SMSCreateCommand";
        case ComposeSMSCommandKind_SMSCreateWithNotUnderstoodArgsCommand:
            return "SMSCreateWithNotUnderstoodArgsCommand";
        case ComposeSMSCommandKind_SMSDeleteSentencesCommand:
            return "SMSDeleteSentencesCommand";
        case ComposeSMSCommandKind_SMSDeleteBodyCommand:
            return "SMSDeleteBodyCommand";
        case ComposeSMSCommandKind_SMSDeleteMessageCommand:
            return "SMSDeleteMessageCommand";
        case ComposeSMSCommandKind_SMSDeleteSpecificWordsCommand:
            return "SMSDeleteSpecificWordsCommand";
        case ComposeSMSCommandKind_SMSDeleteWordsCommand:
            return "SMSDeleteWordsCommand";
        case ComposeSMSCommandKind_SMSDiscardCommand:
            return "SMSDiscardCommand";
        case ComposeSMSCommandKind_SMSEditBodyCommand:
            return "SMSEditBodyCommand";
        case ComposeSMSCommandKind_SMSEditRecipientsCommand:
            return "SMSEditRecipientsCommand";
        case ComposeSMSCommandKind_SMSEmptyBodyOkFollowupCommand:
            return "SMSEmptyBodyOkFollowupCommand";
        case ComposeSMSCommandKind_SMSErrorCommand:
            return "SMSErrorCommand";
        case ComposeSMSCommandKind_SMSInsertWordsCommand:
            return "SMSInsertWordsCommand";
        case ComposeSMSCommandKind_SMSNotUnderstoodCommand:
            return "SMSNotUnderstoodCommand";
        case ComposeSMSCommandKind_SMSReadBackCommand:
            return "SMSReadBackCommand";
        case ComposeSMSCommandKind_SMSReadyFollowupCommand:
            return "SMSReadyFollowupCommand";
        case ComposeSMSCommandKind_SMSRemoveNonspecificRecipientsCommand:
            return "SMSRemoveNonspecificRecipientsCommand";
        case ComposeSMSCommandKind_SMSRemoveRecipientsFollowupCommand:
            return "SMSRemoveRecipientsFollowupCommand";
        case ComposeSMSCommandKind_SMSReplaceWordsCommand:
            return "SMSReplaceWordsCommand";
        case ComposeSMSCommandKind_SMSSendCommand:
            return "SMSSendCommand";
        case ComposeSMSCommandKind_SMSSendItNowFollowupCommand:
            return "SMSSendItNowFollowupCommand";
        case ComposeSMSCommandKind_SMSWordsToDeleteNotFoundCommand:
            return "SMSWordsToDeleteNotFoundCommand";
        case ComposeSMSCommandKind_SMSWordsToReplaceNotFoundCommand:
            return "SMSWordsToReplaceNotFoundCommand";
        case ComposeSMSCommandKind_SMSWordsToMatchForInsertionNotFoundCommand:
            return "SMSWordsToMatchForInsertionNotFoundCommand";
        default:
            assert(false);
            return NULL;
      }
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON::TypePropagatedDataJSON(const TypePropagatedDataJSON &)
  {
    assert(false);
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON &SMSConversationStateContentJSON::TypePropagatedDataJSON::operator=(const TypePropagatedDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSConversationStateContentJSON::TypePropagatedDataJSON::fromJSONSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSJSON *convert_classy = SMSJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSMS(convert_classy);
    convert_classy->remove_reference();
  }

void SMSConversationStateContentJSON::TypePropagatedDataJSON::fromJSONEmptyBodyOK(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field EmptyBodyOK of TypePropagatedDataJSON is not true for false.");
          }
      }
    setEmptyBodyOK(the_bool);
  }

void SMSConversationStateContentJSON::TypePropagatedDataJSON::fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSFieldTypeJSON *convert_classy = SMSFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastEditedTextFieldType(convert_classy);
    convert_classy->remove_reference();
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON::TypePropagatedDataJSON(void) :
        flagHasSMS(false),
        flagHasEmptyBodyOK(false),
        flagHasLastEditedTextFieldType(false)
  {
    extraIndex = create_string_index();
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON::~TypePropagatedDataJSON(void)
  {
    if (flagHasSMS)
      {
        storeSMS->remove_reference();
      }
    if (flagHasLastEditedTextFieldType)
      {
        storeLastEditedTextFieldType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSConversationStateContentJSON::TypePropagatedDataJSON::hasSMS(void) const
  {
    return flagHasSMS;
  }

SMSJSON * SMSConversationStateContentJSON::TypePropagatedDataJSON::getSMS(void)
  {
    assert(flagHasSMS);
    return storeSMS;
  }

const SMSJSON * SMSConversationStateContentJSON::TypePropagatedDataJSON::getSMS(void) const
  {
    assert(flagHasSMS);
    return storeSMS;
  }

bool SMSConversationStateContentJSON::TypePropagatedDataJSON::hasEmptyBodyOK(void) const
  {
    return flagHasEmptyBodyOK;
  }

bool SMSConversationStateContentJSON::TypePropagatedDataJSON::getEmptyBodyOK(void)
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

const bool SMSConversationStateContentJSON::TypePropagatedDataJSON::getEmptyBodyOK(void) const
  {
    assert(flagHasEmptyBodyOK);
    return storeEmptyBodyOK;
  }

bool SMSConversationStateContentJSON::TypePropagatedDataJSON::hasLastEditedTextFieldType(void) const
  {
    return flagHasLastEditedTextFieldType;
  }

SMSFieldTypeJSON * SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldType(void)
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

const SMSFieldTypeJSON * SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldType(void) const
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

SMSFieldTypeJSON::TypeValue SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldTypeValue(void)
  {
    return getLastEditedTextFieldType()->getValue();
  }

const SMSFieldTypeJSON::TypeValue SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldTypeValue(void) const
  {
    return getLastEditedTextFieldType()->getValue();
  }

const char *SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldTypeAsChars(void) const
  {
    return getLastEditedTextFieldType()->getValueAsChars();
  }

std::string SMSConversationStateContentJSON::TypePropagatedDataJSON::getLastEditedTextFieldTypeAsString(void) const
  {
    return getLastEditedTextFieldType()->getValueAsString();
  }

SMSConversationStateContentJSON::TypeSMSDynamicResponseKind SMSConversationStateContentJSON::stringToSMSDynamicResponseKind(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "omposeSMSResult") == 0)
                return SMSDynamicResponseKind_ComposeSMSResult;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "isambiguatePhoneNumberResult") == 0)
                return SMSDynamicResponseKind_DisambiguatePhoneNumberResult;
            break;
        case 'E':
            if (strcmp(&(chars[1]), "xitSMSResult") == 0)
                return SMSDynamicResponseKind_ExitSMSResult;
            break;
        case 'F':
            if (strcmp(&(chars[1]), "ailed") == 0)
                return SMSDynamicResponseKind_Failed;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "oSMSAppResult") == 0)
                return SMSDynamicResponseKind_NoSMSAppResult;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "n", 1) == 0)
                      {
                        switch ((unsigned char)(chars[3]))
                          {
                            case 'd':
                                if (strcmp(&(chars[4]), "ingSMSResult") == 0)
                                    return SMSDynamicResponseKind_SendingSMSResult;
                                break;
                            case 't':
                                if (strcmp(&(chars[4]), "SMSResult") == 0)
                                    return SMSDynamicResponseKind_SentSMSResult;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "cceeded") == 0)
                        return SMSDynamicResponseKind_Succeeded;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field `SMSDynamicResponseKind' is not one of the legal values.");
  }

const char *SMSConversationStateContentJSON::stringFromSMSDynamicResponseKind(TypeSMSDynamicResponseKind the_enum)
  {
    switch (the_enum)
      {
        case SMSDynamicResponseKind_NoSMSAppResult:
            return "NoSMSAppResult";
        case SMSDynamicResponseKind_ComposeSMSResult:
            return "ComposeSMSResult";
        case SMSDynamicResponseKind_DisambiguatePhoneNumberResult:
            return "DisambiguatePhoneNumberResult";
        case SMSDynamicResponseKind_SendingSMSResult:
            return "SendingSMSResult";
        case SMSDynamicResponseKind_SentSMSResult:
            return "SentSMSResult";
        case SMSDynamicResponseKind_ExitSMSResult:
            return "ExitSMSResult";
        case SMSDynamicResponseKind_Succeeded:
            return "Succeeded";
        case SMSDynamicResponseKind_Failed:
            return "Failed";
        default:
            assert(false);
            return NULL;
      }
  }

SMSConversationStateContentJSON::SMSConversationStateContentJSON(const SMSConversationStateContentJSON &)
  {
    assert(false);
  }

SMSConversationStateContentJSON &SMSConversationStateContentJSON::operator=(const SMSConversationStateContentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSConversationStateContentJSON::fromJSONCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandKind of SMSConversationStateContentJSON is not a string.");
    TypeCommandKind the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "omposeSMSCommand") == 0)
                  {
                    the_enum = CommandKind_ComposeSMSCommand;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "iscardSMSCommand") == 0)
                  {
                    the_enum = CommandKind_DiscardSMSCommand;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CommandKind of SMSConversationStateContentJSON is not one of the legal strings.");
  enum_is_done:;
    setCommandKind(the_enum);
  }

void SMSConversationStateContentJSON::fromJSONComposeSMSCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ComposeSMSCommandKind of SMSConversationStateContentJSON is not a string.");
    TypeComposeSMSCommandKind the_enum;
    if (strncmp(json_string->getData(), "SMS", 3) == 0)
      {
        switch ((unsigned char)(json_string->getData()[3]))
          {
            case 'A':
                if (strcmp(&(json_string->getData()[4]), "ddNonspecificRecipientsCommand") == 0)
                      {
                        the_enum = ComposeSMSCommandKind_SMSAddNonspecificRecipientsCommand;
                        goto enum_is_done;
                      }
                break;
            case 'C':
                if (strncmp(&(json_string->getData()[4]), "reate", 5) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[9]))
                      {
                        case 'C':
                            if (strcmp(&(json_string->getData()[10]), "ommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSCreateCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'W':
                            if (strcmp(&(json_string->getData()[10]), "ithNotUnderstoodArgsCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSCreateWithNotUnderstoodArgsCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'D':
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'e':
                        if (strncmp(&(json_string->getData()[5]), "lete", 4) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[9]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[10]), "odyCommand") == 0)
                                          {
                                            the_enum = ComposeSMSCommandKind_SMSDeleteBodyCommand;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'M':
                                    if (strcmp(&(json_string->getData()[10]), "essageCommand") == 0)
                                          {
                                            the_enum = ComposeSMSCommandKind_SMSDeleteMessageCommand;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'S':
                                    switch ((unsigned char)(json_string->getData()[10]))
                                      {
                                        case 'e':
                                            if (strcmp(&(json_string->getData()[11]), "ntencesCommand") == 0)
                                                  {
                                                    the_enum = ComposeSMSCommandKind_SMSDeleteSentencesCommand;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        case 'p':
                                            if (strcmp(&(json_string->getData()[11]), "ecificWordsCommand") == 0)
                                                  {
                                                    the_enum = ComposeSMSCommandKind_SMSDeleteSpecificWordsCommand;
                                                    goto enum_is_done;
                                                  }
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'W':
                                    if (strcmp(&(json_string->getData()[10]), "ordsCommand") == 0)
                                          {
                                            the_enum = ComposeSMSCommandKind_SMSDeleteWordsCommand;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'i':
                        if (strcmp(&(json_string->getData()[5]), "scardCommand") == 0)
                              {
                                the_enum = ComposeSMSCommandKind_SMSDiscardCommand;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'E':
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'd':
                        if (strncmp(&(json_string->getData()[5]), "it", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[8]), "odyCommand") == 0)
                                          {
                                            the_enum = ComposeSMSCommandKind_SMSEditBodyCommand;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'R':
                                    if (strcmp(&(json_string->getData()[8]), "ecipientsCommand") == 0)
                                          {
                                            the_enum = ComposeSMSCommandKind_SMSEditRecipientsCommand;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'm':
                        if (strcmp(&(json_string->getData()[5]), "ptyBodyOkFollowupCommand") == 0)
                              {
                                the_enum = ComposeSMSCommandKind_SMSEmptyBodyOkFollowupCommand;
                                goto enum_is_done;
                              }
                        break;
                    case 'r':
                        if (strcmp(&(json_string->getData()[5]), "rorCommand") == 0)
                              {
                                the_enum = ComposeSMSCommandKind_SMSErrorCommand;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
                break;
            case 'I':
                if (strcmp(&(json_string->getData()[4]), "nsertWordsCommand") == 0)
                      {
                        the_enum = ComposeSMSCommandKind_SMSInsertWordsCommand;
                        goto enum_is_done;
                      }
                break;
            case 'N':
                if (strcmp(&(json_string->getData()[4]), "otUnderstoodCommand") == 0)
                      {
                        the_enum = ComposeSMSCommandKind_SMSNotUnderstoodCommand;
                        goto enum_is_done;
                      }
                break;
            case 'R':
                if (strncmp(&(json_string->getData()[4]), "e", 1) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[5]))
                      {
                        case 'a':
                            if (strncmp(&(json_string->getData()[6]), "d", 1) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[7]))
                                  {
                                    case 'B':
                                        if (strcmp(&(json_string->getData()[8]), "ackCommand") == 0)
                                              {
                                                the_enum = ComposeSMSCommandKind_SMSReadBackCommand;
                                                goto enum_is_done;
                                              }
                                        break;
                                    case 'y':
                                        if (strcmp(&(json_string->getData()[8]), "FollowupCommand") == 0)
                                              {
                                                the_enum = ComposeSMSCommandKind_SMSReadyFollowupCommand;
                                                goto enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'm':
                            if (strncmp(&(json_string->getData()[6]), "ove", 3) == 0)
                              {
                                switch ((unsigned char)(json_string->getData()[9]))
                                  {
                                    case 'N':
                                        if (strcmp(&(json_string->getData()[10]), "onspecificRecipientsCommand") == 0)
                                              {
                                                the_enum = ComposeSMSCommandKind_SMSRemoveNonspecificRecipientsCommand;
                                                goto enum_is_done;
                                              }
                                        break;
                                    case 'R':
                                        if (strcmp(&(json_string->getData()[10]), "ecipientsFollowupCommand") == 0)
                                              {
                                                the_enum = ComposeSMSCommandKind_SMSRemoveRecipientsFollowupCommand;
                                                goto enum_is_done;
                                              }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (strcmp(&(json_string->getData()[6]), "laceWordsCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSReplaceWordsCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'S':
                if (strncmp(&(json_string->getData()[4]), "end", 3) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[7]))
                      {
                        case 'C':
                            if (strcmp(&(json_string->getData()[8]), "ommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSSendCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'I':
                            if (strcmp(&(json_string->getData()[8]), "tNowFollowupCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSSendItNowFollowupCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'W':
                if (strncmp(&(json_string->getData()[4]), "ordsTo", 6) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[10]))
                      {
                        case 'D':
                            if (strcmp(&(json_string->getData()[11]), "eleteNotFoundCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSWordsToDeleteNotFoundCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'M':
                            if (strcmp(&(json_string->getData()[11]), "atchForInsertionNotFoundCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSWordsToMatchForInsertionNotFoundCommand;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'R':
                            if (strcmp(&(json_string->getData()[11]), "eplaceNotFoundCommand") == 0)
                                  {
                                    the_enum = ComposeSMSCommandKind_SMSWordsToReplaceNotFoundCommand;
                                    goto enum_is_done;
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
    throw("The value for field ComposeSMSCommandKind of SMSConversationStateContentJSON is not one of the legal strings.");
  enum_is_done:;
    setComposeSMSCommandKind(the_enum);
  }

void SMSConversationStateContentJSON::fromJSONPropagatedData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypePropagatedDataJSON *convert_classy = TypePropagatedDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPropagatedData(convert_classy);
    convert_classy->remove_reference();
  }

void SMSConversationStateContentJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSStateJSON *convert_classy = SMSStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setState(convert_classy);
    convert_classy->remove_reference();
  }

void SMSConversationStateContentJSON::fromJSONSMSDynamicResponseKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SMSDynamicResponseKind of SMSConversationStateContentJSON is not a string.");
    TypeSMSDynamicResponseKind the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "omposeSMSResult") == 0)
                  {
                    the_enum = SMSDynamicResponseKind_ComposeSMSResult;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "isambiguatePhoneNumberResult") == 0)
                  {
                    the_enum = SMSDynamicResponseKind_DisambiguatePhoneNumberResult;
                    goto enum_is_done;
                  }
            break;
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xitSMSResult") == 0)
                  {
                    the_enum = SMSDynamicResponseKind_ExitSMSResult;
                    goto enum_is_done;
                  }
            break;
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ailed") == 0)
                  {
                    the_enum = SMSDynamicResponseKind_Failed;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "oSMSAppResult") == 0)
                  {
                    the_enum = SMSDynamicResponseKind_NoSMSAppResult;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "n", 1) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[3]))
                          {
                            case 'd':
                                if (strcmp(&(json_string->getData()[4]), "ingSMSResult") == 0)
                                      {
                                        the_enum = SMSDynamicResponseKind_SendingSMSResult;
                                        goto enum_is_done;
                                      }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[4]), "SMSResult") == 0)
                                      {
                                        the_enum = SMSDynamicResponseKind_SentSMSResult;
                                        goto enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "cceeded") == 0)
                          {
                            the_enum = SMSDynamicResponseKind_Succeeded;
                            goto enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    throw("The value for field SMSDynamicResponseKind of SMSConversationStateContentJSON is not one of the legal strings.");
  enum_is_done:;
    setSMSDynamicResponseKind(the_enum);
  }

SMSConversationStateContentJSON::SMSConversationStateContentJSON(void) :
        flagHasCommandKind(false),
        flagHasComposeSMSCommandKind(false),
        flagHasPropagatedData(false),
        flagHasState(false),
        flagHasSMSDynamicResponseKind(false)
  {
    extraIndex = create_string_index();
  }

SMSConversationStateContentJSON::~SMSConversationStateContentJSON(void)
  {
    if (flagHasPropagatedData)
      {
        storePropagatedData->remove_reference();
      }
    if (flagHasState)
      {
        storeState->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSConversationStateContentJSON::hasCommandKind(void) const
  {
    return flagHasCommandKind;
  }

SMSConversationStateContentJSON::TypeCommandKind SMSConversationStateContentJSON::getCommandKind(void)
  {
    assert(flagHasCommandKind);
    return storeCommandKind;
  }

const SMSConversationStateContentJSON::TypeCommandKind SMSConversationStateContentJSON::getCommandKind(void) const
  {
    assert(flagHasCommandKind);
    return storeCommandKind;
  }

const char *SMSConversationStateContentJSON::getCommandKindAsChars(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

std::string SMSConversationStateContentJSON::getCommandKindAsString(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

bool SMSConversationStateContentJSON::hasComposeSMSCommandKind(void) const
  {
    return flagHasComposeSMSCommandKind;
  }

SMSConversationStateContentJSON::TypeComposeSMSCommandKind SMSConversationStateContentJSON::getComposeSMSCommandKind(void)
  {
    assert(flagHasComposeSMSCommandKind);
    return storeComposeSMSCommandKind;
  }

const SMSConversationStateContentJSON::TypeComposeSMSCommandKind SMSConversationStateContentJSON::getComposeSMSCommandKind(void) const
  {
    assert(flagHasComposeSMSCommandKind);
    return storeComposeSMSCommandKind;
  }

const char *SMSConversationStateContentJSON::getComposeSMSCommandKindAsChars(void) const
  {
    return stringFromComposeSMSCommandKind(getComposeSMSCommandKind());
  }

std::string SMSConversationStateContentJSON::getComposeSMSCommandKindAsString(void) const
  {
    return stringFromComposeSMSCommandKind(getComposeSMSCommandKind());
  }

bool SMSConversationStateContentJSON::hasPropagatedData(void) const
  {
    return flagHasPropagatedData;
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON * SMSConversationStateContentJSON::getPropagatedData(void)
  {
    assert(flagHasPropagatedData);
    return storePropagatedData;
  }

const SMSConversationStateContentJSON::TypePropagatedDataJSON * SMSConversationStateContentJSON::getPropagatedData(void) const
  {
    assert(flagHasPropagatedData);
    return storePropagatedData;
  }

bool SMSConversationStateContentJSON::hasState(void) const
  {
    return flagHasState;
  }

SMSStateJSON * SMSConversationStateContentJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const SMSStateJSON * SMSConversationStateContentJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

SMSStateJSON::TypeValue SMSConversationStateContentJSON::getStateValue(void)
  {
    return getState()->getValue();
  }

const SMSStateJSON::TypeValue SMSConversationStateContentJSON::getStateValue(void) const
  {
    return getState()->getValue();
  }

const char *SMSConversationStateContentJSON::getStateAsChars(void) const
  {
    return getState()->getValueAsChars();
  }

std::string SMSConversationStateContentJSON::getStateAsString(void) const
  {
    return getState()->getValueAsString();
  }

bool SMSConversationStateContentJSON::hasSMSDynamicResponseKind(void) const
  {
    return flagHasSMSDynamicResponseKind;
  }

SMSConversationStateContentJSON::TypeSMSDynamicResponseKind SMSConversationStateContentJSON::getSMSDynamicResponseKind(void)
  {
    assert(flagHasSMSDynamicResponseKind);
    return storeSMSDynamicResponseKind;
  }

const SMSConversationStateContentJSON::TypeSMSDynamicResponseKind SMSConversationStateContentJSON::getSMSDynamicResponseKind(void) const
  {
    assert(flagHasSMSDynamicResponseKind);
    return storeSMSDynamicResponseKind;
  }

const char *SMSConversationStateContentJSON::getSMSDynamicResponseKindAsChars(void) const
  {
    return stringFromSMSDynamicResponseKind(getSMSDynamicResponseKind());
  }

std::string SMSConversationStateContentJSON::getSMSDynamicResponseKindAsString(void) const
  {
    return stringFromSMSDynamicResponseKind(getSMSDynamicResponseKind());
  }

SMSConversationStateContentJSON::TypePropagatedDataJSON *SMSConversationStateContentJSON::TypePropagatedDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePropagatedDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePropagatedDataJSON>, TypePropagatedDataJSON *, bool> generator("Type TypePropagatedData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SMSConversationStateContentJSON *SMSConversationStateContentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSConversationStateContentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSConversationStateContentJSON>, SMSConversationStateContentJSON *, bool> generator("Type SMSConversationStateContent", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
