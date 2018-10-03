/* file "ClientCapabilityRegistry.h" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#ifndef CLIENTCAPABILITYREGISTRY_H
#define CLIENTCAPABILITYREGISTRY_H

extern "C"
  {
#include "string_index.h"
  }
#include <stddef.h>
#include <stdint.h>
#include <string>
#include <vector>


class HoundConverser;

class ClientCapabilityRegistry
  {
  public:
    class DataSource
      {
      protected:
        DataSource(void)  { }
        ~DataSource(void)  { }

      public:
        virtual size_t read_data(uint8_t *data, size_t byte_count) = 0;
      };

    class DataSink
      {
      protected:
        DataSink(void)  { }
        ~DataSink(void)  { }

      public:
        virtual size_t write_data(const uint8_t *data, size_t byte_count) = 0;
      };

    class AudioPlayer
      {
      protected:
        AudioPlayer(void)  { }

      public:
        virtual ~AudioPlayer(void)  { }

        virtual void play(uint64_t samples_per_second, uint64_t channel_count,
                uint64_t bits_per_sample, boolean little_endian,
                DataSource *source) = 0;
      };

    class AudioPlayerFactory
      {
      protected:
        AudioPlayerFactory(void)  { }
        ~AudioPlayerFactory(void)  { }

      public:
        virtual AudioPlayer *create(const char *name) = 0;
      };

    class AudioSource
      {
      protected:
        AudioSource(void)  { }

      public:
        virtual ~AudioSource(void)  { }

        virtual void capture(uint64_t samples_per_second,
                uint64_t channel_count, uint64_t bits_per_sample,
                boolean little_endian, DataSink *sink) = 0;
      };

    class AudioSourceFactory
      {
      protected:
        AudioSourceFactory(void)  { }
        ~AudioSourceFactory(void)  { }

      public:
        virtual AudioSource *create(const char *name) = 0;
      };

    class AudioDecoder
      {
      protected:
        AudioDecoder(void)  { }
        ~AudioDecoder(void)  { }

      public:
        virtual void play(AudioPlayer *player, DataSource *source) = 0;
      };

    class TextToSpeechConverter
      {
      protected:
        TextToSpeechConverter(void)  { }
        ~TextToSpeechConverter(void)  { }

      public:
        virtual void convert(AudioPlayer *player, const char *text) = 0;
      };

    class ClientDomainUnit
      {
      protected:
        ClientDomainUnit(void)  { }

      public:
        virtual ~ClientDomainUnit(void)  { }
      };

    class ClientDomainUnitFactory
      {
      protected:
        ClientDomainUnitFactory(void)  { }
        ~ClientDomainUnitFactory(void)  { }

      public:
        virtual ClientDomainUnit *create(HoundConverser *converser) = 0;
      };

  private:
    std::vector<std::string> audio_player_names;
    std::vector<std::string> audio_source_names;
    std::vector<std::string> audio_decoder_names;
    std::vector<std::string> text_to_speech_converter_names;
    std::vector<std::string> client_domain_unit_names;
    string_index *audio_player_lookup;
    string_index *audio_source_lookup;
    string_index *audio_decoder_lookup;
    string_index *text_to_speech_converter_lookup;
    string_index *client_domain_unit_lookup;
    std::vector<AudioPlayerFactory *> audio_player_factories;
    std::vector<AudioSourceFactory *> audio_source_factories;

  public:
    ClientCapabilityRegistry(void);
    ~ClientCapabilityRegistry(void);

    void register_audio_player(const char *name, AudioPlayer *player);
    void register_audio_player_factory(AudioPlayerFactory *factory);
    void register_audio_source(const char *name, AudioSource *source);
    void register_audio_source_factory(AudioSourceFactory *factory);
    void register_audio_decoder(const char *name, AudioDecoder *decoder);
    void register_text_to_speech_converter(const char *name,
                                           TextToSpeechConverter *converter);
    void register_client_domain_unit(const char *name,
                                     ClientDomainUnitFactory *factory);

    size_t audio_player_name_count(void);
    std::string audio_player_name(size_t num);
    AudioPlayer *lookup_audio_player(const char *name);

    size_t audio_source_name_count(void);
    std::string audio_source_name(size_t num);
    AudioSource *lookup_audio_source(const char *name);

    size_t audio_decoder_name_count(void);
    std::string audio_decoder_name(size_t num);
    AudioDecoder *lookup_audio_decoder(const char *name);

    size_t text_to_speech_converter_name_count(void);
    std::string text_to_speech_converter_name(size_t num);
    TextToSpeechConverter *lookup_text_to_speech_converter(const char *name);

    size_t client_domain_unit_name_count(void);
    std::string client_domain_unit_name(size_t num);
    ClientDomainUnitFactory *lookup_client_domain_unit(const char *name);
  };


#endif /* CLIENTCAPABILITYREGISTRY_H */
