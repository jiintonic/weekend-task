/* file "SportsPlayersQueryDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsPlayersQueryDataJSON.h"

#include "SportsPlayersQueryDataJSON.h"


SportsPlayersQueryDataJSON::TypeType::TypeType(void)
  {
  }

SportsPlayersQueryDataJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayersQueryDataJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayersQueryDataJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayersQueryDataJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayersQueryDataJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayersQueryDataJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayersQueryDataJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayersQueryDataJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayersQueryDataJSON::TypeTypeKnownValues SportsPlayersQueryDataJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'P':
            if (strcmp(&(chars[1]), "layerInfo") == 0)
                return Type_PlayerInfo;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "ho") == 0)
                return Type_Who;
            break;
        default:
            break;
      }
    return Type__none;
  }

const char *SportsPlayersQueryDataJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_PlayerInfo:
            return "PlayerInfo";
        case Type_Who:
            return "Who";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayersQueryDataJSON::TypeError::TypeError(void)
  {
  }

SportsPlayersQueryDataJSON::TypeError::TypeError(const TypeError &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

SportsPlayersQueryDataJSON::TypeError::TypeError(TypeErrorKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool SportsPlayersQueryDataJSON::TypeError::operator==(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool SportsPlayersQueryDataJSON::TypeError::operator!=(const TypeError &other) const
  {
    return !(operator==(other));
  }

bool SportsPlayersQueryDataJSON::TypeError::operator<(const TypeError &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool SportsPlayersQueryDataJSON::TypeError::operator>(const TypeError &other) const
  {
    return other.operator<(*this);
  }

bool SportsPlayersQueryDataJSON::TypeError::operator>=(const TypeError &other) const
  {
    return !(operator<(other));
  }

bool SportsPlayersQueryDataJSON::TypeError::operator<=(const TypeError &other) const
  {
    return !(other.operator<(*this));
  }

SportsPlayersQueryDataJSON::TypeErrorKnownValues SportsPlayersQueryDataJSON::stringToError(const char *chars)
  {
    if (strcmp(chars, "TooManyPlayers") == 0)
        return Error_TooManyPlayers;
    return Error__none;
  }

const char *SportsPlayersQueryDataJSON::stringFromError(TypeErrorKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Error_TooManyPlayers:
            return "TooManyPlayers";
        default:
            assert(false);
            return NULL;
      }
  }

SportsPlayersQueryDataJSON::SportsPlayersQueryDataJSON(const SportsPlayersQueryDataJSON &)
  {
    assert(false);
  }

SportsPlayersQueryDataJSON &SportsPlayersQueryDataJSON::operator=(const SportsPlayersQueryDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsPlayersQueryDataJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of SportsPlayersQueryDataJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'P':
            if (strcmp(&(json_string->getData()[1]), "layerInfo") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_PlayerInfo;
                    goto open_enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "ho") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_Who;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setType(the_open_enum);
  }

void SportsPlayersQueryDataJSON::fromJSONPlayerID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PlayerID of SportsPlayersQueryDataJSON is not a string.");
    setPlayerID(std::string(json_string->getData()));
  }

void SportsPlayersQueryDataJSON::fromJSONTeam(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsTeamNewJSON *convert_classy = SportsTeamNewJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTeam(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayersQueryDataJSON::fromJSONDetail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SportsPlayerDetailJSON *convert_classy = SportsPlayerDetailJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDetail(convert_classy);
    convert_classy->remove_reference();
  }

void SportsPlayersQueryDataJSON::fromJSONPositions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Positions of SportsPlayersQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Positions of SportsPlayersQueryDataJSON has too few elements.");
    std::vector< SportsPlayerPositionJSON * > vector_Positions1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        SportsPlayerPositionJSON *convert_classy = SportsPlayerPositionJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Positions1[num1] = convert_classy;
      }
    assert(vector_Positions1.size() >= 1);
    initPositions();
    for (size_t num3 = 0; num3 < vector_Positions1.size(); ++num3)
        appendPositions(vector_Positions1[num3]);
    for (size_t num1 = 0; num1 < vector_Positions1.size(); ++num1)
      {
        vector_Positions1[num1]->remove_reference();
      }
  }

void SportsPlayersQueryDataJSON::fromJSONJerseyNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field JerseyNumber of SportsPlayersQueryDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field JerseyNumber of SportsPlayersQueryDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setJerseyNumber(extracted_integer);
  }

void SportsPlayersQueryDataJSON::fromJSONPlayersIndices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PlayersIndices of SportsPlayersQueryDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PlayersIndices of SportsPlayersQueryDataJSON has too few elements.");
    std::vector< OInteger > vector_PlayersIndices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field PlayersIndices of SportsPlayersQueryDataJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field PlayersIndices of SportsPlayersQueryDataJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_PlayersIndices1[num1] = extracted_integer;
      }
    assert(vector_PlayersIndices1.size() >= 1);
    initPlayersIndices();
    for (size_t num4 = 0; num4 < vector_PlayersIndices1.size(); ++num4)
        appendPlayersIndices(vector_PlayersIndices1[num4]);
    for (size_t num1 = 0; num1 < vector_PlayersIndices1.size(); ++num1)
      {
      }
  }

void SportsPlayersQueryDataJSON::fromJSONError(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Error of SportsPlayersQueryDataJSON is not a string.");
    TypeError the_open_enum;
    if (strcmp(json_string->getData(), "TooManyPlayers") == 0)
          {
            the_open_enum.in_known_list = true;
            the_open_enum.list_value = Error_TooManyPlayers;
            goto open_enum_is_done;
          }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setError(the_open_enum);
  }

SportsPlayersQueryDataJSON::SportsPlayersQueryDataJSON(void) :
        flagHasType(false),
        flagHasPlayerID(false),
        flagHasTeam(false),
        flagHasDetail(false),
        flagHasPositions(false),
        flagHasJerseyNumber(false),
        flagHasPlayersIndices(false),
        flagHasError(false)
  {
    extraIndex = create_string_index();
  }

SportsPlayersQueryDataJSON::~SportsPlayersQueryDataJSON(void)
  {
    if (flagHasTeam)
      {
        storeTeam->remove_reference();
      }
    if (flagHasDetail)
      {
        storeDetail->remove_reference();
      }
    if (flagHasPositions)
      {
        for (size_t num4 = 0; num4 < storePositions.size(); ++num4)
          {
            storePositions[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsPlayersQueryDataJSON::hasType(void) const
  {
    return flagHasType;
  }

SportsPlayersQueryDataJSON::TypeType SportsPlayersQueryDataJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const SportsPlayersQueryDataJSON::TypeType SportsPlayersQueryDataJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *SportsPlayersQueryDataJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayersQueryDataJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool SportsPlayersQueryDataJSON::hasPlayerID(void) const
  {
    return flagHasPlayerID;
  }

std::string SportsPlayersQueryDataJSON::getPlayerID(void)
  {
    assert(flagHasPlayerID);
    return storePlayerID;
  }

const std::string SportsPlayersQueryDataJSON::getPlayerID(void) const
  {
    assert(flagHasPlayerID);
    return storePlayerID;
  }

bool SportsPlayersQueryDataJSON::hasTeam(void) const
  {
    return flagHasTeam;
  }

SportsTeamNewJSON * SportsPlayersQueryDataJSON::getTeam(void)
  {
    assert(flagHasTeam);
    return storeTeam;
  }

const SportsTeamNewJSON * SportsPlayersQueryDataJSON::getTeam(void) const
  {
    assert(flagHasTeam);
    return storeTeam;
  }

bool SportsPlayersQueryDataJSON::hasDetail(void) const
  {
    return flagHasDetail;
  }

SportsPlayerDetailJSON * SportsPlayersQueryDataJSON::getDetail(void)
  {
    assert(flagHasDetail);
    return storeDetail;
  }

const SportsPlayerDetailJSON * SportsPlayersQueryDataJSON::getDetail(void) const
  {
    assert(flagHasDetail);
    return storeDetail;
  }

SportsPlayerDetailJSON::TypeValue SportsPlayersQueryDataJSON::getDetailValue(void)
  {
    return getDetail()->getValue();
  }

const SportsPlayerDetailJSON::TypeValue SportsPlayersQueryDataJSON::getDetailValue(void) const
  {
    return getDetail()->getValue();
  }

const char *SportsPlayersQueryDataJSON::getDetailAsChars(void) const
  {
    return getDetail()->getValueAsChars();
  }

std::string SportsPlayersQueryDataJSON::getDetailAsString(void) const
  {
    return getDetail()->getValueAsString();
  }

bool SportsPlayersQueryDataJSON::hasPositions(void) const
  {
    return flagHasPositions;
  }

size_t SportsPlayersQueryDataJSON::countOfPositions(void) const
  {
    assert(flagHasPositions);
    return storePositions.size();
  }

SportsPlayerPositionJSON * SportsPlayersQueryDataJSON::elementOfPositions(size_t element_num)
  {
    assert(flagHasPositions);
    return storePositions[element_num];
  }

const SportsPlayerPositionJSON * SportsPlayersQueryDataJSON::elementOfPositions(size_t element_num) const
  {
    assert(flagHasPositions);
    return storePositions[element_num];
  }

std::vector< SportsPlayerPositionJSON * > SportsPlayersQueryDataJSON::getPositions(void)
  {
    assert(flagHasPositions);
    return storePositions;
  }

const std::vector< SportsPlayerPositionJSON * > SportsPlayersQueryDataJSON::getPositions(void) const
  {
    assert(flagHasPositions);
    return storePositions;
  }

bool SportsPlayersQueryDataJSON::hasJerseyNumber(void) const
  {
    return flagHasJerseyNumber;
  }

OInteger SportsPlayersQueryDataJSON::getJerseyNumber(void)
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

const OInteger SportsPlayersQueryDataJSON::getJerseyNumber(void) const
  {
    assert(flagHasJerseyNumber);
    return storeJerseyNumber;
  }

bool SportsPlayersQueryDataJSON::hasPlayersIndices(void) const
  {
    return flagHasPlayersIndices;
  }

size_t SportsPlayersQueryDataJSON::countOfPlayersIndices(void) const
  {
    assert(flagHasPlayersIndices);
    return storePlayersIndices.size();
  }

OInteger SportsPlayersQueryDataJSON::elementOfPlayersIndices(size_t element_num)
  {
    assert(flagHasPlayersIndices);
    return storePlayersIndices[element_num];
  }

const OInteger SportsPlayersQueryDataJSON::elementOfPlayersIndices(size_t element_num) const
  {
    assert(flagHasPlayersIndices);
    return storePlayersIndices[element_num];
  }

std::vector< OInteger > SportsPlayersQueryDataJSON::getPlayersIndices(void)
  {
    assert(flagHasPlayersIndices);
    return storePlayersIndices;
  }

const std::vector< OInteger > SportsPlayersQueryDataJSON::getPlayersIndices(void) const
  {
    assert(flagHasPlayersIndices);
    return storePlayersIndices;
  }

bool SportsPlayersQueryDataJSON::hasError(void) const
  {
    return flagHasError;
  }

SportsPlayersQueryDataJSON::TypeError SportsPlayersQueryDataJSON::getError(void)
  {
    assert(flagHasError);
    return storeError;
  }

const SportsPlayersQueryDataJSON::TypeError SportsPlayersQueryDataJSON::getError(void) const
  {
    assert(flagHasError);
    return storeError;
  }

const char *SportsPlayersQueryDataJSON::getErrorAsChars(void) const
  {
    TypeError result = getError();
    if (result.in_known_list)
        return stringFromError(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string SportsPlayersQueryDataJSON::getErrorAsString(void) const
  {
    return getErrorAsChars();
  }

char SportsPlayersQueryDataJSON::Generator::lowerBoundJerseyNumber[] = "0";
char SportsPlayersQueryDataJSON::Generator::lowerBoundPlayersIndices[] = "0";
SportsPlayersQueryDataJSON *SportsPlayersQueryDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsPlayersQueryDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsPlayersQueryDataJSON>, SportsPlayersQueryDataJSON *, bool> generator("Type SportsPlayersQueryData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
