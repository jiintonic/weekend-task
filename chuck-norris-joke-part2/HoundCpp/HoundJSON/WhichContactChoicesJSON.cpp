/* file "WhichContactChoicesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhichContactChoicesJSON.h"

#include "WhichContactChoicesJSON.h"


WhichContactChoicesJSON::TypeChoicesJSON::TypeChoicesJSON(const TypeChoicesJSON &)
  {
    assert(false);
  }

WhichContactChoicesJSON::TypeChoicesJSON &WhichContactChoicesJSON::TypeChoicesJSON::operator=(const TypeChoicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhichContactChoicesJSON::TypeChoicesJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of TypeChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Contacts of TypeChoicesJSON has too few elements.");
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    assert(vector_Contacts1.size() >= 1);
    initContacts();
    for (size_t num4 = 0; num4 < vector_Contacts1.size(); ++num4)
        appendContacts(vector_Contacts1[num4]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void WhichContactChoicesJSON::TypeChoicesJSON::fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserWrittenName of TypeChoicesJSON is not a string.");
    setToUserWrittenName(std::string(json_string->getData()));
  }

void WhichContactChoicesJSON::TypeChoicesJSON::fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserSpokenName of TypeChoicesJSON is not a string.");
    setToUserSpokenName(std::string(json_string->getData()));
  }

void WhichContactChoicesJSON::TypeChoicesJSON::fromJSONFromUserNames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FromUserNames of TypeChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_FromUserNames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field FromUserNames of TypeChoicesJSON is not a string.");
        vector_FromUserNames1[num1] = std::string(json_string->getData());
      }
    initFromUserNames();
    for (size_t num5 = 0; num5 < vector_FromUserNames1.size(); ++num5)
        appendFromUserNames(vector_FromUserNames1[num5]);
    for (size_t num1 = 0; num1 < vector_FromUserNames1.size(); ++num1)
      {
      }
  }

WhichContactChoicesJSON::TypeChoicesJSON::TypeChoicesJSON(void) :
        flagHasContacts(false),
        flagHasToUserWrittenName(false),
        flagHasToUserSpokenName(false),
        flagHasFromUserNames(false)
  {
    extraIndex = create_string_index();
  }

WhichContactChoicesJSON::TypeChoicesJSON::~TypeChoicesJSON(void)
  {
    if (flagHasContacts)
      {
        for (size_t num7 = 0; num7 < storeContacts.size(); ++num7)
          {
            storeContacts[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhichContactChoicesJSON::TypeChoicesJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t WhichContactChoicesJSON::TypeChoicesJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * WhichContactChoicesJSON::TypeChoicesJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * WhichContactChoicesJSON::TypeChoicesJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > WhichContactChoicesJSON::TypeChoicesJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > WhichContactChoicesJSON::TypeChoicesJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool WhichContactChoicesJSON::TypeChoicesJSON::hasToUserWrittenName(void) const
  {
    return flagHasToUserWrittenName;
  }

std::string WhichContactChoicesJSON::TypeChoicesJSON::getToUserWrittenName(void)
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

const std::string WhichContactChoicesJSON::TypeChoicesJSON::getToUserWrittenName(void) const
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

bool WhichContactChoicesJSON::TypeChoicesJSON::hasToUserSpokenName(void) const
  {
    return flagHasToUserSpokenName;
  }

std::string WhichContactChoicesJSON::TypeChoicesJSON::getToUserSpokenName(void)
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

const std::string WhichContactChoicesJSON::TypeChoicesJSON::getToUserSpokenName(void) const
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

bool WhichContactChoicesJSON::TypeChoicesJSON::hasFromUserNames(void) const
  {
    return flagHasFromUserNames;
  }

size_t WhichContactChoicesJSON::TypeChoicesJSON::countOfFromUserNames(void) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames.size();
  }

std::string WhichContactChoicesJSON::TypeChoicesJSON::elementOfFromUserNames(size_t element_num)
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames[element_num];
  }

const std::string WhichContactChoicesJSON::TypeChoicesJSON::elementOfFromUserNames(size_t element_num) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames[element_num];
  }

std::vector< std::string > WhichContactChoicesJSON::TypeChoicesJSON::getFromUserNames(void)
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames;
  }

const std::vector< std::string > WhichContactChoicesJSON::TypeChoicesJSON::getFromUserNames(void) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames;
  }

WhichContactChoicesJSON::WhichContactChoicesJSON(const WhichContactChoicesJSON &)
  {
    assert(false);
  }

WhichContactChoicesJSON &WhichContactChoicesJSON::operator=(const WhichContactChoicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhichContactChoicesJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Choices of WhichContactChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Choices of WhichContactChoicesJSON has too few elements.");
    std::vector< TypeChoicesJSON * > vector_Choices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeChoicesJSON *convert_classy = TypeChoicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Choices1[num1] = convert_classy;
      }
    assert(vector_Choices1.size() >= 2);
    initChoices();
    for (size_t num6 = 0; num6 < vector_Choices1.size(); ++num6)
        appendChoices(vector_Choices1[num6]);
    for (size_t num1 = 0; num1 < vector_Choices1.size(); ++num1)
      {
        vector_Choices1[num1]->remove_reference();
      }
  }

WhichContactChoicesJSON::WhichContactChoicesJSON(void) :
        flagHasChoices(false)
  {
    extraIndex = create_string_index();
  }

WhichContactChoicesJSON::~WhichContactChoicesJSON(void)
  {
    if (flagHasChoices)
      {
        for (size_t num10 = 0; num10 < storeChoices.size(); ++num10)
          {
            storeChoices[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhichContactChoicesJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

size_t WhichContactChoicesJSON::countOfChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices.size();
  }

WhichContactChoicesJSON::TypeChoicesJSON * WhichContactChoicesJSON::elementOfChoices(size_t element_num)
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

const WhichContactChoicesJSON::TypeChoicesJSON * WhichContactChoicesJSON::elementOfChoices(size_t element_num) const
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

std::vector< WhichContactChoicesJSON::TypeChoicesJSON * > WhichContactChoicesJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const std::vector< WhichContactChoicesJSON::TypeChoicesJSON * > WhichContactChoicesJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

WhichContactChoicesJSON::TypeChoicesJSON *WhichContactChoicesJSON::TypeChoicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeChoicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeChoicesJSON>, TypeChoicesJSON *, bool> generator("Type TypeChoices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
WhichContactChoicesJSON *WhichContactChoicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhichContactChoicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhichContactChoicesJSON>, WhichContactChoicesJSON *, bool> generator("Type WhichContactChoices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
