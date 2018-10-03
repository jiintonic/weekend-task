/* file "OneContactJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "OneContactJSON.h"

#include "OneContactJSON.h"


OneContactJSON::TypePhoneEntriesJSON::TypePhoneEntriesJSON(const TypePhoneEntriesJSON &)
  {
    assert(false);
  }

OneContactJSON::TypePhoneEntriesJSON &OneContactJSON::TypePhoneEntriesJSON::operator=(const TypePhoneEntriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OneContactJSON::TypePhoneEntriesJSON::fromJSONCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Category of TypePhoneEntriesJSON is not a string.");
    setCategory(std::string(json_string->getData()));
  }

void OneContactJSON::TypePhoneEntriesJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of TypePhoneEntriesJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

OneContactJSON::TypePhoneEntriesJSON::TypePhoneEntriesJSON(void) :
        flagHasCategory(false),
        flagHasNumber(false)
  {
    extraIndex = create_string_index();
  }

OneContactJSON::TypePhoneEntriesJSON::~TypePhoneEntriesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OneContactJSON::TypePhoneEntriesJSON::hasCategory(void) const
  {
    return flagHasCategory;
  }

std::string OneContactJSON::TypePhoneEntriesJSON::getCategory(void)
  {
    assert(flagHasCategory);
    return storeCategory;
  }

const std::string OneContactJSON::TypePhoneEntriesJSON::getCategory(void) const
  {
    assert(flagHasCategory);
    return storeCategory;
  }

bool OneContactJSON::TypePhoneEntriesJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string OneContactJSON::TypePhoneEntriesJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string OneContactJSON::TypePhoneEntriesJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

OneContactJSON::TypeEmailEntriesJSON::TypeEmailEntriesJSON(const TypeEmailEntriesJSON &)
  {
    assert(false);
  }

OneContactJSON::TypeEmailEntriesJSON &OneContactJSON::TypeEmailEntriesJSON::operator=(const TypeEmailEntriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OneContactJSON::TypeEmailEntriesJSON::fromJSONCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Category of TypeEmailEntriesJSON is not a string.");
    setCategory(std::string(json_string->getData()));
  }

void OneContactJSON::TypeEmailEntriesJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Address of TypeEmailEntriesJSON is not a string.");
    setAddress(std::string(json_string->getData()));
  }

OneContactJSON::TypeEmailEntriesJSON::TypeEmailEntriesJSON(void) :
        flagHasCategory(false),
        flagHasAddress(false)
  {
    extraIndex = create_string_index();
  }

OneContactJSON::TypeEmailEntriesJSON::~TypeEmailEntriesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OneContactJSON::TypeEmailEntriesJSON::hasCategory(void) const
  {
    return flagHasCategory;
  }

std::string OneContactJSON::TypeEmailEntriesJSON::getCategory(void)
  {
    assert(flagHasCategory);
    return storeCategory;
  }

const std::string OneContactJSON::TypeEmailEntriesJSON::getCategory(void) const
  {
    assert(flagHasCategory);
    return storeCategory;
  }

bool OneContactJSON::TypeEmailEntriesJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

std::string OneContactJSON::TypeEmailEntriesJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const std::string OneContactJSON::TypeEmailEntriesJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

OneContactJSON::TypeMapAddressEntriesJSON::TypeMapAddressEntriesJSON(const TypeMapAddressEntriesJSON &)
  {
    assert(false);
  }

OneContactJSON::TypeMapAddressEntriesJSON &OneContactJSON::TypeMapAddressEntriesJSON::operator=(const TypeMapAddressEntriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OneContactJSON::TypeMapAddressEntriesJSON::fromJSONCategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Category of TypeMapAddressEntriesJSON is not a string.");
    setCategory(std::string(json_string->getData()));
  }

void OneContactJSON::TypeMapAddressEntriesJSON::fromJSONAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationForContactsJSON *convert_classy = MapLocationForContactsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAddress(convert_classy);
    convert_classy->remove_reference();
  }

OneContactJSON::TypeMapAddressEntriesJSON::TypeMapAddressEntriesJSON(void) :
        flagHasCategory(false),
        flagHasAddress(false)
  {
    extraIndex = create_string_index();
  }

OneContactJSON::TypeMapAddressEntriesJSON::~TypeMapAddressEntriesJSON(void)
  {
    if (flagHasAddress)
      {
        storeAddress->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OneContactJSON::TypeMapAddressEntriesJSON::hasCategory(void) const
  {
    return flagHasCategory;
  }

std::string OneContactJSON::TypeMapAddressEntriesJSON::getCategory(void)
  {
    assert(flagHasCategory);
    return storeCategory;
  }

const std::string OneContactJSON::TypeMapAddressEntriesJSON::getCategory(void) const
  {
    assert(flagHasCategory);
    return storeCategory;
  }

bool OneContactJSON::TypeMapAddressEntriesJSON::hasAddress(void) const
  {
    return flagHasAddress;
  }

MapLocationForContactsJSON * OneContactJSON::TypeMapAddressEntriesJSON::getAddress(void)
  {
    assert(flagHasAddress);
    return storeAddress;
  }

const MapLocationForContactsJSON * OneContactJSON::TypeMapAddressEntriesJSON::getAddress(void) const
  {
    assert(flagHasAddress);
    return storeAddress;
  }

OneContactJSON::TypeSex OneContactJSON::stringToSex(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "emale") == 0)
                return Sex_Female;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "ale") == 0)
                return Sex_Male;
            break;
        default:
            break;
      }
    throw("The value for field `Sex' is not one of the legal values.");
  }

const char *OneContactJSON::stringFromSex(TypeSex the_enum)
  {
    switch (the_enum)
      {
        case Sex_Female:
            return "Female";
        case Sex_Male:
            return "Male";
        default:
            assert(false);
            return NULL;
      }
  }

OneContactJSON::OneContactJSON(const OneContactJSON &)
  {
    assert(false);
  }

OneContactJSON &OneContactJSON::operator=(const OneContactJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void OneContactJSON::fromJSONFirstName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FirstName of OneContactJSON is not a string.");
    setFirstName(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONLastName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastName of OneContactJSON is not a string.");
    setLastName(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONSingleName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SingleName of OneContactJSON is not a string.");
    setSingleName(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONNickNames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NickNames of OneContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_NickNames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field NickNames of OneContactJSON is not a string.");
        vector_NickNames1[num1] = std::string(json_string->getData());
      }
    initNickNames();
    for (size_t num5 = 0; num5 < vector_NickNames1.size(); ++num5)
        appendNickNames(vector_NickNames1[num5]);
    for (size_t num1 = 0; num1 < vector_NickNames1.size(); ++num1)
      {
      }
  }

void OneContactJSON::fromJSONPhoneEntries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field PhoneEntries of OneContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypePhoneEntriesJSON * > vector_PhoneEntries1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePhoneEntriesJSON *convert_classy = TypePhoneEntriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_PhoneEntries1[num1] = convert_classy;
      }
    initPhoneEntries();
    for (size_t num6 = 0; num6 < vector_PhoneEntries1.size(); ++num6)
        appendPhoneEntries(vector_PhoneEntries1[num6]);
    for (size_t num1 = 0; num1 < vector_PhoneEntries1.size(); ++num1)
      {
        vector_PhoneEntries1[num1]->remove_reference();
      }
  }

void OneContactJSON::fromJSONDefaultPhone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefaultPhone of OneContactJSON is not a string.");
    setDefaultPhone(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONTimesCalled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TimesCalled of OneContactJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TimesCalled of OneContactJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTimesCalled(extracted_integer);
  }

void OneContactJSON::fromJSONLastCalled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastCalled(convert_classy);
    convert_classy->remove_reference();
  }

void OneContactJSON::fromJSONTimesContacted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field TimesContacted of OneContactJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field TimesContacted of OneContactJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setTimesContacted(extracted_integer);
  }

void OneContactJSON::fromJSONLastContacted(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastContacted(convert_classy);
    convert_classy->remove_reference();
  }

void OneContactJSON::fromJSONEmailEntries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field EmailEntries of OneContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeEmailEntriesJSON * > vector_EmailEntries1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeEmailEntriesJSON *convert_classy = TypeEmailEntriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_EmailEntries1[num1] = convert_classy;
      }
    initEmailEntries();
    for (size_t num7 = 0; num7 < vector_EmailEntries1.size(); ++num7)
        appendEmailEntries(vector_EmailEntries1[num7]);
    for (size_t num1 = 0; num1 < vector_EmailEntries1.size(); ++num1)
      {
        vector_EmailEntries1[num1]->remove_reference();
      }
  }

void OneContactJSON::fromJSONDefaultEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefaultEmail of OneContactJSON is not a string.");
    setDefaultEmail(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONMapAddressEntries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field MapAddressEntries of OneContactJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeMapAddressEntriesJSON * > vector_MapAddressEntries1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeMapAddressEntriesJSON *convert_classy = TypeMapAddressEntriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_MapAddressEntries1[num1] = convert_classy;
      }
    initMapAddressEntries();
    for (size_t num8 = 0; num8 < vector_MapAddressEntries1.size(); ++num8)
        appendMapAddressEntries(vector_MapAddressEntries1[num8]);
    for (size_t num1 = 0; num1 < vector_MapAddressEntries1.size(); ++num1)
      {
        vector_MapAddressEntries1[num1]->remove_reference();
      }
  }

void OneContactJSON::fromJSONDefaultMapAddress(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefaultMapAddress of OneContactJSON is not a string.");
    setDefaultMapAddress(std::string(json_string->getData()));
  }

void OneContactJSON::fromJSONIsFavorite(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsFavorite of OneContactJSON is not true for false.");
          }
      }
    setIsFavorite(the_bool);
  }

void OneContactJSON::fromJSONSex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Sex of OneContactJSON is not a string.");
    TypeSex the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "emale") == 0)
                  {
                    the_enum = Sex_Female;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "ale") == 0)
                  {
                    the_enum = Sex_Male;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Sex of OneContactJSON is not one of the legal strings.");
  enum_is_done:;
    setSex(the_enum);
  }

void OneContactJSON::fromJSONIsVisible(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsVisible of OneContactJSON is not true for false.");
          }
      }
    setIsVisible(the_bool);
  }

OneContactJSON::OneContactJSON(void) :
        flagHasFirstName(false),
        flagHasLastName(false),
        flagHasSingleName(false),
        flagHasNickNames(false),
        flagHasPhoneEntries(false),
        flagHasDefaultPhone(false),
        flagHasTimesCalled(false),
        flagHasLastCalled(false),
        flagHasTimesContacted(false),
        flagHasLastContacted(false),
        flagHasEmailEntries(false),
        flagHasDefaultEmail(false),
        flagHasMapAddressEntries(false),
        flagHasDefaultMapAddress(false),
        flagHasIsFavorite(false),
        flagHasSex(false),
        flagHasIsVisible(false)
  {
    storeIsFavorite = false;
    storeIsVisible = true;
    extraIndex = create_string_index();
  }

OneContactJSON::~OneContactJSON(void)
  {
    if (flagHasPhoneEntries)
      {
        for (size_t num10 = 0; num10 < storePhoneEntries.size(); ++num10)
          {
            storePhoneEntries[num10]->remove_reference();
          }
      }
    if (flagHasLastCalled)
      {
        storeLastCalled->remove_reference();
      }
    if (flagHasLastContacted)
      {
        storeLastContacted->remove_reference();
      }
    if (flagHasEmailEntries)
      {
        for (size_t num11 = 0; num11 < storeEmailEntries.size(); ++num11)
          {
            storeEmailEntries[num11]->remove_reference();
          }
      }
    if (flagHasMapAddressEntries)
      {
        for (size_t num12 = 0; num12 < storeMapAddressEntries.size(); ++num12)
          {
            storeMapAddressEntries[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool OneContactJSON::hasFirstName(void) const
  {
    return flagHasFirstName;
  }

std::string OneContactJSON::getFirstName(void)
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

const std::string OneContactJSON::getFirstName(void) const
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

bool OneContactJSON::hasLastName(void) const
  {
    return flagHasLastName;
  }

std::string OneContactJSON::getLastName(void)
  {
    assert(flagHasLastName);
    return storeLastName;
  }

const std::string OneContactJSON::getLastName(void) const
  {
    assert(flagHasLastName);
    return storeLastName;
  }

bool OneContactJSON::hasSingleName(void) const
  {
    return flagHasSingleName;
  }

std::string OneContactJSON::getSingleName(void)
  {
    assert(flagHasSingleName);
    return storeSingleName;
  }

const std::string OneContactJSON::getSingleName(void) const
  {
    assert(flagHasSingleName);
    return storeSingleName;
  }

bool OneContactJSON::hasNickNames(void) const
  {
    return flagHasNickNames;
  }

size_t OneContactJSON::countOfNickNames(void) const
  {
    assert(flagHasNickNames);
    return storeNickNames.size();
  }

std::string OneContactJSON::elementOfNickNames(size_t element_num)
  {
    assert(flagHasNickNames);
    return storeNickNames[element_num];
  }

const std::string OneContactJSON::elementOfNickNames(size_t element_num) const
  {
    assert(flagHasNickNames);
    return storeNickNames[element_num];
  }

std::vector< std::string > OneContactJSON::getNickNames(void)
  {
    assert(flagHasNickNames);
    return storeNickNames;
  }

const std::vector< std::string > OneContactJSON::getNickNames(void) const
  {
    assert(flagHasNickNames);
    return storeNickNames;
  }

bool OneContactJSON::hasPhoneEntries(void) const
  {
    return flagHasPhoneEntries;
  }

size_t OneContactJSON::countOfPhoneEntries(void) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries.size();
  }

OneContactJSON::TypePhoneEntriesJSON * OneContactJSON::elementOfPhoneEntries(size_t element_num)
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries[element_num];
  }

const OneContactJSON::TypePhoneEntriesJSON * OneContactJSON::elementOfPhoneEntries(size_t element_num) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries[element_num];
  }

std::vector< OneContactJSON::TypePhoneEntriesJSON * > OneContactJSON::getPhoneEntries(void)
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries;
  }

const std::vector< OneContactJSON::TypePhoneEntriesJSON * > OneContactJSON::getPhoneEntries(void) const
  {
    assert(flagHasPhoneEntries);
    return storePhoneEntries;
  }

bool OneContactJSON::hasDefaultPhone(void) const
  {
    return flagHasDefaultPhone;
  }

std::string OneContactJSON::getDefaultPhone(void)
  {
    assert(flagHasDefaultPhone);
    return storeDefaultPhone;
  }

const std::string OneContactJSON::getDefaultPhone(void) const
  {
    assert(flagHasDefaultPhone);
    return storeDefaultPhone;
  }

bool OneContactJSON::hasTimesCalled(void) const
  {
    return flagHasTimesCalled;
  }

OInteger OneContactJSON::getTimesCalled(void)
  {
    assert(flagHasTimesCalled);
    return storeTimesCalled;
  }

const OInteger OneContactJSON::getTimesCalled(void) const
  {
    assert(flagHasTimesCalled);
    return storeTimesCalled;
  }

bool OneContactJSON::hasLastCalled(void) const
  {
    return flagHasLastCalled;
  }

DateAndOrTimeJSON * OneContactJSON::getLastCalled(void)
  {
    assert(flagHasLastCalled);
    return storeLastCalled;
  }

const DateAndOrTimeJSON * OneContactJSON::getLastCalled(void) const
  {
    assert(flagHasLastCalled);
    return storeLastCalled;
  }

bool OneContactJSON::hasTimesContacted(void) const
  {
    return flagHasTimesContacted;
  }

OInteger OneContactJSON::getTimesContacted(void)
  {
    assert(flagHasTimesContacted);
    return storeTimesContacted;
  }

const OInteger OneContactJSON::getTimesContacted(void) const
  {
    assert(flagHasTimesContacted);
    return storeTimesContacted;
  }

bool OneContactJSON::hasLastContacted(void) const
  {
    return flagHasLastContacted;
  }

DateAndOrTimeJSON * OneContactJSON::getLastContacted(void)
  {
    assert(flagHasLastContacted);
    return storeLastContacted;
  }

const DateAndOrTimeJSON * OneContactJSON::getLastContacted(void) const
  {
    assert(flagHasLastContacted);
    return storeLastContacted;
  }

bool OneContactJSON::hasEmailEntries(void) const
  {
    return flagHasEmailEntries;
  }

size_t OneContactJSON::countOfEmailEntries(void) const
  {
    assert(flagHasEmailEntries);
    return storeEmailEntries.size();
  }

OneContactJSON::TypeEmailEntriesJSON * OneContactJSON::elementOfEmailEntries(size_t element_num)
  {
    assert(flagHasEmailEntries);
    return storeEmailEntries[element_num];
  }

const OneContactJSON::TypeEmailEntriesJSON * OneContactJSON::elementOfEmailEntries(size_t element_num) const
  {
    assert(flagHasEmailEntries);
    return storeEmailEntries[element_num];
  }

std::vector< OneContactJSON::TypeEmailEntriesJSON * > OneContactJSON::getEmailEntries(void)
  {
    assert(flagHasEmailEntries);
    return storeEmailEntries;
  }

const std::vector< OneContactJSON::TypeEmailEntriesJSON * > OneContactJSON::getEmailEntries(void) const
  {
    assert(flagHasEmailEntries);
    return storeEmailEntries;
  }

bool OneContactJSON::hasDefaultEmail(void) const
  {
    return flagHasDefaultEmail;
  }

std::string OneContactJSON::getDefaultEmail(void)
  {
    assert(flagHasDefaultEmail);
    return storeDefaultEmail;
  }

const std::string OneContactJSON::getDefaultEmail(void) const
  {
    assert(flagHasDefaultEmail);
    return storeDefaultEmail;
  }

bool OneContactJSON::hasMapAddressEntries(void) const
  {
    return flagHasMapAddressEntries;
  }

size_t OneContactJSON::countOfMapAddressEntries(void) const
  {
    assert(flagHasMapAddressEntries);
    return storeMapAddressEntries.size();
  }

OneContactJSON::TypeMapAddressEntriesJSON * OneContactJSON::elementOfMapAddressEntries(size_t element_num)
  {
    assert(flagHasMapAddressEntries);
    return storeMapAddressEntries[element_num];
  }

const OneContactJSON::TypeMapAddressEntriesJSON * OneContactJSON::elementOfMapAddressEntries(size_t element_num) const
  {
    assert(flagHasMapAddressEntries);
    return storeMapAddressEntries[element_num];
  }

std::vector< OneContactJSON::TypeMapAddressEntriesJSON * > OneContactJSON::getMapAddressEntries(void)
  {
    assert(flagHasMapAddressEntries);
    return storeMapAddressEntries;
  }

const std::vector< OneContactJSON::TypeMapAddressEntriesJSON * > OneContactJSON::getMapAddressEntries(void) const
  {
    assert(flagHasMapAddressEntries);
    return storeMapAddressEntries;
  }

bool OneContactJSON::hasDefaultMapAddress(void) const
  {
    return flagHasDefaultMapAddress;
  }

std::string OneContactJSON::getDefaultMapAddress(void)
  {
    assert(flagHasDefaultMapAddress);
    return storeDefaultMapAddress;
  }

const std::string OneContactJSON::getDefaultMapAddress(void) const
  {
    assert(flagHasDefaultMapAddress);
    return storeDefaultMapAddress;
  }

bool OneContactJSON::hasIsFavorite(void) const
  {
    return flagHasIsFavorite;
  }

bool OneContactJSON::getIsFavorite(void)
  {
    return storeIsFavorite;
  }

const bool OneContactJSON::getIsFavorite(void) const
  {
    return storeIsFavorite;
  }

bool OneContactJSON::hasSex(void) const
  {
    return flagHasSex;
  }

OneContactJSON::TypeSex OneContactJSON::getSex(void)
  {
    assert(flagHasSex);
    return storeSex;
  }

const OneContactJSON::TypeSex OneContactJSON::getSex(void) const
  {
    assert(flagHasSex);
    return storeSex;
  }

const char *OneContactJSON::getSexAsChars(void) const
  {
    return stringFromSex(getSex());
  }

std::string OneContactJSON::getSexAsString(void) const
  {
    return stringFromSex(getSex());
  }

bool OneContactJSON::hasIsVisible(void) const
  {
    return flagHasIsVisible;
  }

bool OneContactJSON::getIsVisible(void)
  {
    return storeIsVisible;
  }

const bool OneContactJSON::getIsVisible(void) const
  {
    return storeIsVisible;
  }

OneContactJSON::TypePhoneEntriesJSON *OneContactJSON::TypePhoneEntriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
char OneContactJSON::Generator::lowerBoundTimesCalled[] = "0";
char OneContactJSON::Generator::lowerBoundTimesContacted[] = "0";
OneContactJSON::TypeEmailEntriesJSON *OneContactJSON::TypeEmailEntriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeEmailEntriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeEmailEntriesJSON>, TypeEmailEntriesJSON *, bool> generator("Type TypeEmailEntries", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
OneContactJSON::TypeMapAddressEntriesJSON *OneContactJSON::TypeMapAddressEntriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMapAddressEntriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMapAddressEntriesJSON>, TypeMapAddressEntriesJSON *, bool> generator("Type TypeMapAddressEntries", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
OneContactJSON *OneContactJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    OneContactJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<OneContactJSON>, OneContactJSON *, bool> generator("Type OneContact", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
