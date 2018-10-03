/* file "ClientCapabilityRegistry.cpp" */

/* Copyright 2016 SoundHound, Incorporated.  All rights reserved. */

#include "ClientCapabilityRegistry.h"
#include "throwf.h"
#include <assert.h>


ClientCapabilityRegistry::ClientCapabilityRegistry(void)
  {
    audio_player_lookup = create_string_index();
    audio_source_lookup = create_string_index();
    audio_decoder_lookup = create_string_index();
    text_to_speech_converter_lookup = create_string_index();
    client_domain_unit_lookup = create_string_index();
  }

ClientCapabilityRegistry::~ClientCapabilityRegistry(void)
  {
    destroy_string_index(audio_player_lookup);
    destroy_string_index(audio_source_lookup);
    destroy_string_index(audio_decoder_lookup);
    destroy_string_index(text_to_speech_converter_lookup);
    destroy_string_index(client_domain_unit_lookup);
  }

void ClientCapabilityRegistry::register_audio_player(const char *name,
                                                     AudioPlayer *player)
  {
    if (exists_in_string_index(audio_player_lookup, name))
        throwf("Audio player name `%s' was registered more than once.", name);
    audio_player_names.push_back(name);
    enter_into_string_index(audio_player_lookup, name, player);
  }

void ClientCapabilityRegistry::register_audio_player_factory(
        AudioPlayerFactory *factory)
  {
    audio_player_factories.push_back(factory);
  }

void ClientCapabilityRegistry::register_audio_source(const char *name,
                                                     AudioSource *source)
  {
    if (exists_in_string_index(audio_source_lookup, name))
        throwf("Audio source name `%s' was registered more than once.", name);
    audio_source_names.push_back(name);
    enter_into_string_index(audio_source_lookup, name, source);
  }

void ClientCapabilityRegistry::register_audio_source_factory(
        AudioSourceFactory *factory)
  {
    audio_source_factories.push_back(factory);
  }

void ClientCapabilityRegistry::register_audio_decoder(const char *name,
                                                      AudioDecoder *decoder)
  {
    if (exists_in_string_index(audio_decoder_lookup, name))
        throwf("Audio decoder name `%s' was registered more than once.", name);
    audio_decoder_names.push_back(name);
    enter_into_string_index(audio_decoder_lookup, name, decoder);
  }

void ClientCapabilityRegistry::register_text_to_speech_converter(
        const char *name, TextToSpeechConverter *converter)
  {
    if (exists_in_string_index(text_to_speech_converter_lookup, name))
      {
        throwf("Text to speech converter name `%s' was registered more than "
               "once.", name);
      }
    text_to_speech_converter_names.push_back(name);
    enter_into_string_index(text_to_speech_converter_lookup, name, converter);
  }

void ClientCapabilityRegistry::register_client_domain_unit(const char *name,
        ClientDomainUnitFactory *factory)
  {
    if (exists_in_string_index(client_domain_unit_lookup, name))
      {
        throwf("Client domain unit factory name `%s' was registered more than "
               "once.", name);
      }
    client_domain_unit_names.push_back(name);
    enter_into_string_index(client_domain_unit_lookup, name, factory);
  }

size_t ClientCapabilityRegistry::audio_player_name_count(void)
  {
    return audio_player_names.size();
  }

std::string ClientCapabilityRegistry::audio_player_name(size_t num)
  {
    assert(num < audio_player_names.size());
    return audio_player_names[num];
  }

ClientCapabilityRegistry::AudioPlayer *
        ClientCapabilityRegistry::lookup_audio_player(const char *name)
  {
    assert(name != NULL);
    AudioPlayer *result =
            (AudioPlayer *)(lookup_in_string_index(audio_player_lookup, name));
    if (result != NULL)
        return result;
    size_t factory_count = audio_player_factories.size();
    for (size_t factory_num = 0; factory_num < factory_count; ++factory_num)
      {
        AudioPlayer *result = audio_player_factories[factory_num]->create(name);
        if (result != NULL)
            return result;
      }
    return NULL;
  }

size_t ClientCapabilityRegistry::audio_source_name_count(void)
  {
    return audio_source_names.size();
  }

std::string ClientCapabilityRegistry::audio_source_name(size_t num)
  {
    assert(num < audio_source_names.size());
    return audio_source_names[num];
  }

ClientCapabilityRegistry::AudioSource *
        ClientCapabilityRegistry::lookup_audio_source(const char *name)
  {
    assert(name != NULL);
    AudioSource *result =
            (AudioSource *)(lookup_in_string_index(audio_source_lookup, name));
    if (result != NULL)
        return result;
    size_t factory_count = audio_source_factories.size();
    for (size_t factory_num = 0; factory_num < factory_count; ++factory_num)
      {
        AudioSource *result = audio_source_factories[factory_num]->create(name);
        if (result != NULL)
            return result;
      }
    return NULL;
  }

size_t ClientCapabilityRegistry::audio_decoder_name_count(void)
  {
    return audio_decoder_names.size();
  }

std::string ClientCapabilityRegistry::audio_decoder_name(size_t num)
  {
    assert(num < audio_decoder_names.size());
    return audio_decoder_names[num];
  }

ClientCapabilityRegistry::AudioDecoder *
        ClientCapabilityRegistry::lookup_audio_decoder(const char *name)
  {
    assert(name != NULL);
    return (AudioDecoder *)(lookup_in_string_index(audio_decoder_lookup, name));
  }

size_t ClientCapabilityRegistry::text_to_speech_converter_name_count(void)
  {
    return text_to_speech_converter_names.size();
  }

std::string ClientCapabilityRegistry::text_to_speech_converter_name(size_t num)
  {
    assert(num < text_to_speech_converter_names.size());
    return text_to_speech_converter_names[num];
  }

ClientCapabilityRegistry::TextToSpeechConverter *
        ClientCapabilityRegistry::lookup_text_to_speech_converter(
                const char *name)
  {
    assert(name != NULL);
    return (TextToSpeechConverter *)(lookup_in_string_index(
            text_to_speech_converter_lookup, name));
  }

size_t ClientCapabilityRegistry::client_domain_unit_name_count(void)
  {
    return client_domain_unit_names.size();
  }

std::string ClientCapabilityRegistry::client_domain_unit_name(size_t num)
  {
    assert(num < client_domain_unit_names.size());
    return client_domain_unit_names[num];
  }

ClientCapabilityRegistry::ClientDomainUnitFactory *
        ClientCapabilityRegistry::lookup_client_domain_unit(const char *name)
  {
    assert(name != NULL);
    return (ClientDomainUnitFactory *)(lookup_in_string_index(
            client_domain_unit_lookup, name));
  }
