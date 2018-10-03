/* file "MusicAlbumBaseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicAlbumBaseJSON.h"

#include "MusicAlbumBaseJSON.h"
#include "MusicAlbumJSON.h"


MusicAlbumBaseJSON::MusicAlbumBaseJSON(const MusicAlbumBaseJSON &)
  {
    assert(false);
  }

MusicAlbumBaseJSON &MusicAlbumBaseJSON::operator=(const MusicAlbumBaseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicAlbumBaseJSON::fromJSONAlbumID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundAlbumIDJSON *convert_classy = SoundHoundAlbumIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlbumID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicAlbumBaseJSON::fromJSONAlbumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumName of MusicAlbumBaseJSON is not a string.");
    setAlbumName(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONAlbumImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumImageURL of MusicAlbumBaseJSON is not a string.");
    setAlbumImageURL(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONAlbumDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumDate of MusicAlbumBaseJSON is not a string.");
    setAlbumDate(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONAlbumReview(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumReview of MusicAlbumBaseJSON is not a string.");
    setAlbumReview(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicAlbumBaseJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONArtistID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundArtistIDJSON *convert_classy = SoundHoundArtistIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArtistID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicAlbumBaseJSON::fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistImageURL of MusicAlbumBaseJSON is not a string.");
    setArtistImageURL(std::string(json_string->getData()));
  }

void MusicAlbumBaseJSON::fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field BuyLinks of MusicAlbumBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field BuyLinks of MusicAlbumBaseJSON has too few elements.");
    std::vector< MusicBuyLinkJSON * > vector_BuyLinks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicBuyLinkJSON *convert_classy = MusicBuyLinkJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_BuyLinks1[num1] = convert_classy;
      }
    assert(vector_BuyLinks1.size() >= 1);
    initBuyLinks();
    for (size_t num3 = 0; num3 < vector_BuyLinks1.size(); ++num3)
        appendBuyLinks(vector_BuyLinks1[num3]);
    for (size_t num1 = 0; num1 < vector_BuyLinks1.size(); ++num1)
      {
        vector_BuyLinks1[num1]->remove_reference();
      }
  }

void MusicAlbumBaseJSON::fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MusicThirdPartyIds of MusicAlbumBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MusicThirdPartyIds of MusicAlbumBaseJSON has too few elements.");
    std::vector< MusicThirdPartyIdListJSON * > vector_MusicThirdPartyIds1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicThirdPartyIdListJSON *convert_classy = MusicThirdPartyIdListJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MusicThirdPartyIds1[num1] = convert_classy;
      }
    assert(vector_MusicThirdPartyIds1.size() >= 1);
    initMusicThirdPartyIds();
    for (size_t num4 = 0; num4 < vector_MusicThirdPartyIds1.size(); ++num4)
        appendMusicThirdPartyIds(vector_MusicThirdPartyIds1[num4]);
    for (size_t num1 = 0; num1 < vector_MusicThirdPartyIds1.size(); ++num1)
      {
        vector_MusicThirdPartyIds1[num1]->remove_reference();
      }
  }

MusicAlbumBaseJSON::MusicAlbumBaseJSON(void) :
        flagHasAlbumID(false),
        flagHasAlbumName(false),
        flagHasAlbumImageURL(false),
        flagHasAlbumDate(false),
        flagHasAlbumReview(false),
        flagHasArtistName(false),
        flagHasArtistID(false),
        flagHasArtistImageURL(false),
        flagHasBuyLinks(false),
        flagHasMusicThirdPartyIds(false)
  {
  }

MusicAlbumBaseJSON::~MusicAlbumBaseJSON(void)
  {
    if (flagHasAlbumID)
      {
        storeAlbumID->remove_reference();
      }
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
  }

bool MusicAlbumBaseJSON::hasAlbumID(void) const
  {
    return flagHasAlbumID;
  }

SoundHoundAlbumIDJSON * MusicAlbumBaseJSON::getAlbumID(void)
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

const SoundHoundAlbumIDJSON * MusicAlbumBaseJSON::getAlbumID(void) const
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

uint64_t MusicAlbumBaseJSON::getAlbumIDValue(void)
  {
    return getAlbumID()->getValue();
  }

const uint64_t MusicAlbumBaseJSON::getAlbumIDValue(void) const
  {
    return getAlbumID()->getValue();
  }

bool MusicAlbumBaseJSON::hasAlbumName(void) const
  {
    return flagHasAlbumName;
  }

std::string MusicAlbumBaseJSON::getAlbumName(void)
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

const std::string MusicAlbumBaseJSON::getAlbumName(void) const
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

bool MusicAlbumBaseJSON::hasAlbumImageURL(void) const
  {
    return flagHasAlbumImageURL;
  }

std::string MusicAlbumBaseJSON::getAlbumImageURL(void)
  {
    assert(flagHasAlbumImageURL);
    return storeAlbumImageURL;
  }

const std::string MusicAlbumBaseJSON::getAlbumImageURL(void) const
  {
    assert(flagHasAlbumImageURL);
    return storeAlbumImageURL;
  }

bool MusicAlbumBaseJSON::hasAlbumDate(void) const
  {
    return flagHasAlbumDate;
  }

std::string MusicAlbumBaseJSON::getAlbumDate(void)
  {
    assert(flagHasAlbumDate);
    return storeAlbumDate;
  }

const std::string MusicAlbumBaseJSON::getAlbumDate(void) const
  {
    assert(flagHasAlbumDate);
    return storeAlbumDate;
  }

bool MusicAlbumBaseJSON::hasAlbumReview(void) const
  {
    return flagHasAlbumReview;
  }

std::string MusicAlbumBaseJSON::getAlbumReview(void)
  {
    assert(flagHasAlbumReview);
    return storeAlbumReview;
  }

const std::string MusicAlbumBaseJSON::getAlbumReview(void) const
  {
    assert(flagHasAlbumReview);
    return storeAlbumReview;
  }

bool MusicAlbumBaseJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicAlbumBaseJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicAlbumBaseJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicAlbumBaseJSON::hasArtistID(void) const
  {
    return flagHasArtistID;
  }

SoundHoundArtistIDJSON * MusicAlbumBaseJSON::getArtistID(void)
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

const SoundHoundArtistIDJSON * MusicAlbumBaseJSON::getArtistID(void) const
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

uint64_t MusicAlbumBaseJSON::getArtistIDValue(void)
  {
    return getArtistID()->getValue();
  }

const uint64_t MusicAlbumBaseJSON::getArtistIDValue(void) const
  {
    return getArtistID()->getValue();
  }

bool MusicAlbumBaseJSON::hasArtistImageURL(void) const
  {
    return flagHasArtistImageURL;
  }

std::string MusicAlbumBaseJSON::getArtistImageURL(void)
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

const std::string MusicAlbumBaseJSON::getArtistImageURL(void) const
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

bool MusicAlbumBaseJSON::hasBuyLinks(void) const
  {
    return flagHasBuyLinks;
  }

size_t MusicAlbumBaseJSON::countOfBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks.size();
  }

MusicBuyLinkJSON * MusicAlbumBaseJSON::elementOfBuyLinks(size_t element_num)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

const MusicBuyLinkJSON * MusicAlbumBaseJSON::elementOfBuyLinks(size_t element_num) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

std::vector< MusicBuyLinkJSON * > MusicAlbumBaseJSON::getBuyLinks(void)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

const std::vector< MusicBuyLinkJSON * > MusicAlbumBaseJSON::getBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

bool MusicAlbumBaseJSON::hasMusicThirdPartyIds(void) const
  {
    return flagHasMusicThirdPartyIds;
  }

size_t MusicAlbumBaseJSON::countOfMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds.size();
  }

MusicThirdPartyIdListJSON * MusicAlbumBaseJSON::elementOfMusicThirdPartyIds(size_t element_num)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

const MusicThirdPartyIdListJSON * MusicAlbumBaseJSON::elementOfMusicThirdPartyIds(size_t element_num) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

std::vector< MusicThirdPartyIdListJSON * > MusicAlbumBaseJSON::getMusicThirdPartyIds(void)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

const std::vector< MusicThirdPartyIdListJSON * > MusicAlbumBaseJSON::getMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

MusicAlbumBaseJSON *MusicAlbumBaseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicAlbumBaseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicAlbumBaseJSON>, MusicAlbumBaseJSON *, bool> generator("Type MusicAlbumBase", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
