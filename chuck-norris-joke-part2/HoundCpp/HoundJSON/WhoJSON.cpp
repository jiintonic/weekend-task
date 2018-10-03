/* file "WhoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WhoJSON.h"

#include "WhoJSON.h"


WhoJSON::TypeSex WhoJSON::stringToSex(const char *chars)
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

const char *WhoJSON::stringFromSex(TypeSex the_enum)
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

WhoJSON::WhoJSON(const WhoJSON &)
  {
    assert(false);
  }

WhoJSON &WhoJSON::operator=(const WhoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WhoJSON::fromJSONFullName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullName of WhoJSON is not a string.");
    setFullName(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenName of WhoJSON is not a string.");
    setSpokenName(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONFullNamePronunciation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FullNamePronunciation of WhoJSON is not a string.");
    setFullNamePronunciation(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONAliases(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Aliases of WhoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Aliases of WhoJSON has too few elements.");
    std::vector< std::string > vector_Aliases1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Aliases of WhoJSON is not a string.");
        vector_Aliases1[num1] = std::string(json_string->getData());
      }
    assert(vector_Aliases1.size() >= 1);
    initAliases();
    for (size_t num3 = 0; num3 < vector_Aliases1.size(); ++num3)
        appendAliases(vector_Aliases1[num3]);
    for (size_t num1 = 0; num1 < vector_Aliases1.size(); ++num1)
      {
      }
  }

void WhoJSON::fromJSONAliasPronunciations(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AliasPronunciations of WhoJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field AliasPronunciations of WhoJSON has too few elements.");
    std::vector< std::string > vector_AliasPronunciations1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field AliasPronunciations of WhoJSON is not a string.");
        vector_AliasPronunciations1[num1] = std::string(json_string->getData());
      }
    assert(vector_AliasPronunciations1.size() >= 1);
    initAliasPronunciations();
    for (size_t num4 = 0; num4 < vector_AliasPronunciations1.size(); ++num4)
        appendAliasPronunciations(vector_AliasPronunciations1[num4]);
    for (size_t num1 = 0; num1 < vector_AliasPronunciations1.size(); ++num1)
      {
      }
  }

void WhoJSON::fromJSONFirstName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field FirstName of WhoJSON is not a string.");
    setFirstName(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONLastName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LastName of WhoJSON is not a string.");
    setLastName(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONReferredToAs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ReferredToAs of WhoJSON is not a string.");
    setReferredToAs(std::string(json_string->getData()));
  }

void WhoJSON::fromJSONSex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Sex of WhoJSON is not a string.");
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
    throw("The value for field Sex of WhoJSON is not one of the legal strings.");
  enum_is_done:;
    setSex(the_enum);
  }

void WhoJSON::fromJSONBirthday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setBirthday(convert_classy);
    convert_classy->remove_reference();
  }

void WhoJSON::fromJSONWikipediaArticleTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WikipediaArticleTitle of WhoJSON is not a string.");
    setWikipediaArticleTitle(std::string(json_string->getData()));
  }

WhoJSON::WhoJSON(void) :
        flagHasFullName(false),
        flagHasSpokenName(false),
        flagHasFullNamePronunciation(false),
        flagHasAliases(false),
        flagHasAliasPronunciations(false),
        flagHasFirstName(false),
        flagHasLastName(false),
        flagHasReferredToAs(false),
        flagHasSex(false),
        flagHasBirthday(false),
        flagHasWikipediaArticleTitle(false)
  {
    extraIndex = create_string_index();
  }

WhoJSON::~WhoJSON(void)
  {
    if (flagHasBirthday)
      {
        storeBirthday->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WhoJSON::hasFullName(void) const
  {
    return flagHasFullName;
  }

std::string WhoJSON::getFullName(void)
  {
    assert(flagHasFullName);
    return storeFullName;
  }

const std::string WhoJSON::getFullName(void) const
  {
    assert(flagHasFullName);
    return storeFullName;
  }

bool WhoJSON::hasSpokenName(void) const
  {
    return flagHasSpokenName;
  }

std::string WhoJSON::getSpokenName(void)
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

const std::string WhoJSON::getSpokenName(void) const
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

bool WhoJSON::hasFullNamePronunciation(void) const
  {
    return flagHasFullNamePronunciation;
  }

std::string WhoJSON::getFullNamePronunciation(void)
  {
    assert(flagHasFullNamePronunciation);
    return storeFullNamePronunciation;
  }

const std::string WhoJSON::getFullNamePronunciation(void) const
  {
    assert(flagHasFullNamePronunciation);
    return storeFullNamePronunciation;
  }

bool WhoJSON::hasAliases(void) const
  {
    return flagHasAliases;
  }

size_t WhoJSON::countOfAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases.size();
  }

std::string WhoJSON::elementOfAliases(size_t element_num)
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

const std::string WhoJSON::elementOfAliases(size_t element_num) const
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

std::vector< std::string > WhoJSON::getAliases(void)
  {
    assert(flagHasAliases);
    return storeAliases;
  }

const std::vector< std::string > WhoJSON::getAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases;
  }

bool WhoJSON::hasAliasPronunciations(void) const
  {
    return flagHasAliasPronunciations;
  }

size_t WhoJSON::countOfAliasPronunciations(void) const
  {
    assert(flagHasAliasPronunciations);
    return storeAliasPronunciations.size();
  }

std::string WhoJSON::elementOfAliasPronunciations(size_t element_num)
  {
    assert(flagHasAliasPronunciations);
    return storeAliasPronunciations[element_num];
  }

const std::string WhoJSON::elementOfAliasPronunciations(size_t element_num) const
  {
    assert(flagHasAliasPronunciations);
    return storeAliasPronunciations[element_num];
  }

std::vector< std::string > WhoJSON::getAliasPronunciations(void)
  {
    assert(flagHasAliasPronunciations);
    return storeAliasPronunciations;
  }

const std::vector< std::string > WhoJSON::getAliasPronunciations(void) const
  {
    assert(flagHasAliasPronunciations);
    return storeAliasPronunciations;
  }

bool WhoJSON::hasFirstName(void) const
  {
    return flagHasFirstName;
  }

std::string WhoJSON::getFirstName(void)
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

const std::string WhoJSON::getFirstName(void) const
  {
    assert(flagHasFirstName);
    return storeFirstName;
  }

bool WhoJSON::hasLastName(void) const
  {
    return flagHasLastName;
  }

std::string WhoJSON::getLastName(void)
  {
    assert(flagHasLastName);
    return storeLastName;
  }

const std::string WhoJSON::getLastName(void) const
  {
    assert(flagHasLastName);
    return storeLastName;
  }

bool WhoJSON::hasReferredToAs(void) const
  {
    return flagHasReferredToAs;
  }

std::string WhoJSON::getReferredToAs(void)
  {
    assert(flagHasReferredToAs);
    return storeReferredToAs;
  }

const std::string WhoJSON::getReferredToAs(void) const
  {
    assert(flagHasReferredToAs);
    return storeReferredToAs;
  }

bool WhoJSON::hasSex(void) const
  {
    return flagHasSex;
  }

WhoJSON::TypeSex WhoJSON::getSex(void)
  {
    assert(flagHasSex);
    return storeSex;
  }

const WhoJSON::TypeSex WhoJSON::getSex(void) const
  {
    assert(flagHasSex);
    return storeSex;
  }

const char *WhoJSON::getSexAsChars(void) const
  {
    return stringFromSex(getSex());
  }

std::string WhoJSON::getSexAsString(void) const
  {
    return stringFromSex(getSex());
  }

bool WhoJSON::hasBirthday(void) const
  {
    return flagHasBirthday;
  }

DateAndOrTimeJSON * WhoJSON::getBirthday(void)
  {
    assert(flagHasBirthday);
    return storeBirthday;
  }

const DateAndOrTimeJSON * WhoJSON::getBirthday(void) const
  {
    assert(flagHasBirthday);
    return storeBirthday;
  }

bool WhoJSON::hasWikipediaArticleTitle(void) const
  {
    return flagHasWikipediaArticleTitle;
  }

std::string WhoJSON::getWikipediaArticleTitle(void)
  {
    assert(flagHasWikipediaArticleTitle);
    return storeWikipediaArticleTitle;
  }

const std::string WhoJSON::getWikipediaArticleTitle(void) const
  {
    assert(flagHasWikipediaArticleTitle);
    return storeWikipediaArticleTitle;
  }

WhoJSON *WhoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WhoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WhoJSON>, WhoJSON *, bool> generator("Type Who", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
