/* file "MusicThirdPartyIdListJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MusicThirdPartyIdListJSON.h"

#include "MusicThirdPartyIdListJSON.h"


MusicThirdPartyIdListJSON::MusicThirdPartyIdListJSON(const MusicThirdPartyIdListJSON &)
  {
    assert(false);
  }

MusicThirdPartyIdListJSON &MusicThirdPartyIdListJSON::operator=(const MusicThirdPartyIdListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MusicThirdPartyIdListJSON::fromJSONMusicThirdParty(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MusicThirdPartyJSON *convert_classy = MusicThirdPartyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMusicThirdParty(convert_classy);
    convert_classy->remove_reference();
  }

void MusicThirdPartyIdListJSON::fromJSONIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Ids of MusicThirdPartyIdListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Ids1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Ids of MusicThirdPartyIdListJSON is not a string.");
        vector_Ids1[num1] = std::string(json_string->getData());
      }
    initIds();
    for (size_t num3 = 0; num3 < vector_Ids1.size(); ++num3)
        appendIds(vector_Ids1[num3]);
    for (size_t num1 = 0; num1 < vector_Ids1.size(); ++num1)
      {
      }
  }

void MusicThirdPartyIdListJSON::fromJSONDeepLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DeepLinks of MusicThirdPartyIdListJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DeepLinks1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DeepLinks of MusicThirdPartyIdListJSON is not a string.");
        vector_DeepLinks1[num1] = std::string(json_string->getData());
      }
    initDeepLinks();
    for (size_t num4 = 0; num4 < vector_DeepLinks1.size(); ++num4)
        appendDeepLinks(vector_DeepLinks1[num4]);
    for (size_t num1 = 0; num1 < vector_DeepLinks1.size(); ++num1)
      {
      }
  }

MusicThirdPartyIdListJSON::MusicThirdPartyIdListJSON(void) :
        flagHasMusicThirdParty(false),
        flagHasIds(false),
        flagHasDeepLinks(false)
  {
  }

MusicThirdPartyIdListJSON::~MusicThirdPartyIdListJSON(void)
  {
    if (flagHasMusicThirdParty)
      {
        storeMusicThirdParty->remove_reference();
      }
  }

bool MusicThirdPartyIdListJSON::hasMusicThirdParty(void) const
  {
    return flagHasMusicThirdParty;
  }

MusicThirdPartyJSON * MusicThirdPartyIdListJSON::getMusicThirdParty(void)
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

const MusicThirdPartyJSON * MusicThirdPartyIdListJSON::getMusicThirdParty(void) const
  {
    assert(flagHasMusicThirdParty);
    return storeMusicThirdParty;
  }

bool MusicThirdPartyIdListJSON::hasIds(void) const
  {
    return flagHasIds;
  }

size_t MusicThirdPartyIdListJSON::countOfIds(void) const
  {
    assert(flagHasIds);
    return storeIds.size();
  }

std::string MusicThirdPartyIdListJSON::elementOfIds(size_t element_num)
  {
    assert(flagHasIds);
    return storeIds[element_num];
  }

const std::string MusicThirdPartyIdListJSON::elementOfIds(size_t element_num) const
  {
    assert(flagHasIds);
    return storeIds[element_num];
  }

std::vector< std::string > MusicThirdPartyIdListJSON::getIds(void)
  {
    assert(flagHasIds);
    return storeIds;
  }

const std::vector< std::string > MusicThirdPartyIdListJSON::getIds(void) const
  {
    assert(flagHasIds);
    return storeIds;
  }

bool MusicThirdPartyIdListJSON::hasDeepLinks(void) const
  {
    return flagHasDeepLinks;
  }

size_t MusicThirdPartyIdListJSON::countOfDeepLinks(void) const
  {
    assert(flagHasDeepLinks);
    return storeDeepLinks.size();
  }

std::string MusicThirdPartyIdListJSON::elementOfDeepLinks(size_t element_num)
  {
    assert(flagHasDeepLinks);
    return storeDeepLinks[element_num];
  }

const std::string MusicThirdPartyIdListJSON::elementOfDeepLinks(size_t element_num) const
  {
    assert(flagHasDeepLinks);
    return storeDeepLinks[element_num];
  }

std::vector< std::string > MusicThirdPartyIdListJSON::getDeepLinks(void)
  {
    assert(flagHasDeepLinks);
    return storeDeepLinks;
  }

const std::vector< std::string > MusicThirdPartyIdListJSON::getDeepLinks(void) const
  {
    assert(flagHasDeepLinks);
    return storeDeepLinks;
  }

MusicThirdPartyIdListJSON *MusicThirdPartyIdListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MusicThirdPartyIdListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MusicThirdPartyIdListJSON>, MusicThirdPartyIdListJSON *, bool> generator("Type MusicThirdPartyIdList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
