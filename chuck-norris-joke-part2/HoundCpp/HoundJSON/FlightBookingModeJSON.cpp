/* file "FlightBookingModeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightBookingModeJSON.h"

#include "FlightBookingModeJSON.h"


FlightBookingModeJSON::TypeLastUserResponse FlightBookingModeJSON::stringToLastUserResponse(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "ancel") == 0)
                return LastUserResponse_Cancel;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "oesNotKnow") == 0)
                return LastUserResponse_DoesNotKnow;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nitiatedMode") == 0)
                return LastUserResponse_InitiatedMode;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "otUnderstood") == 0)
                return LastUserResponse_NotUnderstood;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nderstood") == 0)
                return LastUserResponse_Understood;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "antsToKnow") == 0)
                return LastUserResponse_WantsToKnow;
            break;
        default:
            break;
      }
    throw("The value for field `LastUserResponse' is not one of the legal values.");
  }

const char *FlightBookingModeJSON::stringFromLastUserResponse(TypeLastUserResponse the_enum)
  {
    switch (the_enum)
      {
        case LastUserResponse_InitiatedMode:
            return "InitiatedMode";
        case LastUserResponse_Understood:
            return "Understood";
        case LastUserResponse_NotUnderstood:
            return "NotUnderstood";
        case LastUserResponse_DoesNotKnow:
            return "DoesNotKnow";
        case LastUserResponse_WantsToKnow:
            return "WantsToKnow";
        case LastUserResponse_Cancel:
            return "Cancel";
        default:
            assert(false);
            return NULL;
      }
  }

FlightBookingModeJSON::FlightBookingModeJSON(const FlightBookingModeJSON &)
  {
    assert(false);
  }

FlightBookingModeJSON &FlightBookingModeJSON::operator=(const FlightBookingModeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightBookingModeJSON::fromJSONAskingUserFor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightBookingLookupParameterJSON *convert_classy = FlightBookingLookupParameterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAskingUserFor(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingModeJSON::fromJSONAlreadyAskedUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlreadyAskedUser of FlightBookingModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightBookingLookupParameterJSON * > vector_AlreadyAskedUser1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightBookingLookupParameterJSON *convert_classy = FlightBookingLookupParameterJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AlreadyAskedUser1[num1] = convert_classy;
      }
    initAlreadyAskedUser();
    for (size_t num4 = 0; num4 < vector_AlreadyAskedUser1.size(); ++num4)
        appendAlreadyAskedUser(vector_AlreadyAskedUser1[num4]);
    for (size_t num1 = 0; num1 < vector_AlreadyAskedUser1.size(); ++num1)
      {
        vector_AlreadyAskedUser1[num1]->remove_reference();
      }
  }

void FlightBookingModeJSON::fromJSONTextForUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ResponseTypesJSON *convert_classy = ResponseTypesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTextForUser(convert_classy);
    convert_classy->remove_reference();
  }

void FlightBookingModeJSON::fromJSONLastUserResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastUserResponse of FlightBookingModeJSON is not a string.");
    TypeLastUserResponse the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "ancel") == 0)
                  {
                    the_enum = LastUserResponse_Cancel;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "oesNotKnow") == 0)
                  {
                    the_enum = LastUserResponse_DoesNotKnow;
                    goto enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nitiatedMode") == 0)
                  {
                    the_enum = LastUserResponse_InitiatedMode;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "otUnderstood") == 0)
                  {
                    the_enum = LastUserResponse_NotUnderstood;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nderstood") == 0)
                  {
                    the_enum = LastUserResponse_Understood;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "antsToKnow") == 0)
                  {
                    the_enum = LastUserResponse_WantsToKnow;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field LastUserResponse of FlightBookingModeJSON is not one of the legal strings.");
  enum_is_done:;
    setLastUserResponse(the_enum);
  }

void FlightBookingModeJSON::fromJSONWrittenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WrittenHints of FlightBookingModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_WrittenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field WrittenHints of FlightBookingModeJSON is not a string.");
        vector_WrittenHints1[num1] = std::string(json_string->getData());
      }
    initWrittenHints();
    for (size_t num5 = 0; num5 < vector_WrittenHints1.size(); ++num5)
        appendWrittenHints(vector_WrittenHints1[num5]);
    for (size_t num1 = 0; num1 < vector_WrittenHints1.size(); ++num1)
      {
      }
  }

void FlightBookingModeJSON::fromJSONSpokenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SpokenHints of FlightBookingModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_SpokenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SpokenHints of FlightBookingModeJSON is not a string.");
        vector_SpokenHints1[num1] = std::string(json_string->getData());
      }
    initSpokenHints();
    for (size_t num6 = 0; num6 < vector_SpokenHints1.size(); ++num6)
        appendSpokenHints(vector_SpokenHints1[num6]);
    for (size_t num1 = 0; num1 < vector_SpokenHints1.size(); ++num1)
      {
      }
  }

FlightBookingModeJSON::FlightBookingModeJSON(void) :
        flagHasAskingUserFor(false),
        flagHasAlreadyAskedUser(false),
        flagHasTextForUser(false),
        flagHasLastUserResponse(false),
        flagHasWrittenHints(false),
        flagHasSpokenHints(false)
  {
    extraIndex = create_string_index();
  }

FlightBookingModeJSON::~FlightBookingModeJSON(void)
  {
    if (flagHasAskingUserFor)
      {
        storeAskingUserFor->remove_reference();
      }
    if (flagHasAlreadyAskedUser)
      {
        for (size_t num4 = 0; num4 < storeAlreadyAskedUser.size(); ++num4)
          {
            storeAlreadyAskedUser[num4]->remove_reference();
          }
      }
    if (flagHasTextForUser)
      {
        storeTextForUser->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool FlightBookingModeJSON::hasAskingUserFor(void) const
  {
    return flagHasAskingUserFor;
  }

FlightBookingLookupParameterJSON * FlightBookingModeJSON::getAskingUserFor(void)
  {
    assert(flagHasAskingUserFor);
    return storeAskingUserFor;
  }

const FlightBookingLookupParameterJSON * FlightBookingModeJSON::getAskingUserFor(void) const
  {
    assert(flagHasAskingUserFor);
    return storeAskingUserFor;
  }

FlightBookingLookupParameterJSON::TypeValue FlightBookingModeJSON::getAskingUserForValue(void)
  {
    return getAskingUserFor()->getValue();
  }

const FlightBookingLookupParameterJSON::TypeValue FlightBookingModeJSON::getAskingUserForValue(void) const
  {
    return getAskingUserFor()->getValue();
  }

const char *FlightBookingModeJSON::getAskingUserForAsChars(void) const
  {
    return getAskingUserFor()->getValueAsChars();
  }

std::string FlightBookingModeJSON::getAskingUserForAsString(void) const
  {
    return getAskingUserFor()->getValueAsString();
  }

bool FlightBookingModeJSON::hasAlreadyAskedUser(void) const
  {
    return flagHasAlreadyAskedUser;
  }

size_t FlightBookingModeJSON::countOfAlreadyAskedUser(void) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser.size();
  }

FlightBookingLookupParameterJSON * FlightBookingModeJSON::elementOfAlreadyAskedUser(size_t element_num)
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser[element_num];
  }

const FlightBookingLookupParameterJSON * FlightBookingModeJSON::elementOfAlreadyAskedUser(size_t element_num) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser[element_num];
  }

std::vector< FlightBookingLookupParameterJSON * > FlightBookingModeJSON::getAlreadyAskedUser(void)
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser;
  }

const std::vector< FlightBookingLookupParameterJSON * > FlightBookingModeJSON::getAlreadyAskedUser(void) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser;
  }

bool FlightBookingModeJSON::hasTextForUser(void) const
  {
    return flagHasTextForUser;
  }

ResponseTypesJSON * FlightBookingModeJSON::getTextForUser(void)
  {
    assert(flagHasTextForUser);
    return storeTextForUser;
  }

const ResponseTypesJSON * FlightBookingModeJSON::getTextForUser(void) const
  {
    assert(flagHasTextForUser);
    return storeTextForUser;
  }

bool FlightBookingModeJSON::hasLastUserResponse(void) const
  {
    return flagHasLastUserResponse;
  }

FlightBookingModeJSON::TypeLastUserResponse FlightBookingModeJSON::getLastUserResponse(void)
  {
    assert(flagHasLastUserResponse);
    return storeLastUserResponse;
  }

const FlightBookingModeJSON::TypeLastUserResponse FlightBookingModeJSON::getLastUserResponse(void) const
  {
    assert(flagHasLastUserResponse);
    return storeLastUserResponse;
  }

const char *FlightBookingModeJSON::getLastUserResponseAsChars(void) const
  {
    return stringFromLastUserResponse(getLastUserResponse());
  }

std::string FlightBookingModeJSON::getLastUserResponseAsString(void) const
  {
    return stringFromLastUserResponse(getLastUserResponse());
  }

bool FlightBookingModeJSON::hasWrittenHints(void) const
  {
    return flagHasWrittenHints;
  }

size_t FlightBookingModeJSON::countOfWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints.size();
  }

std::string FlightBookingModeJSON::elementOfWrittenHints(size_t element_num)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

const std::string FlightBookingModeJSON::elementOfWrittenHints(size_t element_num) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

std::vector< std::string > FlightBookingModeJSON::getWrittenHints(void)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

const std::vector< std::string > FlightBookingModeJSON::getWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

bool FlightBookingModeJSON::hasSpokenHints(void) const
  {
    return flagHasSpokenHints;
  }

size_t FlightBookingModeJSON::countOfSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints.size();
  }

std::string FlightBookingModeJSON::elementOfSpokenHints(size_t element_num)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

const std::string FlightBookingModeJSON::elementOfSpokenHints(size_t element_num) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

std::vector< std::string > FlightBookingModeJSON::getSpokenHints(void)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

const std::vector< std::string > FlightBookingModeJSON::getSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

FlightBookingModeJSON *FlightBookingModeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightBookingModeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightBookingModeJSON>, FlightBookingModeJSON *, bool> generator("Type FlightBookingMode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
