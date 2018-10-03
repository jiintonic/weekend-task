/* file "NoRecipientInfoCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NoRecipientInfoCommandJSON.h"

#include "NoRecipientInfoCommandJSON.h"


NoRecipientInfoCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

NoRecipientInfoCommandJSON::TypeNativeDataJSON &NoRecipientInfoCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NoRecipientInfoCommandJSON::TypeNativeDataJSON::fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommunicationTypeJSON *convert_classy = CommunicationTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCommunicationType(convert_classy);
    convert_classy->remove_reference();
  }

void NoRecipientInfoCommandJSON::TypeNativeDataJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of TypeNativeDataJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void NoRecipientInfoCommandJSON::TypeNativeDataJSON::fromJSONNameWithMissingInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NameWithMissingInfo of TypeNativeDataJSON is not a string.");
    setNameWithMissingInfo(std::string(json_string->getData()));
  }

NoRecipientInfoCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasCommunicationType(false),
        flagHasAutoListen(false),
        flagHasNameWithMissingInfo(false)
  {
    extraIndex = create_string_index();
  }

NoRecipientInfoCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasCommunicationType)
      {
        storeCommunicationType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool NoRecipientInfoCommandJSON::TypeNativeDataJSON::hasCommunicationType(void) const
  {
    return flagHasCommunicationType;
  }

CommunicationTypeJSON * NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationType(void)
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

const CommunicationTypeJSON * NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationType(void) const
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

CommunicationTypeJSON::TypeValue NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void)
  {
    return getCommunicationType()->getValue();
  }

const CommunicationTypeJSON::TypeValue NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void) const
  {
    return getCommunicationType()->getValue();
  }

const char *NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsChars(void) const
  {
    return getCommunicationType()->getValueAsChars();
  }

std::string NoRecipientInfoCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsString(void) const
  {
    return getCommunicationType()->getValueAsString();
  }

bool NoRecipientInfoCommandJSON::TypeNativeDataJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool NoRecipientInfoCommandJSON::TypeNativeDataJSON::getAutoListen(void)
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

const bool NoRecipientInfoCommandJSON::TypeNativeDataJSON::getAutoListen(void) const
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

bool NoRecipientInfoCommandJSON::TypeNativeDataJSON::hasNameWithMissingInfo(void) const
  {
    return flagHasNameWithMissingInfo;
  }

std::string NoRecipientInfoCommandJSON::TypeNativeDataJSON::getNameWithMissingInfo(void)
  {
    assert(flagHasNameWithMissingInfo);
    return storeNameWithMissingInfo;
  }

const std::string NoRecipientInfoCommandJSON::TypeNativeDataJSON::getNameWithMissingInfo(void) const
  {
    assert(flagHasNameWithMissingInfo);
    return storeNameWithMissingInfo;
  }

NoRecipientInfoCommandJSON::NoRecipientInfoCommandJSON(const NoRecipientInfoCommandJSON &)
  {
    assert(false);
  }

NoRecipientInfoCommandJSON &NoRecipientInfoCommandJSON::operator=(const NoRecipientInfoCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *NoRecipientInfoCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void NoRecipientInfoCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

NoRecipientInfoCommandJSON::NoRecipientInfoCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

NoRecipientInfoCommandJSON::~NoRecipientInfoCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *NoRecipientInfoCommandJSON::getCommunicationCommandKind(void) const
  {
    return "NoRecipientInfoCommand";
  }

bool NoRecipientInfoCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

NoRecipientInfoCommandJSON::TypeNativeDataJSON * NoRecipientInfoCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const NoRecipientInfoCommandJSON::TypeNativeDataJSON * NoRecipientInfoCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

NoRecipientInfoCommandJSON::TypeNativeDataJSON *NoRecipientInfoCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
NoRecipientInfoCommandJSON *NoRecipientInfoCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NoRecipientInfoCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NoRecipientInfoCommandJSON>, NoRecipientInfoCommandJSON *, bool> generator("Type NoRecipientInfoCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
