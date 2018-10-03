/* file "MusicTrackBaseJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicTrackBaseJSON.h"

#include "MusicTrackBaseJSON.h"
#include "MusicTrackJSON.h"


MusicTrackBaseJSON::MusicTrackBaseJSON(const MusicTrackBaseJSON &)
  {
    assert(false);
  }

MusicTrackBaseJSON &MusicTrackBaseJSON::operator=(const MusicTrackBaseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicTrackBaseJSON::fromJSONTrackID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundTrackIDJSON *convert_classy = SoundHoundTrackIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTrackID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicTrackBaseJSON::fromJSONAlbumID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundAlbumIDJSON *convert_classy = SoundHoundAlbumIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlbumID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicTrackBaseJSON::fromJSONArtistID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SoundHoundArtistIDJSON *convert_classy = SoundHoundArtistIDJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setArtistID(convert_classy);
    convert_classy->remove_reference();
  }

void MusicTrackBaseJSON::fromJSONTrackName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field TrackName of MusicTrackBaseJSON is not a string.");
    setTrackName(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONAlbumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumName of MusicTrackBaseJSON is not a string.");
    setAlbumName(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONArtistName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistName of MusicTrackBaseJSON is not a string.");
    setArtistName(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONAlbumImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumImageURL of MusicTrackBaseJSON is not a string.");
    setAlbumImageURL(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONArtistImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ArtistImageURL of MusicTrackBaseJSON is not a string.");
    setArtistImageURL(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONAlbumDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AlbumDate of MusicTrackBaseJSON is not a string.");
    setAlbumDate(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONAudioPreviewURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AudioPreviewURL of MusicTrackBaseJSON is not a string.");
    setAudioPreviewURL(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONAutoPlayPreview(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoPlayPreview of MusicTrackBaseJSON is not true for false.");
          }
      }
    setAutoPlayPreview(the_bool);
  }

void MusicTrackBaseJSON::fromJSONAutoPlay(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoPlay of MusicTrackBaseJSON is not true for false.");
          }
      }
    setAutoPlay(the_bool);
  }

void MusicTrackBaseJSON::fromJSONLyrics(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Lyrics of MusicTrackBaseJSON is not a string.");
    setLyrics(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONLyricsURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LyricsURL of MusicTrackBaseJSON is not a string.");
    setLyricsURL(std::string(json_string->getData()));
  }

void MusicTrackBaseJSON::fromJSONBuyLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field BuyLinks of MusicTrackBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field BuyLinks of MusicTrackBaseJSON has too few elements.");
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

void MusicTrackBaseJSON::fromJSONMusicThirdPartyIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MusicThirdPartyIds of MusicTrackBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field MusicThirdPartyIds of MusicTrackBaseJSON has too few elements.");
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

void MusicTrackBaseJSON::fromJSONPreviewLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PreviewLinks of MusicTrackBaseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PreviewLinks of MusicTrackBaseJSON has too few elements.");
    std::vector< MusicPreviewLinkJSON * > vector_PreviewLinks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        MusicPreviewLinkJSON *convert_classy = MusicPreviewLinkJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PreviewLinks1[num1] = convert_classy;
      }
    assert(vector_PreviewLinks1.size() >= 1);
    initPreviewLinks();
    for (size_t num6 = 0; num6 < vector_PreviewLinks1.size(); ++num6)
        appendPreviewLinks(vector_PreviewLinks1[num6]);
    for (size_t num1 = 0; num1 < vector_PreviewLinks1.size(); ++num1)
      {
        vector_PreviewLinks1[num1]->remove_reference();
      }
  }

MusicTrackBaseJSON::MusicTrackBaseJSON(void) :
        flagHasTrackID(false),
        flagHasAlbumID(false),
        flagHasArtistID(false),
        flagHasTrackName(false),
        flagHasAlbumName(false),
        flagHasArtistName(false),
        flagHasAlbumImageURL(false),
        flagHasArtistImageURL(false),
        flagHasAlbumDate(false),
        flagHasAudioPreviewURL(false),
        flagHasAutoPlayPreview(false),
        flagHasAutoPlay(false),
        flagHasLyrics(false),
        flagHasLyricsURL(false),
        flagHasBuyLinks(false),
        flagHasMusicThirdPartyIds(false),
        flagHasPreviewLinks(false)
  {
  }

MusicTrackBaseJSON::~MusicTrackBaseJSON(void)
  {
    if (flagHasTrackID)
      {
        storeTrackID->remove_reference();
      }
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
        for (size_t num10 = 0; num10 < storeBuyLinks.size(); ++num10)
          {
            storeBuyLinks[num10]->remove_reference();
          }
      }
    if (flagHasMusicThirdPartyIds)
      {
        for (size_t num11 = 0; num11 < storeMusicThirdPartyIds.size(); ++num11)
          {
            storeMusicThirdPartyIds[num11]->remove_reference();
          }
      }
    if (flagHasPreviewLinks)
      {
        for (size_t num12 = 0; num12 < storePreviewLinks.size(); ++num12)
          {
            storePreviewLinks[num12]->remove_reference();
          }
      }
  }

bool MusicTrackBaseJSON::hasTrackID(void) const
  {
    return flagHasTrackID;
  }

SoundHoundTrackIDJSON * MusicTrackBaseJSON::getTrackID(void)
  {
    assert(flagHasTrackID);
    return storeTrackID;
  }

const SoundHoundTrackIDJSON * MusicTrackBaseJSON::getTrackID(void) const
  {
    assert(flagHasTrackID);
    return storeTrackID;
  }

uint64_t MusicTrackBaseJSON::getTrackIDValue(void)
  {
    return getTrackID()->getValue();
  }

const uint64_t MusicTrackBaseJSON::getTrackIDValue(void) const
  {
    return getTrackID()->getValue();
  }

bool MusicTrackBaseJSON::hasAlbumID(void) const
  {
    return flagHasAlbumID;
  }

SoundHoundAlbumIDJSON * MusicTrackBaseJSON::getAlbumID(void)
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

const SoundHoundAlbumIDJSON * MusicTrackBaseJSON::getAlbumID(void) const
  {
    assert(flagHasAlbumID);
    return storeAlbumID;
  }

uint64_t MusicTrackBaseJSON::getAlbumIDValue(void)
  {
    return getAlbumID()->getValue();
  }

const uint64_t MusicTrackBaseJSON::getAlbumIDValue(void) const
  {
    return getAlbumID()->getValue();
  }

bool MusicTrackBaseJSON::hasArtistID(void) const
  {
    return flagHasArtistID;
  }

SoundHoundArtistIDJSON * MusicTrackBaseJSON::getArtistID(void)
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

const SoundHoundArtistIDJSON * MusicTrackBaseJSON::getArtistID(void) const
  {
    assert(flagHasArtistID);
    return storeArtistID;
  }

uint64_t MusicTrackBaseJSON::getArtistIDValue(void)
  {
    return getArtistID()->getValue();
  }

const uint64_t MusicTrackBaseJSON::getArtistIDValue(void) const
  {
    return getArtistID()->getValue();
  }

bool MusicTrackBaseJSON::hasTrackName(void) const
  {
    return flagHasTrackName;
  }

std::string MusicTrackBaseJSON::getTrackName(void)
  {
    assert(flagHasTrackName);
    return storeTrackName;
  }

const std::string MusicTrackBaseJSON::getTrackName(void) const
  {
    assert(flagHasTrackName);
    return storeTrackName;
  }

bool MusicTrackBaseJSON::hasAlbumName(void) const
  {
    return flagHasAlbumName;
  }

std::string MusicTrackBaseJSON::getAlbumName(void)
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

const std::string MusicTrackBaseJSON::getAlbumName(void) const
  {
    assert(flagHasAlbumName);
    return storeAlbumName;
  }

bool MusicTrackBaseJSON::hasArtistName(void) const
  {
    return flagHasArtistName;
  }

std::string MusicTrackBaseJSON::getArtistName(void)
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

const std::string MusicTrackBaseJSON::getArtistName(void) const
  {
    assert(flagHasArtistName);
    return storeArtistName;
  }

bool MusicTrackBaseJSON::hasAlbumImageURL(void) const
  {
    return flagHasAlbumImageURL;
  }

std::string MusicTrackBaseJSON::getAlbumImageURL(void)
  {
    assert(flagHasAlbumImageURL);
    return storeAlbumImageURL;
  }

const std::string MusicTrackBaseJSON::getAlbumImageURL(void) const
  {
    assert(flagHasAlbumImageURL);
    return storeAlbumImageURL;
  }

bool MusicTrackBaseJSON::hasArtistImageURL(void) const
  {
    return flagHasArtistImageURL;
  }

std::string MusicTrackBaseJSON::getArtistImageURL(void)
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

const std::string MusicTrackBaseJSON::getArtistImageURL(void) const
  {
    assert(flagHasArtistImageURL);
    return storeArtistImageURL;
  }

bool MusicTrackBaseJSON::hasAlbumDate(void) const
  {
    return flagHasAlbumDate;
  }

std::string MusicTrackBaseJSON::getAlbumDate(void)
  {
    assert(flagHasAlbumDate);
    return storeAlbumDate;
  }

const std::string MusicTrackBaseJSON::getAlbumDate(void) const
  {
    assert(flagHasAlbumDate);
    return storeAlbumDate;
  }

bool MusicTrackBaseJSON::hasAudioPreviewURL(void) const
  {
    return flagHasAudioPreviewURL;
  }

std::string MusicTrackBaseJSON::getAudioPreviewURL(void)
  {
    assert(flagHasAudioPreviewURL);
    return storeAudioPreviewURL;
  }

const std::string MusicTrackBaseJSON::getAudioPreviewURL(void) const
  {
    assert(flagHasAudioPreviewURL);
    return storeAudioPreviewURL;
  }

bool MusicTrackBaseJSON::hasAutoPlayPreview(void) const
  {
    return flagHasAutoPlayPreview;
  }

bool MusicTrackBaseJSON::getAutoPlayPreview(void)
  {
    assert(flagHasAutoPlayPreview);
    return storeAutoPlayPreview;
  }

const bool MusicTrackBaseJSON::getAutoPlayPreview(void) const
  {
    assert(flagHasAutoPlayPreview);
    return storeAutoPlayPreview;
  }

bool MusicTrackBaseJSON::hasAutoPlay(void) const
  {
    return flagHasAutoPlay;
  }

bool MusicTrackBaseJSON::getAutoPlay(void)
  {
    assert(flagHasAutoPlay);
    return storeAutoPlay;
  }

const bool MusicTrackBaseJSON::getAutoPlay(void) const
  {
    assert(flagHasAutoPlay);
    return storeAutoPlay;
  }

bool MusicTrackBaseJSON::hasLyrics(void) const
  {
    return flagHasLyrics;
  }

std::string MusicTrackBaseJSON::getLyrics(void)
  {
    assert(flagHasLyrics);
    return storeLyrics;
  }

const std::string MusicTrackBaseJSON::getLyrics(void) const
  {
    assert(flagHasLyrics);
    return storeLyrics;
  }

bool MusicTrackBaseJSON::hasLyricsURL(void) const
  {
    return flagHasLyricsURL;
  }

std::string MusicTrackBaseJSON::getLyricsURL(void)
  {
    assert(flagHasLyricsURL);
    return storeLyricsURL;
  }

const std::string MusicTrackBaseJSON::getLyricsURL(void) const
  {
    assert(flagHasLyricsURL);
    return storeLyricsURL;
  }

bool MusicTrackBaseJSON::hasBuyLinks(void) const
  {
    return flagHasBuyLinks;
  }

size_t MusicTrackBaseJSON::countOfBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks.size();
  }

MusicBuyLinkJSON * MusicTrackBaseJSON::elementOfBuyLinks(size_t element_num)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

const MusicBuyLinkJSON * MusicTrackBaseJSON::elementOfBuyLinks(size_t element_num) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks[element_num];
  }

std::vector< MusicBuyLinkJSON * > MusicTrackBaseJSON::getBuyLinks(void)
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

const std::vector< MusicBuyLinkJSON * > MusicTrackBaseJSON::getBuyLinks(void) const
  {
    assert(flagHasBuyLinks);
    return storeBuyLinks;
  }

bool MusicTrackBaseJSON::hasMusicThirdPartyIds(void) const
  {
    return flagHasMusicThirdPartyIds;
  }

size_t MusicTrackBaseJSON::countOfMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds.size();
  }

MusicThirdPartyIdListJSON * MusicTrackBaseJSON::elementOfMusicThirdPartyIds(size_t element_num)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

const MusicThirdPartyIdListJSON * MusicTrackBaseJSON::elementOfMusicThirdPartyIds(size_t element_num) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds[element_num];
  }

std::vector< MusicThirdPartyIdListJSON * > MusicTrackBaseJSON::getMusicThirdPartyIds(void)
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

const std::vector< MusicThirdPartyIdListJSON * > MusicTrackBaseJSON::getMusicThirdPartyIds(void) const
  {
    assert(flagHasMusicThirdPartyIds);
    return storeMusicThirdPartyIds;
  }

bool MusicTrackBaseJSON::hasPreviewLinks(void) const
  {
    return flagHasPreviewLinks;
  }

size_t MusicTrackBaseJSON::countOfPreviewLinks(void) const
  {
    assert(flagHasPreviewLinks);
    return storePreviewLinks.size();
  }

MusicPreviewLinkJSON * MusicTrackBaseJSON::elementOfPreviewLinks(size_t element_num)
  {
    assert(flagHasPreviewLinks);
    return storePreviewLinks[element_num];
  }

const MusicPreviewLinkJSON * MusicTrackBaseJSON::elementOfPreviewLinks(size_t element_num) const
  {
    assert(flagHasPreviewLinks);
    return storePreviewLinks[element_num];
  }

std::vector< MusicPreviewLinkJSON * > MusicTrackBaseJSON::getPreviewLinks(void)
  {
    assert(flagHasPreviewLinks);
    return storePreviewLinks;
  }

const std::vector< MusicPreviewLinkJSON * > MusicTrackBaseJSON::getPreviewLinks(void) const
  {
    assert(flagHasPreviewLinks);
    return storePreviewLinks;
  }

MusicTrackBaseJSON *MusicTrackBaseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicTrackBaseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicTrackBaseJSON>, MusicTrackBaseJSON *, bool> generator("Type MusicTrackBase", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
