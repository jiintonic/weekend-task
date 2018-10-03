/* file "EmailStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailStateJSON.h"

#include "EmailStateJSON.h"


EmailStateJSON::TypeValue EmailStateJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'D':
            if (strncmp(&(chars[1]), "isambiguatingRecipientsAfter", 28) == 0)
              {
                switch ((unsigned char)(chars[29]))
                  {
                    case 'C':
                        if (strcmp(&(chars[30]), "reate") == 0)
                            return Value_DisambiguatingRecipientsAfterCreate;
                        break;
                    case 'E':
                        if (strcmp(&(chars[30]), "ditRecipients") == 0)
                            return Value_DisambiguatingRecipientsAfterEditRecipients;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'E':
            if (strncmp(&(chars[1]), "xpecting", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'A':
                        if (strncmp(&(chars[10]), "ddRecipients", 12) == 0)
                          {
                            switch ((unsigned char)(chars[22]))
                              {
                                case 'B':
                                    if (strcmp(&(chars[23]), "cc") == 0)
                                        return Value_ExpectingAddRecipientsBcc;
                                    break;
                                case 'C':
                                    if (strcmp(&(chars[23]), "c") == 0)
                                        return Value_ExpectingAddRecipientsCc;
                                    break;
                                case 'T':
                                    if (strcmp(&(chars[23]), "o") == 0)
                                        return Value_ExpectingAddRecipientsTo;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'C':
                        if (strcmp(&(chars[10]), "ontinuationOfBody") == 0)
                            return Value_ExpectingContinuationOfBody;
                        break;
                    case 'E':
                        if (strncmp(&(chars[10]), "m", 1) == 0)
                          {
                            switch ((unsigned char)(chars[11]))
                              {
                                case 'a':
                                    if (strcmp(&(chars[12]), "ilAddress") == 0)
                                        return Value_ExpectingEmailAddress;
                                    break;
                                case 'p':
                                    if (strncmp(&(chars[12]), "ty", 2) == 0)
                                      {
                                        switch ((unsigned char)(chars[14]))
                                          {
                                            case 'B':
                                                if (strcmp(&(chars[15]), "odyOkYesNo") == 0)
                                                    return Value_ExpectingEmptyBodyOkYesNo;
                                                break;
                                            case 'S':
                                                if (strcmp(&(chars[15]), "ubjectOkYesNo") == 0)
                                                    return Value_ExpectingEmptySubjectOkYesNo;
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
                    case 'R':
                        if (strncmp(&(chars[10]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(chars[11]))
                              {
                                case 'm':
                                    if (strncmp(&(chars[12]), "oveRecipients", 13) == 0)
                                      {
                                        switch ((unsigned char)(chars[25]))
                                          {
                                            case 'B':
                                                if (strcmp(&(chars[26]), "cc") == 0)
                                                    return Value_ExpectingRemoveRecipientsBcc;
                                                break;
                                            case 'C':
                                                if (strcmp(&(chars[26]), "c") == 0)
                                                    return Value_ExpectingRemoveRecipientsCc;
                                                break;
                                            case 'T':
                                                if (strcmp(&(chars[26]), "o") == 0)
                                                    return Value_ExpectingRemoveRecipientsTo;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(chars[12]), "ponseAfterEmailReady") == 0)
                                        return Value_ExpectingResponseAfterEmailReady;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(chars[10]))
                          {
                            case 'e':
                                if (strcmp(&(chars[11]), "ndItNowYesNo") == 0)
                                    return Value_ExpectingSendItNowYesNo;
                                break;
                            case 't':
                                if (strcmp(&(chars[11]), "artOfBody") == 0)
                                    return Value_ExpectingStartOfBody;
                                break;
                            case 'u':
                                if (strcmp(&(chars[11]), "bject") == 0)
                                    return Value_ExpectingSubject;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return Value_Unknown;
            break;
        default:
            break;
      }
    throw("The value for field `Value' is not one of the legal values.");
  }

const char *EmailStateJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_DisambiguatingRecipientsAfterCreate:
            return "DisambiguatingRecipientsAfterCreate";
        case Value_DisambiguatingRecipientsAfterEditRecipients:
            return "DisambiguatingRecipientsAfterEditRecipients";
        case Value_ExpectingAddRecipientsCc:
            return "ExpectingAddRecipientsCc";
        case Value_ExpectingAddRecipientsTo:
            return "ExpectingAddRecipientsTo";
        case Value_ExpectingAddRecipientsBcc:
            return "ExpectingAddRecipientsBcc";
        case Value_ExpectingContinuationOfBody:
            return "ExpectingContinuationOfBody";
        case Value_ExpectingEmailAddress:
            return "ExpectingEmailAddress";
        case Value_ExpectingEmptyBodyOkYesNo:
            return "ExpectingEmptyBodyOkYesNo";
        case Value_ExpectingEmptySubjectOkYesNo:
            return "ExpectingEmptySubjectOkYesNo";
        case Value_ExpectingRemoveRecipientsCc:
            return "ExpectingRemoveRecipientsCc";
        case Value_ExpectingRemoveRecipientsTo:
            return "ExpectingRemoveRecipientsTo";
        case Value_ExpectingRemoveRecipientsBcc:
            return "ExpectingRemoveRecipientsBcc";
        case Value_ExpectingResponseAfterEmailReady:
            return "ExpectingResponseAfterEmailReady";
        case Value_ExpectingSendItNowYesNo:
            return "ExpectingSendItNowYesNo";
        case Value_ExpectingStartOfBody:
            return "ExpectingStartOfBody";
        case Value_ExpectingSubject:
            return "ExpectingSubject";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

EmailStateJSON::EmailStateJSON(const EmailStateJSON &)
  {
    assert(false);
  }

EmailStateJSON &EmailStateJSON::operator=(const EmailStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void EmailStateJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of EmailStateJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'D':
            if (strncmp(&(json_string->getData()[1]), "isambiguatingRecipientsAfter", 28) == 0)
              {
                switch ((unsigned char)(json_string->getData()[29]))
                  {
                    case 'C':
                        if (strcmp(&(json_string->getData()[30]), "reate") == 0)
                              {
                                the_enum = Value_DisambiguatingRecipientsAfterCreate;
                                goto enum_is_done;
                              }
                        break;
                    case 'E':
                        if (strcmp(&(json_string->getData()[30]), "ditRecipients") == 0)
                              {
                                the_enum = Value_DisambiguatingRecipientsAfterEditRecipients;
                                goto enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'E':
            if (strncmp(&(json_string->getData()[1]), "xpecting", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'A':
                        if (strncmp(&(json_string->getData()[10]), "ddRecipients", 12) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[22]))
                              {
                                case 'B':
                                    if (strcmp(&(json_string->getData()[23]), "cc") == 0)
                                          {
                                            the_enum = Value_ExpectingAddRecipientsBcc;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'C':
                                    if (strcmp(&(json_string->getData()[23]), "c") == 0)
                                          {
                                            the_enum = Value_ExpectingAddRecipientsCc;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'T':
                                    if (strcmp(&(json_string->getData()[23]), "o") == 0)
                                          {
                                            the_enum = Value_ExpectingAddRecipientsTo;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'C':
                        if (strcmp(&(json_string->getData()[10]), "ontinuationOfBody") == 0)
                              {
                                the_enum = Value_ExpectingContinuationOfBody;
                                goto enum_is_done;
                              }
                        break;
                    case 'E':
                        if (strncmp(&(json_string->getData()[10]), "m", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[11]))
                              {
                                case 'a':
                                    if (strcmp(&(json_string->getData()[12]), "ilAddress") == 0)
                                          {
                                            the_enum = Value_ExpectingEmailAddress;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 'p':
                                    if (strncmp(&(json_string->getData()[12]), "ty", 2) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[14]))
                                          {
                                            case 'B':
                                                if (strcmp(&(json_string->getData()[15]), "odyOkYesNo") == 0)
                                                      {
                                                        the_enum = Value_ExpectingEmptyBodyOkYesNo;
                                                        goto enum_is_done;
                                                      }
                                                break;
                                            case 'S':
                                                if (strcmp(&(json_string->getData()[15]), "ubjectOkYesNo") == 0)
                                                      {
                                                        the_enum = Value_ExpectingEmptySubjectOkYesNo;
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
                        break;
                    case 'R':
                        if (strncmp(&(json_string->getData()[10]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[11]))
                              {
                                case 'm':
                                    if (strncmp(&(json_string->getData()[12]), "oveRecipients", 13) == 0)
                                      {
                                        switch ((unsigned char)(json_string->getData()[25]))
                                          {
                                            case 'B':
                                                if (strcmp(&(json_string->getData()[26]), "cc") == 0)
                                                      {
                                                        the_enum = Value_ExpectingRemoveRecipientsBcc;
                                                        goto enum_is_done;
                                                      }
                                                break;
                                            case 'C':
                                                if (strcmp(&(json_string->getData()[26]), "c") == 0)
                                                      {
                                                        the_enum = Value_ExpectingRemoveRecipientsCc;
                                                        goto enum_is_done;
                                                      }
                                                break;
                                            case 'T':
                                                if (strcmp(&(json_string->getData()[26]), "o") == 0)
                                                      {
                                                        the_enum = Value_ExpectingRemoveRecipientsTo;
                                                        goto enum_is_done;
                                                      }
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[12]), "ponseAfterEmailReady") == 0)
                                          {
                                            the_enum = Value_ExpectingResponseAfterEmailReady;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        switch ((unsigned char)(json_string->getData()[10]))
                          {
                            case 'e':
                                if (strcmp(&(json_string->getData()[11]), "ndItNowYesNo") == 0)
                                      {
                                        the_enum = Value_ExpectingSendItNowYesNo;
                                        goto enum_is_done;
                                      }
                                break;
                            case 't':
                                if (strcmp(&(json_string->getData()[11]), "artOfBody") == 0)
                                      {
                                        the_enum = Value_ExpectingStartOfBody;
                                        goto enum_is_done;
                                      }
                                break;
                            case 'u':
                                if (strcmp(&(json_string->getData()[11]), "bject") == 0)
                                      {
                                        the_enum = Value_ExpectingSubject;
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
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_enum = Value_Unknown;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Value of EmailStateJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

EmailStateJSON::EmailStateJSON(void) :
        flagHasValue(false)
  {
  }

EmailStateJSON::EmailStateJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

EmailStateJSON::EmailStateJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

EmailStateJSON::EmailStateJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

EmailStateJSON::~EmailStateJSON(void)
  {
  }

bool EmailStateJSON::hasValue(void) const
  {
    return flagHasValue;
  }

EmailStateJSON::TypeValue EmailStateJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const EmailStateJSON::TypeValue EmailStateJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *EmailStateJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string EmailStateJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

EmailStateJSON *EmailStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailStateJSON>, EmailStateJSON *, bool> generator("Type EmailState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
