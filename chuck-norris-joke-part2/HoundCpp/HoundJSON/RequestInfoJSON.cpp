/* file "RequestInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "RequestInfoJSON.h"

#include "RequestInfoJSON.h"


RequestInfoJSON::TypeUnitPreference RequestInfoJSON::stringToUnitPreference(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "ETRIC") == 0)
                return UnitPreference_METRIC;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "S") == 0)
                return UnitPreference_US;
            break;
        default:
            break;
      }
    throw("The value for field `UnitPreference' is not one of the legal values.");
  }

const char *RequestInfoJSON::stringFromUnitPreference(TypeUnitPreference the_enum)
  {
    switch (the_enum)
      {
        case UnitPreference_US:
            return "US";
        case UnitPreference_METRIC:
            return "METRIC";
        default:
            assert(false);
            return NULL;
      }
  }

RequestInfoJSON::TypeProfanityFilter RequestInfoJSON::stringToProfanityFilter(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "llowAll") == 0)
                return ProfanityFilter_AllowAll;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "ontRecognize") == 0)
                return ProfanityFilter_DontRecognize;
            break;
        case 'S':
            if (strncmp(&(chars[1]), "tar", 3) == 0)
              {
                switch ((unsigned char)(chars[4]))
                  {
                    case 'A':
                        if (strncmp(&(chars[5]), "ll", 2) == 0)
                          {
                            switch ((unsigned char)(chars[7]))
                              {
                                case 0:
                                    return ProfanityFilter_StarAll;
                                case 'B':
                                    if (strcmp(&(chars[8]), "utFirst") == 0)
                                        return ProfanityFilter_StarAllButFirst;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'O':
                        if (strcmp(&(chars[5]), "ne") == 0)
                            return ProfanityFilter_StarOne;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `ProfanityFilter' is not one of the legal values.");
  }

const char *RequestInfoJSON::stringFromProfanityFilter(TypeProfanityFilter the_enum)
  {
    switch (the_enum)
      {
        case ProfanityFilter_AllowAll:
            return "AllowAll";
        case ProfanityFilter_StarOne:
            return "StarOne";
        case ProfanityFilter_StarAllButFirst:
            return "StarAllButFirst";
        case ProfanityFilter_StarAll:
            return "StarAll";
        case ProfanityFilter_DontRecognize:
            return "DontRecognize";
        default:
            assert(false);
            return NULL;
      }
  }

RequestInfoJSON::TypeResponseAudioShortOrLong RequestInfoJSON::stringToResponseAudioShortOrLong(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ong") == 0)
                return ResponseAudioShortOrLong_Long;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "hort") == 0)
                return ResponseAudioShortOrLong_Short;
            break;
        default:
            break;
      }
    throw("The value for field `ResponseAudioShortOrLong' is not one of the legal values.");
  }

const char *RequestInfoJSON::stringFromResponseAudioShortOrLong(TypeResponseAudioShortOrLong the_enum)
  {
    switch (the_enum)
      {
        case ResponseAudioShortOrLong_Short:
            return "Short";
        case ResponseAudioShortOrLong_Long:
            return "Long";
        default:
            assert(false);
            return NULL;
      }
  }

RequestInfoJSON::TypeResponseAudioAcceptedEncodings::TypeResponseAudioAcceptedEncodings(void)
  {
  }

RequestInfoJSON::TypeResponseAudioAcceptedEncodings::TypeResponseAudioAcceptedEncodings(const TypeResponseAudioAcceptedEncodings &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

RequestInfoJSON::TypeResponseAudioAcceptedEncodings::TypeResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodingsKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator==(const TypeResponseAudioAcceptedEncodings &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator!=(const TypeResponseAudioAcceptedEncodings &other) const
  {
    return !(operator==(other));
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator<(const TypeResponseAudioAcceptedEncodings &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator>(const TypeResponseAudioAcceptedEncodings &other) const
  {
    return other.operator<(*this);
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator>=(const TypeResponseAudioAcceptedEncodings &other) const
  {
    return !(operator<(other));
  }

bool RequestInfoJSON::TypeResponseAudioAcceptedEncodings::operator<=(const TypeResponseAudioAcceptedEncodings &other) const
  {
    return !(other.operator<(*this));
  }

RequestInfoJSON::TypeResponseAudioAcceptedEncodingsKnownValues RequestInfoJSON::stringToResponseAudioAcceptedEncodings(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'S':
            if (strcmp(&(chars[1]), "peex") == 0)
                return ResponseAudioAcceptedEncodings_Speex;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "AV") == 0)
                return ResponseAudioAcceptedEncodings_WAV;
            break;
        default:
            break;
      }
    return ResponseAudioAcceptedEncodings__none;
  }

const char *RequestInfoJSON::stringFromResponseAudioAcceptedEncodings(TypeResponseAudioAcceptedEncodingsKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResponseAudioAcceptedEncodings_WAV:
            return "WAV";
        case ResponseAudioAcceptedEncodings_Speex:
            return "Speex";
        default:
            assert(false);
            return NULL;
      }
  }

RequestInfoJSON::RequestInfoJSON(const RequestInfoJSON &)
  {
    assert(false);
  }

RequestInfoJSON &RequestInfoJSON::operator=(const RequestInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void RequestInfoJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Latitude of RequestInfoJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void RequestInfoJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Longitude of RequestInfoJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void RequestInfoJSON::fromJSONPositionTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field PositionTime of RequestInfoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field PositionTime of RequestInfoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setPositionTime(extracted_integer);
  }

void RequestInfoJSON::fromJSONPositionHorizontalAccuracy(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field PositionHorizontalAccuracy of RequestInfoJSON is not a number.");
          }
      }
    setPositionHorizontalAccuracyText(the_rational_text);
  }

void RequestInfoJSON::fromJSONStreet(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Street of RequestInfoJSON is not a string.");
    setStreet(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONCity(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field City of RequestInfoJSON is not a string.");
    setCity(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field State of RequestInfoJSON is not a string.");
    setState(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONCountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Country of RequestInfoJSON is not a string.");
    setCountry(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONRoutePoints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RoutePointsJSON *convert_classy = RoutePointsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRoutePoints(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONControllableTrackPlaying(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ControllableTrackPlaying of RequestInfoJSON is not true for false.");
          }
      }
    setControllableTrackPlaying(the_bool);
  }

void RequestInfoJSON::fromJSONTimeStamp(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TimeStamp of RequestInfoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TimeStamp of RequestInfoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTimeStamp(extracted_integer);
  }

void RequestInfoJSON::fromJSONTimeZone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TimeZone of RequestInfoJSON is not a string.");
    setTimeZone(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONConversationState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ConversationStateJSON *convert_classy = ConversationStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConversationState(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONClientState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientStateJSON *convert_classy = ClientStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientState(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONSendBack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    setSendBack(json_value);
  }

void RequestInfoJSON::fromJSONPreferredImageSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PreferredImageSize of RequestInfoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field PreferredImageSize of RequestInfoJSON has too few elements.");
    std::vector< OInteger > vector_PreferredImageSize1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field PreferredImageSize of RequestInfoJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field PreferredImageSize of RequestInfoJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_PreferredImageSize1[num1] = extracted_integer;
      }
    assert(vector_PreferredImageSize1.size() >= 2);
    initPreferredImageSize();
    for (size_t num6 = 0; num6 < vector_PreferredImageSize1.size(); ++num6)
        appendPreferredImageSize(vector_PreferredImageSize1[num6]);
    for (size_t num1 = 0; num1 < vector_PreferredImageSize1.size(); ++num1)
      {
      }
  }

void RequestInfoJSON::fromJSONInputLanguageEnglishName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputLanguageEnglishName of RequestInfoJSON is not a string.");
    setInputLanguageEnglishName(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONInputLanguageNativeName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputLanguageNativeName of RequestInfoJSON is not a string.");
    setInputLanguageNativeName(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONInputLanguageIETFTag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field InputLanguageIETFTag of RequestInfoJSON is not a string.");
    setInputLanguageIETFTag(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONOutputLanguageEnglishName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputLanguageEnglishName of RequestInfoJSON is not a string.");
    setOutputLanguageEnglishName(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONOutputLanguageNativeName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputLanguageNativeName of RequestInfoJSON is not a string.");
    setOutputLanguageNativeName(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONOutputLanguageIETFTag(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputLanguageIETFTag of RequestInfoJSON is not a string.");
    setOutputLanguageIETFTag(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONResultVersionAccepted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field ResultVersionAccepted of RequestInfoJSON is not a number.");
          }
      }
    setResultVersionAcceptedText(the_rational_text);
  }

void RequestInfoJSON::fromJSONUnitPreference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitPreference of RequestInfoJSON is not a string.");
    TypeUnitPreference the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ETRIC") == 0)
                  {
                    the_enum = UnitPreference_METRIC;
                    goto enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "S") == 0)
                  {
                    the_enum = UnitPreference_US;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field UnitPreference of RequestInfoJSON is not one of the legal strings.");
  enum_is_done:;
    setUnitPreference(the_enum);
  }

void RequestInfoJSON::fromJSONDefaultTimeFormat24Hours(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DefaultTimeFormat24Hours of RequestInfoJSON is not true for false.");
          }
      }
    setDefaultTimeFormat24Hours(the_bool);
  }

void RequestInfoJSON::fromJSONClientID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ClientID of RequestInfoJSON is not a string.");
    setClientID(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONClientVersion(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeClientVersion or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
            or_result.key = 0;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
      {
        try
          {
            OInteger extracted_integer;
            const JSONIntegerValue *json_integer = json_value->integer_value();
            if (json_integer == NULL)
              {
                const JSONRationalValue *json_rational = json_value->rational_value();
                if (json_rational == NULL)
                  {
                    throw("The value for ??? is not a number.");
                  }
                if (!(json_rational->isInteger()))
                  {
                    throw("The value for ??? is not an integer.");
                  }
                extracted_integer = OInteger(json_rational->getInteger())            ;
              }
            else
              {
                extracted_integer = OInteger(json_integer->getData())            ;
              }
            if (extracted_integer < 0)
                throw("The value for ??? is less than the lower bound (0) for that field.");
            or_result.choice1 = extracted_integer;
            or_result.key = 1;
            or_done = true;
          }
        catch (char *e1)
          {
            free(e1);
          }
        catch (const char *e1)
          {
          }
      }
    if (!or_done)
        throw("The value for field ClientVersion of RequestInfoJSON is not one of the allowed values.");
    setClientVersion(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void RequestInfoJSON::fromJSONDeviceID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DeviceID of RequestInfoJSON is not a string.");
    setDeviceID(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONSDK(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SDK of RequestInfoJSON is not a string.");
    setSDK(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONSDKInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    if (json_value->object_value() == NULL)
        throw("The value for field SDKInfo of RequestInfoJSON is not an object.");
    json_value->object_value()->add_reference();
    setSDKInfo(json_value->object_value());
    json_value->object_value()->remove_reference();
  }

void RequestInfoJSON::fromJSONFirstPersonSelf(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FirstPersonSelf of RequestInfoJSON is not a string.");
    setFirstPersonSelf(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONFirstPersonSelfSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FirstPersonSelfSpoken of RequestInfoJSON is not a string.");
    setFirstPersonSelfSpoken(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONSecondPersonSelf(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SecondPersonSelf of RequestInfoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_SecondPersonSelf1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SecondPersonSelf of RequestInfoJSON is not a string.");
        vector_SecondPersonSelf1[num1] = std::string(json_string->getData());
      }
    initSecondPersonSelf();
    for (size_t num7 = 0; num7 < vector_SecondPersonSelf1.size(); ++num7)
        appendSecondPersonSelf(vector_SecondPersonSelf1[num7]);
    for (size_t num1 = 0; num1 < vector_SecondPersonSelf1.size(); ++num1)
      {
      }
  }

void RequestInfoJSON::fromJSONSecondPersonSelfSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SecondPersonSelfSpoken of RequestInfoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_SecondPersonSelfSpoken1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field SecondPersonSelfSpoken of RequestInfoJSON is not a string.");
        vector_SecondPersonSelfSpoken1[num1] = std::string(json_string->getData());
      }
    initSecondPersonSelfSpoken();
    for (size_t num8 = 0; num8 < vector_SecondPersonSelfSpoken1.size(); ++num8)
        appendSecondPersonSelfSpoken(vector_SecondPersonSelfSpoken1[num8]);
    for (size_t num1 = 0; num1 < vector_SecondPersonSelfSpoken1.size(); ++num1)
      {
      }
  }

void RequestInfoJSON::fromJSONWakeUpPattern(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WakeUpPattern of RequestInfoJSON is not a string.");
    setWakeUpPattern(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONUserID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UserID of RequestInfoJSON is not a string.");
    setUserID(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONRequestID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestID of RequestInfoJSON is not a string.");
    setRequestID(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONSessionID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SessionID of RequestInfoJSON is not a string.");
    setSessionID(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONDomains(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DomainsJSON *convert_classy = DomainsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDomains(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONResultUpdateAllowed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ResultUpdateAllowed of RequestInfoJSON is not true for false.");
          }
      }
    setResultUpdateAllowed(the_bool);
  }

void RequestInfoJSON::fromJSONPartialTranscriptsDesired(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PartialTranscriptsDesired of RequestInfoJSON is not true for false.");
          }
      }
    setPartialTranscriptsDesired(the_bool);
  }

void RequestInfoJSON::fromJSONMinResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinResults of RequestInfoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinResults of RequestInfoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinResults(extracted_integer);
  }

void RequestInfoJSON::fromJSONMaxResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MaxResults of RequestInfoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MaxResults of RequestInfoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMaxResults(extracted_integer);
  }

void RequestInfoJSON::fromJSONObjectByteCountPrefix(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ObjectByteCountPrefix of RequestInfoJSON is not true for false.");
          }
      }
    setObjectByteCountPrefix(the_bool);
  }

void RequestInfoJSON::fromJSONProfanityFilter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ProfanityFilter of RequestInfoJSON is not a string.");
    TypeProfanityFilter the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "llowAll") == 0)
                  {
                    the_enum = ProfanityFilter_AllowAll;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "ontRecognize") == 0)
                  {
                    the_enum = ProfanityFilter_DontRecognize;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strncmp(&(json_string->getData()[1]), "tar", 3) == 0)
              {
                switch ((unsigned char)(json_string->getData()[4]))
                  {
                    case 'A':
                        if (strncmp(&(json_string->getData()[5]), "ll", 2) == 0)
                          {
                            switch ((unsigned char)(json_string->getData()[7]))
                              {
                                case 0:
                                      {
                                        the_enum = ProfanityFilter_StarAll;
                                        goto enum_is_done;
                                      }
                                case 'B':
                                    if (strcmp(&(json_string->getData()[8]), "utFirst") == 0)
                                          {
                                            the_enum = ProfanityFilter_StarAllButFirst;
                                            goto enum_is_done;
                                          }
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[5]), "ne") == 0)
                              {
                                the_enum = ProfanityFilter_StarOne;
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
    throw("The value for field ProfanityFilter of RequestInfoJSON is not one of the legal strings.");
  enum_is_done:;
    setProfanityFilter(the_enum);
  }

void RequestInfoJSON::fromJSONClientMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ClientMatches of RequestInfoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ClientMatches of RequestInfoJSON has too few elements.");
    std::vector< ClientMatchJSON * > vector_ClientMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        ClientMatchJSON *convert_classy = ClientMatchJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ClientMatches1[num1] = convert_classy;
      }
    assert(vector_ClientMatches1.size() >= 1);
    initClientMatches();
    for (size_t num9 = 0; num9 < vector_ClientMatches1.size(); ++num9)
        appendClientMatches(vector_ClientMatches1[num9]);
    for (size_t num1 = 0; num1 < vector_ClientMatches1.size(); ++num1)
      {
        vector_ClientMatches1[num1]->remove_reference();
      }
  }

void RequestInfoJSON::fromJSONClientMatchesOnly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ClientMatchesOnly of RequestInfoJSON is not true for false.");
          }
      }
    setClientMatchesOnly(the_bool);
  }

void RequestInfoJSON::fromJSONResponseAudioVoice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioVoice of RequestInfoJSON is not a string.");
    setResponseAudioVoice(std::string(json_string->getData()));
  }

void RequestInfoJSON::fromJSONResponseAudioShortOrLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResponseAudioShortOrLong of RequestInfoJSON is not a string.");
    TypeResponseAudioShortOrLong the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ong") == 0)
                  {
                    the_enum = ResponseAudioShortOrLong_Long;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "hort") == 0)
                  {
                    the_enum = ResponseAudioShortOrLong_Short;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field ResponseAudioShortOrLong of RequestInfoJSON is not one of the legal strings.");
  enum_is_done:;
    setResponseAudioShortOrLong(the_enum);
  }

void RequestInfoJSON::fromJSONResponseAudioAcceptedEncodings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ResponseAudioAcceptedEncodings of RequestInfoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ResponseAudioAcceptedEncodings of RequestInfoJSON has too few elements.");
    std::vector< TypeResponseAudioAcceptedEncodings > vector_ResponseAudioAcceptedEncodings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ResponseAudioAcceptedEncodings of RequestInfoJSON is not a string.");
        TypeResponseAudioAcceptedEncodings the_open_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'S':
                if (strcmp(&(json_string->getData()[1]), "peex") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = ResponseAudioAcceptedEncodings_Speex;
                        goto open_enum_is_done;
                      }
                break;
            case 'W':
                if (strcmp(&(json_string->getData()[1]), "AV") == 0)
                      {
                        the_open_enum.in_known_list = true;
                        the_open_enum.list_value = ResponseAudioAcceptedEncodings_WAV;
                        goto open_enum_is_done;
                      }
                break;
            default:
                break;
          }
        the_open_enum.in_known_list = false;
        the_open_enum.string_value = json_string->getData();
      open_enum_is_done:;
        vector_ResponseAudioAcceptedEncodings1[num1] = the_open_enum;
      }
    assert(vector_ResponseAudioAcceptedEncodings1.size() >= 1);
    initResponseAudioAcceptedEncodings();
    for (size_t num10 = 0; num10 < vector_ResponseAudioAcceptedEncodings1.size(); ++num10)
        appendResponseAudioAcceptedEncodings(vector_ResponseAudioAcceptedEncodings1[num10]);
    for (size_t num1 = 0; num1 < vector_ResponseAudioAcceptedEncodings1.size(); ++num1)
      {
      }
  }

void RequestInfoJSON::fromJSONVoiceActivityDetection(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    VoiceActivityDetectionJSON *convert_classy = VoiceActivityDetectionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVoiceActivityDetection(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONServerDeterminesEndOfAudio(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ServerDeterminesEndOfAudio of RequestInfoJSON is not true for false.");
          }
      }
    setServerDeterminesEndOfAudio(the_bool);
  }

void RequestInfoJSON::fromJSONIntentOnly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IntentOnly of RequestInfoJSON is not true for false.");
          }
      }
    setIntentOnly(the_bool);
  }

void RequestInfoJSON::fromJSONDisableSpellCorrection(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DisableSpellCorrection of RequestInfoJSON is not true for false.");
          }
      }
    setDisableSpellCorrection(the_bool);
  }

void RequestInfoJSON::fromJSONUseContactData(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UseContactData of RequestInfoJSON is not true for false.");
          }
      }
    setUseContactData(the_bool);
  }

void RequestInfoJSON::fromJSONUseClientTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UseClientTime of RequestInfoJSON is not true for false.");
          }
      }
    setUseClientTime(the_bool);
  }

void RequestInfoJSON::fromJSONForceConversationStateTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ForceConversationStateTime of RequestInfoJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ForceConversationStateTime of RequestInfoJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setForceConversationStateTime(extracted_integer);
  }

void RequestInfoJSON::fromJSONPhoneDisambiguationOmitList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    PhoneDisambiguationOmitListJSON *convert_classy = PhoneDisambiguationOmitListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setPhoneDisambiguationOmitList(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONIncomingCallPending(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    IncomingCallPendingJSON *convert_classy = IncomingCallPendingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIncomingCallPending(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONAllowPopularNameContactMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AllowPopularNameContactMatchesJSON *convert_classy = AllowPopularNameContactMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAllowPopularNameContactMatches(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONMusicClientState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicClientStateJSON *convert_classy = MusicClientStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicClientState(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONDisableMusicSearchListPositionSpecification(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DisableListPositionSpecificationJSON *convert_classy = DisableListPositionSpecificationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisableMusicSearchListPositionSpecification(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONCollateMusicEntities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CollateMusicEntitiesJSON *convert_classy = CollateMusicEntitiesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCollateMusicEntities(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONAllowContextFreeMusicSearchForPopularEntities(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AllowContextFreeMusicSearchForPopularEntitiesJSON *convert_classy = AllowContextFreeMusicSearchForPopularEntitiesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAllowContextFreeMusicSearchForPopularEntities(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONSportsLeagueControl(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsLeagueControlJSON *convert_classy = SportsLeagueControlJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportsLeagueControl(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONLocalSearchClientState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchClientStateJSON *convert_classy = LocalSearchClientStateJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchClientState(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONUberServerToken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberServerTokenJSON *convert_classy = UberServerTokenJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberServerToken(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONGetUberServerToken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    GetUberServerTokenJSON *convert_classy = GetUberServerTokenJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGetUberServerToken(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONUberClientId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberClientIdJSON *convert_classy = UberClientIdJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberClientId(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONGetUberClientId(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    GetUberClientIdJSON *convert_classy = GetUberClientIdJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setGetUberClientId(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONDisableMusicPlayerListPositionSpecification(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DisableListPositionSpecificationJSON *convert_classy = DisableListPositionSpecificationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisableMusicPlayerListPositionSpecification(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONHomeAutomationDomainSettings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HomeAutomationDomainSettingsJSON *convert_classy = HomeAutomationDomainSettingsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHomeAutomationDomainSettings(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONUserContactsRequests(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserContactsRequestsJSON *convert_classy = UserContactsRequestsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserContactsRequests(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredGlobalPagesToMatch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredGlobalPagesToMatch(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredGlobalPagesToNotMatch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredGlobalPagesToNotMatch(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPerUserPagesToMatch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPerUserPagesToMatch(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPerUserPagesToNotMatch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPerUserPagesToNotMatch(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredGlobalPagesToSetOnByDefault(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredGlobalPagesToSetOnByDefault(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPerUserPagesToSetOnByDefault(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPerUserPagesToSetOnByDefault(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredGlobalPagesToSetOffByDefault(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredGlobalPagesToSetOffByDefault(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPerUserPagesToSetOffByDefault(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListJSON *convert_classy = StoredPageMatchPageListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPerUserPagesToSetOffByDefault(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPageMatchWriteData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchWriteDataJSON *convert_classy = StoredPageMatchWriteDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPageMatchWriteData(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPageMatchReadData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchReadDataJSON *convert_classy = StoredPageMatchReadDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPageMatchReadData(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredPageMatchPageListData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredPageMatchPageListDataJSON *convert_classy = StoredPageMatchPageListDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredPageMatchPageListData(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONVoiceParameters(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    VoiceParametersJSON *convert_classy = VoiceParametersJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setVoiceParameters(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredAlwaysMatchWriteData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientMatchesJSON *convert_classy = ClientMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredAlwaysMatchWriteData(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONStoredAlwaysMatchReadData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StoredAlwaysMatchReadDataJSON *convert_classy = StoredAlwaysMatchReadDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStoredAlwaysMatchReadData(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONUserFeedback(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UserFeedbackJSON *convert_classy = UserFeedbackJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUserFeedback(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONRadioControlRecognizeNorthAmericanFMBand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RadioControlRecognizeNorthAmericanFMBandJSON *convert_classy = RadioControlRecognizeNorthAmericanFMBandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRadioControlRecognizeNorthAmericanFMBand(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONRadioControlRecognizeNorthAmericanAMBand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RadioControlRecognizeNorthAmericanAMBandJSON *convert_classy = RadioControlRecognizeNorthAmericanAMBandJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRadioControlRecognizeNorthAmericanAMBand(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONRadioControlOtherFMBands(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RadioControlOtherFMBandsJSON *convert_classy = RadioControlOtherFMBandsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRadioControlOtherFMBands(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONRadioControlOtherAMBands(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RadioControlOtherAMBandsJSON *convert_classy = RadioControlOtherAMBandsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRadioControlOtherAMBands(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONClientListMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ClientListMatchesJSON *convert_classy = ClientListMatchesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setClientListMatches(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONIntentToExecute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommandIntentJSON *convert_classy = CommandIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setIntentToExecute(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONRobotInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RobotInfoJSON *convert_classy = RobotInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRobotInfo(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONConvertToNewInformationNuggets(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ConvertToNewInformationNuggetsJSON *convert_classy = ConvertToNewInformationNuggetsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setConvertToNewInformationNuggets(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONAcapelaVoiceParameters(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AcapelaVoiceParametersJSON *convert_classy = AcapelaVoiceParametersJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAcapelaVoiceParameters(convert_classy);
    convert_classy->remove_reference();
  }

void RequestInfoJSON::fromJSONDisambiguateResultsBeforeAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DisambiguateResultsBeforeActionJSON *convert_classy = DisambiguateResultsBeforeActionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDisambiguateResultsBeforeAction(convert_classy);
    convert_classy->remove_reference();
  }

RequestInfoJSON::RequestInfoJSON(void) :
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasPositionTime(false),
        flagHasPositionHorizontalAccuracy(false),
        flagHasStreet(false),
        flagHasCity(false),
        flagHasState(false),
        flagHasCountry(false),
        flagHasRoutePoints(false),
        flagHasControllableTrackPlaying(false),
        flagHasTimeStamp(false),
        flagHasTimeZone(false),
        flagHasConversationState(false),
        flagHasClientState(false),
        flagHasSendBack(false),
        flagHasPreferredImageSize(false),
        flagHasInputLanguageEnglishName(false),
        flagHasInputLanguageNativeName(false),
        flagHasInputLanguageIETFTag(false),
        flagHasOutputLanguageEnglishName(false),
        flagHasOutputLanguageNativeName(false),
        flagHasOutputLanguageIETFTag(false),
        flagHasResultVersionAccepted(false),
        flagHasUnitPreference(false),
        flagHasDefaultTimeFormat24Hours(false),
        flagHasClientID(false),
        flagHasClientVersion(false),
        flagHasDeviceID(false),
        flagHasSDK(false),
        flagHasSDKInfo(false),
        flagHasFirstPersonSelf(false),
        flagHasFirstPersonSelfSpoken(false),
        flagHasSecondPersonSelf(false),
        flagHasSecondPersonSelfSpoken(false),
        flagHasWakeUpPattern(false),
        flagHasUserID(false),
        flagHasRequestID(false),
        flagHasSessionID(false),
        flagHasDomains(false),
        flagHasResultUpdateAllowed(false),
        flagHasPartialTranscriptsDesired(false),
        flagHasMinResults(false),
        flagHasMaxResults(false),
        flagHasObjectByteCountPrefix(false),
        flagHasProfanityFilter(false),
        flagHasClientMatches(false),
        flagHasClientMatchesOnly(false),
        flagHasResponseAudioVoice(false),
        flagHasResponseAudioShortOrLong(false),
        flagHasResponseAudioAcceptedEncodings(false),
        flagHasVoiceActivityDetection(false),
        flagHasServerDeterminesEndOfAudio(false),
        flagHasIntentOnly(false),
        flagHasDisableSpellCorrection(false),
        flagHasUseContactData(false),
        flagHasUseClientTime(false),
        flagHasForceConversationStateTime(false),
        flagHasPhoneDisambiguationOmitList(false),
        flagHasIncomingCallPending(false),
        flagHasAllowPopularNameContactMatches(false),
        flagHasMusicClientState(false),
        flagHasDisableMusicSearchListPositionSpecification(false),
        flagHasCollateMusicEntities(false),
        flagHasAllowContextFreeMusicSearchForPopularEntities(false),
        flagHasSportsLeagueControl(false),
        flagHasLocalSearchClientState(false),
        flagHasUberServerToken(false),
        flagHasGetUberServerToken(false),
        flagHasUberClientId(false),
        flagHasGetUberClientId(false),
        flagHasDisableMusicPlayerListPositionSpecification(false),
        flagHasHomeAutomationDomainSettings(false),
        flagHasUserContactsRequests(false),
        flagHasStoredGlobalPagesToMatch(false),
        flagHasStoredGlobalPagesToNotMatch(false),
        flagHasStoredPerUserPagesToMatch(false),
        flagHasStoredPerUserPagesToNotMatch(false),
        flagHasStoredGlobalPagesToSetOnByDefault(false),
        flagHasStoredPerUserPagesToSetOnByDefault(false),
        flagHasStoredGlobalPagesToSetOffByDefault(false),
        flagHasStoredPerUserPagesToSetOffByDefault(false),
        flagHasStoredPageMatchWriteData(false),
        flagHasStoredPageMatchReadData(false),
        flagHasStoredPageMatchPageListData(false),
        flagHasVoiceParameters(false),
        flagHasStoredAlwaysMatchWriteData(false),
        flagHasStoredAlwaysMatchReadData(false),
        flagHasUserFeedback(false),
        flagHasRadioControlRecognizeNorthAmericanFMBand(false),
        flagHasRadioControlRecognizeNorthAmericanAMBand(false),
        flagHasRadioControlOtherFMBands(false),
        flagHasRadioControlOtherAMBands(false),
        flagHasClientListMatches(false),
        flagHasIntentToExecute(false),
        flagHasRobotInfo(false),
        flagHasConvertToNewInformationNuggets(false),
        flagHasAcapelaVoiceParameters(false),
        flagHasDisambiguateResultsBeforeAction(false)
  {
    storeControllableTrackPlaying = false;
    storeFirstPersonSelf = "Hound";
    std::string element2;
    element2 = "Hound";
    storeSecondPersonSelf.push_back(element2);
    storeWakeUpPattern = "[[\"OK\"] . \"Hound\"]";
    storeResultUpdateAllowed = false;
    storePartialTranscriptsDesired = false;
    storeMinResults = 1;
    storeMaxResults = 1;
    storeObjectByteCountPrefix = false;
    storeClientMatchesOnly = false;
    storeUseContactData = true;
    storeUseClientTime = false;
    extraIndex = create_string_index();
  }

RequestInfoJSON::~RequestInfoJSON(void)
  {
    if (flagHasRoutePoints)
      {
        storeRoutePoints->remove_reference();
      }
    if (flagHasConversationState)
      {
        storeConversationState->remove_reference();
      }
    if (flagHasClientState)
      {
        storeClientState->remove_reference();
      }
    if (flagHasSendBack)
      {
        storeSendBack->remove_reference();
      }
    if (flagHasSDKInfo)
      {
        storeSDKInfo->remove_reference();
      }
    if (flagHasDomains)
      {
        storeDomains->remove_reference();
      }
    if (flagHasClientMatches)
      {
        for (size_t num4 = 0; num4 < storeClientMatches.size(); ++num4)
          {
            storeClientMatches[num4]->remove_reference();
          }
      }
    if (flagHasVoiceActivityDetection)
      {
        storeVoiceActivityDetection->remove_reference();
      }
    if (flagHasPhoneDisambiguationOmitList)
      {
        storePhoneDisambiguationOmitList->remove_reference();
      }
    if (flagHasIncomingCallPending)
      {
        storeIncomingCallPending->remove_reference();
      }
    if (flagHasAllowPopularNameContactMatches)
      {
        storeAllowPopularNameContactMatches->remove_reference();
      }
    if (flagHasMusicClientState)
      {
        storeMusicClientState->remove_reference();
      }
    if (flagHasDisableMusicSearchListPositionSpecification)
      {
        storeDisableMusicSearchListPositionSpecification->remove_reference();
      }
    if (flagHasCollateMusicEntities)
      {
        storeCollateMusicEntities->remove_reference();
      }
    if (flagHasAllowContextFreeMusicSearchForPopularEntities)
      {
        storeAllowContextFreeMusicSearchForPopularEntities->remove_reference();
      }
    if (flagHasSportsLeagueControl)
      {
        storeSportsLeagueControl->remove_reference();
      }
    if (flagHasLocalSearchClientState)
      {
        storeLocalSearchClientState->remove_reference();
      }
    if (flagHasUberServerToken)
      {
        storeUberServerToken->remove_reference();
      }
    if (flagHasGetUberServerToken)
      {
        storeGetUberServerToken->remove_reference();
      }
    if (flagHasUberClientId)
      {
        storeUberClientId->remove_reference();
      }
    if (flagHasGetUberClientId)
      {
        storeGetUberClientId->remove_reference();
      }
    if (flagHasDisableMusicPlayerListPositionSpecification)
      {
        storeDisableMusicPlayerListPositionSpecification->remove_reference();
      }
    if (flagHasHomeAutomationDomainSettings)
      {
        storeHomeAutomationDomainSettings->remove_reference();
      }
    if (flagHasUserContactsRequests)
      {
        storeUserContactsRequests->remove_reference();
      }
    if (flagHasStoredGlobalPagesToMatch)
      {
        storeStoredGlobalPagesToMatch->remove_reference();
      }
    if (flagHasStoredGlobalPagesToNotMatch)
      {
        storeStoredGlobalPagesToNotMatch->remove_reference();
      }
    if (flagHasStoredPerUserPagesToMatch)
      {
        storeStoredPerUserPagesToMatch->remove_reference();
      }
    if (flagHasStoredPerUserPagesToNotMatch)
      {
        storeStoredPerUserPagesToNotMatch->remove_reference();
      }
    if (flagHasStoredGlobalPagesToSetOnByDefault)
      {
        storeStoredGlobalPagesToSetOnByDefault->remove_reference();
      }
    if (flagHasStoredPerUserPagesToSetOnByDefault)
      {
        storeStoredPerUserPagesToSetOnByDefault->remove_reference();
      }
    if (flagHasStoredGlobalPagesToSetOffByDefault)
      {
        storeStoredGlobalPagesToSetOffByDefault->remove_reference();
      }
    if (flagHasStoredPerUserPagesToSetOffByDefault)
      {
        storeStoredPerUserPagesToSetOffByDefault->remove_reference();
      }
    if (flagHasStoredPageMatchWriteData)
      {
        storeStoredPageMatchWriteData->remove_reference();
      }
    if (flagHasStoredPageMatchReadData)
      {
        storeStoredPageMatchReadData->remove_reference();
      }
    if (flagHasStoredPageMatchPageListData)
      {
        storeStoredPageMatchPageListData->remove_reference();
      }
    if (flagHasVoiceParameters)
      {
        storeVoiceParameters->remove_reference();
      }
    if (flagHasStoredAlwaysMatchWriteData)
      {
        storeStoredAlwaysMatchWriteData->remove_reference();
      }
    if (flagHasStoredAlwaysMatchReadData)
      {
        storeStoredAlwaysMatchReadData->remove_reference();
      }
    if (flagHasUserFeedback)
      {
        storeUserFeedback->remove_reference();
      }
    if (flagHasRadioControlRecognizeNorthAmericanFMBand)
      {
        storeRadioControlRecognizeNorthAmericanFMBand->remove_reference();
      }
    if (flagHasRadioControlRecognizeNorthAmericanAMBand)
      {
        storeRadioControlRecognizeNorthAmericanAMBand->remove_reference();
      }
    if (flagHasRadioControlOtherFMBands)
      {
        storeRadioControlOtherFMBands->remove_reference();
      }
    if (flagHasRadioControlOtherAMBands)
      {
        storeRadioControlOtherAMBands->remove_reference();
      }
    if (flagHasClientListMatches)
      {
        storeClientListMatches->remove_reference();
      }
    if (flagHasIntentToExecute)
      {
        storeIntentToExecute->remove_reference();
      }
    if (flagHasRobotInfo)
      {
        storeRobotInfo->remove_reference();
      }
    if (flagHasConvertToNewInformationNuggets)
      {
        storeConvertToNewInformationNuggets->remove_reference();
      }
    if (flagHasAcapelaVoiceParameters)
      {
        storeAcapelaVoiceParameters->remove_reference();
      }
    if (flagHasDisambiguateResultsBeforeAction)
      {
        storeDisambiguateResultsBeforeAction->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool RequestInfoJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double RequestInfoJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double RequestInfoJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string RequestInfoJSON::getLatitudeAsText(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLatitude);
      }
  }

bool RequestInfoJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double RequestInfoJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double RequestInfoJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string RequestInfoJSON::getLongitudeAsText(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeLongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreLongitude);
      }
  }

bool RequestInfoJSON::hasPositionTime(void) const
  {
    return flagHasPositionTime;
  }

OInteger RequestInfoJSON::getPositionTime(void)
  {
    assert(flagHasPositionTime);
    return storePositionTime;
  }

const OInteger RequestInfoJSON::getPositionTime(void) const
  {
    assert(flagHasPositionTime);
    return storePositionTime;
  }

bool RequestInfoJSON::hasPositionHorizontalAccuracy(void) const
  {
    return flagHasPositionHorizontalAccuracy;
  }

double RequestInfoJSON::getPositionHorizontalAccuracy(void)
  {
    assert(flagHasPositionHorizontalAccuracy);
    if (textStorePositionHorizontalAccuracy != "")
      {
        return atof(textStorePositionHorizontalAccuracy.c_str());
      }
    return storePositionHorizontalAccuracy;
  }

const double RequestInfoJSON::getPositionHorizontalAccuracy(void) const
  {
    assert(flagHasPositionHorizontalAccuracy);
    if (textStorePositionHorizontalAccuracy != "")
      {
        return atof(textStorePositionHorizontalAccuracy.c_str());
      }
    return storePositionHorizontalAccuracy;
  }

std::string RequestInfoJSON::getPositionHorizontalAccuracyAsText(void) const
  {
    assert(flagHasPositionHorizontalAccuracy);
    if (textStorePositionHorizontalAccuracy == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePositionHorizontalAccuracy);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePositionHorizontalAccuracy);
      }
  }

bool RequestInfoJSON::hasStreet(void) const
  {
    return flagHasStreet;
  }

std::string RequestInfoJSON::getStreet(void)
  {
    assert(flagHasStreet);
    return storeStreet;
  }

const std::string RequestInfoJSON::getStreet(void) const
  {
    assert(flagHasStreet);
    return storeStreet;
  }

bool RequestInfoJSON::hasCity(void) const
  {
    return flagHasCity;
  }

std::string RequestInfoJSON::getCity(void)
  {
    assert(flagHasCity);
    return storeCity;
  }

const std::string RequestInfoJSON::getCity(void) const
  {
    assert(flagHasCity);
    return storeCity;
  }

bool RequestInfoJSON::hasState(void) const
  {
    return flagHasState;
  }

std::string RequestInfoJSON::getState(void)
  {
    assert(flagHasState);
    return storeState;
  }

const std::string RequestInfoJSON::getState(void) const
  {
    assert(flagHasState);
    return storeState;
  }

bool RequestInfoJSON::hasCountry(void) const
  {
    return flagHasCountry;
  }

std::string RequestInfoJSON::getCountry(void)
  {
    assert(flagHasCountry);
    return storeCountry;
  }

const std::string RequestInfoJSON::getCountry(void) const
  {
    assert(flagHasCountry);
    return storeCountry;
  }

bool RequestInfoJSON::hasRoutePoints(void) const
  {
    return flagHasRoutePoints;
  }

RoutePointsJSON * RequestInfoJSON::getRoutePoints(void)
  {
    assert(flagHasRoutePoints);
    return storeRoutePoints;
  }

const RoutePointsJSON * RequestInfoJSON::getRoutePoints(void) const
  {
    assert(flagHasRoutePoints);
    return storeRoutePoints;
  }

bool RequestInfoJSON::hasControllableTrackPlaying(void) const
  {
    return flagHasControllableTrackPlaying;
  }

bool RequestInfoJSON::getControllableTrackPlaying(void)
  {
    return storeControllableTrackPlaying;
  }

const bool RequestInfoJSON::getControllableTrackPlaying(void) const
  {
    return storeControllableTrackPlaying;
  }

bool RequestInfoJSON::hasTimeStamp(void) const
  {
    return flagHasTimeStamp;
  }

OInteger RequestInfoJSON::getTimeStamp(void)
  {
    assert(flagHasTimeStamp);
    return storeTimeStamp;
  }

const OInteger RequestInfoJSON::getTimeStamp(void) const
  {
    assert(flagHasTimeStamp);
    return storeTimeStamp;
  }

bool RequestInfoJSON::hasTimeZone(void) const
  {
    return flagHasTimeZone;
  }

std::string RequestInfoJSON::getTimeZone(void)
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

const std::string RequestInfoJSON::getTimeZone(void) const
  {
    assert(flagHasTimeZone);
    return storeTimeZone;
  }

bool RequestInfoJSON::hasConversationState(void) const
  {
    return flagHasConversationState;
  }

ConversationStateJSON * RequestInfoJSON::getConversationState(void)
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

const ConversationStateJSON * RequestInfoJSON::getConversationState(void) const
  {
    assert(flagHasConversationState);
    return storeConversationState;
  }

bool RequestInfoJSON::hasClientState(void) const
  {
    return flagHasClientState;
  }

ClientStateJSON * RequestInfoJSON::getClientState(void)
  {
    assert(flagHasClientState);
    return storeClientState;
  }

const ClientStateJSON * RequestInfoJSON::getClientState(void) const
  {
    assert(flagHasClientState);
    return storeClientState;
  }

bool RequestInfoJSON::hasSendBack(void) const
  {
    return flagHasSendBack;
  }

JSONValue * RequestInfoJSON::getSendBack(void)
  {
    assert(flagHasSendBack);
    return storeSendBack;
  }

const JSONValue * RequestInfoJSON::getSendBack(void) const
  {
    assert(flagHasSendBack);
    return storeSendBack;
  }

bool RequestInfoJSON::hasPreferredImageSize(void) const
  {
    return flagHasPreferredImageSize;
  }

size_t RequestInfoJSON::countOfPreferredImageSize(void) const
  {
    assert(flagHasPreferredImageSize);
    return storePreferredImageSize.size();
  }

OInteger RequestInfoJSON::elementOfPreferredImageSize(size_t element_num)
  {
    assert(flagHasPreferredImageSize);
    return storePreferredImageSize[element_num];
  }

const OInteger RequestInfoJSON::elementOfPreferredImageSize(size_t element_num) const
  {
    assert(flagHasPreferredImageSize);
    return storePreferredImageSize[element_num];
  }

std::vector< OInteger > RequestInfoJSON::getPreferredImageSize(void)
  {
    assert(flagHasPreferredImageSize);
    return storePreferredImageSize;
  }

const std::vector< OInteger > RequestInfoJSON::getPreferredImageSize(void) const
  {
    assert(flagHasPreferredImageSize);
    return storePreferredImageSize;
  }

bool RequestInfoJSON::hasInputLanguageEnglishName(void) const
  {
    return flagHasInputLanguageEnglishName;
  }

std::string RequestInfoJSON::getInputLanguageEnglishName(void)
  {
    assert(flagHasInputLanguageEnglishName);
    return storeInputLanguageEnglishName;
  }

const std::string RequestInfoJSON::getInputLanguageEnglishName(void) const
  {
    assert(flagHasInputLanguageEnglishName);
    return storeInputLanguageEnglishName;
  }

bool RequestInfoJSON::hasInputLanguageNativeName(void) const
  {
    return flagHasInputLanguageNativeName;
  }

std::string RequestInfoJSON::getInputLanguageNativeName(void)
  {
    assert(flagHasInputLanguageNativeName);
    return storeInputLanguageNativeName;
  }

const std::string RequestInfoJSON::getInputLanguageNativeName(void) const
  {
    assert(flagHasInputLanguageNativeName);
    return storeInputLanguageNativeName;
  }

bool RequestInfoJSON::hasInputLanguageIETFTag(void) const
  {
    return flagHasInputLanguageIETFTag;
  }

std::string RequestInfoJSON::getInputLanguageIETFTag(void)
  {
    assert(flagHasInputLanguageIETFTag);
    return storeInputLanguageIETFTag;
  }

const std::string RequestInfoJSON::getInputLanguageIETFTag(void) const
  {
    assert(flagHasInputLanguageIETFTag);
    return storeInputLanguageIETFTag;
  }

bool RequestInfoJSON::hasOutputLanguageEnglishName(void) const
  {
    return flagHasOutputLanguageEnglishName;
  }

std::string RequestInfoJSON::getOutputLanguageEnglishName(void)
  {
    assert(flagHasOutputLanguageEnglishName);
    return storeOutputLanguageEnglishName;
  }

const std::string RequestInfoJSON::getOutputLanguageEnglishName(void) const
  {
    assert(flagHasOutputLanguageEnglishName);
    return storeOutputLanguageEnglishName;
  }

bool RequestInfoJSON::hasOutputLanguageNativeName(void) const
  {
    return flagHasOutputLanguageNativeName;
  }

std::string RequestInfoJSON::getOutputLanguageNativeName(void)
  {
    assert(flagHasOutputLanguageNativeName);
    return storeOutputLanguageNativeName;
  }

const std::string RequestInfoJSON::getOutputLanguageNativeName(void) const
  {
    assert(flagHasOutputLanguageNativeName);
    return storeOutputLanguageNativeName;
  }

bool RequestInfoJSON::hasOutputLanguageIETFTag(void) const
  {
    return flagHasOutputLanguageIETFTag;
  }

std::string RequestInfoJSON::getOutputLanguageIETFTag(void)
  {
    assert(flagHasOutputLanguageIETFTag);
    return storeOutputLanguageIETFTag;
  }

const std::string RequestInfoJSON::getOutputLanguageIETFTag(void) const
  {
    assert(flagHasOutputLanguageIETFTag);
    return storeOutputLanguageIETFTag;
  }

bool RequestInfoJSON::hasResultVersionAccepted(void) const
  {
    return flagHasResultVersionAccepted;
  }

double RequestInfoJSON::getResultVersionAccepted(void)
  {
    assert(flagHasResultVersionAccepted);
    if (textStoreResultVersionAccepted != "")
      {
        return atof(textStoreResultVersionAccepted.c_str());
      }
    return storeResultVersionAccepted;
  }

const double RequestInfoJSON::getResultVersionAccepted(void) const
  {
    assert(flagHasResultVersionAccepted);
    if (textStoreResultVersionAccepted != "")
      {
        return atof(textStoreResultVersionAccepted.c_str());
      }
    return storeResultVersionAccepted;
  }

std::string RequestInfoJSON::getResultVersionAcceptedAsText(void) const
  {
    assert(flagHasResultVersionAccepted);
    if (textStoreResultVersionAccepted == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeResultVersionAccepted);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreResultVersionAccepted);
      }
  }

bool RequestInfoJSON::hasUnitPreference(void) const
  {
    return flagHasUnitPreference;
  }

RequestInfoJSON::TypeUnitPreference RequestInfoJSON::getUnitPreference(void)
  {
    assert(flagHasUnitPreference);
    return storeUnitPreference;
  }

const RequestInfoJSON::TypeUnitPreference RequestInfoJSON::getUnitPreference(void) const
  {
    assert(flagHasUnitPreference);
    return storeUnitPreference;
  }

const char *RequestInfoJSON::getUnitPreferenceAsChars(void) const
  {
    return stringFromUnitPreference(getUnitPreference());
  }

std::string RequestInfoJSON::getUnitPreferenceAsString(void) const
  {
    return stringFromUnitPreference(getUnitPreference());
  }

bool RequestInfoJSON::hasDefaultTimeFormat24Hours(void) const
  {
    return flagHasDefaultTimeFormat24Hours;
  }

bool RequestInfoJSON::getDefaultTimeFormat24Hours(void)
  {
    assert(flagHasDefaultTimeFormat24Hours);
    return storeDefaultTimeFormat24Hours;
  }

const bool RequestInfoJSON::getDefaultTimeFormat24Hours(void) const
  {
    assert(flagHasDefaultTimeFormat24Hours);
    return storeDefaultTimeFormat24Hours;
  }

bool RequestInfoJSON::hasClientID(void) const
  {
    return flagHasClientID;
  }

std::string RequestInfoJSON::getClientID(void)
  {
    assert(flagHasClientID);
    return storeClientID;
  }

const std::string RequestInfoJSON::getClientID(void) const
  {
    assert(flagHasClientID);
    return storeClientID;
  }

bool RequestInfoJSON::hasClientVersion(void) const
  {
    return flagHasClientVersion;
  }

RequestInfoJSON::TypeClientVersion RequestInfoJSON::getClientVersion(void)
  {
    assert(flagHasClientVersion);
    return storeClientVersion;
  }

const RequestInfoJSON::TypeClientVersion RequestInfoJSON::getClientVersion(void) const
  {
    assert(flagHasClientVersion);
    return storeClientVersion;
  }

bool RequestInfoJSON::hasDeviceID(void) const
  {
    return flagHasDeviceID;
  }

std::string RequestInfoJSON::getDeviceID(void)
  {
    assert(flagHasDeviceID);
    return storeDeviceID;
  }

const std::string RequestInfoJSON::getDeviceID(void) const
  {
    assert(flagHasDeviceID);
    return storeDeviceID;
  }

bool RequestInfoJSON::hasSDK(void) const
  {
    return flagHasSDK;
  }

std::string RequestInfoJSON::getSDK(void)
  {
    assert(flagHasSDK);
    return storeSDK;
  }

const std::string RequestInfoJSON::getSDK(void) const
  {
    assert(flagHasSDK);
    return storeSDK;
  }

bool RequestInfoJSON::hasSDKInfo(void) const
  {
    return flagHasSDKInfo;
  }

JSONObjectValue * RequestInfoJSON::getSDKInfo(void)
  {
    assert(flagHasSDKInfo);
    return storeSDKInfo;
  }

const JSONObjectValue * RequestInfoJSON::getSDKInfo(void) const
  {
    assert(flagHasSDKInfo);
    return storeSDKInfo;
  }

bool RequestInfoJSON::hasFirstPersonSelf(void) const
  {
    return flagHasFirstPersonSelf;
  }

std::string RequestInfoJSON::getFirstPersonSelf(void)
  {
    return storeFirstPersonSelf;
  }

const std::string RequestInfoJSON::getFirstPersonSelf(void) const
  {
    return storeFirstPersonSelf;
  }

bool RequestInfoJSON::hasFirstPersonSelfSpoken(void) const
  {
    return flagHasFirstPersonSelfSpoken;
  }

std::string RequestInfoJSON::getFirstPersonSelfSpoken(void)
  {
    assert(flagHasFirstPersonSelfSpoken);
    return storeFirstPersonSelfSpoken;
  }

const std::string RequestInfoJSON::getFirstPersonSelfSpoken(void) const
  {
    assert(flagHasFirstPersonSelfSpoken);
    return storeFirstPersonSelfSpoken;
  }

bool RequestInfoJSON::hasSecondPersonSelf(void) const
  {
    return flagHasSecondPersonSelf;
  }

size_t RequestInfoJSON::countOfSecondPersonSelf(void) const
  {
    return storeSecondPersonSelf.size();
  }

std::string RequestInfoJSON::elementOfSecondPersonSelf(size_t element_num)
  {
    return storeSecondPersonSelf[element_num];
  }

const std::string RequestInfoJSON::elementOfSecondPersonSelf(size_t element_num) const
  {
    return storeSecondPersonSelf[element_num];
  }

std::vector< std::string > RequestInfoJSON::getSecondPersonSelf(void)
  {
    return storeSecondPersonSelf;
  }

const std::vector< std::string > RequestInfoJSON::getSecondPersonSelf(void) const
  {
    return storeSecondPersonSelf;
  }

bool RequestInfoJSON::hasSecondPersonSelfSpoken(void) const
  {
    return flagHasSecondPersonSelfSpoken;
  }

size_t RequestInfoJSON::countOfSecondPersonSelfSpoken(void) const
  {
    assert(flagHasSecondPersonSelfSpoken);
    return storeSecondPersonSelfSpoken.size();
  }

std::string RequestInfoJSON::elementOfSecondPersonSelfSpoken(size_t element_num)
  {
    assert(flagHasSecondPersonSelfSpoken);
    return storeSecondPersonSelfSpoken[element_num];
  }

const std::string RequestInfoJSON::elementOfSecondPersonSelfSpoken(size_t element_num) const
  {
    assert(flagHasSecondPersonSelfSpoken);
    return storeSecondPersonSelfSpoken[element_num];
  }

std::vector< std::string > RequestInfoJSON::getSecondPersonSelfSpoken(void)
  {
    assert(flagHasSecondPersonSelfSpoken);
    return storeSecondPersonSelfSpoken;
  }

const std::vector< std::string > RequestInfoJSON::getSecondPersonSelfSpoken(void) const
  {
    assert(flagHasSecondPersonSelfSpoken);
    return storeSecondPersonSelfSpoken;
  }

bool RequestInfoJSON::hasWakeUpPattern(void) const
  {
    return flagHasWakeUpPattern;
  }

std::string RequestInfoJSON::getWakeUpPattern(void)
  {
    return storeWakeUpPattern;
  }

const std::string RequestInfoJSON::getWakeUpPattern(void) const
  {
    return storeWakeUpPattern;
  }

bool RequestInfoJSON::hasUserID(void) const
  {
    return flagHasUserID;
  }

std::string RequestInfoJSON::getUserID(void)
  {
    assert(flagHasUserID);
    return storeUserID;
  }

const std::string RequestInfoJSON::getUserID(void) const
  {
    assert(flagHasUserID);
    return storeUserID;
  }

bool RequestInfoJSON::hasRequestID(void) const
  {
    return flagHasRequestID;
  }

std::string RequestInfoJSON::getRequestID(void)
  {
    assert(flagHasRequestID);
    return storeRequestID;
  }

const std::string RequestInfoJSON::getRequestID(void) const
  {
    assert(flagHasRequestID);
    return storeRequestID;
  }

bool RequestInfoJSON::hasSessionID(void) const
  {
    return flagHasSessionID;
  }

std::string RequestInfoJSON::getSessionID(void)
  {
    assert(flagHasSessionID);
    return storeSessionID;
  }

const std::string RequestInfoJSON::getSessionID(void) const
  {
    assert(flagHasSessionID);
    return storeSessionID;
  }

bool RequestInfoJSON::hasDomains(void) const
  {
    return flagHasDomains;
  }

DomainsJSON * RequestInfoJSON::getDomains(void)
  {
    assert(flagHasDomains);
    return storeDomains;
  }

const DomainsJSON * RequestInfoJSON::getDomains(void) const
  {
    assert(flagHasDomains);
    return storeDomains;
  }

bool RequestInfoJSON::hasResultUpdateAllowed(void) const
  {
    return flagHasResultUpdateAllowed;
  }

bool RequestInfoJSON::getResultUpdateAllowed(void)
  {
    return storeResultUpdateAllowed;
  }

const bool RequestInfoJSON::getResultUpdateAllowed(void) const
  {
    return storeResultUpdateAllowed;
  }

bool RequestInfoJSON::hasPartialTranscriptsDesired(void) const
  {
    return flagHasPartialTranscriptsDesired;
  }

bool RequestInfoJSON::getPartialTranscriptsDesired(void)
  {
    return storePartialTranscriptsDesired;
  }

const bool RequestInfoJSON::getPartialTranscriptsDesired(void) const
  {
    return storePartialTranscriptsDesired;
  }

bool RequestInfoJSON::hasMinResults(void) const
  {
    return flagHasMinResults;
  }

OInteger RequestInfoJSON::getMinResults(void)
  {
    return storeMinResults;
  }

const OInteger RequestInfoJSON::getMinResults(void) const
  {
    return storeMinResults;
  }

bool RequestInfoJSON::hasMaxResults(void) const
  {
    return flagHasMaxResults;
  }

OInteger RequestInfoJSON::getMaxResults(void)
  {
    return storeMaxResults;
  }

const OInteger RequestInfoJSON::getMaxResults(void) const
  {
    return storeMaxResults;
  }

bool RequestInfoJSON::hasObjectByteCountPrefix(void) const
  {
    return flagHasObjectByteCountPrefix;
  }

bool RequestInfoJSON::getObjectByteCountPrefix(void)
  {
    return storeObjectByteCountPrefix;
  }

const bool RequestInfoJSON::getObjectByteCountPrefix(void) const
  {
    return storeObjectByteCountPrefix;
  }

bool RequestInfoJSON::hasProfanityFilter(void) const
  {
    return flagHasProfanityFilter;
  }

RequestInfoJSON::TypeProfanityFilter RequestInfoJSON::getProfanityFilter(void)
  {
    assert(flagHasProfanityFilter);
    return storeProfanityFilter;
  }

const RequestInfoJSON::TypeProfanityFilter RequestInfoJSON::getProfanityFilter(void) const
  {
    assert(flagHasProfanityFilter);
    return storeProfanityFilter;
  }

const char *RequestInfoJSON::getProfanityFilterAsChars(void) const
  {
    return stringFromProfanityFilter(getProfanityFilter());
  }

std::string RequestInfoJSON::getProfanityFilterAsString(void) const
  {
    return stringFromProfanityFilter(getProfanityFilter());
  }

bool RequestInfoJSON::hasClientMatches(void) const
  {
    return flagHasClientMatches;
  }

size_t RequestInfoJSON::countOfClientMatches(void) const
  {
    assert(flagHasClientMatches);
    return storeClientMatches.size();
  }

ClientMatchJSON * RequestInfoJSON::elementOfClientMatches(size_t element_num)
  {
    assert(flagHasClientMatches);
    return storeClientMatches[element_num];
  }

const ClientMatchJSON * RequestInfoJSON::elementOfClientMatches(size_t element_num) const
  {
    assert(flagHasClientMatches);
    return storeClientMatches[element_num];
  }

std::vector< ClientMatchJSON * > RequestInfoJSON::getClientMatches(void)
  {
    assert(flagHasClientMatches);
    return storeClientMatches;
  }

const std::vector< ClientMatchJSON * > RequestInfoJSON::getClientMatches(void) const
  {
    assert(flagHasClientMatches);
    return storeClientMatches;
  }

bool RequestInfoJSON::hasClientMatchesOnly(void) const
  {
    return flagHasClientMatchesOnly;
  }

bool RequestInfoJSON::getClientMatchesOnly(void)
  {
    return storeClientMatchesOnly;
  }

const bool RequestInfoJSON::getClientMatchesOnly(void) const
  {
    return storeClientMatchesOnly;
  }

bool RequestInfoJSON::hasResponseAudioVoice(void) const
  {
    return flagHasResponseAudioVoice;
  }

std::string RequestInfoJSON::getResponseAudioVoice(void)
  {
    assert(flagHasResponseAudioVoice);
    return storeResponseAudioVoice;
  }

const std::string RequestInfoJSON::getResponseAudioVoice(void) const
  {
    assert(flagHasResponseAudioVoice);
    return storeResponseAudioVoice;
  }

bool RequestInfoJSON::hasResponseAudioShortOrLong(void) const
  {
    return flagHasResponseAudioShortOrLong;
  }

RequestInfoJSON::TypeResponseAudioShortOrLong RequestInfoJSON::getResponseAudioShortOrLong(void)
  {
    assert(flagHasResponseAudioShortOrLong);
    return storeResponseAudioShortOrLong;
  }

const RequestInfoJSON::TypeResponseAudioShortOrLong RequestInfoJSON::getResponseAudioShortOrLong(void) const
  {
    assert(flagHasResponseAudioShortOrLong);
    return storeResponseAudioShortOrLong;
  }

const char *RequestInfoJSON::getResponseAudioShortOrLongAsChars(void) const
  {
    return stringFromResponseAudioShortOrLong(getResponseAudioShortOrLong());
  }

std::string RequestInfoJSON::getResponseAudioShortOrLongAsString(void) const
  {
    return stringFromResponseAudioShortOrLong(getResponseAudioShortOrLong());
  }

bool RequestInfoJSON::hasResponseAudioAcceptedEncodings(void) const
  {
    return flagHasResponseAudioAcceptedEncodings;
  }

size_t RequestInfoJSON::countOfResponseAudioAcceptedEncodings(void) const
  {
    assert(flagHasResponseAudioAcceptedEncodings);
    return storeResponseAudioAcceptedEncodings.size();
  }

RequestInfoJSON::TypeResponseAudioAcceptedEncodings RequestInfoJSON::elementOfResponseAudioAcceptedEncodings(size_t element_num)
  {
    assert(flagHasResponseAudioAcceptedEncodings);
    return storeResponseAudioAcceptedEncodings[element_num];
  }

const RequestInfoJSON::TypeResponseAudioAcceptedEncodings RequestInfoJSON::elementOfResponseAudioAcceptedEncodings(size_t element_num) const
  {
    assert(flagHasResponseAudioAcceptedEncodings);
    return storeResponseAudioAcceptedEncodings[element_num];
  }

std::vector< RequestInfoJSON::TypeResponseAudioAcceptedEncodings > RequestInfoJSON::getResponseAudioAcceptedEncodings(void)
  {
    assert(flagHasResponseAudioAcceptedEncodings);
    return storeResponseAudioAcceptedEncodings;
  }

const std::vector< RequestInfoJSON::TypeResponseAudioAcceptedEncodings > RequestInfoJSON::getResponseAudioAcceptedEncodings(void) const
  {
    assert(flagHasResponseAudioAcceptedEncodings);
    return storeResponseAudioAcceptedEncodings;
  }

bool RequestInfoJSON::hasVoiceActivityDetection(void) const
  {
    return flagHasVoiceActivityDetection;
  }

VoiceActivityDetectionJSON * RequestInfoJSON::getVoiceActivityDetection(void)
  {
    assert(flagHasVoiceActivityDetection);
    return storeVoiceActivityDetection;
  }

const VoiceActivityDetectionJSON * RequestInfoJSON::getVoiceActivityDetection(void) const
  {
    assert(flagHasVoiceActivityDetection);
    return storeVoiceActivityDetection;
  }

bool RequestInfoJSON::hasServerDeterminesEndOfAudio(void) const
  {
    return flagHasServerDeterminesEndOfAudio;
  }

bool RequestInfoJSON::getServerDeterminesEndOfAudio(void)
  {
    assert(flagHasServerDeterminesEndOfAudio);
    return storeServerDeterminesEndOfAudio;
  }

const bool RequestInfoJSON::getServerDeterminesEndOfAudio(void) const
  {
    assert(flagHasServerDeterminesEndOfAudio);
    return storeServerDeterminesEndOfAudio;
  }

bool RequestInfoJSON::hasIntentOnly(void) const
  {
    return flagHasIntentOnly;
  }

bool RequestInfoJSON::getIntentOnly(void)
  {
    assert(flagHasIntentOnly);
    return storeIntentOnly;
  }

const bool RequestInfoJSON::getIntentOnly(void) const
  {
    assert(flagHasIntentOnly);
    return storeIntentOnly;
  }

bool RequestInfoJSON::hasDisableSpellCorrection(void) const
  {
    return flagHasDisableSpellCorrection;
  }

bool RequestInfoJSON::getDisableSpellCorrection(void)
  {
    assert(flagHasDisableSpellCorrection);
    return storeDisableSpellCorrection;
  }

const bool RequestInfoJSON::getDisableSpellCorrection(void) const
  {
    assert(flagHasDisableSpellCorrection);
    return storeDisableSpellCorrection;
  }

bool RequestInfoJSON::hasUseContactData(void) const
  {
    return flagHasUseContactData;
  }

bool RequestInfoJSON::getUseContactData(void)
  {
    return storeUseContactData;
  }

const bool RequestInfoJSON::getUseContactData(void) const
  {
    return storeUseContactData;
  }

bool RequestInfoJSON::hasUseClientTime(void) const
  {
    return flagHasUseClientTime;
  }

bool RequestInfoJSON::getUseClientTime(void)
  {
    return storeUseClientTime;
  }

const bool RequestInfoJSON::getUseClientTime(void) const
  {
    return storeUseClientTime;
  }

bool RequestInfoJSON::hasForceConversationStateTime(void) const
  {
    return flagHasForceConversationStateTime;
  }

OInteger RequestInfoJSON::getForceConversationStateTime(void)
  {
    assert(flagHasForceConversationStateTime);
    return storeForceConversationStateTime;
  }

const OInteger RequestInfoJSON::getForceConversationStateTime(void) const
  {
    assert(flagHasForceConversationStateTime);
    return storeForceConversationStateTime;
  }

bool RequestInfoJSON::hasPhoneDisambiguationOmitList(void) const
  {
    return flagHasPhoneDisambiguationOmitList;
  }

PhoneDisambiguationOmitListJSON * RequestInfoJSON::getPhoneDisambiguationOmitList(void)
  {
    assert(flagHasPhoneDisambiguationOmitList);
    return storePhoneDisambiguationOmitList;
  }

const PhoneDisambiguationOmitListJSON * RequestInfoJSON::getPhoneDisambiguationOmitList(void) const
  {
    assert(flagHasPhoneDisambiguationOmitList);
    return storePhoneDisambiguationOmitList;
  }

bool RequestInfoJSON::hasIncomingCallPending(void) const
  {
    return flagHasIncomingCallPending;
  }

IncomingCallPendingJSON * RequestInfoJSON::getIncomingCallPending(void)
  {
    assert(flagHasIncomingCallPending);
    return storeIncomingCallPending;
  }

const IncomingCallPendingJSON * RequestInfoJSON::getIncomingCallPending(void) const
  {
    assert(flagHasIncomingCallPending);
    return storeIncomingCallPending;
  }

bool RequestInfoJSON::getIncomingCallPendingValue(void)
  {
    return getIncomingCallPending()->getValue();
  }

const bool RequestInfoJSON::getIncomingCallPendingValue(void) const
  {
    return getIncomingCallPending()->getValue();
  }

bool RequestInfoJSON::hasAllowPopularNameContactMatches(void) const
  {
    return flagHasAllowPopularNameContactMatches;
  }

AllowPopularNameContactMatchesJSON * RequestInfoJSON::getAllowPopularNameContactMatches(void)
  {
    assert(flagHasAllowPopularNameContactMatches);
    return storeAllowPopularNameContactMatches;
  }

const AllowPopularNameContactMatchesJSON * RequestInfoJSON::getAllowPopularNameContactMatches(void) const
  {
    assert(flagHasAllowPopularNameContactMatches);
    return storeAllowPopularNameContactMatches;
  }

bool RequestInfoJSON::getAllowPopularNameContactMatchesValue(void)
  {
    return getAllowPopularNameContactMatches()->getValue();
  }

const bool RequestInfoJSON::getAllowPopularNameContactMatchesValue(void) const
  {
    return getAllowPopularNameContactMatches()->getValue();
  }

bool RequestInfoJSON::hasMusicClientState(void) const
  {
    return flagHasMusicClientState;
  }

MusicClientStateJSON * RequestInfoJSON::getMusicClientState(void)
  {
    assert(flagHasMusicClientState);
    return storeMusicClientState;
  }

const MusicClientStateJSON * RequestInfoJSON::getMusicClientState(void) const
  {
    assert(flagHasMusicClientState);
    return storeMusicClientState;
  }

bool RequestInfoJSON::hasDisableMusicSearchListPositionSpecification(void) const
  {
    return flagHasDisableMusicSearchListPositionSpecification;
  }

DisableListPositionSpecificationJSON * RequestInfoJSON::getDisableMusicSearchListPositionSpecification(void)
  {
    assert(flagHasDisableMusicSearchListPositionSpecification);
    return storeDisableMusicSearchListPositionSpecification;
  }

const DisableListPositionSpecificationJSON * RequestInfoJSON::getDisableMusicSearchListPositionSpecification(void) const
  {
    assert(flagHasDisableMusicSearchListPositionSpecification);
    return storeDisableMusicSearchListPositionSpecification;
  }

bool RequestInfoJSON::getDisableMusicSearchListPositionSpecificationValue(void)
  {
    return getDisableMusicSearchListPositionSpecification()->getValue();
  }

const bool RequestInfoJSON::getDisableMusicSearchListPositionSpecificationValue(void) const
  {
    return getDisableMusicSearchListPositionSpecification()->getValue();
  }

bool RequestInfoJSON::hasCollateMusicEntities(void) const
  {
    return flagHasCollateMusicEntities;
  }

CollateMusicEntitiesJSON * RequestInfoJSON::getCollateMusicEntities(void)
  {
    assert(flagHasCollateMusicEntities);
    return storeCollateMusicEntities;
  }

const CollateMusicEntitiesJSON * RequestInfoJSON::getCollateMusicEntities(void) const
  {
    assert(flagHasCollateMusicEntities);
    return storeCollateMusicEntities;
  }

bool RequestInfoJSON::getCollateMusicEntitiesValue(void)
  {
    return getCollateMusicEntities()->getValue();
  }

const bool RequestInfoJSON::getCollateMusicEntitiesValue(void) const
  {
    return getCollateMusicEntities()->getValue();
  }

bool RequestInfoJSON::hasAllowContextFreeMusicSearchForPopularEntities(void) const
  {
    return flagHasAllowContextFreeMusicSearchForPopularEntities;
  }

AllowContextFreeMusicSearchForPopularEntitiesJSON * RequestInfoJSON::getAllowContextFreeMusicSearchForPopularEntities(void)
  {
    assert(flagHasAllowContextFreeMusicSearchForPopularEntities);
    return storeAllowContextFreeMusicSearchForPopularEntities;
  }

const AllowContextFreeMusicSearchForPopularEntitiesJSON * RequestInfoJSON::getAllowContextFreeMusicSearchForPopularEntities(void) const
  {
    assert(flagHasAllowContextFreeMusicSearchForPopularEntities);
    return storeAllowContextFreeMusicSearchForPopularEntities;
  }

bool RequestInfoJSON::getAllowContextFreeMusicSearchForPopularEntitiesValue(void)
  {
    return getAllowContextFreeMusicSearchForPopularEntities()->getValue();
  }

const bool RequestInfoJSON::getAllowContextFreeMusicSearchForPopularEntitiesValue(void) const
  {
    return getAllowContextFreeMusicSearchForPopularEntities()->getValue();
  }

bool RequestInfoJSON::hasSportsLeagueControl(void) const
  {
    return flagHasSportsLeagueControl;
  }

SportsLeagueControlJSON * RequestInfoJSON::getSportsLeagueControl(void)
  {
    assert(flagHasSportsLeagueControl);
    return storeSportsLeagueControl;
  }

const SportsLeagueControlJSON * RequestInfoJSON::getSportsLeagueControl(void) const
  {
    assert(flagHasSportsLeagueControl);
    return storeSportsLeagueControl;
  }

bool RequestInfoJSON::hasLocalSearchClientState(void) const
  {
    return flagHasLocalSearchClientState;
  }

LocalSearchClientStateJSON * RequestInfoJSON::getLocalSearchClientState(void)
  {
    assert(flagHasLocalSearchClientState);
    return storeLocalSearchClientState;
  }

const LocalSearchClientStateJSON * RequestInfoJSON::getLocalSearchClientState(void) const
  {
    assert(flagHasLocalSearchClientState);
    return storeLocalSearchClientState;
  }

bool RequestInfoJSON::hasUberServerToken(void) const
  {
    return flagHasUberServerToken;
  }

UberServerTokenJSON * RequestInfoJSON::getUberServerToken(void)
  {
    assert(flagHasUberServerToken);
    return storeUberServerToken;
  }

const UberServerTokenJSON * RequestInfoJSON::getUberServerToken(void) const
  {
    assert(flagHasUberServerToken);
    return storeUberServerToken;
  }

std::string RequestInfoJSON::getUberServerTokenValue(void)
  {
    return getUberServerToken()->getValue();
  }

const std::string RequestInfoJSON::getUberServerTokenValue(void) const
  {
    return getUberServerToken()->getValue();
  }

bool RequestInfoJSON::hasGetUberServerToken(void) const
  {
    return flagHasGetUberServerToken;
  }

GetUberServerTokenJSON * RequestInfoJSON::getGetUberServerToken(void)
  {
    assert(flagHasGetUberServerToken);
    return storeGetUberServerToken;
  }

const GetUberServerTokenJSON * RequestInfoJSON::getGetUberServerToken(void) const
  {
    assert(flagHasGetUberServerToken);
    return storeGetUberServerToken;
  }

bool RequestInfoJSON::getGetUberServerTokenValue(void)
  {
    return getGetUberServerToken()->getValue();
  }

const bool RequestInfoJSON::getGetUberServerTokenValue(void) const
  {
    return getGetUberServerToken()->getValue();
  }

bool RequestInfoJSON::hasUberClientId(void) const
  {
    return flagHasUberClientId;
  }

UberClientIdJSON * RequestInfoJSON::getUberClientId(void)
  {
    assert(flagHasUberClientId);
    return storeUberClientId;
  }

const UberClientIdJSON * RequestInfoJSON::getUberClientId(void) const
  {
    assert(flagHasUberClientId);
    return storeUberClientId;
  }

std::string RequestInfoJSON::getUberClientIdValue(void)
  {
    return getUberClientId()->getValue();
  }

const std::string RequestInfoJSON::getUberClientIdValue(void) const
  {
    return getUberClientId()->getValue();
  }

bool RequestInfoJSON::hasGetUberClientId(void) const
  {
    return flagHasGetUberClientId;
  }

GetUberClientIdJSON * RequestInfoJSON::getGetUberClientId(void)
  {
    assert(flagHasGetUberClientId);
    return storeGetUberClientId;
  }

const GetUberClientIdJSON * RequestInfoJSON::getGetUberClientId(void) const
  {
    assert(flagHasGetUberClientId);
    return storeGetUberClientId;
  }

bool RequestInfoJSON::getGetUberClientIdValue(void)
  {
    return getGetUberClientId()->getValue();
  }

const bool RequestInfoJSON::getGetUberClientIdValue(void) const
  {
    return getGetUberClientId()->getValue();
  }

bool RequestInfoJSON::hasDisableMusicPlayerListPositionSpecification(void) const
  {
    return flagHasDisableMusicPlayerListPositionSpecification;
  }

DisableListPositionSpecificationJSON * RequestInfoJSON::getDisableMusicPlayerListPositionSpecification(void)
  {
    assert(flagHasDisableMusicPlayerListPositionSpecification);
    return storeDisableMusicPlayerListPositionSpecification;
  }

const DisableListPositionSpecificationJSON * RequestInfoJSON::getDisableMusicPlayerListPositionSpecification(void) const
  {
    assert(flagHasDisableMusicPlayerListPositionSpecification);
    return storeDisableMusicPlayerListPositionSpecification;
  }

bool RequestInfoJSON::getDisableMusicPlayerListPositionSpecificationValue(void)
  {
    return getDisableMusicPlayerListPositionSpecification()->getValue();
  }

const bool RequestInfoJSON::getDisableMusicPlayerListPositionSpecificationValue(void) const
  {
    return getDisableMusicPlayerListPositionSpecification()->getValue();
  }

bool RequestInfoJSON::hasHomeAutomationDomainSettings(void) const
  {
    return flagHasHomeAutomationDomainSettings;
  }

HomeAutomationDomainSettingsJSON * RequestInfoJSON::getHomeAutomationDomainSettings(void)
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

const HomeAutomationDomainSettingsJSON * RequestInfoJSON::getHomeAutomationDomainSettings(void) const
  {
    assert(flagHasHomeAutomationDomainSettings);
    return storeHomeAutomationDomainSettings;
  }

bool RequestInfoJSON::hasUserContactsRequests(void) const
  {
    return flagHasUserContactsRequests;
  }

UserContactsRequestsJSON * RequestInfoJSON::getUserContactsRequests(void)
  {
    assert(flagHasUserContactsRequests);
    return storeUserContactsRequests;
  }

const UserContactsRequestsJSON * RequestInfoJSON::getUserContactsRequests(void) const
  {
    assert(flagHasUserContactsRequests);
    return storeUserContactsRequests;
  }

bool RequestInfoJSON::hasStoredGlobalPagesToMatch(void) const
  {
    return flagHasStoredGlobalPagesToMatch;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToMatch(void)
  {
    assert(flagHasStoredGlobalPagesToMatch);
    return storeStoredGlobalPagesToMatch;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToMatch(void) const
  {
    assert(flagHasStoredGlobalPagesToMatch);
    return storeStoredGlobalPagesToMatch;
  }

bool RequestInfoJSON::hasStoredGlobalPagesToNotMatch(void) const
  {
    return flagHasStoredGlobalPagesToNotMatch;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToNotMatch(void)
  {
    assert(flagHasStoredGlobalPagesToNotMatch);
    return storeStoredGlobalPagesToNotMatch;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToNotMatch(void) const
  {
    assert(flagHasStoredGlobalPagesToNotMatch);
    return storeStoredGlobalPagesToNotMatch;
  }

bool RequestInfoJSON::hasStoredPerUserPagesToMatch(void) const
  {
    return flagHasStoredPerUserPagesToMatch;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToMatch(void)
  {
    assert(flagHasStoredPerUserPagesToMatch);
    return storeStoredPerUserPagesToMatch;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToMatch(void) const
  {
    assert(flagHasStoredPerUserPagesToMatch);
    return storeStoredPerUserPagesToMatch;
  }

bool RequestInfoJSON::hasStoredPerUserPagesToNotMatch(void) const
  {
    return flagHasStoredPerUserPagesToNotMatch;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToNotMatch(void)
  {
    assert(flagHasStoredPerUserPagesToNotMatch);
    return storeStoredPerUserPagesToNotMatch;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToNotMatch(void) const
  {
    assert(flagHasStoredPerUserPagesToNotMatch);
    return storeStoredPerUserPagesToNotMatch;
  }

bool RequestInfoJSON::hasStoredGlobalPagesToSetOnByDefault(void) const
  {
    return flagHasStoredGlobalPagesToSetOnByDefault;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToSetOnByDefault(void)
  {
    assert(flagHasStoredGlobalPagesToSetOnByDefault);
    return storeStoredGlobalPagesToSetOnByDefault;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToSetOnByDefault(void) const
  {
    assert(flagHasStoredGlobalPagesToSetOnByDefault);
    return storeStoredGlobalPagesToSetOnByDefault;
  }

bool RequestInfoJSON::hasStoredPerUserPagesToSetOnByDefault(void) const
  {
    return flagHasStoredPerUserPagesToSetOnByDefault;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToSetOnByDefault(void)
  {
    assert(flagHasStoredPerUserPagesToSetOnByDefault);
    return storeStoredPerUserPagesToSetOnByDefault;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToSetOnByDefault(void) const
  {
    assert(flagHasStoredPerUserPagesToSetOnByDefault);
    return storeStoredPerUserPagesToSetOnByDefault;
  }

bool RequestInfoJSON::hasStoredGlobalPagesToSetOffByDefault(void) const
  {
    return flagHasStoredGlobalPagesToSetOffByDefault;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToSetOffByDefault(void)
  {
    assert(flagHasStoredGlobalPagesToSetOffByDefault);
    return storeStoredGlobalPagesToSetOffByDefault;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredGlobalPagesToSetOffByDefault(void) const
  {
    assert(flagHasStoredGlobalPagesToSetOffByDefault);
    return storeStoredGlobalPagesToSetOffByDefault;
  }

bool RequestInfoJSON::hasStoredPerUserPagesToSetOffByDefault(void) const
  {
    return flagHasStoredPerUserPagesToSetOffByDefault;
  }

StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToSetOffByDefault(void)
  {
    assert(flagHasStoredPerUserPagesToSetOffByDefault);
    return storeStoredPerUserPagesToSetOffByDefault;
  }

const StoredPageMatchPageListJSON * RequestInfoJSON::getStoredPerUserPagesToSetOffByDefault(void) const
  {
    assert(flagHasStoredPerUserPagesToSetOffByDefault);
    return storeStoredPerUserPagesToSetOffByDefault;
  }

bool RequestInfoJSON::hasStoredPageMatchWriteData(void) const
  {
    return flagHasStoredPageMatchWriteData;
  }

StoredPageMatchWriteDataJSON * RequestInfoJSON::getStoredPageMatchWriteData(void)
  {
    assert(flagHasStoredPageMatchWriteData);
    return storeStoredPageMatchWriteData;
  }

const StoredPageMatchWriteDataJSON * RequestInfoJSON::getStoredPageMatchWriteData(void) const
  {
    assert(flagHasStoredPageMatchWriteData);
    return storeStoredPageMatchWriteData;
  }

bool RequestInfoJSON::hasStoredPageMatchReadData(void) const
  {
    return flagHasStoredPageMatchReadData;
  }

StoredPageMatchReadDataJSON * RequestInfoJSON::getStoredPageMatchReadData(void)
  {
    assert(flagHasStoredPageMatchReadData);
    return storeStoredPageMatchReadData;
  }

const StoredPageMatchReadDataJSON * RequestInfoJSON::getStoredPageMatchReadData(void) const
  {
    assert(flagHasStoredPageMatchReadData);
    return storeStoredPageMatchReadData;
  }

bool RequestInfoJSON::hasStoredPageMatchPageListData(void) const
  {
    return flagHasStoredPageMatchPageListData;
  }

StoredPageMatchPageListDataJSON * RequestInfoJSON::getStoredPageMatchPageListData(void)
  {
    assert(flagHasStoredPageMatchPageListData);
    return storeStoredPageMatchPageListData;
  }

const StoredPageMatchPageListDataJSON * RequestInfoJSON::getStoredPageMatchPageListData(void) const
  {
    assert(flagHasStoredPageMatchPageListData);
    return storeStoredPageMatchPageListData;
  }

bool RequestInfoJSON::hasVoiceParameters(void) const
  {
    return flagHasVoiceParameters;
  }

VoiceParametersJSON * RequestInfoJSON::getVoiceParameters(void)
  {
    assert(flagHasVoiceParameters);
    return storeVoiceParameters;
  }

const VoiceParametersJSON * RequestInfoJSON::getVoiceParameters(void) const
  {
    assert(flagHasVoiceParameters);
    return storeVoiceParameters;
  }

bool RequestInfoJSON::hasStoredAlwaysMatchWriteData(void) const
  {
    return flagHasStoredAlwaysMatchWriteData;
  }

ClientMatchesJSON * RequestInfoJSON::getStoredAlwaysMatchWriteData(void)
  {
    assert(flagHasStoredAlwaysMatchWriteData);
    return storeStoredAlwaysMatchWriteData;
  }

const ClientMatchesJSON * RequestInfoJSON::getStoredAlwaysMatchWriteData(void) const
  {
    assert(flagHasStoredAlwaysMatchWriteData);
    return storeStoredAlwaysMatchWriteData;
  }

bool RequestInfoJSON::hasStoredAlwaysMatchReadData(void) const
  {
    return flagHasStoredAlwaysMatchReadData;
  }

StoredAlwaysMatchReadDataJSON * RequestInfoJSON::getStoredAlwaysMatchReadData(void)
  {
    assert(flagHasStoredAlwaysMatchReadData);
    return storeStoredAlwaysMatchReadData;
  }

const StoredAlwaysMatchReadDataJSON * RequestInfoJSON::getStoredAlwaysMatchReadData(void) const
  {
    assert(flagHasStoredAlwaysMatchReadData);
    return storeStoredAlwaysMatchReadData;
  }

bool RequestInfoJSON::getStoredAlwaysMatchReadDataValue(void)
  {
    return getStoredAlwaysMatchReadData()->getValue();
  }

const bool RequestInfoJSON::getStoredAlwaysMatchReadDataValue(void) const
  {
    return getStoredAlwaysMatchReadData()->getValue();
  }

bool RequestInfoJSON::hasUserFeedback(void) const
  {
    return flagHasUserFeedback;
  }

UserFeedbackJSON * RequestInfoJSON::getUserFeedback(void)
  {
    assert(flagHasUserFeedback);
    return storeUserFeedback;
  }

const UserFeedbackJSON * RequestInfoJSON::getUserFeedback(void) const
  {
    assert(flagHasUserFeedback);
    return storeUserFeedback;
  }

bool RequestInfoJSON::hasRadioControlRecognizeNorthAmericanFMBand(void) const
  {
    return flagHasRadioControlRecognizeNorthAmericanFMBand;
  }

RadioControlRecognizeNorthAmericanFMBandJSON * RequestInfoJSON::getRadioControlRecognizeNorthAmericanFMBand(void)
  {
    assert(flagHasRadioControlRecognizeNorthAmericanFMBand);
    return storeRadioControlRecognizeNorthAmericanFMBand;
  }

const RadioControlRecognizeNorthAmericanFMBandJSON * RequestInfoJSON::getRadioControlRecognizeNorthAmericanFMBand(void) const
  {
    assert(flagHasRadioControlRecognizeNorthAmericanFMBand);
    return storeRadioControlRecognizeNorthAmericanFMBand;
  }

bool RequestInfoJSON::getRadioControlRecognizeNorthAmericanFMBandValue(void)
  {
    return getRadioControlRecognizeNorthAmericanFMBand()->getValue();
  }

const bool RequestInfoJSON::getRadioControlRecognizeNorthAmericanFMBandValue(void) const
  {
    return getRadioControlRecognizeNorthAmericanFMBand()->getValue();
  }

bool RequestInfoJSON::hasRadioControlRecognizeNorthAmericanAMBand(void) const
  {
    return flagHasRadioControlRecognizeNorthAmericanAMBand;
  }

RadioControlRecognizeNorthAmericanAMBandJSON * RequestInfoJSON::getRadioControlRecognizeNorthAmericanAMBand(void)
  {
    assert(flagHasRadioControlRecognizeNorthAmericanAMBand);
    return storeRadioControlRecognizeNorthAmericanAMBand;
  }

const RadioControlRecognizeNorthAmericanAMBandJSON * RequestInfoJSON::getRadioControlRecognizeNorthAmericanAMBand(void) const
  {
    assert(flagHasRadioControlRecognizeNorthAmericanAMBand);
    return storeRadioControlRecognizeNorthAmericanAMBand;
  }

bool RequestInfoJSON::getRadioControlRecognizeNorthAmericanAMBandValue(void)
  {
    return getRadioControlRecognizeNorthAmericanAMBand()->getValue();
  }

const bool RequestInfoJSON::getRadioControlRecognizeNorthAmericanAMBandValue(void) const
  {
    return getRadioControlRecognizeNorthAmericanAMBand()->getValue();
  }

bool RequestInfoJSON::hasRadioControlOtherFMBands(void) const
  {
    return flagHasRadioControlOtherFMBands;
  }

RadioControlOtherFMBandsJSON * RequestInfoJSON::getRadioControlOtherFMBands(void)
  {
    assert(flagHasRadioControlOtherFMBands);
    return storeRadioControlOtherFMBands;
  }

const RadioControlOtherFMBandsJSON * RequestInfoJSON::getRadioControlOtherFMBands(void) const
  {
    assert(flagHasRadioControlOtherFMBands);
    return storeRadioControlOtherFMBands;
  }

bool RequestInfoJSON::hasRadioControlOtherAMBands(void) const
  {
    return flagHasRadioControlOtherAMBands;
  }

RadioControlOtherAMBandsJSON * RequestInfoJSON::getRadioControlOtherAMBands(void)
  {
    assert(flagHasRadioControlOtherAMBands);
    return storeRadioControlOtherAMBands;
  }

const RadioControlOtherAMBandsJSON * RequestInfoJSON::getRadioControlOtherAMBands(void) const
  {
    assert(flagHasRadioControlOtherAMBands);
    return storeRadioControlOtherAMBands;
  }

bool RequestInfoJSON::hasClientListMatches(void) const
  {
    return flagHasClientListMatches;
  }

ClientListMatchesJSON * RequestInfoJSON::getClientListMatches(void)
  {
    assert(flagHasClientListMatches);
    return storeClientListMatches;
  }

const ClientListMatchesJSON * RequestInfoJSON::getClientListMatches(void) const
  {
    assert(flagHasClientListMatches);
    return storeClientListMatches;
  }

bool RequestInfoJSON::hasIntentToExecute(void) const
  {
    return flagHasIntentToExecute;
  }

CommandIntentJSON * RequestInfoJSON::getIntentToExecute(void)
  {
    assert(flagHasIntentToExecute);
    return storeIntentToExecute;
  }

const CommandIntentJSON * RequestInfoJSON::getIntentToExecute(void) const
  {
    assert(flagHasIntentToExecute);
    return storeIntentToExecute;
  }

bool RequestInfoJSON::hasRobotInfo(void) const
  {
    return flagHasRobotInfo;
  }

RobotInfoJSON * RequestInfoJSON::getRobotInfo(void)
  {
    assert(flagHasRobotInfo);
    return storeRobotInfo;
  }

const RobotInfoJSON * RequestInfoJSON::getRobotInfo(void) const
  {
    assert(flagHasRobotInfo);
    return storeRobotInfo;
  }

bool RequestInfoJSON::hasConvertToNewInformationNuggets(void) const
  {
    return flagHasConvertToNewInformationNuggets;
  }

ConvertToNewInformationNuggetsJSON * RequestInfoJSON::getConvertToNewInformationNuggets(void)
  {
    assert(flagHasConvertToNewInformationNuggets);
    return storeConvertToNewInformationNuggets;
  }

const ConvertToNewInformationNuggetsJSON * RequestInfoJSON::getConvertToNewInformationNuggets(void) const
  {
    assert(flagHasConvertToNewInformationNuggets);
    return storeConvertToNewInformationNuggets;
  }

bool RequestInfoJSON::getConvertToNewInformationNuggetsValue(void)
  {
    return getConvertToNewInformationNuggets()->getValue();
  }

const bool RequestInfoJSON::getConvertToNewInformationNuggetsValue(void) const
  {
    return getConvertToNewInformationNuggets()->getValue();
  }

bool RequestInfoJSON::hasAcapelaVoiceParameters(void) const
  {
    return flagHasAcapelaVoiceParameters;
  }

AcapelaVoiceParametersJSON * RequestInfoJSON::getAcapelaVoiceParameters(void)
  {
    assert(flagHasAcapelaVoiceParameters);
    return storeAcapelaVoiceParameters;
  }

const AcapelaVoiceParametersJSON * RequestInfoJSON::getAcapelaVoiceParameters(void) const
  {
    assert(flagHasAcapelaVoiceParameters);
    return storeAcapelaVoiceParameters;
  }

bool RequestInfoJSON::hasDisambiguateResultsBeforeAction(void) const
  {
    return flagHasDisambiguateResultsBeforeAction;
  }

DisambiguateResultsBeforeActionJSON * RequestInfoJSON::getDisambiguateResultsBeforeAction(void)
  {
    assert(flagHasDisambiguateResultsBeforeAction);
    return storeDisambiguateResultsBeforeAction;
  }

const DisambiguateResultsBeforeActionJSON * RequestInfoJSON::getDisambiguateResultsBeforeAction(void) const
  {
    assert(flagHasDisambiguateResultsBeforeAction);
    return storeDisambiguateResultsBeforeAction;
  }

bool RequestInfoJSON::getDisambiguateResultsBeforeActionValue(void)
  {
    return getDisambiguateResultsBeforeAction()->getValue();
  }

const bool RequestInfoJSON::getDisambiguateResultsBeforeActionValue(void) const
  {
    return getDisambiguateResultsBeforeAction()->getValue();
  }

char RequestInfoJSON::Generator::lowerBoundPreferredImageSize[] = "1";
char RequestInfoJSON::Generator::lowerBoundClientVersion_1[] = "0";
char RequestInfoJSON::Generator::lowerBoundMinResults[] = "1";
char RequestInfoJSON::Generator::lowerBoundMaxResults[] = "1";
RequestInfoJSON *RequestInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    RequestInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<RequestInfoJSON>, RequestInfoJSON *, bool> generator("Type RequestInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
