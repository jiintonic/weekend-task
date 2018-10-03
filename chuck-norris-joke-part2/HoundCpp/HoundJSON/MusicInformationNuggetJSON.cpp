/* file "MusicInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicInformationNuggetJSON.h"

#include "MusicInformationNuggetJSON.h"
#include "MusicSearchInformationNuggetJSON.h"
#include "MusicChartsInformationNuggetJSON.h"


MusicInformationNuggetJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(void)
  {
  }

MusicInformationNuggetJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(const TypeEntitySpecificationType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicInformationNuggetJSON::TypeEntitySpecificationType::TypeEntitySpecificationType(TypeEntitySpecificationTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator==(const TypeEntitySpecificationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator!=(const TypeEntitySpecificationType &other) const
  {
    return !(operator==(other));
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator<(const TypeEntitySpecificationType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator>(const TypeEntitySpecificationType &other) const
  {
    return other.operator<(*this);
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator>=(const TypeEntitySpecificationType &other) const
  {
    return !(operator<(other));
  }

bool MusicInformationNuggetJSON::TypeEntitySpecificationType::operator<=(const TypeEntitySpecificationType &other) const
  {
    return !(other.operator<(*this));
  }

MusicInformationNuggetJSON::TypeEntitySpecificationTypeKnownValues MusicInformationNuggetJSON::stringToEntitySpecificationType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'E':
            if (strcmp(&(chars[1]), "xplicit") == 0)
                return EntitySpecificationType_Explicit;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "istPosition") == 0)
                return EntitySpecificationType_ListPosition;
            break;
        case 'R':
            if (strcmp(&(chars[1]), "elative") == 0)
                return EntitySpecificationType_Relative;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "his") == 0)
                return EntitySpecificationType_This;
            break;
        default:
            break;
      }
    return EntitySpecificationType__none;
  }

const char *MusicInformationNuggetJSON::stringFromEntitySpecificationType(TypeEntitySpecificationTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case EntitySpecificationType_Explicit:
            return "Explicit";
        case EntitySpecificationType_This:
            return "This";
        case EntitySpecificationType_ListPosition:
            return "ListPosition";
        case EntitySpecificationType_Relative:
            return "Relative";
        default:
            assert(false);
            return NULL;
      }
  }

MusicInformationNuggetJSON::MusicInformationNuggetJSON(const MusicInformationNuggetJSON &)
  {
    assert(false);
  }

MusicInformationNuggetJSON &MusicInformationNuggetJSON::operator=(const MusicInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MusicInformationNuggetJSON::extraSearchParametersToJSON(void) const
  {
    JSONValueHandler handler_SearchParameters;
    storeSearchParameters->write_as_json(&handler_SearchParameters);
    handler_SearchParameters.result->add_reference();
    return handler_SearchParameters.result;
  }

JSONValue *MusicInformationNuggetJSON::extraAlbumsLabelToJSON(void) const
  {
    JSONStringValue *generated_string_AlbumsLabel = new JSONStringValue(storeAlbumsLabel.c_str());
    return generated_string_AlbumsLabel;
  }

JSONValue *MusicInformationNuggetJSON::extraAlbumsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Albums = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeAlbums.size(); ++num1)
      {
        JSONValueHandler handler_Albums;
        storeAlbums[num1]->write_as_json(&handler_Albums);
        handler_Albums.result->add_reference();
        generated_array_1_Albums->appendComponent(handler_Albums.result);
        handler_Albums.result->remove_reference();
      }
    return generated_array_1_Albums;
  }

JSONValue *MusicInformationNuggetJSON::extraArtistsLabelToJSON(void) const
  {
    JSONStringValue *generated_string_ArtistsLabel = new JSONStringValue(storeArtistsLabel.c_str());
    return generated_string_ArtistsLabel;
  }

JSONValue *MusicInformationNuggetJSON::extraArtistsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_Artists = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeArtists.size(); ++num2)
      {
        JSONValueHandler handler_Artists;
        storeArtists[num2]->write_as_json(&handler_Artists);
        handler_Artists.result->add_reference();
        generated_array_2_Artists->appendComponent(handler_Artists.result);
        handler_Artists.result->remove_reference();
      }
    return generated_array_2_Artists;
  }

JSONValue *MusicInformationNuggetJSON::extraTracksLabelToJSON(void) const
  {
    JSONStringValue *generated_string_TracksLabel = new JSONStringValue(storeTracksLabel.c_str());
    return generated_string_TracksLabel;
  }

JSONValue *MusicInformationNuggetJSON::extraTracksToJSON(void) const
  {
    JSONArrayValue *generated_array_3_Tracks = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeTracks.size(); ++num3)
      {
        JSONValueHandler handler_Tracks;
        storeTracks[num3]->write_as_json(&handler_Tracks);
        handler_Tracks.result->add_reference();
        generated_array_3_Tracks->appendComponent(handler_Tracks.result);
        handler_Tracks.result->remove_reference();
      }
    return generated_array_3_Tracks;
  }

JSONValue *MusicInformationNuggetJSON::extraSupplementalTrackInfosToJSON(void) const
  {
    JSONArrayValue *generated_array_4_SupplementalTrackInfos = new JSONArrayValue();
    for (size_t num4 = 0; num4 < storeSupplementalTrackInfos.size(); ++num4)
      {
        JSONValueHandler handler_SupplementalTrackInfos;
        storeSupplementalTrackInfos[num4]->write_as_json(&handler_SupplementalTrackInfos);
        handler_SupplementalTrackInfos.result->add_reference();
        generated_array_4_SupplementalTrackInfos->appendComponent(handler_SupplementalTrackInfos.result);
        handler_SupplementalTrackInfos.result->remove_reference();
      }
    return generated_array_4_SupplementalTrackInfos;
  }

JSONValue *MusicInformationNuggetJSON::extraUserRequestedAllToJSON(void) const
  {
    JSONValue *generated_boolean_UserRequestedAll = (storeUserRequestedAll ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_UserRequestedAll;
  }

JSONValue *MusicInformationNuggetJSON::extraEntitySpecificationTypeToJSON(void) const
  {
    JSONStringValue *generated_string_EntitySpecificationType;
    if (!(storeEntitySpecificationType.in_known_list))
      {
    generated_string_EntitySpecificationType = new JSONStringValue(storeEntitySpecificationType.string_value.c_str());
      }
    else
      {
    switch (storeEntitySpecificationType.list_value)
      {
        case EntitySpecificationType_Explicit:
            generated_string_EntitySpecificationType = new JSONStringValue("Explicit");
            break;
        case EntitySpecificationType_This:
            generated_string_EntitySpecificationType = new JSONStringValue("This");
            break;
        case EntitySpecificationType_ListPosition:
            generated_string_EntitySpecificationType = new JSONStringValue("ListPosition");
            break;
        case EntitySpecificationType_Relative:
            generated_string_EntitySpecificationType = new JSONStringValue("Relative");
            break;
        default:
            assert(false);
            generated_string_EntitySpecificationType = NULL;
      }
      }
    return generated_string_EntitySpecificationType;
  }

JSONValue *MusicInformationNuggetJSON::extraMusicThirdPartyToJSON(void) const
  {
    JSONValueHandler handler_MusicThirdParty;
    storeMusicThirdParty->write_as_json(&handler_MusicThirdParty);
    handler_MusicThirdParty.result->add_reference();
    return handler_MusicThirdParty.result;
  }

JSONValue *MusicInformationNuggetJSON::extraListPositionToJSON(void) const
  {
    JSONIntegerValue *generated_integer_ListPosition = new JSONIntegerValue(storeListPosition.get_o_integer());
    return generated_integer_ListPosition;
  }

JSONValue *MusicInformationNuggetJSON::extraErrorsToJSON(void) const
  {
    JSONArrayValue *generated_array_5_Errors = new JSONArrayValue();
    for (size_t num5 = 0; num5 < storeErrors.size(); ++num5)
      {
        JSONValueHandler handler_Errors;
        storeErrors[num5]->write_as_json(&handler_Errors);
        handler_Errors.result->add_reference();
        generated_array_5_Errors->appendComponent(handler_Errors.result);
        handler_Errors.result->remove_reference();
      }
    return generated_array_5_Errors;
  }

void MusicInformationNuggetJSON::fromJSONSearchParameters(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicSearchParametersJSON *convert_classy = MusicSearchParametersJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSearchParameters(convert_classy);
    convert_classy->remove_reference();
  }

void MusicInformationNuggetJSON::fromJSONAlbumsLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumsLabel of MusicInformationNuggetJSON is not a string.");
    setAlbumsLabel(std::string(json_string->getData()));
  }

void MusicInformationNuggetJSON::fromJSONAlbums(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Albums of MusicInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicAlbumJSON * > vector_Albums1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicAlbumJSON *convert_classy = MusicAlbumJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Albums1[num1] = convert_classy;
      }
    initAlbums();
    for (size_t num6 = 0; num6 < vector_Albums1.size(); ++num6)
        appendAlbums(vector_Albums1[num6]);
    for (size_t num1 = 0; num1 < vector_Albums1.size(); ++num1)
      {
        vector_Albums1[num1]->remove_reference();
      }
  }

void MusicInformationNuggetJSON::fromJSONArtistsLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistsLabel of MusicInformationNuggetJSON is not a string.");
    setArtistsLabel(std::string(json_string->getData()));
  }

void MusicInformationNuggetJSON::fromJSONArtists(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Artists of MusicInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicArtistJSON * > vector_Artists1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicArtistJSON *convert_classy = MusicArtistJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Artists1[num1] = convert_classy;
      }
    initArtists();
    for (size_t num7 = 0; num7 < vector_Artists1.size(); ++num7)
        appendArtists(vector_Artists1[num7]);
    for (size_t num1 = 0; num1 < vector_Artists1.size(); ++num1)
      {
        vector_Artists1[num1]->remove_reference();
      }
  }

void MusicInformationNuggetJSON::fromJSONTracksLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TracksLabel of MusicInformationNuggetJSON is not a string.");
    setTracksLabel(std::string(json_string->getData()));
  }

void MusicInformationNuggetJSON::fromJSONTracks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tracks of MusicInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicTrackJSON * > vector_Tracks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackJSON *convert_classy = MusicTrackJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Tracks1[num1] = convert_classy;
      }
    initTracks();
    for (size_t num8 = 0; num8 < vector_Tracks1.size(); ++num8)
        appendTracks(vector_Tracks1[num8]);
    for (size_t num1 = 0; num1 < vector_Tracks1.size(); ++num1)
      {
        vector_Tracks1[num1]->remove_reference();
      }
  }

void MusicInformationNuggetJSON::fromJSONSupplementalTrackInfos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field SupplementalTrackInfos of MusicInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< MusicTrackSupplementalInfoJSON * > vector_SupplementalTrackInfos1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicTrackSupplementalInfoJSON *convert_classy = MusicTrackSupplementalInfoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_SupplementalTrackInfos1[num1] = convert_classy;
      }
    initSupplementalTrackInfos();
    for (size_t num9 = 0; num9 < vector_SupplementalTrackInfos1.size(); ++num9)
        appendSupplementalTrackInfos(vector_SupplementalTrackInfos1[num9]);
    for (size_t num1 = 0; num1 < vector_SupplementalTrackInfos1.size(); ++num1)
      {
        vector_SupplementalTrackInfos1[num1]->remove_reference();
      }
  }

void MusicInformationNuggetJSON::fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UserRequestedAll of MusicInformationNuggetJSON is not true for false.");
          }
      }
    setUserRequestedAll(the_bool);
  }

void MusicInformationNuggetJSON::fromJSONEntitySpecificationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field EntitySpecificationType of MusicInformationNuggetJSON is not a string.");
    TypeEntitySpecificationType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'E':
            if (strcmp(&(json_string->getData()[1]), "xplicit") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_Explicit;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "istPosition") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_ListPosition;
                    goto open_enum_is_done;
                  }
            break;
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "elative") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_Relative;
                    goto open_enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "his") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = EntitySpecificationType_This;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setEntitySpecificationType(the_open_enum);
  }

void MusicInformationNuggetJSON::fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicThirdParty(convert_classy);
    convert_classy->remove_reference();
  }

void MusicInformationNuggetJSON::fromJSONListPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ListPosition of MusicInformationNuggetJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ListPosition of MusicInformationNuggetJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setListPosition(extracted_integer);
  }

void MusicInformationNuggetJSON::fromJSONErrors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Errors of MusicInformationNuggetJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Errors of MusicInformationNuggetJSON has too few elements.");
    std::vector< MusicSearchErrorJSON * > vector_Errors1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicSearchErrorJSON *convert_classy = MusicSearchErrorJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Errors1[num1] = convert_classy;
      }
    assert(vector_Errors1.size() >= 1);
    initErrors();
    for (size_t num10 = 0; num10 < vector_Errors1.size(); ++num10)
        appendErrors(vector_Errors1[num10]);
    for (size_t num1 = 0; num1 < vector_Errors1.size(); ++num1)
      {
        vector_Errors1[num1]->remove_reference();
      }
  }

MusicInformationNuggetJSON::MusicInformationNuggetJSON(void) :
        flagHasSearchParameters(false),
        flagHasAlbumsLabel(false),
        flagHasAlbums(false),
        flagHasArtistsLabel(false),
        flagHasArtists(false),
        flagHasTracksLabel(false),
        flagHasTracks(false),
        flagHasSupplementalTrackInfos(false),
        flagHasUserRequestedAll(false),
        flagHasEntitySpecificationType(false),
        flagHasMusicThirdParty(false),
        flagHasListPosition(false),
        flagHasErrors(false)
  {
  }

MusicInformationNuggetJSON::~MusicInformationNuggetJSON(void)
  {
    if (flagHasSearchParameters)
      {
        storeSearchParameters->remove_reference();
      }
    if (flagHasAlbums)
      {
        for (size_t num16 = 0; num16 < storeAlbums.size(); ++num16)
          {
            storeAlbums[num16]->remove_reference();
          }
      }
    if (flagHasArtists)
      {
        for (size_t num17 = 0; num17 < storeArtists.size(); ++num17)
          {
            storeArtists[num17]->remove_reference();
          }
      }
    if (flagHasTracks)
      {
        for (size_t num18 = 0; num18 < storeTracks.size(); ++num18)
          {
            storeTracks[num18]->remove_reference();
          }
      }
    if (flagHasSupplementalTrackInfos)
      {
        for (size_t num19 = 0; num19 < storeSupplementalTrackInfos.size(); ++num19)
          {
            storeSupplementalTrackInfos[num19]->remove_reference();
          }
      }
    if (flagHasMusicThirdParty)
      {
        storeMusicThirdParty->remove_reference();
      }
    if (flagHasErrors)
      {
        for (size_t num20 = 0; num20 < storeErrors.size(); ++num20)
          {
            storeErrors[num20]->remove_reference();
          }
      }
  }

const char *MusicInformationNuggetJSON::getNuggetKind(void) const
  {
    return "Music";
  }

bool MusicInformationNuggetJSON::hasSearchParameters(void) const
  {
    return flagHasSearchParameters;
  }

MusicSearchParametersJSON * MusicInformationNuggetJSON::getSearchParameters(void)
  {
    assert(flagHasSearchParameters);
    return storeSearchParameters;
  }

const MusicSearchParametersJSON * MusicInformationNuggetJSON::getSearchParameters(void) const
  {
    assert(flagHasSearchParameters);
    return storeSearchParameters;
  }

bool MusicInformationNuggetJSON::hasAlbumsLabel(void) const
  {
    return flagHasAlbumsLabel;
  }

std::string MusicInformationNuggetJSON::getAlbumsLabel(void)
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

const std::string MusicInformationNuggetJSON::getAlbumsLabel(void) const
  {
    assert(flagHasAlbumsLabel);
    return storeAlbumsLabel;
  }

bool MusicInformationNuggetJSON::hasAlbums(void) const
  {
    return flagHasAlbums;
  }

size_t MusicInformationNuggetJSON::countOfAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums.size();
  }

MusicAlbumJSON * MusicInformationNuggetJSON::elementOfAlbums(size_t element_num)
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

const MusicAlbumJSON * MusicInformationNuggetJSON::elementOfAlbums(size_t element_num) const
  {
    assert(flagHasAlbums);
    return storeAlbums[element_num];
  }

std::vector< MusicAlbumJSON * > MusicInformationNuggetJSON::getAlbums(void)
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

const std::vector< MusicAlbumJSON * > MusicInformationNuggetJSON::getAlbums(void) const
  {
    assert(flagHasAlbums);
    return storeAlbums;
  }

bool MusicInformationNuggetJSON::hasArtistsLabel(void) const
  {
    return flagHasArtistsLabel;
  }

std::string MusicInformationNuggetJSON::getArtistsLabel(void)
  {
    assert(flagHasArtistsLabel);
    return storeArtistsLabel;
  }

const std::string MusicInformationNuggetJSON::getArtistsLabel(void) const
  {
    assert(flagHasArtistsLabel);
    return storeArtistsLabel;
  }

bool MusicInformationNuggetJSON::hasArtists(void) const
  {
    return flagHasArtists;
  }

size_t MusicInformationNuggetJSON::countOfArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists.size();
  }

MusicArtistJSON * MusicInformationNuggetJSON::elementOfArtists(size_t element_num)
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

const MusicArtistJSON * MusicInformationNuggetJSON::elementOfArtists(size_t element_num) const
  {
    assert(flagHasArtists);
    return storeArtists[element_num];
  }

std::vector< MusicArtistJSON * > MusicInformationNuggetJSON::getArtists(void)
  {
    assert(flagHasArtists);
    return storeArtists;
  }

const std::vector< MusicArtistJSON * > MusicInformationNuggetJSON::getArtists(void) const
  {
    assert(flagHasArtists);
    return storeArtists;
  }

bool MusicInformationNuggetJSON::hasTracksLabel(void) const
  {
    return flagHasTracksLabel;
  }

std::string MusicInformationNuggetJSON::getTracksLabel(void)
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

const std::string MusicInformationNuggetJSON::getTracksLabel(void) const
  {
    assert(flagHasTracksLabel);
    return storeTracksLabel;
  }

bool MusicInformationNuggetJSON::hasTracks(void) const
  {
    return flagHasTracks;
  }

size_t MusicInformationNuggetJSON::countOfTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks.size();
  }

MusicTrackJSON * MusicInformationNuggetJSON::elementOfTracks(size_t element_num)
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

const MusicTrackJSON * MusicInformationNuggetJSON::elementOfTracks(size_t element_num) const
  {
    assert(flagHasTracks);
    return storeTracks[element_num];
  }

std::vector< MusicTrackJSON * > MusicInformationNuggetJSON::getTracks(void)
  {
    assert(flagHasTracks);
    return storeTracks;
  }

const std::vector< MusicTrackJSON * > MusicInformationNuggetJSON::getTracks(void) const
  {
    assert(flagHasTracks);
    return storeTracks;
  }

bool MusicInformationNuggetJSON::hasSupplementalTrackInfos(void) const
  {
    return flagHasSupplementalTrackInfos;
  }

size_t MusicInformationNuggetJSON::countOfSupplementalTrackInfos(void) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos.size();
  }

MusicTrackSupplementalInfoJSON * MusicInformationNuggetJSON::elementOfSupplementalTrackInfos(size_t element_num)
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos[element_num];
  }

const MusicTrackSupplementalInfoJSON * MusicInformationNuggetJSON::elementOfSupplementalTrackInfos(size_t element_num) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos[element_num];
  }

std::vector< MusicTrackSupplementalInfoJSON * > MusicInformationNuggetJSON::getSupplementalTrackInfos(void)
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos;
  }

const std::vector< MusicTrackSupplementalInfoJSON * > MusicInformationNuggetJSON::getSupplementalTrackInfos(void) const
  {
    assert(flagHasSupplementalTrackInfos);
    return storeSupplementalTrackInfos;
  }

bool MusicInformationNuggetJSON::hasUserRequestedAll(void) const
  {
    return flagHasUserRequestedAll;
  }

bool MusicInformationNuggetJSON::getUserRequestedAll(void)
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

const bool MusicInformationNuggetJSON::getUserRequestedAll(void) const
  {
    assert(flagHasUserRequestedAll);
    return storeUserRequestedAll;
  }

bool MusicInformationNuggetJSON::hasEntitySpecificationType(void) const
  {
    return flagHasEntitySpecificationType;
  }

MusicInformationNuggetJSON::TypeEntitySpecificationType MusicInformationNuggetJSON::getEntitySpecificationType(void)
  {
    assert(flagHasEntitySpecificationType);
    return storeEntitySpecificationType;
  }

const MusicInformationNuggetJSON::TypeEntitySpecificationType MusicInformationNuggetJSON::getEntitySpecificationType(void) const
  {
    assert(flagHasEntitySpecificationType);
    return storeEntitySpecificationType;
  }

const char *MusicInformationNuggetJSON::getEntitySpecificationTypeAsChars(void) const
  {
    TypeEntitySpecificationType result = getEntitySpecificationType();
    if (result.in_known_list)
        return stringFromEntitySpecificationType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicInformationNuggetJSON::getEntitySpecificationTypeAsString(void) const
  {
    return getEntitySpecificationTypeAsChars();
  }

bool MusicInformationNuggetJSON::hasMusicThirdParty(void) const
  {
    return flagHasMusicThirdParty;
  }

MusicThirdPartyJSON * MusicInformationNuggetJSON::getMusicThirdParty(void)
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

const MusicThirdPartyJSON * MusicInformationNuggetJSON::getMusicThirdParty(void) const
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

bool MusicInformationNuggetJSON::hasListPosition(void) const
  {
    return flagHasListPosition;
  }

OInteger MusicInformationNuggetJSON::getListPosition(void)
  {
    assert(flagHasListPosition);
    return storeListPosition;
  }

const OInteger MusicInformationNuggetJSON::getListPosition(void) const
  {
    assert(flagHasListPosition);
    return storeListPosition;
  }

bool MusicInformationNuggetJSON::hasErrors(void) const
  {
    return flagHasErrors;
  }

size_t MusicInformationNuggetJSON::countOfErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors.size();
  }

MusicSearchErrorJSON * MusicInformationNuggetJSON::elementOfErrors(size_t element_num)
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

const MusicSearchErrorJSON * MusicInformationNuggetJSON::elementOfErrors(size_t element_num) const
  {
    assert(flagHasErrors);
    return storeErrors[element_num];
  }

std::vector< MusicSearchErrorJSON * > MusicInformationNuggetJSON::getErrors(void)
  {
    assert(flagHasErrors);
    return storeErrors;
  }

const std::vector< MusicSearchErrorJSON * > MusicInformationNuggetJSON::getErrors(void) const
  {
    assert(flagHasErrors);
    return storeErrors;
  }

MusicInformationNuggetJSON *MusicInformationNuggetJSON::createForKey(const char *key, string_index *other_field_index)
  {
    if (strncmp(key, "Music", 5) == 0)
      {
        switch ((unsigned char)(key[5]))
          {
            case 'C':
                if (strcmp(&(key[6]), "harts") == 0)
                    return new MusicChartsInformationNuggetJSON();
                break;
            case 'S':
                if (strcmp(&(key[6]), "earch") == 0)
                    return new MusicSearchInformationNuggetJSON();
                break;
            default:
                break;
          }
      }

    class GenericMusicInformationNuggetJSON : public MusicInformationNuggetJSON
      {
      private:
        std::string key;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

      public:
        GenericMusicInformationNuggetJSON(const char *init_key) : key(init_key)
          {
        extraIndex = create_string_index();
          }
        ~GenericMusicInformationNuggetJSON(void)
          {
            size_t extra_count = extraValues.size();
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                extraValues[extra_num]->remove_reference();
            destroy_string_index(extraIndex);
          }

        const char *getMusicNuggetKind(void) const  { return key.c_str(); }
        size_t extraMusicInformationNuggetComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        const char *extraMusicInformationNuggetComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        JSONValue *extraMusicInformationNuggetComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        const JSONValue *extraMusicInformationNuggetComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        JSONValue *extraMusicInformationNuggetLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        const JSONValue *extraMusicInformationNuggetLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        void extraMusicInformationNuggetAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        void extraMusicInformationNuggetSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraMusicInformationNuggetLookup(key);
            if (old_field == NULL)
              {
                extraMusicInformationNuggetAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(), key) == 0)
                      {
                        extraValues[num] = new_component;
                        break;
                      }
                  }
                enter_into_string_index(extraIndex, key, new_component);
                new_component->add_reference();
                old_field->remove_reference();
                old_field->remove_reference();
              }
          }

        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            size_t extra_count = extraKeys.size();
            assert(extra_count == extraValues.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                handler->start_pair(extraKeys[extra_num].c_str());
                extraValues[extra_num]->write(handler);
              }
            handler->finish_object();
          }
      };
    return new GenericMusicInformationNuggetJSON(key);
  }
MusicInformationNuggetJSON *MusicInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicInformationNuggetJSON>, MusicInformationNuggetJSON *, bool> generator("Type MusicInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
