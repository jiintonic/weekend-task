/* file "ContactNumberChoicesJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactNumberChoicesJSON.h"

#include "ContactNumberChoicesJSON.h"


ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::TypePhoneEntriesJSON(const TypePhoneEntriesJSON &)
  {
    assert(false);
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON &ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::operator=(const TypePhoneEntriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::fromJSONContactIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ContactIndex of TypePhoneEntriesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ContactIndex of TypePhoneEntriesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setContactIndex(extracted_integer);
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::fromJSONEntryIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EntryIndex of TypePhoneEntriesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EntryIndex of TypePhoneEntriesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEntryIndex(extracted_integer);
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::TypePhoneEntriesJSON(void) :
        flagHasContactIndex(false),
        flagHasEntryIndex(false)
  {
    extraIndex = create_string_index();
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::~TypePhoneEntriesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::hasContactIndex(void) const
  {
    return flagHasContactIndex;
  }

OInteger ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::getContactIndex(void)
  {
    assert(flagHasContactIndex);
    return storeContactIndex;
  }

const OInteger ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::getContactIndex(void) const
  {
    assert(flagHasContactIndex);
    return storeContactIndex;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::hasEntryIndex(void) const
  {
    return flagHasEntryIndex;
  }

OInteger ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::getEntryIndex(void)
  {
    assert(flagHasEntryIndex);
    return storeEntryIndex;
  }

const OInteger ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::getEntryIndex(void) const
  {
    assert(flagHasEntryIndex);
    return storeEntryIndex;
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypeChoicesJSON(const TypeChoicesJSON &)
  {
    assert(false);
  }

ContactNumberChoicesJSON::TypeChoicesJSON &ContactNumberChoicesJSON::TypeChoicesJSON::operator=(const TypeChoicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONPhoneNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PhoneNumber of TypeChoicesJSON is not a string.");
    setPhoneNumber(std::string(json_string->getData()));
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONPhoneEntries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PhoneEntries of TypeChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field PhoneEntries of TypeChoicesJSON has too few elements.");
    std::vector< TypePhoneEntriesJSON * > vector_PhoneEntries1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePhoneEntriesJSON *convert_classy = TypePhoneEntriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PhoneEntries1[num1] = convert_classy;
      }
    assert(vector_PhoneEntries1.size() >= 1);
    initPhoneEntries();
    for (size_t num6 = 0; num6 < vector_PhoneEntries1.size(); ++num6)
        appendPhoneEntries(vector_PhoneEntries1[num6]);
    for (size_t num1 = 0; num1 < vector_PhoneEntries1.size(); ++num1)
      {
        vector_PhoneEntries1[num1]->remove_reference();
      }
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONToUserWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserWrittenName of TypeChoicesJSON is not a string.");
    setToUserWrittenName(std::string(json_string->getData()));
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONToUserSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ToUserSpokenName of TypeChoicesJSON is not a string.");
    setToUserSpokenName(std::string(json_string->getData()));
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONFromUserNames(JSONValue *json_value, bool ignore_extras)
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
    for (size_t num7 = 0; num7 < vector_FromUserNames1.size(); ++num7)
        appendFromUserNames(vector_FromUserNames1[num7]);
    for (size_t num1 = 0; num1 < vector_FromUserNames1.size(); ++num1)
      {
      }
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONDefiningCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefiningCategory of TypeChoicesJSON is not a string.");
    setDefiningCategory(std::string(json_string->getData()));
  }

void ContactNumberChoicesJSON::TypeChoicesJSON::fromJSONCategories(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Categories of TypeChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Categories1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Categories of TypeChoicesJSON is not a string.");
        vector_Categories1[num1] = std::string(json_string->getData());
      }
    initCategories();
    for (size_t num8 = 0; num8 < vector_Categories1.size(); ++num8)
        appendCategories(vector_Categories1[num8]);
    for (size_t num1 = 0; num1 < vector_Categories1.size(); ++num1)
      {
      }
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypeChoicesJSON(void) :
        flagHasPhoneNumber(false),
        flagHasPhoneEntries(false),
        flagHasToUserWrittenName(false),
        flagHasToUserSpokenName(false),
        flagHasFromUserNames(false),
        flagHasDefiningCategory(false),
        flagHasCategories(false)
  {
    extraIndex = create_string_index();
  }

ContactNumberChoicesJSON::TypeChoicesJSON::~TypeChoicesJSON(void)
  {
    if (flagHasPhoneEntries)
      {
        for (size_t num10 = 0; num10 < storePhoneEntries.size(); ++num10)
          {
            storePhoneEntries[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasPhoneNumber(void) const
  {
    return flagHasPhoneNumber;
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::getPhoneNumber(void)
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::getPhoneNumber(void) const
  {
    assert(flagHasPhoneNumber);
    return storePhoneNumber;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasPhoneEntries(void) const
  {
    return flagHasPhoneEntries;
  }

size_t ContactNumberChoicesJSON::TypeChoicesJSON::countOfPhoneEntries(void) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries.size();
  }

ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON * ContactNumberChoicesJSON::TypeChoicesJSON::elementOfPhoneEntries(size_t element_num)
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries[element_num];
  }

const ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON * ContactNumberChoicesJSON::TypeChoicesJSON::elementOfPhoneEntries(size_t element_num) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries[element_num];
  }

std::vector< ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON * > ContactNumberChoicesJSON::TypeChoicesJSON::getPhoneEntries(void)
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries;
  }

const std::vector< ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON * > ContactNumberChoicesJSON::TypeChoicesJSON::getPhoneEntries(void) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasToUserWrittenName(void) const
  {
    return flagHasToUserWrittenName;
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::getToUserWrittenName(void)
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::getToUserWrittenName(void) const
  {
    assert(flagHasToUserWrittenName);
    return storeToUserWrittenName;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasToUserSpokenName(void) const
  {
    return flagHasToUserSpokenName;
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::getToUserSpokenName(void)
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::getToUserSpokenName(void) const
  {
    assert(flagHasToUserSpokenName);
    return storeToUserSpokenName;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasFromUserNames(void) const
  {
    return flagHasFromUserNames;
  }

size_t ContactNumberChoicesJSON::TypeChoicesJSON::countOfFromUserNames(void) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames.size();
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::elementOfFromUserNames(size_t element_num)
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames[element_num];
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::elementOfFromUserNames(size_t element_num) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames[element_num];
  }

std::vector< std::string > ContactNumberChoicesJSON::TypeChoicesJSON::getFromUserNames(void)
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames;
  }

const std::vector< std::string > ContactNumberChoicesJSON::TypeChoicesJSON::getFromUserNames(void) const
  {
    assert(flagHasFromUserNames);
    return storeFromUserNames;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasDefiningCategory(void) const
  {
    return flagHasDefiningCategory;
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::getDefiningCategory(void)
  {
    assert(flagHasDefiningCategory);
    return storeDefiningCategory;
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::getDefiningCategory(void) const
  {
    assert(flagHasDefiningCategory);
    return storeDefiningCategory;
  }

bool ContactNumberChoicesJSON::TypeChoicesJSON::hasCategories(void) const
  {
    return flagHasCategories;
  }

size_t ContactNumberChoicesJSON::TypeChoicesJSON::countOfCategories(void) const
  {
    assert(flagHasCategories);
    return storeCategories.size();
  }

std::string ContactNumberChoicesJSON::TypeChoicesJSON::elementOfCategories(size_t element_num)
  {
    assert(flagHasCategories);
    return storeCategories[element_num];
  }

const std::string ContactNumberChoicesJSON::TypeChoicesJSON::elementOfCategories(size_t element_num) const
  {
    assert(flagHasCategories);
    return storeCategories[element_num];
  }

std::vector< std::string > ContactNumberChoicesJSON::TypeChoicesJSON::getCategories(void)
  {
    assert(flagHasCategories);
    return storeCategories;
  }

const std::vector< std::string > ContactNumberChoicesJSON::TypeChoicesJSON::getCategories(void) const
  {
    assert(flagHasCategories);
    return storeCategories;
  }

ContactNumberChoicesJSON::ContactNumberChoicesJSON(const ContactNumberChoicesJSON &)
  {
    assert(false);
  }

ContactNumberChoicesJSON &ContactNumberChoicesJSON::operator=(const ContactNumberChoicesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactNumberChoicesJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Contacts of ContactNumberChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Contacts of ContactNumberChoicesJSON has too few elements.");
    std::vector< OneContactJSON * > vector_Contacts1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Contacts1[num1] = convert_classy;
      }
    assert(vector_Contacts1.size() >= 1);
    initContacts();
    for (size_t num9 = 0; num9 < vector_Contacts1.size(); ++num9)
        appendContacts(vector_Contacts1[num9]);
    for (size_t num1 = 0; num1 < vector_Contacts1.size(); ++num1)
      {
        vector_Contacts1[num1]->remove_reference();
      }
  }

void ContactNumberChoicesJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Choices of ContactNumberChoicesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Choices of ContactNumberChoicesJSON has too few elements.");
    std::vector< TypeChoicesJSON * > vector_Choices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeChoicesJSON *convert_classy = TypeChoicesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Choices1[num1] = convert_classy;
      }
    assert(vector_Choices1.size() >= 2);
    initChoices();
    for (size_t num10 = 0; num10 < vector_Choices1.size(); ++num10)
        appendChoices(vector_Choices1[num10]);
    for (size_t num1 = 0; num1 < vector_Choices1.size(); ++num1)
      {
        vector_Choices1[num1]->remove_reference();
      }
  }

ContactNumberChoicesJSON::ContactNumberChoicesJSON(void) :
        flagHasContacts(false),
        flagHasChoices(false)
  {
    extraIndex = create_string_index();
  }

ContactNumberChoicesJSON::~ContactNumberChoicesJSON(void)
  {
    if (flagHasContacts)
      {
        for (size_t num13 = 0; num13 < storeContacts.size(); ++num13)
          {
            storeContacts[num13]->remove_reference();
          }
      }
    if (flagHasChoices)
      {
        for (size_t num14 = 0; num14 < storeChoices.size(); ++num14)
          {
            storeChoices[num14]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactNumberChoicesJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

size_t ContactNumberChoicesJSON::countOfContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts.size();
  }

OneContactJSON * ContactNumberChoicesJSON::elementOfContacts(size_t element_num)
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

const OneContactJSON * ContactNumberChoicesJSON::elementOfContacts(size_t element_num) const
  {
    assert(flagHasContacts);
    return storeContacts[element_num];
  }

std::vector< OneContactJSON * > ContactNumberChoicesJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const std::vector< OneContactJSON * > ContactNumberChoicesJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool ContactNumberChoicesJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

size_t ContactNumberChoicesJSON::countOfChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices.size();
  }

ContactNumberChoicesJSON::TypeChoicesJSON * ContactNumberChoicesJSON::elementOfChoices(size_t element_num)
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

const ContactNumberChoicesJSON::TypeChoicesJSON * ContactNumberChoicesJSON::elementOfChoices(size_t element_num) const
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

std::vector< ContactNumberChoicesJSON::TypeChoicesJSON * > ContactNumberChoicesJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const std::vector< ContactNumberChoicesJSON::TypeChoicesJSON * > ContactNumberChoicesJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

char ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::Generator::lowerBoundContactIndex[] = "0";
char ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::Generator::lowerBoundEntryIndex[] = "0";
ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON *ContactNumberChoicesJSON::TypeChoicesJSON::TypePhoneEntriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePhoneEntriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePhoneEntriesJSON>, TypePhoneEntriesJSON *, bool> generator("Type TypePhoneEntries", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ContactNumberChoicesJSON::TypeChoicesJSON *ContactNumberChoicesJSON::TypeChoicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
ContactNumberChoicesJSON *ContactNumberChoicesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactNumberChoicesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactNumberChoicesJSON>, ContactNumberChoicesJSON *, bool> generator("Type ContactNumberChoices", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
