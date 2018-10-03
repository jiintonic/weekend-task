/* file "SMSStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSStateJSON.h"

#include "SMSStateJSON.h"


SMSStateJSON::TypeValue SMSStateJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strncmp(&(chars[1]), "xpecting", 8) == 0)
              {
                switch ((unsigned char)(chars[9]))
                  {
                    case 'A':
                        if (strcmp(&(chars[10]), "ddRecipientsTo") == 0)
                            return Value_ExpectingAddRecipientsTo;
                        break;
                    case 'C':
                        if (strcmp(&(chars[10]), "ontinuationOfBody") == 0)
                            return Value_ExpectingContinuationOfBody;
                        break;
                    case 'E':
                        if (strcmp(&(chars[10]), "mptyBodyOkYesNo") == 0)
                            return Value_ExpectingEmptyBodyOkYesNo;
                        break;
                    case 'P':
                        if (strcmp(&(chars[10]), "honeNumber") == 0)
                            return Value_ExpectingPhoneNumber;
                        break;
                    case 'R':
                        if (strncmp(&(chars[10]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(chars[11]))
                              {
                                case 'm':
                                    if (strcmp(&(chars[12]), "oveRecipientsTo") == 0)
                                        return Value_ExpectingRemoveRecipientsTo;
                                    break;
                                case 's':
                                    if (strcmp(&(chars[12]), "ponseAfterSMSReady") == 0)
                                        return Value_ExpectingResponseAfterSMSReady;
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
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "ent") == 0)
                return Value_Sent;
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

const char *SMSStateJSON::stringFromValue(TypeValue the_enum)
  {
    switch (the_enum)
      {
        case Value_ExpectingAddRecipientsTo:
            return "ExpectingAddRecipientsTo";
        case Value_ExpectingContinuationOfBody:
            return "ExpectingContinuationOfBody";
        case Value_ExpectingEmptyBodyOkYesNo:
            return "ExpectingEmptyBodyOkYesNo";
        case Value_ExpectingPhoneNumber:
            return "ExpectingPhoneNumber";
        case Value_ExpectingRemoveRecipientsTo:
            return "ExpectingRemoveRecipientsTo";
        case Value_ExpectingStartOfBody:
            return "ExpectingStartOfBody";
        case Value_ExpectingSendItNowYesNo:
            return "ExpectingSendItNowYesNo";
        case Value_ExpectingResponseAfterSMSReady:
            return "ExpectingResponseAfterSMSReady";
        case Value_Sent:
            return "Sent";
        case Value_Unknown:
            return "Unknown";
        default:
            assert(false);
            return NULL;
      }
  }

SMSStateJSON::SMSStateJSON(const SMSStateJSON &)
  {
    assert(false);
  }

SMSStateJSON &SMSStateJSON::operator=(const SMSStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSStateJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of SMSStateJSON is not a string.");
    TypeValue the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strncmp(&(json_string->getData()[1]), "xpecting", 8) == 0)
              {
                switch ((unsigned char)(json_string->getData()[9]))
                  {
                    case 'A':
                        if (strcmp(&(json_string->getData()[10]), "ddRecipientsTo") == 0)
                              {
                                the_enum = Value_ExpectingAddRecipientsTo;
                                goto enum_is_done;
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
                        if (strcmp(&(json_string->getData()[10]), "mptyBodyOkYesNo") == 0)
                              {
                                the_enum = Value_ExpectingEmptyBodyOkYesNo;
                                goto enum_is_done;
                              }
                        break;
                    case 'P':
                        if (strcmp(&(json_string->getData()[10]), "honeNumber") == 0)
                              {
                                the_enum = Value_ExpectingPhoneNumber;
                                goto enum_is_done;
                              }
                        break;
                    case 'R':
                        if (strncmp(&(json_string->getData()[10]), "e", 1) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[11]))
                              {
                                case 'm':
                                    if (strcmp(&(json_string->getData()[12]), "oveRecipientsTo") == 0)
                                          {
                                            the_enum = Value_ExpectingRemoveRecipientsTo;
                                            goto enum_is_done;
                                          }
                                    break;
                                case 's':
                                    if (strcmp(&(json_string->getData()[12]), "ponseAfterSMSReady") == 0)
                                          {
                                            the_enum = Value_ExpectingResponseAfterSMSReady;
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
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "ent") == 0)
                  {
                    the_enum = Value_Sent;
                    goto enum_is_done;
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
    throw("The value for field Value of SMSStateJSON is not one of the legal strings.");
  enum_is_done:;
    setValue(the_enum);
  }

SMSStateJSON::SMSStateJSON(void) :
        flagHasValue(false)
  {
  }

SMSStateJSON::SMSStateJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

SMSStateJSON::SMSStateJSON(const char *init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value))
  {
  }

SMSStateJSON::SMSStateJSON(std::string init_value) :
        flagHasValue(true),
        storeValue(stringToValue(init_value.c_str()))
  {
  }

SMSStateJSON::~SMSStateJSON(void)
  {
  }

bool SMSStateJSON::hasValue(void) const
  {
    return flagHasValue;
  }

SMSStateJSON::TypeValue SMSStateJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const SMSStateJSON::TypeValue SMSStateJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *SMSStateJSON::getValueAsChars(void) const
  {
    return stringFromValue(getValue());
  }

std::string SMSStateJSON::getValueAsString(void) const
  {
    return stringFromValue(getValue());
  }

SMSStateJSON *SMSStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSStateJSON>, SMSStateJSON *, bool> generator("Type SMSState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
