/* file "FlightStatusModeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "FlightStatusModeJSON.h"

#include "FlightStatusModeJSON.h"


FlightStatusModeJSON::TypeLastUserResponse FlightStatusModeJSON::stringToLastUserResponse(const char *chars)
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

const char *FlightStatusModeJSON::stringFromLastUserResponse(TypeLastUserResponse the_enum)
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

FlightStatusModeJSON::FlightStatusModeJSON(const FlightStatusModeJSON &)
  {
    assert(false);
  }

FlightStatusModeJSON &FlightStatusModeJSON::operator=(const FlightStatusModeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void FlightStatusModeJSON::fromJSONFlightSpecIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field FlightSpecIndex of FlightStatusModeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field FlightSpecIndex of FlightStatusModeJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setFlightSpecIndex(extracted_integer);
  }

void FlightStatusModeJSON::fromJSONAskingUserFor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    FlightStatusLookupParameterJSON *convert_classy = FlightStatusLookupParameterJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAskingUserFor(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusModeJSON::fromJSONAlreadyAskedUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AlreadyAskedUser of FlightStatusModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< FlightStatusLookupParameterJSON * > vector_AlreadyAskedUser1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        FlightStatusLookupParameterJSON *convert_classy = FlightStatusLookupParameterJSON::from_json(json_array1->component(num1), ignore_extras);
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

void FlightStatusModeJSON::fromJSONNotUnderstoodCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NotUnderstoodCount of FlightStatusModeJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NotUnderstoodCount of FlightStatusModeJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNotUnderstoodCount(extracted_integer);
  }

void FlightStatusModeJSON::fromJSONTextForUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ResponseTypesJSON *convert_classy = ResponseTypesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTextForUser(convert_classy);
    convert_classy->remove_reference();
  }

void FlightStatusModeJSON::fromJSONLastUserResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastUserResponse of FlightStatusModeJSON is not a string.");
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
    throw("The value for field LastUserResponse of FlightStatusModeJSON is not one of the legal strings.");
  enum_is_done:;
    setLastUserResponse(the_enum);
  }

void FlightStatusModeJSON::fromJSONWrittenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field WrittenHints of FlightStatusModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_WrittenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field WrittenHints of FlightStatusModeJSON is not a string.");
        vector_WrittenHints1[num1] = std::string(json_string->getData());
      }
    initWrittenHints();
    for (size_t num5 = 0; num5 < vector_WrittenHints1.size(); ++num5)
        appendWrittenHints(vector_WrittenHints1[num5]);
    for (size_t num1 = 0; num1 < vector_WrittenHints1.size(); ++num1)
      {
      }
  }

void FlightStatusModeJSON::fromJSONSpokenHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SpokenHints of FlightStatusModeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_SpokenHints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SpokenHints of FlightStatusModeJSON is not a string.");
        vector_SpokenHints1[num1] = std::string(json_string->getData());
      }
    initSpokenHints();
    for (size_t num6 = 0; num6 < vector_SpokenHints1.size(); ++num6)
        appendSpokenHints(vector_SpokenHints1[num6]);
    for (size_t num1 = 0; num1 < vector_SpokenHints1.size(); ++num1)
      {
      }
  }

FlightStatusModeJSON::FlightStatusModeJSON(void) :
        flagHasFlightSpecIndex(false),
        flagHasAskingUserFor(false),
        flagHasAlreadyAskedUser(false),
        flagHasNotUnderstoodCount(false),
        flagHasTextForUser(false),
        flagHasLastUserResponse(false),
        flagHasWrittenHints(false),
        flagHasSpokenHints(false)
  {
    extraIndex = create_string_index();
  }

FlightStatusModeJSON::~FlightStatusModeJSON(void)
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

bool FlightStatusModeJSON::hasFlightSpecIndex(void) const
  {
    return flagHasFlightSpecIndex;
  }

OInteger FlightStatusModeJSON::getFlightSpecIndex(void)
  {
    assert(flagHasFlightSpecIndex);
    return storeFlightSpecIndex;
  }

const OInteger FlightStatusModeJSON::getFlightSpecIndex(void) const
  {
    assert(flagHasFlightSpecIndex);
    return storeFlightSpecIndex;
  }

bool FlightStatusModeJSON::hasAskingUserFor(void) const
  {
    return flagHasAskingUserFor;
  }

FlightStatusLookupParameterJSON * FlightStatusModeJSON::getAskingUserFor(void)
  {
    assert(flagHasAskingUserFor);
    return storeAskingUserFor;
  }

const FlightStatusLookupParameterJSON * FlightStatusModeJSON::getAskingUserFor(void) const
  {
    assert(flagHasAskingUserFor);
    return storeAskingUserFor;
  }

FlightStatusLookupParameterJSON::TypeValue FlightStatusModeJSON::getAskingUserForValue(void)
  {
    return getAskingUserFor()->getValue();
  }

const FlightStatusLookupParameterJSON::TypeValue FlightStatusModeJSON::getAskingUserForValue(void) const
  {
    return getAskingUserFor()->getValue();
  }

const char *FlightStatusModeJSON::getAskingUserForAsChars(void) const
  {
    return getAskingUserFor()->getValueAsChars();
  }

std::string FlightStatusModeJSON::getAskingUserForAsString(void) const
  {
    return getAskingUserFor()->getValueAsString();
  }

bool FlightStatusModeJSON::hasAlreadyAskedUser(void) const
  {
    return flagHasAlreadyAskedUser;
  }

size_t FlightStatusModeJSON::countOfAlreadyAskedUser(void) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser.size();
  }

FlightStatusLookupParameterJSON * FlightStatusModeJSON::elementOfAlreadyAskedUser(size_t element_num)
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser[element_num];
  }

const FlightStatusLookupParameterJSON * FlightStatusModeJSON::elementOfAlreadyAskedUser(size_t element_num) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser[element_num];
  }

std::vector< FlightStatusLookupParameterJSON * > FlightStatusModeJSON::getAlreadyAskedUser(void)
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser;
  }

const std::vector< FlightStatusLookupParameterJSON * > FlightStatusModeJSON::getAlreadyAskedUser(void) const
  {
    assert(flagHasAlreadyAskedUser);
    return storeAlreadyAskedUser;
  }

bool FlightStatusModeJSON::hasNotUnderstoodCount(void) const
  {
    return flagHasNotUnderstoodCount;
  }

OInteger FlightStatusModeJSON::getNotUnderstoodCount(void)
  {
    assert(flagHasNotUnderstoodCount);
    return storeNotUnderstoodCount;
  }

const OInteger FlightStatusModeJSON::getNotUnderstoodCount(void) const
  {
    assert(flagHasNotUnderstoodCount);
    return storeNotUnderstoodCount;
  }

bool FlightStatusModeJSON::hasTextForUser(void) const
  {
    return flagHasTextForUser;
  }

ResponseTypesJSON * FlightStatusModeJSON::getTextForUser(void)
  {
    assert(flagHasTextForUser);
    return storeTextForUser;
  }

const ResponseTypesJSON * FlightStatusModeJSON::getTextForUser(void) const
  {
    assert(flagHasTextForUser);
    return storeTextForUser;
  }

bool FlightStatusModeJSON::hasLastUserResponse(void) const
  {
    return flagHasLastUserResponse;
  }

FlightStatusModeJSON::TypeLastUserResponse FlightStatusModeJSON::getLastUserResponse(void)
  {
    assert(flagHasLastUserResponse);
    return storeLastUserResponse;
  }

const FlightStatusModeJSON::TypeLastUserResponse FlightStatusModeJSON::getLastUserResponse(void) const
  {
    assert(flagHasLastUserResponse);
    return storeLastUserResponse;
  }

const char *FlightStatusModeJSON::getLastUserResponseAsChars(void) const
  {
    return stringFromLastUserResponse(getLastUserResponse());
  }

std::string FlightStatusModeJSON::getLastUserResponseAsString(void) const
  {
    return stringFromLastUserResponse(getLastUserResponse());
  }

bool FlightStatusModeJSON::hasWrittenHints(void) const
  {
    return flagHasWrittenHints;
  }

size_t FlightStatusModeJSON::countOfWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints.size();
  }

std::string FlightStatusModeJSON::elementOfWrittenHints(size_t element_num)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

const std::string FlightStatusModeJSON::elementOfWrittenHints(size_t element_num) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints[element_num];
  }

std::vector< std::string > FlightStatusModeJSON::getWrittenHints(void)
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

const std::vector< std::string > FlightStatusModeJSON::getWrittenHints(void) const
  {
    assert(flagHasWrittenHints);
    return storeWrittenHints;
  }

bool FlightStatusModeJSON::hasSpokenHints(void) const
  {
    return flagHasSpokenHints;
  }

size_t FlightStatusModeJSON::countOfSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints.size();
  }

std::string FlightStatusModeJSON::elementOfSpokenHints(size_t element_num)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

const std::string FlightStatusModeJSON::elementOfSpokenHints(size_t element_num) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints[element_num];
  }

std::vector< std::string > FlightStatusModeJSON::getSpokenHints(void)
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

const std::vector< std::string > FlightStatusModeJSON::getSpokenHints(void) const
  {
    assert(flagHasSpokenHints);
    return storeSpokenHints;
  }

char FlightStatusModeJSON::Generator::lowerBoundFlightSpecIndex[] = "0";
char FlightStatusModeJSON::Generator::lowerBoundNotUnderstoodCount[] = "0";
FlightStatusModeJSON *FlightStatusModeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    FlightStatusModeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<FlightStatusModeJSON>, FlightStatusModeJSON *, bool> generator("Type FlightStatusMode", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
