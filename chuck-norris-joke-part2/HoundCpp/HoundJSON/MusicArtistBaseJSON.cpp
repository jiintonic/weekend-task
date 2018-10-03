/* file "MusicArtistBaseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicArtistBaseJSON.h"

#include "MusicArtistBaseJSON.h"
#include "MusicArtistJSON.h"


MusicArtistBaseJSON::TypeArtistType::TypeArtistType(void)
  {
  }

MusicArtistBaseJSON::TypeArtistType::TypeArtistType(const TypeArtistType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

MusicArtistBaseJSON::TypeArtistType::TypeArtistType(TypeArtistTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool MusicArtistBaseJSON::TypeArtistType::operator==(const TypeArtistType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool MusicArtistBaseJSON::TypeArtistType::operator!=(const TypeArtistType &other) const
  {
    return !(operator==(other));
  }

bool MusicArtistBaseJSON::TypeArtistType::operator<(const TypeArtistType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool MusicArtistBaseJSON::TypeArtistType::operator>(const TypeArtistType &other) const
  {
    return other.operator<(*this);
  }

bool MusicArtistBaseJSON::TypeArtistType::operator>=(const TypeArtistType &other) const
  {
    return !(operator<(other));
  }

bool MusicArtistBaseJSON::TypeArtistType::operator<=(const TypeArtistType &other) const
  {
    return !(other.operator<(*this));
  }

MusicArtistBaseJSON::TypeArtistTypeKnownValues MusicArtistBaseJSON::stringToArtistType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'G':
            if (strcmp(&(chars[1]), "roup") == 0)
                return ArtistType_Group;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "ndividual") == 0)
                return ArtistType_Individual;
            break;
        default:
            break;
      }
    return ArtistType__none;
  }

const char *MusicArtistBaseJSON::stringFromArtistType(TypeArtistTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case ArtistType_Individual:
            return "Individual";
        case ArtistType_Group:
            return "Group";
        default:
            assert(false);
            return NULL;
      }
  }

MusicArtistBaseJSON::MusicArtistBaseJSON(const MusicArtistBaseJSON &)
  {
    assert(false);
  }

MusicArtistBaseJSON &MusicArtistBaseJSON::operator=(const MusicArtistBaseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicArtistBaseJSON::fromJSONArtistID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundArtistIDJSON *convert_classy = SoundHoundArtistIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArtistID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicArtistBaseJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicArtistBaseJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistImageURL of MusicArtistBaseJSON is not a string.");
    setArtistImageURL(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONBiography(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Biography of MusicArtistBaseJSON is not a string.");
    setBiography(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONBirthPlace(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BirthPlace of MusicArtistBaseJSON is not a string.");
    setBirthPlace(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONBirthDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BirthDate of MusicArtistBaseJSON is not a string.");
    setBirthDate(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONDeathPlace(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DeathPlace of MusicArtistBaseJSON is not a string.");
    setDeathPlace(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONDeathDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DeathDate of MusicArtistBaseJSON is not a string.");
    setDeathDate(std::string(json_string->getData()));
  }

void MusicArtistBaseJSON::fromJSONArtistType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistType of MusicArtistBaseJSON is not a string.");
    TypeArtistType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'G':
            if (strcmp(&(json_string->getData()[1]), "roup") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ArtistType_Group;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "ndividual") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = ArtistType_Individual;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setArtistType(the_open_enum);
  }

void MusicArtistBaseJSON::fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field BuyLinks of MusicArtistBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field BuyLinks of MusicArtistBaseJSON has too few elements.");
    std::vector< MusicBuyLinkJSON * > vector_BuyLinks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicBuyLinkJSON *convert_classy = MusicBuyLinkJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_BuyLinks1[num1] = convert_classy;
      }
    assert(vector_BuyLinks1.size() >= 1);
    initBuyLinks();
    for (size_t num4 = 0; num4 < vector_BuyLinks1.size(); ++num4)
        appendBuyLinks(vector_BuyLinks1[num4]);
    for (size_t num1 = 0; num1 < vector_BuyLinks1.size(); ++num1)
      {
        vector_BuyLinks1[num1]->remove_reference();
      }
  }

void MusicArtistBaseJSON::fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MusicThirdPartyIds of MusicArtistBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MusicThirdPartyIds of MusicArtistBaseJSON has too few elements.");
    std::vector< MusicThirdPartyIdListJSON * > vector_MusicThirdPartyIds1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicThirdPartyIdListJSON *convert_classy = MusicThirdPartyIdListJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MusicThirdPartyIds1[num1] = convert_classy;
      }
    assert(vector_MusicThirdPartyIds1.size() >= 1);
    initMusicThirdPartyIds();
    for (size_t num5 = 0; num5 < vector_MusicThirdPartyIds1.size(); ++num5)
        appendMusicThirdPartyIds(vector_MusicThirdPartyIds1[num5]);
    for (size_t num1 = 0; num1 < vector_MusicThirdPartyIds1.size(); ++num1)
      {
        vector_MusicThirdPartyIds1[num1]->remove_reference();
      }
  }

void MusicArtistBaseJSON::fromJSONStyles(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Styles of MusicArtistBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Styles of MusicArtistBaseJSON has too few elements.");
    std::vector< std::string > vector_Styles1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Styles of MusicArtistBaseJSON is not a string.");
        vector_Styles1[num1] = std::string(json_string->getData());
      }
    assert(vector_Styles1.size() >= 1);
    initStyles();
    for (size_t num6 = 0; num6 < vector_Styles1.size(); ++num6)
        appendStyles(vector_Styles1[num6]);
    for (size_t num1 = 0; num1 < vector_Styles1.size(); ++num1)
      {
      }
  }

void MusicArtistBaseJSON::fromJSONEarliestTrack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicTrackBaseJSON *convert_classy = MusicTrackBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEarliestTrack(convert_classy);
    convert_classy->remove_reference();
  }

void MusicArtistBaseJSON::fromJSONLatestTrack(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicTrackBaseJSON *convert_classy = MusicTrackBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLatestTrack(convert_classy);
    convert_classy->remove_reference();
  }

void MusicArtistBaseJSON::fromJSONEarliestAlbum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicAlbumBaseJSON *convert_classy = MusicAlbumBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEarliestAlbum(convert_classy);
    convert_classy->remove_reference();
  }

void MusicArtistBaseJSON::fromJSONLatestAlbum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicAlbumBaseJSON *convert_classy = MusicAlbumBaseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLatestAlbum(convert_classy);
    convert_classy->remove_reference();
  }

MusicArtistBaseJSON::MusicArtistBaseJSON(void) :
        flagHasArtistID(false),
        flagHasArtistName(false),
        flagHasArtistImageURL(false),
        flagHasBiography(false),
        flagHasBirthPlace(false),
        flagHasBirthDate(false),
        flagHasDeathPlace(false),
        flagHasDeathDate(false),
        flagHasArtistType(false),
        flagHasBuyLinks(false),
        flagHasMusicThirdPartyIds(false),
        flagHasStyles(false),
        flagHasEarliestTrack(false),
        flagHasLatestTrack(false),
        flagHasEarliestAlbum(false),
        flagHasLatestAlbum(false)
  {
  }

MusicArtistBaseJSON::~MusicArtistBaseJSON(void)
  {
    if (flagHasArtistID)
      {
        storeArtistID->remove_reference();
      }
    if (flagHasBuyLinks)
      {
        for (size_t num7 = 0; num7 < storeBuyLinks.size(); ++num7)
          {
            storeBuyLinks[num7]->remove_reference();
          }
      }
    if (flagHasMusicThirdPartyIds)
      {
        for (size_t num8 = 0; num8 < storeMusicThirdPartyIds.size(); ++num8)
          {
            storeMusicThirdPartyIds[num8]->remove_reference();
          }
      }
    if (flagHasEarliestTrack)
      {
        storeEarliestTrack->remove_reference();
      }
    if (flagHasLatestTrack)
      {
        storeLatestTrack->remove_reference();
      }
    if (flagHasEarliestAlbum)
      {
        storeEarliestAlbum->remove_reference();
      }
    if (flagHasLatestAlbum)
      {
        storeLatestAlbum->remove_reference();
      }
  }

bool MusicArtistBaseJSON::hasArtistID(void) const
  {
    return flagHasArtistID;
  }

SoundHoundArtistIDJSON * MusicArtistBaseJSON::getArtistID(void)
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

const SoundHoundArtistIDJSON * MusicArtistBaseJSON::getArtistID(void) const
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

uint64_t MusicArtistBaseJSON::getArtistIDValue(void)
  {
    return getArtistID()->getValue();
  }

const uint64_t MusicArtistBaseJSON::getArtistIDValue(void) const
  {
    return getArtistID()->getValue();
  }

bool MusicArtistBaseJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicArtistBaseJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicArtistBaseJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicArtistBaseJSON::hasArtistImageURL(void) const
  {
    return flagHasArtistImageURL;
  }

std::string MusicArtistBaseJSON::getArtistImageURL(void)
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

const std::string MusicArtistBaseJSON::getArtistImageURL(void) const
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

bool MusicArtistBaseJSON::hasBiography(void) const
  {
    return flagHasBiography;
  }

std::string MusicArtistBaseJSON::getBiography(void)
  {
    assert(flagHasBiography);
    return storeBiography;
  }

const std::string MusicArtistBaseJSON::getBiography(void) const
  {
    assert(flagHasBiography);
    return storeBiography;
  }

bool MusicArtistBaseJSON::hasBirthPlace(void) const
  {
    return flagHasBirthPlace;
  }

std::string MusicArtistBaseJSON::getBirthPlace(void)
  {
    assert(flagHasBirthPlace);
    return storeBirthPlace;
  }

const std::string MusicArtistBaseJSON::getBirthPlace(void) const
  {
    assert(flagHasBirthPlace);
    return storeBirthPlace;
  }

bool MusicArtistBaseJSON::hasBirthDate(void) const
  {
    return flagHasBirthDate;
  }

std::string MusicArtistBaseJSON::getBirthDate(void)
  {
    assert(flagHasBirthDate);
    return storeBirthDate;
  }

const std::string MusicArtistBaseJSON::getBirthDate(void) const
  {
    assert(flagHasBirthDate);
    return storeBirthDate;
  }

bool MusicArtistBaseJSON::hasDeathPlace(void) const
  {
    return flagHasDeathPlace;
  }

std::string MusicArtistBaseJSON::getDeathPlace(void)
  {
    assert(flagHasDeathPlace);
    return storeDeathPlace;
  }

const std::string MusicArtistBaseJSON::getDeathPlace(void) const
  {
    assert(flagHasDeathPlace);
    return storeDeathPlace;
  }

bool MusicArtistBaseJSON::hasDeathDate(void) const
  {
    return flagHasDeathDate;
  }

std::string MusicArtistBaseJSON::getDeathDate(void)
  {
    assert(flagHasDeathDate);
    return storeDeathDate;
  }

const std::string MusicArtistBaseJSON::getDeathDate(void) const
  {
    assert(flagHasDeathDate);
    return storeDeathDate;
  }

bool MusicArtistBaseJSON::hasArtistType(void) const
  {
    return flagHasArtistType;
  }

MusicArtistBaseJSON::TypeArtistType MusicArtistBaseJSON::getArtistType(void)
  {
    assert(flagHasArtistType);
    return storeArtistType;
  }

const MusicArtistBaseJSON::TypeArtistType MusicArtistBaseJSON::getArtistType(void) const
  {
    assert(flagHasArtistType);
    return storeArtistType;
  }

const char *MusicArtistBaseJSON::getArtistTypeAsChars(void) const
  {
    TypeArtistType result = getArtistType();
    if (result.in_known_list)
        return stringFromArtistType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string MusicArtistBaseJSON::getArtistTypeAsString(void) const
  {
    return getArtistTypeAsChars();
  }

bool MusicArtistBaseJSON::hasBuyLinks(void) const
  {
    return flagHasBuyLinks;
  }

size_t MusicArtistBaseJSON::countOfBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks.size();
  }

MusicBuyLinkJSON * MusicArtistBaseJSON::elementOfBuyLinks(size_t element_num)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

const MusicBuyLinkJSON * MusicArtistBaseJSON::elementOfBuyLinks(size_t element_num) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

std::vector< MusicBuyLinkJSON * > MusicArtistBaseJSON::getBuyLinks(void)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

const std::vector< MusicBuyLinkJSON * > MusicArtistBaseJSON::getBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

bool MusicArtistBaseJSON::hasMusicThirdPartyIds(void) const
  {
    return flagHasMusicThirdPartyIds;
  }

size_t MusicArtistBaseJSON::countOfMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds.size();
  }

MusicThirdPartyIdListJSON * MusicArtistBaseJSON::elementOfMusicThirdPartyIds(size_t element_num)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

const MusicThirdPartyIdListJSON * MusicArtistBaseJSON::elementOfMusicThirdPartyIds(size_t element_num) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

std::vector< MusicThirdPartyIdListJSON * > MusicArtistBaseJSON::getMusicThirdPartyIds(void)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

const std::vector< MusicThirdPartyIdListJSON * > MusicArtistBaseJSON::getMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

bool MusicArtistBaseJSON::hasStyles(void) const
  {
    return flagHasStyles;
  }

size_t MusicArtistBaseJSON::countOfStyles(void) const
  {
    assert(flagHasStyles);
    return storeStyles.size();
  }

std::string MusicArtistBaseJSON::elementOfStyles(size_t element_num)
  {
    assert(flagHasStyles);
    return storeStyles[element_num];
  }

const std::string MusicArtistBaseJSON::elementOfStyles(size_t element_num) const
  {
    assert(flagHasStyles);
    return storeStyles[element_num];
  }

std::vector< std::string > MusicArtistBaseJSON::getStyles(void)
  {
    assert(flagHasStyles);
    return storeStyles;
  }

const std::vector< std::string > MusicArtistBaseJSON::getStyles(void) const
  {
    assert(flagHasStyles);
    return storeStyles;
  }

bool MusicArtistBaseJSON::hasEarliestTrack(void) const
  {
    return flagHasEarliestTrack;
  }

MusicTrackBaseJSON * MusicArtistBaseJSON::getEarliestTrack(void)
  {
    assert(flagHasEarliestTrack);
    return storeEarliestTrack;
  }

const MusicTrackBaseJSON * MusicArtistBaseJSON::getEarliestTrack(void) const
  {
    assert(flagHasEarliestTrack);
    return storeEarliestTrack;
  }

bool MusicArtistBaseJSON::hasLatestTrack(void) const
  {
    return flagHasLatestTrack;
  }

MusicTrackBaseJSON * MusicArtistBaseJSON::getLatestTrack(void)
  {
    assert(flagHasLatestTrack);
    return storeLatestTrack;
  }

const MusicTrackBaseJSON * MusicArtistBaseJSON::getLatestTrack(void) const
  {
    assert(flagHasLatestTrack);
    return storeLatestTrack;
  }

bool MusicArtistBaseJSON::hasEarliestAlbum(void) const
  {
    return flagHasEarliestAlbum;
  }

MusicAlbumBaseJSON * MusicArtistBaseJSON::getEarliestAlbum(void)
  {
    assert(flagHasEarliestAlbum);
    return storeEarliestAlbum;
  }

const MusicAlbumBaseJSON * MusicArtistBaseJSON::getEarliestAlbum(void) const
  {
    assert(flagHasEarliestAlbum);
    return storeEarliestAlbum;
  }

bool MusicArtistBaseJSON::hasLatestAlbum(void) const
  {
    return flagHasLatestAlbum;
  }

MusicAlbumBaseJSON * MusicArtistBaseJSON::getLatestAlbum(void)
  {
    assert(flagHasLatestAlbum);
    return storeLatestAlbum;
  }

const MusicAlbumBaseJSON * MusicArtistBaseJSON::getLatestAlbum(void) const
  {
    assert(flagHasLatestAlbum);
    return storeLatestAlbum;
  }

MusicArtistBaseJSON *MusicArtistBaseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicArtistBaseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicArtistBaseJSON>, MusicArtistBaseJSON *, bool> generator("Type MusicArtistBase", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
