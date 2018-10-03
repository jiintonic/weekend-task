/* file "SportsShowResultsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsShowResultsCommandJSON.h"

#include "SportsShowResultsCommandJSON.h"


SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::TypeResultsType(void)
  {
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::TypeResultsType(const TypeResultsType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::TypeResultsType(TypeResultsTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator==(const TypeResultsType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator!=(const TypeResultsType &other) const
  {
    return !(operator==(other));
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator<(const TypeResultsType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator>(const TypeResultsType &other) const
  {
    return other.operator<(*this);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator>=(const TypeResultsType &other) const
  {
    return !(operator<(other));
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType::operator<=(const TypeResultsType &other) const
  {
    return !(other.operator<(*this));
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsTypeKnownValues SportsShowResultsCommandJSON::TypeNativeDataJSON::stringToResultsType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'G':
            if (strcmp(&(chars[1]), "eneric") == 0)
                return ResultsType_Generic;
            break;
        case 'P':
            if (strcmp(&(chars[1]), "layoffsComplete") == 0)
                return ResultsType_PlayoffsComplete;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "meTeam") == 0)
                        return ResultsType_SameTeam;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "ries") == 0)
                        return ResultsType_Series;
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nknown") == 0)
                return ResultsType_Unknown;
            break;
        default:
            break;
      }
    return ResultsType__none;
  }

const char *SportsShowResultsCommandJSON::TypeNativeDataJSON::stringFromResultsType(TypeResultsTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResultsType_Unknown:
            return "Unknown";
        case ResultsType_SameTeam:
            return "SameTeam";
        case ResultsType_Generic:
            return "Generic";
        case ResultsType_Series:
            return "Series";
        case ResultsType_PlayoffsComplete:
            return "PlayoffsComplete";
        default:
            assert(false);
            return NULL;
      }
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(void)
  {
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(const TypeResultError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::TypeResultError(TypeResultErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator==(const TypeResultError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator!=(const TypeResultError &other) const
  {
    return !(operator==(other));
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator<(const TypeResultError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator>(const TypeResultError &other) const
  {
    return other.operator<(*this);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator>=(const TypeResultError &other) const
  {
    return !(operator<(other));
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError::operator<=(const TypeResultError &other) const
  {
    return !(other.operator<(*this));
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultErrorKnownValues SportsShowResultsCommandJSON::TypeNativeDataJSON::stringToResultError(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "ocationUnavailable") == 0)
                return ResultError_LocationUnavailable;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'n':
                        if (strcmp(&(chars[3]), "e") == 0)
                            return ResultError_None;
                        break;
                    case 't':
                        if (strcmp(&(chars[3]), "Supported") == 0)
                            return ResultError_NotSupported;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(chars[1]), "coreNotFound") == 0)
                return ResultError_ScoreNotFound;
            break;
        default:
            break;
      }
    return ResultError__none;
  }

const char *SportsShowResultsCommandJSON::TypeNativeDataJSON::stringFromResultError(TypeResultErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ResultError_None:
            return "None";
        case ResultError_ScoreNotFound:
            return "ScoreNotFound";
        case ResultError_NotSupported:
            return "NotSupported";
        case ResultError_LocationUnavailable:
            return "LocationUnavailable";
        default:
            assert(false);
            return NULL;
      }
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON &SportsShowResultsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONSportsResultScore(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SportsResultScore of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field SportsResultScore of TypeNativeDataJSON has too few elements.");
    std::vector< SportsResultScoreJSON * > vector_SportsResultScore1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsResultScoreJSON *convert_classy = SportsResultScoreJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SportsResultScore1[num1] = convert_classy;
      }
    assert(vector_SportsResultScore1.size() >= 1);
    initSportsResultScore();
    for (size_t num2 = 0; num2 < vector_SportsResultScore1.size(); ++num2)
        appendSportsResultScore(vector_SportsResultScore1[num2]);
    for (size_t num1 = 0; num1 < vector_SportsResultScore1.size(); ++num1)
      {
        vector_SportsResultScore1[num1]->remove_reference();
      }
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONSeriesStatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsSeriesStatusJSON *convert_classy = SportsSeriesStatusJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSeriesStatus(convert_classy);
    convert_classy->remove_reference();
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONResultsType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultsType of TypeNativeDataJSON is not a string.");
    TypeResultsType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "eneric") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultsType_Generic;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layoffsComplete") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultsType_PlayoffsComplete;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "meTeam") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ResultsType_SameTeam;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "ries") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = ResultsType_Series;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nknown") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultsType_Unknown;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setResultsType(the_open_enum);
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONResultError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ResultError of TypeNativeDataJSON is not a string.");
    TypeResultError the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ocationUnavailable") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_LocationUnavailable;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "o", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'n':
                        if (strcmp(&(json_string->getData()[3]), "e") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ResultError_None;
                                goto open_enum_is_done;
                              }
                        break;
                    case 't':
                        if (strcmp(&(json_string->getData()[3]), "Supported") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = ResultError_NotSupported;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "coreNotFound") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ResultError_ScoreNotFound;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setResultError(the_open_enum);
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONSportsInputData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsInputDataJSON *convert_classy = SportsInputDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSportsInputData(convert_classy);
    convert_classy->remove_reference();
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONNow(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNow(convert_classy);
    convert_classy->remove_reference();
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONLatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Latitude of TypeNativeDataJSON is not a number.");
          }
      }
    setLatitudeText(the_rational_text);
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONLongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Longitude of TypeNativeDataJSON is not a number.");
          }
      }
    setLongitudeText(the_rational_text);
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONDateLocationConstraintsDropped(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field DateLocationConstraintsDropped of TypeNativeDataJSON is not true for false.");
          }
      }
    setDateLocationConstraintsDropped(the_bool);
  }

void SportsShowResultsCommandJSON::TypeNativeDataJSON::fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WebCommandEnabled of TypeNativeDataJSON is not true for false.");
          }
      }
    setWebCommandEnabled(the_bool);
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasSportsResultScore(false),
        flagHasSeriesStatus(false),
        flagHasResultsType(false),
        flagHasResultError(false),
        flagHasSportsInputData(false),
        flagHasNow(false),
        flagHasLatitude(false),
        flagHasLongitude(false),
        flagHasDateLocationConstraintsDropped(false),
        flagHasWebCommandEnabled(false)
  {
    extraIndex = create_string_index();
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasSportsResultScore)
      {
        for (size_t num4 = 0; num4 < storeSportsResultScore.size(); ++num4)
          {
            storeSportsResultScore[num4]->remove_reference();
          }
      }
    if (flagHasSeriesStatus)
      {
        storeSeriesStatus->remove_reference();
      }
    if (flagHasSportsInputData)
      {
        storeSportsInputData->remove_reference();
      }
    if (flagHasNow)
      {
        storeNow->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasSportsResultScore(void) const
  {
    return flagHasSportsResultScore;
  }

size_t SportsShowResultsCommandJSON::TypeNativeDataJSON::countOfSportsResultScore(void) const
  {
    assert(flagHasSportsResultScore);
    return storeSportsResultScore.size();
  }

SportsResultScoreJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::elementOfSportsResultScore(size_t element_num)
  {
    assert(flagHasSportsResultScore);
    return storeSportsResultScore[element_num];
  }

const SportsResultScoreJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::elementOfSportsResultScore(size_t element_num) const
  {
    assert(flagHasSportsResultScore);
    return storeSportsResultScore[element_num];
  }

std::vector< SportsResultScoreJSON * > SportsShowResultsCommandJSON::TypeNativeDataJSON::getSportsResultScore(void)
  {
    assert(flagHasSportsResultScore);
    return storeSportsResultScore;
  }

const std::vector< SportsResultScoreJSON * > SportsShowResultsCommandJSON::TypeNativeDataJSON::getSportsResultScore(void) const
  {
    assert(flagHasSportsResultScore);
    return storeSportsResultScore;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasSeriesStatus(void) const
  {
    return flagHasSeriesStatus;
  }

SportsSeriesStatusJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getSeriesStatus(void)
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

const SportsSeriesStatusJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getSeriesStatus(void) const
  {
    assert(flagHasSeriesStatus);
    return storeSeriesStatus;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasResultsType(void) const
  {
    return flagHasResultsType;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultsType(void)
  {
    assert(flagHasResultsType);
    return storeResultsType;
  }

const SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultsType SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultsType(void) const
  {
    assert(flagHasResultsType);
    return storeResultsType;
  }

const char *SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultsTypeAsChars(void) const
  {
    TypeResultsType result = getResultsType();
    if (result.in_known_list)
        return stringFromResultsType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultsTypeAsString(void) const
  {
    return getResultsTypeAsChars();
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasResultError(void) const
  {
    return flagHasResultError;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void)
  {
    assert(flagHasResultError);
    return storeResultError;
  }

const SportsShowResultsCommandJSON::TypeNativeDataJSON::TypeResultError SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultError(void) const
  {
    assert(flagHasResultError);
    return storeResultError;
  }

const char *SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultErrorAsChars(void) const
  {
    TypeResultError result = getResultError();
    if (result.in_known_list)
        return stringFromResultError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsShowResultsCommandJSON::TypeNativeDataJSON::getResultErrorAsString(void) const
  {
    return getResultErrorAsChars();
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasSportsInputData(void) const
  {
    return flagHasSportsInputData;
  }

SportsInputDataJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getSportsInputData(void)
  {
    assert(flagHasSportsInputData);
    return storeSportsInputData;
  }

const SportsInputDataJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getSportsInputData(void) const
  {
    assert(flagHasSportsInputData);
    return storeSportsInputData;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasNow(void) const
  {
    return flagHasNow;
  }

DateAndOrTimeJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getNow(void)
  {
    assert(flagHasNow);
    return storeNow;
  }

const DateAndOrTimeJSON * SportsShowResultsCommandJSON::TypeNativeDataJSON::getNow(void) const
  {
    assert(flagHasNow);
    return storeNow;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasLatitude(void) const
  {
    return flagHasLatitude;
  }

double SportsShowResultsCommandJSON::TypeNativeDataJSON::getLatitude(void)
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

const double SportsShowResultsCommandJSON::TypeNativeDataJSON::getLatitude(void) const
  {
    assert(flagHasLatitude);
    if (textStoreLatitude != "")
      {
        return atof(textStoreLatitude.c_str());
      }
    return storeLatitude;
  }

std::string SportsShowResultsCommandJSON::TypeNativeDataJSON::getLatitudeAsText(void) const
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

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasLongitude(void) const
  {
    return flagHasLongitude;
  }

double SportsShowResultsCommandJSON::TypeNativeDataJSON::getLongitude(void)
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

const double SportsShowResultsCommandJSON::TypeNativeDataJSON::getLongitude(void) const
  {
    assert(flagHasLongitude);
    if (textStoreLongitude != "")
      {
        return atof(textStoreLongitude.c_str());
      }
    return storeLongitude;
  }

std::string SportsShowResultsCommandJSON::TypeNativeDataJSON::getLongitudeAsText(void) const
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

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasDateLocationConstraintsDropped(void) const
  {
    return flagHasDateLocationConstraintsDropped;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::getDateLocationConstraintsDropped(void)
  {
    assert(flagHasDateLocationConstraintsDropped);
    return storeDateLocationConstraintsDropped;
  }

const bool SportsShowResultsCommandJSON::TypeNativeDataJSON::getDateLocationConstraintsDropped(void) const
  {
    assert(flagHasDateLocationConstraintsDropped);
    return storeDateLocationConstraintsDropped;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::hasWebCommandEnabled(void) const
  {
    return flagHasWebCommandEnabled;
  }

bool SportsShowResultsCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void)
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

const bool SportsShowResultsCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void) const
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

SportsShowResultsCommandJSON::SportsShowResultsCommandJSON(const SportsShowResultsCommandJSON &)
  {
    assert(false);
  }

SportsShowResultsCommandJSON &SportsShowResultsCommandJSON::operator=(const SportsShowResultsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SportsShowResultsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SportsShowResultsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SportsShowResultsCommandJSON::SportsShowResultsCommandJSON(void) :
        flagHasNativeData(false)
  {
  }

SportsShowResultsCommandJSON::~SportsShowResultsCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
  }

const char *SportsShowResultsCommandJSON::getSportsCommandKind(void) const
  {
    return "SportsShowResultsCommand";
  }

bool SportsShowResultsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON * SportsShowResultsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SportsShowResultsCommandJSON::TypeNativeDataJSON * SportsShowResultsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SportsShowResultsCommandJSON::TypeNativeDataJSON *SportsShowResultsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsShowResultsCommandJSON *SportsShowResultsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsShowResultsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsShowResultsCommandJSON>, SportsShowResultsCommandJSON *, bool> generator("Type SportsShowResultsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
