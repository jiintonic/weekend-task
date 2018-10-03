/* file "MusicPlayerCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MUSICPLAYERCOMMANDJSON_H
#define MUSICPLAYERCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "DynamicResponseJSON.h"
#include "MusicThirdPartyJSON.h"
#include "SoundHoundTrackIDJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MusicPlayerCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeCommandTypeKnownValues
          {
            CommandType_MUSIC_PLAYER_RESPONSE_SEARCH,
            CommandType_MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK,
            CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG,
            CommandType_MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG,
            CommandType_MUSIC_PLAYER_RESPONSE_PAUSE,
            CommandType_MUSIC_PLAYER_RESPONSE_SKIP,
            CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_UP,
            CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_DOWN,
            CommandType_MUSIC_PLAYER_RESPONSE_RAISE_VOLUME,
            CommandType_MUSIC_PLAYER_RESPONSE_LOWER_VOLUME,
            CommandType_MUSIC_PLAYER_RESPONSE_MUTE,
            CommandType_MUSIC_PLAYER_RESPONSE_UNMUTE,
            CommandType_MUSIC_PLAYER_RESPONSE_STOP,
            CommandType_MUSIC_PLAYER_RESPONSE_REPLAY,
            CommandType_MUSIC_PLAYER_RESPONSE_REWIND,
            CommandType_MUSIC_PLAYER_RESPONSE_FAST_FORWARD,
            CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG,
            CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE,
            CommandType_MUSIC_PLAYER_RESPONSE_SEEK,
            CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_ON,
            CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF,
            CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_ON,
            CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_OFF,
            CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE,
            CommandType_MUSIC_PLAYER_RESPONSE_SET_PROVIDER,
            CommandType_MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE,
            CommandType_MUSIC_PLAYER_RESPONSE_SKIP_ALBUM,
            CommandType__none
          };
        struct TypeCommandType
          {
            bool in_known_list;
            std::string string_value;
            TypeCommandTypeKnownValues list_value;

            TypeCommandType(void);
            TypeCommandType(const TypeCommandType &other);
            TypeCommandType(TypeCommandTypeKnownValues other);
            bool  operator==(const TypeCommandType &other) const;
            bool  operator!=(const TypeCommandType &other) const;
            bool  operator<(const TypeCommandType &other) const;
            bool  operator>(const TypeCommandType &other) const;
            bool  operator>=(const TypeCommandType &other) const;
            bool  operator<=(const TypeCommandType &other) const;

          };

        static TypeCommandTypeKnownValues  stringToCommandType(const char *chars);
        static const char * stringFromCommandType(TypeCommandTypeKnownValues the_enum);
        enum TypeMusicAudioInputSourceKnownValues
          {
            MusicAudioInputSource_Bluetooth,
            MusicAudioInputSource_Auxiliary,
            MusicAudioInputSource_HDMI1,
            MusicAudioInputSource_Optical,
            MusicAudioInputSource_CD,
            MusicAudioInputSource_USB,
            MusicAudioInputSource__none
          };
        struct TypeMusicAudioInputSource
          {
            bool in_known_list;
            std::string string_value;
            TypeMusicAudioInputSourceKnownValues list_value;

            TypeMusicAudioInputSource(void);
            TypeMusicAudioInputSource(const TypeMusicAudioInputSource &other);
            TypeMusicAudioInputSource(TypeMusicAudioInputSourceKnownValues other);
            bool  operator==(const TypeMusicAudioInputSource &other) const;
            bool  operator!=(const TypeMusicAudioInputSource &other) const;
            bool  operator<(const TypeMusicAudioInputSource &other) const;
            bool  operator>(const TypeMusicAudioInputSource &other) const;
            bool  operator>=(const TypeMusicAudioInputSource &other) const;
            bool  operator<=(const TypeMusicAudioInputSource &other) const;

          };

        static TypeMusicAudioInputSourceKnownValues  stringToMusicAudioInputSource(const char *chars);
        static const char * stringFromMusicAudioInputSource(TypeMusicAudioInputSourceKnownValues the_enum);
        enum TypeMusicSourceDeviceKnownValues
          {
            MusicSourceDevice_iPhone,
            MusicSourceDevice_iPod,
            MusicSourceDevice_CDPlayer,
            MusicSourceDevice_Laptop,
            MusicSourceDevice_Computer,
            MusicSourceDevice__none
          };
        struct TypeMusicSourceDevice
          {
            bool in_known_list;
            std::string string_value;
            TypeMusicSourceDeviceKnownValues list_value;

            TypeMusicSourceDevice(void);
            TypeMusicSourceDevice(const TypeMusicSourceDevice &other);
            TypeMusicSourceDevice(TypeMusicSourceDeviceKnownValues other);
            bool  operator==(const TypeMusicSourceDevice &other) const;
            bool  operator!=(const TypeMusicSourceDevice &other) const;
            bool  operator<(const TypeMusicSourceDevice &other) const;
            bool  operator>(const TypeMusicSourceDevice &other) const;
            bool  operator>=(const TypeMusicSourceDevice &other) const;
            bool  operator<=(const TypeMusicSourceDevice &other) const;

          };

        static TypeMusicSourceDeviceKnownValues  stringToMusicSourceDevice(const char *chars);
        static const char * stringFromMusicSourceDevice(TypeMusicSourceDeviceKnownValues the_enum);

      private:
        bool flagHasCommandType;
        TypeCommandType storeCommandType;
        bool flagHasPlayNumberedTrackTrackNumber;
        OInteger storePlayNumberedTrackTrackNumber;
        bool flagHasRewindFastForwardAmountInSeconds;
        double storeRewindFastForwardAmountInSeconds;
        std::string textStoreRewindFastForwardAmountInSeconds;
        bool flagHasSeekOffsetInSeconds;
        double storeSeekOffsetInSeconds;
        std::string textStoreSeekOffsetInSeconds;
        bool flagHasSeekOffsetPercentage;
        double storeSeekOffsetPercentage;
        std::string textStoreSeekOffsetPercentage;
        bool flagHasSkipAmount;
        OInteger storeSkipAmount;
        bool flagHasMusicThirdParty;
        MusicThirdPartyJSON * storeMusicThirdParty;
        bool flagHasUserRequestedVideos;
        bool storeUserRequestedVideos;
        bool flagHasUserRequestedPreview;
        bool storeUserRequestedPreview;
        bool flagHasUserRequestedFullPlayback;
        bool storeUserRequestedFullPlayback;
        bool flagHasUserRequestedSkip;
        bool storeUserRequestedSkip;
        bool flagHasUserRequestedAirplay;
        bool storeUserRequestedAirplay;
        bool flagHasUserRequestedResume;
        bool storeUserRequestedResume;
        bool flagHasUserRequestedAll;
        bool storeUserRequestedAll;
        bool flagHasUserSpecifiedPlaylist;
        bool storeUserSpecifiedPlaylist;
        bool flagHasUserSpecifiedCurrentPage;
        bool storeUserSpecifiedCurrentPage;
        bool flagHasTargetTrackName;
        std::string storeTargetTrackName;
        bool flagHasTargetTrackArtistName;
        std::string storeTargetTrackArtistName;
        bool flagHasTargetTrackSoundHoundId;
        SoundHoundTrackIDJSON * storeTargetTrackSoundHoundId;
        bool flagHasMusicAudioInputSource;
        TypeMusicAudioInputSource storeMusicAudioInputSource;
        bool flagHasMusicSourceDevice;
        TypeMusicSourceDevice storeMusicSourceDevice;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPlayNumberedTrackTrackNumber(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRewindFastForwardAmountInSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSeekOffsetInSeconds(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSeekOffsetPercentage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONSkipAmount(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedVideos(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedPreview(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedFullPlayback(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedSkip(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedAirplay(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedResume(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserRequestedAll(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserSpecifiedPlaylist(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUserSpecifiedCurrentPage(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTargetTrackName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTargetTrackArtistName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTargetTrackSoundHoundId(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMusicAudioInputSource(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMusicSourceDevice(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasCommandType(void) const;
        TypeCommandType  getCommandType(void);
        const TypeCommandType  getCommandType(void) const;
        const char * getCommandTypeAsChars(void) const;
        std::string  getCommandTypeAsString(void) const;
        bool  hasPlayNumberedTrackTrackNumber(void) const;
        OInteger  getPlayNumberedTrackTrackNumber(void);
        const OInteger  getPlayNumberedTrackTrackNumber(void) const;
        bool  hasRewindFastForwardAmountInSeconds(void) const;
        double  getRewindFastForwardAmountInSeconds(void);
        const double  getRewindFastForwardAmountInSeconds(void) const;
        std::string  getRewindFastForwardAmountInSecondsAsText(void) const;
        bool  hasSeekOffsetInSeconds(void) const;
        double  getSeekOffsetInSeconds(void);
        const double  getSeekOffsetInSeconds(void) const;
        std::string  getSeekOffsetInSecondsAsText(void) const;
        bool  hasSeekOffsetPercentage(void) const;
        double  getSeekOffsetPercentage(void);
        const double  getSeekOffsetPercentage(void) const;
        std::string  getSeekOffsetPercentageAsText(void) const;
        bool  hasSkipAmount(void) const;
        OInteger  getSkipAmount(void);
        const OInteger  getSkipAmount(void) const;
        bool  hasMusicThirdParty(void) const;
        MusicThirdPartyJSON *  getMusicThirdParty(void);
        const MusicThirdPartyJSON *  getMusicThirdParty(void) const;
        bool  hasUserRequestedVideos(void) const;
        bool  getUserRequestedVideos(void);
        const bool  getUserRequestedVideos(void) const;
        bool  hasUserRequestedPreview(void) const;
        bool  getUserRequestedPreview(void);
        const bool  getUserRequestedPreview(void) const;
        bool  hasUserRequestedFullPlayback(void) const;
        bool  getUserRequestedFullPlayback(void);
        const bool  getUserRequestedFullPlayback(void) const;
        bool  hasUserRequestedSkip(void) const;
        bool  getUserRequestedSkip(void);
        const bool  getUserRequestedSkip(void) const;
        bool  hasUserRequestedAirplay(void) const;
        bool  getUserRequestedAirplay(void);
        const bool  getUserRequestedAirplay(void) const;
        bool  hasUserRequestedResume(void) const;
        bool  getUserRequestedResume(void);
        const bool  getUserRequestedResume(void) const;
        bool  hasUserRequestedAll(void) const;
        bool  getUserRequestedAll(void);
        const bool  getUserRequestedAll(void) const;
        bool  hasUserSpecifiedPlaylist(void) const;
        bool  getUserSpecifiedPlaylist(void);
        const bool  getUserSpecifiedPlaylist(void) const;
        bool  hasUserSpecifiedCurrentPage(void) const;
        bool  getUserSpecifiedCurrentPage(void);
        const bool  getUserSpecifiedCurrentPage(void) const;
        bool  hasTargetTrackName(void) const;
        std::string  getTargetTrackName(void);
        const std::string  getTargetTrackName(void) const;
        bool  hasTargetTrackArtistName(void) const;
        std::string  getTargetTrackArtistName(void);
        const std::string  getTargetTrackArtistName(void) const;
        bool  hasTargetTrackSoundHoundId(void) const;
        SoundHoundTrackIDJSON *  getTargetTrackSoundHoundId(void);
        const SoundHoundTrackIDJSON *  getTargetTrackSoundHoundId(void) const;
        uint64_t  getTargetTrackSoundHoundIdValue(void);
        const uint64_t  getTargetTrackSoundHoundIdValue(void) const;
        bool  hasMusicAudioInputSource(void) const;
        TypeMusicAudioInputSource  getMusicAudioInputSource(void);
        const TypeMusicAudioInputSource  getMusicAudioInputSource(void) const;
        const char * getMusicAudioInputSourceAsChars(void) const;
        std::string  getMusicAudioInputSourceAsString(void) const;
        bool  hasMusicSourceDevice(void) const;
        TypeMusicSourceDevice  getMusicSourceDevice(void);
        const TypeMusicSourceDevice  getMusicSourceDevice(void) const;
        const char * getMusicSourceDeviceAsChars(void) const;
        std::string  getMusicSourceDeviceAsString(void) const;

        virtual size_t extraTypeNativeDataComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeNativeDataComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeNativeDataComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeNativeDataComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeNativeDataLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeNativeDataLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setCommandType(TypeCommandType new_value)
          {
            flagHasCommandType = true;
            storeCommandType = new_value;
          }
        void setCommandType(const char *chars)
          {
            TypeCommandTypeKnownValues known = stringToCommandType(chars);
            TypeCommandType new_value;
            if (known == CommandType__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setCommandType(new_value);
          }
        void setCommandType(std::string the_string)
          {
            setCommandType(the_string.c_str());
          }
        void setCommandType(TypeCommandTypeKnownValues new_value)
          {
            TypeCommandType new_full_value;
            assert(new_value != CommandType__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setCommandType(new_full_value);
          }
        void unsetCommandType(void)
          {
            flagHasCommandType = false;
          }
        void setPlayNumberedTrackTrackNumber(OInteger new_value)
          {
            flagHasPlayNumberedTrackTrackNumber = true;
            storePlayNumberedTrackTrackNumber = new_value;
          }
        void unsetPlayNumberedTrackTrackNumber(void)
          {
            flagHasPlayNumberedTrackTrackNumber = false;
          }
        void setRewindFastForwardAmountInSeconds(double new_value)
          {
            flagHasRewindFastForwardAmountInSeconds = true;
            storeRewindFastForwardAmountInSeconds = new_value;
            textStoreRewindFastForwardAmountInSeconds = "";
          }
        void setRewindFastForwardAmountInSecondsText(std::string new_value)
          {
            flagHasRewindFastForwardAmountInSeconds = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field RewindFastForwardAmountInSeconds of TypeNativeDataJSON is not a valid number.");
            textStoreRewindFastForwardAmountInSeconds = new_value;
          }
        void unsetRewindFastForwardAmountInSeconds(void)
          {
            flagHasRewindFastForwardAmountInSeconds = false;
          }
        void setSeekOffsetInSeconds(double new_value)
          {
            flagHasSeekOffsetInSeconds = true;
            storeSeekOffsetInSeconds = new_value;
            textStoreSeekOffsetInSeconds = "";
          }
        void setSeekOffsetInSecondsText(std::string new_value)
          {
            flagHasSeekOffsetInSeconds = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field SeekOffsetInSeconds of TypeNativeDataJSON is not a valid number.");
            textStoreSeekOffsetInSeconds = new_value;
          }
        void unsetSeekOffsetInSeconds(void)
          {
            flagHasSeekOffsetInSeconds = false;
          }
        void setSeekOffsetPercentage(double new_value)
          {
            flagHasSeekOffsetPercentage = true;
            storeSeekOffsetPercentage = new_value;
            textStoreSeekOffsetPercentage = "";
          }
        void setSeekOffsetPercentageText(std::string new_value)
          {
            flagHasSeekOffsetPercentage = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field SeekOffsetPercentage of TypeNativeDataJSON is not a valid number.");
            textStoreSeekOffsetPercentage = new_value;
          }
        void unsetSeekOffsetPercentage(void)
          {
            flagHasSeekOffsetPercentage = false;
          }
        void setSkipAmount(OInteger new_value)
          {
            flagHasSkipAmount = true;
            storeSkipAmount = new_value;
          }
        void unsetSkipAmount(void)
          {
            flagHasSkipAmount = false;
          }
        void setMusicThirdParty(MusicThirdPartyJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasMusicThirdParty)
              {
                storeMusicThirdParty->remove_reference();
              }
            flagHasMusicThirdParty = true;
            storeMusicThirdParty = new_value;
          }
        void unsetMusicThirdParty(void)
          {
            if (flagHasMusicThirdParty)
              {
                storeMusicThirdParty->remove_reference();
              }
            flagHasMusicThirdParty = false;
          }
        void setUserRequestedVideos(bool new_value)
          {
            flagHasUserRequestedVideos = true;
            storeUserRequestedVideos = new_value;
          }
        void unsetUserRequestedVideos(void)
          {
            flagHasUserRequestedVideos = false;
          }
        void setUserRequestedPreview(bool new_value)
          {
            flagHasUserRequestedPreview = true;
            storeUserRequestedPreview = new_value;
          }
        void unsetUserRequestedPreview(void)
          {
            flagHasUserRequestedPreview = false;
          }
        void setUserRequestedFullPlayback(bool new_value)
          {
            flagHasUserRequestedFullPlayback = true;
            storeUserRequestedFullPlayback = new_value;
          }
        void unsetUserRequestedFullPlayback(void)
          {
            flagHasUserRequestedFullPlayback = false;
          }
        void setUserRequestedSkip(bool new_value)
          {
            flagHasUserRequestedSkip = true;
            storeUserRequestedSkip = new_value;
          }
        void unsetUserRequestedSkip(void)
          {
            flagHasUserRequestedSkip = false;
          }
        void setUserRequestedAirplay(bool new_value)
          {
            flagHasUserRequestedAirplay = true;
            storeUserRequestedAirplay = new_value;
          }
        void unsetUserRequestedAirplay(void)
          {
            flagHasUserRequestedAirplay = false;
          }
        void setUserRequestedResume(bool new_value)
          {
            flagHasUserRequestedResume = true;
            storeUserRequestedResume = new_value;
          }
        void unsetUserRequestedResume(void)
          {
            flagHasUserRequestedResume = false;
          }
        void setUserRequestedAll(bool new_value)
          {
            flagHasUserRequestedAll = true;
            storeUserRequestedAll = new_value;
          }
        void unsetUserRequestedAll(void)
          {
            flagHasUserRequestedAll = false;
          }
        void setUserSpecifiedPlaylist(bool new_value)
          {
            flagHasUserSpecifiedPlaylist = true;
            storeUserSpecifiedPlaylist = new_value;
          }
        void unsetUserSpecifiedPlaylist(void)
          {
            flagHasUserSpecifiedPlaylist = false;
          }
        void setUserSpecifiedCurrentPage(bool new_value)
          {
            flagHasUserSpecifiedCurrentPage = true;
            storeUserSpecifiedCurrentPage = new_value;
          }
        void unsetUserSpecifiedCurrentPage(void)
          {
            flagHasUserSpecifiedCurrentPage = false;
          }
        void setTargetTrackName(std::string new_value)
          {
            flagHasTargetTrackName = true;
            storeTargetTrackName = new_value;
          }
        void unsetTargetTrackName(void)
          {
            flagHasTargetTrackName = false;
          }
        void setTargetTrackArtistName(std::string new_value)
          {
            flagHasTargetTrackArtistName = true;
            storeTargetTrackArtistName = new_value;
          }
        void unsetTargetTrackArtistName(void)
          {
            flagHasTargetTrackArtistName = false;
          }
        void setTargetTrackSoundHoundId(SoundHoundTrackIDJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasTargetTrackSoundHoundId)
              {
                storeTargetTrackSoundHoundId->remove_reference();
              }
            flagHasTargetTrackSoundHoundId = true;
            storeTargetTrackSoundHoundId = new_value;
          }
        void setTargetTrackSoundHoundId(uint64_t new_value)
          {
            setTargetTrackSoundHoundId(new SoundHoundTrackIDJSON(new_value));
          }
        void unsetTargetTrackSoundHoundId(void)
          {
            if (flagHasTargetTrackSoundHoundId)
              {
                storeTargetTrackSoundHoundId->remove_reference();
              }
            flagHasTargetTrackSoundHoundId = false;
          }
        void setMusicAudioInputSource(TypeMusicAudioInputSource new_value)
          {
            flagHasMusicAudioInputSource = true;
            storeMusicAudioInputSource = new_value;
          }
        void setMusicAudioInputSource(const char *chars)
          {
            TypeMusicAudioInputSourceKnownValues known = stringToMusicAudioInputSource(chars);
            TypeMusicAudioInputSource new_value;
            if (known == MusicAudioInputSource__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setMusicAudioInputSource(new_value);
          }
        void setMusicAudioInputSource(std::string the_string)
          {
            setMusicAudioInputSource(the_string.c_str());
          }
        void setMusicAudioInputSource(TypeMusicAudioInputSourceKnownValues new_value)
          {
            TypeMusicAudioInputSource new_full_value;
            assert(new_value != MusicAudioInputSource__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setMusicAudioInputSource(new_full_value);
          }
        void unsetMusicAudioInputSource(void)
          {
            flagHasMusicAudioInputSource = false;
          }
        void setMusicSourceDevice(TypeMusicSourceDevice new_value)
          {
            flagHasMusicSourceDevice = true;
            storeMusicSourceDevice = new_value;
          }
        void setMusicSourceDevice(const char *chars)
          {
            TypeMusicSourceDeviceKnownValues known = stringToMusicSourceDevice(chars);
            TypeMusicSourceDevice new_value;
            if (known == MusicSourceDevice__none)
              {
                new_value.in_known_list = false;
                new_value.string_value = chars;
              }
            else
              {
                new_value.in_known_list = true;
                new_value.list_value = known;
              }
            setMusicSourceDevice(new_value);
          }
        void setMusicSourceDevice(std::string the_string)
          {
            setMusicSourceDevice(the_string.c_str());
          }
        void setMusicSourceDevice(TypeMusicSourceDeviceKnownValues new_value)
          {
            TypeMusicSourceDevice new_full_value;
            assert(new_value != MusicSourceDevice__none);
            new_full_value.in_known_list = true;
            new_full_value.list_value = new_value;
            setMusicSourceDevice(new_full_value);
          }
        void unsetMusicSourceDevice(void)
          {
            flagHasMusicSourceDevice = false;
          }

        virtual void extraTypeNativeDataAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeNativeDataSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeNativeDataLookup(key);
            if (old_field == NULL)
              {
                extraTypeNativeDataAppendPair(key, new_component);
              }
            else
              {
                size_t count = extraKeys.size();
                assert(count == extraValues.size());
                for (size_t num = 0; num < count; ++num)
                  {
                    if (strcmp(extraKeys[num].c_str(),  key) == 0)
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

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasCommandType);
            handler->start_pair("CommandType");
            if (storeCommandType.in_known_list)
              {
                switch (storeCommandType.list_value)
                  {
                    case CommandType_MUSIC_PLAYER_RESPONSE_SEARCH:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SEARCH");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_PLAY_NUMBERED_TRACK");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_PLAY_LAST_SONG");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_PLAY_CURRENT_SONG");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_PAUSE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_PAUSE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SKIP:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SKIP");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_UP:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_THUMBS_UP");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_THUMBS_DOWN:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_THUMBS_DOWN");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_RAISE_VOLUME:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_RAISE_VOLUME");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_LOWER_VOLUME:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_LOWER_VOLUME");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_MUTE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_MUTE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_UNMUTE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_UNMUTE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_STOP:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_STOP");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_REPLAY:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_REPLAY");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_REWIND:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_REWIND");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_FAST_FORWARD:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_FAST_FORWARD");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_PLAY_LAST_IDENTIFIED_SONG");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SHUFFLE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SEEK:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SEEK");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_ON:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SHUFFLE_ON");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SHUFFLE_OFF");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_ON:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_REPEAT_ON");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_OFF:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_REPEAT_OFF");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_REPEAT_SINGLE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SET_PROVIDER:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SET_PROVIDER");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SET_PLAYBACK_MODE");
                        break;
                    case CommandType_MUSIC_PLAYER_RESPONSE_SKIP_ALBUM:
                        handler->string_value("MUSIC_PLAYER_RESPONSE_SKIP_ALBUM");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeCommandType.string_value);
              }
            if (flagHasPlayNumberedTrackTrackNumber)
              {
                handler->start_pair("PlayNumberedTrackTrackNumber");
                handler->number_value(storePlayNumberedTrackTrackNumber.get_o_integer());
              }
            if (flagHasRewindFastForwardAmountInSeconds)
              {
                handler->start_pair("RewindFastForwardAmountInSeconds");
                if (textStoreRewindFastForwardAmountInSeconds != "")
                    handler->number_value(textStoreRewindFastForwardAmountInSeconds.c_str());
                else if (((double)(long int)storeRewindFastForwardAmountInSeconds) == storeRewindFastForwardAmountInSeconds)
                    handler->number_value((long int)storeRewindFastForwardAmountInSeconds);
                else
                    handler->number_value(storeRewindFastForwardAmountInSeconds);
              }
            if (flagHasSeekOffsetInSeconds)
              {
                handler->start_pair("SeekOffsetInSeconds");
                if (textStoreSeekOffsetInSeconds != "")
                    handler->number_value(textStoreSeekOffsetInSeconds.c_str());
                else if (((double)(long int)storeSeekOffsetInSeconds) == storeSeekOffsetInSeconds)
                    handler->number_value((long int)storeSeekOffsetInSeconds);
                else
                    handler->number_value(storeSeekOffsetInSeconds);
              }
            if (flagHasSeekOffsetPercentage)
              {
                handler->start_pair("SeekOffsetPercentage");
                if (textStoreSeekOffsetPercentage != "")
                    handler->number_value(textStoreSeekOffsetPercentage.c_str());
                else if (((double)(long int)storeSeekOffsetPercentage) == storeSeekOffsetPercentage)
                    handler->number_value((long int)storeSeekOffsetPercentage);
                else
                    handler->number_value(storeSeekOffsetPercentage);
              }
            if (flagHasSkipAmount)
              {
                handler->start_pair("SkipAmount");
                handler->number_value(storeSkipAmount.get_o_integer());
              }
            if (flagHasMusicThirdParty)
              {
                handler->start_pair("MusicThirdParty");
                storeMusicThirdParty->write_as_json(handler);
              }
            if (flagHasUserRequestedVideos)
              {
                handler->start_pair("UserRequestedVideos");
                handler->boolean_value(storeUserRequestedVideos);
              }
            if (flagHasUserRequestedPreview)
              {
                handler->start_pair("UserRequestedPreview");
                handler->boolean_value(storeUserRequestedPreview);
              }
            if (flagHasUserRequestedFullPlayback)
              {
                handler->start_pair("UserRequestedFullPlayback");
                handler->boolean_value(storeUserRequestedFullPlayback);
              }
            if (flagHasUserRequestedSkip)
              {
                handler->start_pair("UserRequestedSkip");
                handler->boolean_value(storeUserRequestedSkip);
              }
            if (flagHasUserRequestedAirplay)
              {
                handler->start_pair("UserRequestedAirplay");
                handler->boolean_value(storeUserRequestedAirplay);
              }
            if (flagHasUserRequestedResume)
              {
                handler->start_pair("UserRequestedResume");
                handler->boolean_value(storeUserRequestedResume);
              }
            if (flagHasUserRequestedAll)
              {
                handler->start_pair("UserRequestedAll");
                handler->boolean_value(storeUserRequestedAll);
              }
            if (flagHasUserSpecifiedPlaylist)
              {
                handler->start_pair("UserSpecifiedPlaylist");
                handler->boolean_value(storeUserSpecifiedPlaylist);
              }
            if (flagHasUserSpecifiedCurrentPage)
              {
                handler->start_pair("UserSpecifiedCurrentPage");
                handler->boolean_value(storeUserSpecifiedCurrentPage);
              }
            if (flagHasTargetTrackName)
              {
                handler->start_pair("TargetTrackName");
                handler->string_value(storeTargetTrackName);
              }
            if (flagHasTargetTrackArtistName)
              {
                handler->start_pair("TargetTrackArtistName");
                handler->string_value(storeTargetTrackArtistName);
              }
            if (flagHasTargetTrackSoundHoundId)
              {
                handler->start_pair("TargetTrackSoundHoundId");
                storeTargetTrackSoundHoundId->write_as_json(handler);
              }
            if (flagHasMusicAudioInputSource)
              {
                handler->start_pair("MusicAudioInputSource");
                if (storeMusicAudioInputSource.in_known_list)
                  {
                    switch (storeMusicAudioInputSource.list_value)
                      {
                        case MusicAudioInputSource_Bluetooth:
                            handler->string_value("Bluetooth");
                            break;
                        case MusicAudioInputSource_Auxiliary:
                            handler->string_value("Auxiliary");
                            break;
                        case MusicAudioInputSource_HDMI1:
                            handler->string_value("HDMI1");
                            break;
                        case MusicAudioInputSource_Optical:
                            handler->string_value("Optical");
                            break;
                        case MusicAudioInputSource_CD:
                            handler->string_value("CD");
                            break;
                        case MusicAudioInputSource_USB:
                            handler->string_value("USB");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeMusicAudioInputSource.string_value);
                  }
              }
            if (flagHasMusicSourceDevice)
              {
                handler->start_pair("MusicSourceDevice");
                if (storeMusicSourceDevice.in_known_list)
                  {
                    switch (storeMusicSourceDevice.list_value)
                      {
                        case MusicSourceDevice_iPhone:
                            handler->string_value("iPhone");
                            break;
                        case MusicSourceDevice_iPod:
                            handler->string_value("iPod");
                            break;
                        case MusicSourceDevice_CDPlayer:
                            handler->string_value("CDPlayer");
                            break;
                        case MusicSourceDevice_Laptop:
                            handler->string_value("Laptop");
                            break;
                        case MusicSourceDevice_Computer:
                            handler->string_value("Computer");
                            break;
                        default:
                            assert(false);
                      }
                  }
                else
                  {
                            handler->string_value(storeMusicSourceDevice.string_value);
                  }
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasCommandType()))
              {
                return "When parsing the object for %what%, the \"CommandType\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(fp, file_name, &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        class Generator : public JSONObjectGenerator
          {
          private:
        class FieldGeneratorCommandType : public JSONStringGenerator
              {
              protected:
                FieldGeneratorCommandType(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorCommandType(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeCommandTypeKnownValues known = stringToCommandType(result);
                    TypeCommandType new_value;
                    if (known == CommandType__none)
                      {
                        new_value.in_known_list = false;
                        new_value.string_value = result;
                      }
                    else
                      {
                        new_value.in_known_list = true;
                        new_value.list_value = known;
                      }
                    handle_result(new_value);
                  }
                virtual void handle_result(TypeCommandType result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorCommandType, TypeCommandType, TypeCommandType > fieldGeneratorCommandType;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorPlayNumberedTrackTrackNumber;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRewindFastForwardAmountInSeconds;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSeekOffsetInSeconds;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSeekOffsetPercentage;
            JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorSkipAmount;
            JSONHoldingGenerator<MusicThirdPartyJSON::Generator, RCHandle<MusicThirdPartyJSON>, MusicThirdPartyJSON *, bool > fieldGeneratorMusicThirdParty;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedVideos;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedPreview;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedFullPlayback;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedSkip;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAirplay;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedResume;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserRequestedAll;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserSpecifiedPlaylist;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUserSpecifiedCurrentPage;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTargetTrackName;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTargetTrackArtistName;
            JSONHoldingGenerator<SoundHoundTrackIDJSON::Generator, RCHandle<SoundHoundTrackIDJSON>, SoundHoundTrackIDJSON *, bool > fieldGeneratorTargetTrackSoundHoundId;
        class FieldGeneratorMusicAudioInputSource : public JSONStringGenerator
              {
              protected:
                FieldGeneratorMusicAudioInputSource(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorMusicAudioInputSource(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeMusicAudioInputSourceKnownValues known = stringToMusicAudioInputSource(result);
                    TypeMusicAudioInputSource new_value;
                    if (known == MusicAudioInputSource__none)
                      {
                        new_value.in_known_list = false;
                        new_value.string_value = result;
                      }
                    else
                      {
                        new_value.in_known_list = true;
                        new_value.list_value = known;
                      }
                    handle_result(new_value);
                  }
                virtual void handle_result(TypeMusicAudioInputSource result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorMusicAudioInputSource, TypeMusicAudioInputSource, TypeMusicAudioInputSource > fieldGeneratorMusicAudioInputSource;
        class FieldGeneratorMusicSourceDevice : public JSONStringGenerator
              {
              protected:
                FieldGeneratorMusicSourceDevice(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorMusicSourceDevice(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    TypeMusicSourceDeviceKnownValues known = stringToMusicSourceDevice(result);
                    TypeMusicSourceDevice new_value;
                    if (known == MusicSourceDevice__none)
                      {
                        new_value.in_known_list = false;
                        new_value.string_value = result;
                      }
                    else
                      {
                        new_value.in_known_list = true;
                        new_value.list_value = known;
                      }
                    handle_result(new_value);
                  }
                virtual void handle_result(TypeMusicSourceDevice result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorMusicSourceDevice, TypeMusicSourceDevice, TypeMusicSourceDevice > fieldGeneratorMusicSourceDevice;
            class UnknownFieldGenerator : public JSONValueHandler
              {
              public:
                bool ignore;
                std::vector<std::string> field_names;
                std::vector<RCHandle<JSONValue> > field_values;
                string_index *index;
                UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
                  {
                index = create_string_index();
                  }
                ~UnknownFieldGenerator(void)
                  {
                    destroy_string_index(index);
                  }


              protected:
                void new_value(JSONValue *item)
                  {
                    if (ignore)
                        return;
                    assert(field_names.size() == (field_values.size() + 1));
                    enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                    field_values.push_back(item);
                  }

              public:
                void reset()
                  {
                    field_names.clear();
                    field_values.clear();
                    destroy_string_index(index);
                index = create_string_index();
                  }
              };
            UnknownFieldGenerator unknownFieldGenerator;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                assert(unknownFieldGenerator.field_names.size() ==
                       unknownFieldGenerator.field_values.size());
                if (unknownFieldGenerator.ignore)
                  {
                    assert(unknownFieldGenerator.field_names.size() == 0);
                  }
                else
                  {
                    unknownFieldGenerator.field_names.push_back(field_name);
                  }
                return &unknownFieldGenerator;
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeNativeDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorCommandType.have_value)
                  {
                    result->setCommandType(fieldGeneratorCommandType.value);
                    fieldGeneratorCommandType.have_value = false;
                  }
                else if (!(result->hasCommandType()))
                  {
                    error("When parsing the object for %what%, the \"CommandType\" field was missing.");
                  }
                if (fieldGeneratorPlayNumberedTrackTrackNumber.have_value)
                  {
                    result->setPlayNumberedTrackTrackNumber(fieldGeneratorPlayNumberedTrackTrackNumber.value);
                    fieldGeneratorPlayNumberedTrackTrackNumber.have_value = false;
                  }
                if (fieldGeneratorRewindFastForwardAmountInSeconds.have_value)
                  {
                    result->setRewindFastForwardAmountInSecondsText(fieldGeneratorRewindFastForwardAmountInSeconds.value);
                    fieldGeneratorRewindFastForwardAmountInSeconds.have_value = false;
                  }
                if (fieldGeneratorSeekOffsetInSeconds.have_value)
                  {
                    result->setSeekOffsetInSecondsText(fieldGeneratorSeekOffsetInSeconds.value);
                    fieldGeneratorSeekOffsetInSeconds.have_value = false;
                  }
                if (fieldGeneratorSeekOffsetPercentage.have_value)
                  {
                    result->setSeekOffsetPercentageText(fieldGeneratorSeekOffsetPercentage.value);
                    fieldGeneratorSeekOffsetPercentage.have_value = false;
                  }
                if (fieldGeneratorSkipAmount.have_value)
                  {
                    result->setSkipAmount(fieldGeneratorSkipAmount.value);
                    fieldGeneratorSkipAmount.have_value = false;
                  }
                if (fieldGeneratorMusicThirdParty.have_value)
                  {
                    result->setMusicThirdParty(fieldGeneratorMusicThirdParty.value.referenced());
                    fieldGeneratorMusicThirdParty.have_value = false;
                  }
                if (fieldGeneratorUserRequestedVideos.have_value)
                  {
                    result->setUserRequestedVideos(fieldGeneratorUserRequestedVideos.value);
                    fieldGeneratorUserRequestedVideos.have_value = false;
                  }
                if (fieldGeneratorUserRequestedPreview.have_value)
                  {
                    result->setUserRequestedPreview(fieldGeneratorUserRequestedPreview.value);
                    fieldGeneratorUserRequestedPreview.have_value = false;
                  }
                if (fieldGeneratorUserRequestedFullPlayback.have_value)
                  {
                    result->setUserRequestedFullPlayback(fieldGeneratorUserRequestedFullPlayback.value);
                    fieldGeneratorUserRequestedFullPlayback.have_value = false;
                  }
                if (fieldGeneratorUserRequestedSkip.have_value)
                  {
                    result->setUserRequestedSkip(fieldGeneratorUserRequestedSkip.value);
                    fieldGeneratorUserRequestedSkip.have_value = false;
                  }
                if (fieldGeneratorUserRequestedAirplay.have_value)
                  {
                    result->setUserRequestedAirplay(fieldGeneratorUserRequestedAirplay.value);
                    fieldGeneratorUserRequestedAirplay.have_value = false;
                  }
                if (fieldGeneratorUserRequestedResume.have_value)
                  {
                    result->setUserRequestedResume(fieldGeneratorUserRequestedResume.value);
                    fieldGeneratorUserRequestedResume.have_value = false;
                  }
                if (fieldGeneratorUserRequestedAll.have_value)
                  {
                    result->setUserRequestedAll(fieldGeneratorUserRequestedAll.value);
                    fieldGeneratorUserRequestedAll.have_value = false;
                  }
                if (fieldGeneratorUserSpecifiedPlaylist.have_value)
                  {
                    result->setUserSpecifiedPlaylist(fieldGeneratorUserSpecifiedPlaylist.value);
                    fieldGeneratorUserSpecifiedPlaylist.have_value = false;
                  }
                if (fieldGeneratorUserSpecifiedCurrentPage.have_value)
                  {
                    result->setUserSpecifiedCurrentPage(fieldGeneratorUserSpecifiedCurrentPage.value);
                    fieldGeneratorUserSpecifiedCurrentPage.have_value = false;
                  }
                if (fieldGeneratorTargetTrackName.have_value)
                  {
                    result->setTargetTrackName(fieldGeneratorTargetTrackName.value);
                    fieldGeneratorTargetTrackName.have_value = false;
                  }
                if (fieldGeneratorTargetTrackArtistName.have_value)
                  {
                    result->setTargetTrackArtistName(fieldGeneratorTargetTrackArtistName.value);
                    fieldGeneratorTargetTrackArtistName.have_value = false;
                  }
                if (fieldGeneratorTargetTrackSoundHoundId.have_value)
                  {
                    result->setTargetTrackSoundHoundId(fieldGeneratorTargetTrackSoundHoundId.value.referenced());
                    fieldGeneratorTargetTrackSoundHoundId.have_value = false;
                  }
                if (fieldGeneratorMusicAudioInputSource.have_value)
                  {
                    result->setMusicAudioInputSource(fieldGeneratorMusicAudioInputSource.value);
                    fieldGeneratorMusicAudioInputSource.have_value = false;
                  }
                if (fieldGeneratorMusicSourceDevice.have_value)
                  {
                    result->setMusicSourceDevice(fieldGeneratorMusicSourceDevice.value);
                    fieldGeneratorMusicSourceDevice.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "ommandType") == 0)
                            return &fieldGeneratorCommandType;
                        break;
                    case 'M':
                        if (strncmp(&(field_name[1]), "usic", 4) == 0)
                          {
                            switch ((unsigned char)(field_name[5]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[6]), "udioInputSource") == 0)
                                        return &fieldGeneratorMusicAudioInputSource;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[6]), "ourceDevice") == 0)
                                        return &fieldGeneratorMusicSourceDevice;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[6]), "hirdParty") == 0)
                                        return &fieldGeneratorMusicThirdParty;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "layNumberedTrackTrackNumber") == 0)
                            return &fieldGeneratorPlayNumberedTrackTrackNumber;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "ewindFastForwardAmountInSeconds") == 0)
                            return &fieldGeneratorRewindFastForwardAmountInSeconds;
                        break;
                    case 'S':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strncmp(&(field_name[2]), "ekOffset", 8) == 0)
                                  {
                                    switch ((unsigned char)(field_name[10]))
                                      {
                                        case 'I':
                                            if (strcmp(&(field_name[11]), "nSeconds") == 0)
                                                return &fieldGeneratorSeekOffsetInSeconds;
                                            break;
                                        case 'P':
                                            if (strcmp(&(field_name[11]), "ercentage") == 0)
                                                return &fieldGeneratorSeekOffsetPercentage;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'k':
                                if (strcmp(&(field_name[2]), "ipAmount") == 0)
                                    return &fieldGeneratorSkipAmount;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'T':
                        if (strncmp(&(field_name[1]), "argetTrack", 10) == 0)
                          {
                            switch ((unsigned char)(field_name[11]))
                              {
                                case 'A':
                                    if (strcmp(&(field_name[12]), "rtistName") == 0)
                                        return &fieldGeneratorTargetTrackArtistName;
                                    break;
                                case 'N':
                                    if (strcmp(&(field_name[12]), "ame") == 0)
                                        return &fieldGeneratorTargetTrackName;
                                    break;
                                case 'S':
                                    if (strcmp(&(field_name[12]), "oundHoundId") == 0)
                                        return &fieldGeneratorTargetTrackSoundHoundId;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'U':
                        if (strncmp(&(field_name[1]), "ser", 3) == 0)
                          {
                            switch ((unsigned char)(field_name[4]))
                              {
                                case 'R':
                                    if (strncmp(&(field_name[5]), "equested", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[13]))
                                          {
                                            case 'A':
                                                switch ((unsigned char)(field_name[14]))
                                                  {
                                                    case 'i':
                                                        if (strcmp(&(field_name[15]), "rplay") == 0)
                                                            return &fieldGeneratorUserRequestedAirplay;
                                                        break;
                                                    case 'l':
                                                        if (strcmp(&(field_name[15]), "l") == 0)
                                                            return &fieldGeneratorUserRequestedAll;
                                                        break;
                                                    default:
                                                        break;
                                                  }
                                                break;
                                            case 'F':
                                                if (strcmp(&(field_name[14]), "ullPlayback") == 0)
                                                    return &fieldGeneratorUserRequestedFullPlayback;
                                                break;
                                            case 'P':
                                                if (strcmp(&(field_name[14]), "review") == 0)
                                                    return &fieldGeneratorUserRequestedPreview;
                                                break;
                                            case 'R':
                                                if (strcmp(&(field_name[14]), "esume") == 0)
                                                    return &fieldGeneratorUserRequestedResume;
                                                break;
                                            case 'S':
                                                if (strcmp(&(field_name[14]), "kip") == 0)
                                                    return &fieldGeneratorUserRequestedSkip;
                                                break;
                                            case 'V':
                                                if (strcmp(&(field_name[14]), "ideos") == 0)
                                                    return &fieldGeneratorUserRequestedVideos;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'S':
                                    if (strncmp(&(field_name[5]), "pecified", 8) == 0)
                                      {
                                        switch ((unsigned char)(field_name[13]))
                                          {
                                            case 'C':
                                                if (strcmp(&(field_name[14]), "urrentPage") == 0)
                                                    return &fieldGeneratorUserSpecifiedCurrentPage;
                                                break;
                                            case 'P':
                                                if (strcmp(&(field_name[14]), "laylist") == 0)
                                                    return &fieldGeneratorUserSpecifiedPlaylist;
                                                break;
                                            default:
                                                break;
                                          }
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
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorCommandType("field \"CommandType\" of the TypeNativeData class"), fieldGeneratorPlayNumberedTrackTrackNumber("field \"PlayNumberedTrackTrackNumber\" of the TypeNativeData class"), fieldGeneratorRewindFastForwardAmountInSeconds("field \"RewindFastForwardAmountInSeconds\" of the TypeNativeData class"), fieldGeneratorSeekOffsetInSeconds("field \"SeekOffsetInSeconds\" of the TypeNativeData class"), fieldGeneratorSeekOffsetPercentage("field \"SeekOffsetPercentage\" of the TypeNativeData class"), fieldGeneratorSkipAmount("field \"SkipAmount\" of the TypeNativeData class"), fieldGeneratorMusicThirdParty("field \"MusicThirdParty\" of the TypeNativeData class", ignore_extras), fieldGeneratorUserRequestedVideos("field \"UserRequestedVideos\" of the TypeNativeData class"), fieldGeneratorUserRequestedPreview("field \"UserRequestedPreview\" of the TypeNativeData class"), fieldGeneratorUserRequestedFullPlayback("field \"UserRequestedFullPlayback\" of the TypeNativeData class"), fieldGeneratorUserRequestedSkip("field \"UserRequestedSkip\" of the TypeNativeData class"), fieldGeneratorUserRequestedAirplay("field \"UserRequestedAirplay\" of the TypeNativeData class"), fieldGeneratorUserRequestedResume("field \"UserRequestedResume\" of the TypeNativeData class"), fieldGeneratorUserRequestedAll("field \"UserRequestedAll\" of the TypeNativeData class"), fieldGeneratorUserSpecifiedPlaylist("field \"UserSpecifiedPlaylist\" of the TypeNativeData class"), fieldGeneratorUserSpecifiedCurrentPage("field \"UserSpecifiedCurrentPage\" of the TypeNativeData class"), fieldGeneratorTargetTrackName("field \"TargetTrackName\" of the TypeNativeData class"), fieldGeneratorTargetTrackArtistName("field \"TargetTrackArtistName\" of the TypeNativeData class"), fieldGeneratorTargetTrackSoundHoundId("field \"TargetTrackSoundHoundId\" of the TypeNativeData class", ignore_extras), fieldGeneratorMusicAudioInputSource("field \"MusicAudioInputSource\" of the TypeNativeData class"), fieldGeneratorMusicSourceDevice("field \"MusicSourceDevice\" of the TypeNativeData class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorCommandType.reset();
                fieldGeneratorPlayNumberedTrackTrackNumber.reset();
                fieldGeneratorRewindFastForwardAmountInSeconds.reset();
                fieldGeneratorSeekOffsetInSeconds.reset();
                fieldGeneratorSeekOffsetPercentage.reset();
                fieldGeneratorSkipAmount.reset();
                fieldGeneratorMusicThirdParty.reset();
                fieldGeneratorUserRequestedVideos.reset();
                fieldGeneratorUserRequestedPreview.reset();
                fieldGeneratorUserRequestedFullPlayback.reset();
                fieldGeneratorUserRequestedSkip.reset();
                fieldGeneratorUserRequestedAirplay.reset();
                fieldGeneratorUserRequestedResume.reset();
                fieldGeneratorUserRequestedAll.reset();
                fieldGeneratorUserSpecifiedPlaylist.reset();
                fieldGeneratorUserSpecifiedCurrentPage.reset();
                fieldGeneratorTargetTrackName.reset();
                fieldGeneratorTargetTrackArtistName.reset();
                fieldGeneratorTargetTrackSoundHoundId.reset();
                fieldGeneratorMusicAudioInputSource.reset();
                fieldGeneratorMusicSourceDevice.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasSuccessfulPlayerCommand;
    DynamicResponseJSON * storeSuccessfulPlayerCommand;
    bool flagHasSuccessfulPlayerCommandWithTrackName;
    DynamicResponseJSON * storeSuccessfulPlayerCommandWithTrackName;
    bool flagHasNoControllableTrack;
    DynamicResponseJSON * storeNoControllableTrack;
    bool flagHasMusicProviderUnavailable;
    DynamicResponseJSON * storeMusicProviderUnavailable;
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    MusicPlayerCommandJSON(const MusicPlayerCommandJSON &);
    MusicPlayerCommandJSON & operator=(const MusicPlayerCommandJSON &other);

    JSONValue * extraSuccessfulPlayerCommandToJSON(void) const;
    JSONValue * extraSuccessfulPlayerCommandWithTrackNameToJSON(void) const;
    JSONValue * extraNoControllableTrackToJSON(void) const;
    JSONValue * extraMusicProviderUnavailableToJSON(void) const;
    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONSuccessfulPlayerCommand(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSuccessfulPlayerCommandWithTrackName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNoControllableTrack(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMusicProviderUnavailable(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    MusicPlayerCommandJSON(void);
    virtual ~MusicPlayerCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasSuccessfulPlayerCommand(void) const;
    DynamicResponseJSON *  getSuccessfulPlayerCommand(void);
    const DynamicResponseJSON *  getSuccessfulPlayerCommand(void) const;
    bool  hasSuccessfulPlayerCommandWithTrackName(void) const;
    DynamicResponseJSON *  getSuccessfulPlayerCommandWithTrackName(void);
    const DynamicResponseJSON *  getSuccessfulPlayerCommandWithTrackName(void) const;
    bool  hasNoControllableTrack(void) const;
    DynamicResponseJSON *  getNoControllableTrack(void);
    const DynamicResponseJSON *  getNoControllableTrack(void) const;
    bool  hasMusicProviderUnavailable(void) const;
    DynamicResponseJSON *  getMusicProviderUnavailable(void);
    const DynamicResponseJSON *  getMusicProviderUnavailable(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasSuccessfulPlayerCommand)
            ++result;
        if (flagHasSuccessfulPlayerCommandWithTrackName)
            ++result;
        if (flagHasNoControllableTrack)
            ++result;
        if (flagHasMusicProviderUnavailable)
            ++result;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSuccessfulPlayerCommand)
          {
            if (remainder == 0)
                return "SuccessfulPlayerCommand";
            --remainder;
          }
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            if (remainder == 0)
                return "SuccessfulPlayerCommandWithTrackName";
            --remainder;
          }
        if (flagHasNoControllableTrack)
          {
            if (remainder == 0)
                return "NoControllableTrack";
            --remainder;
          }
        if (flagHasMusicProviderUnavailable)
          {
            if (remainder == 0)
                return "MusicProviderUnavailable";
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasSuccessfulPlayerCommand)
          {
            if (remainder == 0)
                return extraSuccessfulPlayerCommandToJSON();
            --remainder;
          }
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            if (remainder == 0)
                return extraSuccessfulPlayerCommandWithTrackNameToJSON();
            --remainder;
          }
        if (flagHasNoControllableTrack)
          {
            if (remainder == 0)
                return extraNoControllableTrackToJSON();
            --remainder;
          }
        if (flagHasMusicProviderUnavailable)
          {
            if (remainder == 0)
                return extraMusicProviderUnavailableToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasSuccessfulPlayerCommand)
          {
            if (remainder == 0)
                return extraSuccessfulPlayerCommandToJSON();
            --remainder;
          }
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            if (remainder == 0)
                return extraSuccessfulPlayerCommandWithTrackNameToJSON();
            --remainder;
          }
        if (flagHasNoControllableTrack)
          {
            if (remainder == 0)
                return extraNoControllableTrackToJSON();
            --remainder;
          }
        if (flagHasMusicProviderUnavailable)
          {
            if (remainder == 0)
                return extraMusicProviderUnavailableToJSON();
            --remainder;
          }
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "usicProviderUnavailable") == 0)
                    return (flagHasMusicProviderUnavailable ? extraMusicProviderUnavailableToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "ControllableTrack") == 0)
                            return (flagHasNoControllableTrack ? extraNoControllableTrackToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "uccessfulPlayerCommand", 22) == 0)
                  {
                    switch ((unsigned char)(field_name[23]))
                      {
                        case 0:
                            return (flagHasSuccessfulPlayerCommand ? extraSuccessfulPlayerCommandToJSON() : NULL);
                        case 'W':
                            if (strcmp(&(field_name[24]), "ithTrackName") == 0)
                                return (flagHasSuccessfulPlayerCommandWithTrackName ? extraSuccessfulPlayerCommandWithTrackNameToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'M':
                if (strcmp(&(field_name[1]), "usicProviderUnavailable") == 0)
                    return (flagHasMusicProviderUnavailable ? extraMusicProviderUnavailableToJSON() : NULL);
                break;
            case 'N':
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "tiveData") == 0)
                            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "ControllableTrack") == 0)
                            return (flagHasNoControllableTrack ? extraNoControllableTrackToJSON() : NULL);
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(field_name[1]), "uccessfulPlayerCommand", 22) == 0)
                  {
                    switch ((unsigned char)(field_name[23]))
                      {
                        case 0:
                            return (flagHasSuccessfulPlayerCommand ? extraSuccessfulPlayerCommandToJSON() : NULL);
                        case 'W':
                            if (strcmp(&(field_name[24]), "ithTrackName") == 0)
                                return (flagHasSuccessfulPlayerCommandWithTrackName ? extraSuccessfulPlayerCommandWithTrackNameToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        return NULL;
      }

    void setSuccessfulPlayerCommand(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSuccessfulPlayerCommand)
          {
            storeSuccessfulPlayerCommand->remove_reference();
          }
        flagHasSuccessfulPlayerCommand = true;
        storeSuccessfulPlayerCommand = new_value;
      }
    void unsetSuccessfulPlayerCommand(void)
      {
        if (flagHasSuccessfulPlayerCommand)
          {
            storeSuccessfulPlayerCommand->remove_reference();
          }
        flagHasSuccessfulPlayerCommand = false;
      }
    void setSuccessfulPlayerCommandWithTrackName(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            storeSuccessfulPlayerCommandWithTrackName->remove_reference();
          }
        flagHasSuccessfulPlayerCommandWithTrackName = true;
        storeSuccessfulPlayerCommandWithTrackName = new_value;
      }
    void unsetSuccessfulPlayerCommandWithTrackName(void)
      {
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            storeSuccessfulPlayerCommandWithTrackName->remove_reference();
          }
        flagHasSuccessfulPlayerCommandWithTrackName = false;
      }
    void setNoControllableTrack(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNoControllableTrack)
          {
            storeNoControllableTrack->remove_reference();
          }
        flagHasNoControllableTrack = true;
        storeNoControllableTrack = new_value;
      }
    void unsetNoControllableTrack(void)
      {
        if (flagHasNoControllableTrack)
          {
            storeNoControllableTrack->remove_reference();
          }
        flagHasNoControllableTrack = false;
      }
    void setMusicProviderUnavailable(DynamicResponseJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMusicProviderUnavailable)
          {
            storeMusicProviderUnavailable->remove_reference();
          }
        flagHasMusicProviderUnavailable = true;
        storeMusicProviderUnavailable = new_value;
      }
    void unsetMusicProviderUnavailable(void)
      {
        if (flagHasMusicProviderUnavailable)
          {
            storeMusicProviderUnavailable->remove_reference();
          }
        flagHasMusicProviderUnavailable = false;
      }
    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "usicProviderUnavailable") == 0)
                    {
                    fromJSONMusicProviderUnavailable(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "ControllableTrack") == 0)
                            {
                            fromJSONNoControllableTrack(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "uccessfulPlayerCommand", 22) == 0)
                  {
                    switch ((unsigned char)(key[23]))
                      {
                        case 0:
                            {
                            fromJSONSuccessfulPlayerCommand(new_component, false);
                            return;
                            }
                        case 'W':
                            if (strcmp(&(key[24]), "ithTrackName") == 0)
                                {
                                fromJSONSuccessfulPlayerCommandWithTrackName(new_component, false);
                                return;
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
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'M':
                if (strcmp(&(key[1]), "usicProviderUnavailable") == 0)
                    {
                    fromJSONMusicProviderUnavailable(new_component, false);
                    return;
                    }
                break;
            case 'N':
                switch ((unsigned char)(key[1]))
                  {
                    case 'a':
                        if (strcmp(&(key[2]), "tiveData") == 0)
                            {
                            fromJSONNativeData(new_component, false);
                            return;
                            }
                        break;
                    case 'o':
                        if (strcmp(&(key[2]), "ControllableTrack") == 0)
                            {
                            fromJSONNoControllableTrack(new_component, false);
                            return;
                            }
                        break;
                    default:
                        break;
                  }
                break;
            case 'S':
                if (strncmp(&(key[1]), "uccessfulPlayerCommand", 22) == 0)
                  {
                    switch ((unsigned char)(key[23]))
                      {
                        case 0:
                            {
                            fromJSONSuccessfulPlayerCommand(new_component, false);
                            return;
                            }
                        case 'W':
                            if (strcmp(&(key[24]), "ithTrackName") == 0)
                                {
                                fromJSONSuccessfulPlayerCommandWithTrackName(new_component, false);
                                return;
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
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        CommandResultJSON::write_fields_as_json(handler);
        if (flagHasSuccessfulPlayerCommand)
          {
            handler->start_pair("SuccessfulPlayerCommand");
            storeSuccessfulPlayerCommand->write_as_json(handler);
          }
        if (flagHasSuccessfulPlayerCommandWithTrackName)
          {
            handler->start_pair("SuccessfulPlayerCommandWithTrackName");
            storeSuccessfulPlayerCommandWithTrackName->write_as_json(handler);
          }
        if (flagHasNoControllableTrack)
          {
            handler->start_pair("NoControllableTrack");
            storeNoControllableTrack->write_as_json(handler);
          }
        if (flagHasMusicProviderUnavailable)
          {
            handler->start_pair("MusicProviderUnavailable");
            storeMusicProviderUnavailable->write_as_json(handler);
          }
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static MusicPlayerCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MusicPlayerCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MusicPlayerCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicPlayerCommandJSON>, MusicPlayerCommandJSON *, bool> generator("Type MusicPlayerCommand", ignore_extras);
            parse_json_value(text, "Text for MusicPlayerCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MusicPlayerCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MusicPlayerCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MusicPlayerCommandJSON>, MusicPlayerCommandJSON *, bool> generator("Type MusicPlayerCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSuccessfulPlayerCommand;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorSuccessfulPlayerCommandWithTrackName;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorNoControllableTrack;
        JSONHoldingGenerator<DynamicResponseJSON::Generator, RCHandle<DynamicResponseJSON>, DynamicResponseJSON *, bool > fieldGeneratorMusicProviderUnavailable;
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getCommandResultJSONKey().c_str(), "MusicPlayerCommand") == 0))
                throw("The key field has a value other than `MusicPlayerCommand'.");
            MusicPlayerCommandJSON *result = new MusicPlayerCommandJSON();
            assert(result != NULL);
            RCHandle<MusicPlayerCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((MusicPlayerCommandJSON *)new_result);
          }
        void finish(MusicPlayerCommandJSON *result)
          {
            if (fieldGeneratorSuccessfulPlayerCommand.have_value)
              {
                result->setSuccessfulPlayerCommand(fieldGeneratorSuccessfulPlayerCommand.value.referenced());
                fieldGeneratorSuccessfulPlayerCommand.have_value = false;
              }
            if (fieldGeneratorSuccessfulPlayerCommandWithTrackName.have_value)
              {
                result->setSuccessfulPlayerCommandWithTrackName(fieldGeneratorSuccessfulPlayerCommandWithTrackName.value.referenced());
                fieldGeneratorSuccessfulPlayerCommandWithTrackName.have_value = false;
              }
            if (fieldGeneratorNoControllableTrack.have_value)
              {
                result->setNoControllableTrack(fieldGeneratorNoControllableTrack.value.referenced());
                fieldGeneratorNoControllableTrack.have_value = false;
              }
            if (fieldGeneratorMusicProviderUnavailable.have_value)
              {
                result->setMusicProviderUnavailable(fieldGeneratorMusicProviderUnavailable.value.referenced());
                fieldGeneratorMusicProviderUnavailable.have_value = false;
              }
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(MusicPlayerCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'M':
                    if (strcmp(&(field_name[1]), "usicProviderUnavailable") == 0)
                        return &fieldGeneratorMusicProviderUnavailable;
                    break;
                case 'N':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "tiveData") == 0)
                                return &fieldGeneratorNativeData;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ControllableTrack") == 0)
                                return &fieldGeneratorNoControllableTrack;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "uccessfulPlayerCommand", 22) == 0)
                      {
                        switch ((unsigned char)(field_name[23]))
                          {
                            case 0:
                                return &fieldGeneratorSuccessfulPlayerCommand;
                            case 'W':
                                if (strcmp(&(field_name[24]), "ithTrackName") == 0)
                                    return &fieldGeneratorSuccessfulPlayerCommandWithTrackName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorSuccessfulPlayerCommand("field \"SuccessfulPlayerCommand\" of the MusicPlayerCommand class", ignore_extras), fieldGeneratorSuccessfulPlayerCommandWithTrackName("field \"SuccessfulPlayerCommandWithTrackName\" of the MusicPlayerCommand class", ignore_extras), fieldGeneratorNoControllableTrack("field \"NoControllableTrack\" of the MusicPlayerCommand class", ignore_extras), fieldGeneratorMusicProviderUnavailable("field \"MusicProviderUnavailable\" of the MusicPlayerCommand class", ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the MusicPlayerCommand class", ignore_extras)
          {
            set_what("the MusicPlayerCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSuccessfulPlayerCommand.reset();
            fieldGeneratorSuccessfulPlayerCommandWithTrackName.reset();
            fieldGeneratorNoControllableTrack.reset();
            fieldGeneratorMusicProviderUnavailable.reset();
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* MUSICPLAYERCOMMANDJSON_H */
