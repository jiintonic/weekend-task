/* file "DictionaryCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DictionaryCommandJSON.h"

#include "DictionaryCommandJSON.h"


DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::TypeRequestKind(void)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::TypeRequestKind(const TypeRequestKind &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::TypeRequestKind(TypeRequestKindKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator==(const TypeRequestKind &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator!=(const TypeRequestKind &other) const
  {
    return !(operator==(other));
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator<(const TypeRequestKind &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator>(const TypeRequestKind &other) const
  {
    return other.operator<(*this);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator>=(const TypeRequestKind &other) const
  {
    return !(operator<(other));
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind::operator<=(const TypeRequestKind &other) const
  {
    return !(other.operator<(*this));
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKindKnownValues DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::stringToRequestKind(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ntonym") == 0)
                return RequestKind_Antonym;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "efinition") == 0)
                return RequestKind_Definition;
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'p':
                    if (strncmp(&(chars[2]), "elling", 6) == 0)
                      {
                        switch ((unsigned char)(chars[8]))
                          {
                            case 0:
                                return RequestKind_Spelling;
                            case 'C':
                                if (strcmp(&(chars[9]), "onfirm") == 0)
                                    return RequestKind_SpellingConfirm;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "nonym") == 0)
                        return RequestKind_Synonym;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return RequestKind__none;
  }

const char *DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::stringFromRequestKind(TypeRequestKindKnownValues the_enum)
  {
    switch (the_enum)
      {
        case RequestKind_Definition:
            return "Definition";
        case RequestKind_Synonym:
            return "Synonym";
        case RequestKind_Antonym:
            return "Antonym";
        case RequestKind_Spelling:
            return "Spelling";
        case RequestKind_SpellingConfirm:
            return "SpellingConfirm";
        default:
            assert(false);
            return NULL;
      }
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKindListJSON(const TypeRequestKindListJSON &)
  {
    assert(false);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON &DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::operator=(const TypeRequestKindListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::fromJSONRequestKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestKind of TypeRequestKindListJSON is not a string.");
    TypeRequestKind the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ntonym") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RequestKind_Antonym;
                    goto open_enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "efinition") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = RequestKind_Definition;
                    goto open_enum_is_done;
                  }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'p':
                    if (strncmp(&(json_string->getData()[2]), "elling", 6) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[8]))
                          {
                            case 0:
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = RequestKind_Spelling;
                                    goto open_enum_is_done;
                                  }
                            case 'C':
                                if (strcmp(&(json_string->getData()[9]), "onfirm") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = RequestKind_SpellingConfirm;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "nonym") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = RequestKind_Synonym;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setRequestKind(the_open_enum);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKindListJSON(void) :
        flagHasRequestKind(false)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::~TypeRequestKindListJSON(void)
  {
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::hasRequestKind(void) const
  {
    return flagHasRequestKind;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::getRequestKind(void)
  {
    assert(flagHasRequestKind);
    return storeRequestKind;
  }

const DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::TypeRequestKind DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::getRequestKind(void) const
  {
    assert(flagHasRequestKind);
    return storeRequestKind;
  }

const char *DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::getRequestKindAsChars(void) const
  {
    TypeRequestKind result = getRequestKind();
    if (result.in_known_list)
        return stringFromRequestKind(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::getRequestKindAsString(void) const
  {
    return getRequestKindAsChars();
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::TypePOS(void)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::TypePOS(const TypePOS &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::TypePOS(TypePOSKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator==(const TypePOS &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator!=(const TypePOS &other) const
  {
    return !(operator==(other));
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator<(const TypePOS &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator>(const TypePOS &other) const
  {
    return other.operator<(*this);
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator>=(const TypePOS &other) const
  {
    return !(operator<(other));
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS::operator<=(const TypePOS &other) const
  {
    return !(other.operator<(*this));
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOSKnownValues DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::stringToPOS(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'a':
            switch ((unsigned char)(chars[1]))
              {
                case 'd':
                    switch ((unsigned char)(chars[2]))
                      {
                        case 'j':
                            if (strcmp(&(chars[3]), "ective") == 0)
                                return POS_adjective;
                            break;
                        case 'v':
                            if (strcmp(&(chars[3]), "erb") == 0)
                                return POS_adverb;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strcmp(&(chars[2]), "l") == 0)
                        return POS_all;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ticle") == 0)
                        return POS_article;
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            if (strcmp(&(chars[1]), "onjunction") == 0)
                return POS_conjunction;
            break;
        case 'n':
            if (strcmp(&(chars[1]), "oun") == 0)
                return POS_noun;
            break;
        case 'p':
            if (strncmp(&(chars[1]), "r", 1) == 0)
              {
                switch ((unsigned char)(chars[2]))
                  {
                    case 'e':
                        if (strcmp(&(chars[3]), "position") == 0)
                            return POS_preposition;
                        break;
                    case 'o':
                        if (strcmp(&(chars[3]), "noun") == 0)
                            return POS_pronoun;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 's':
            if (strcmp(&(chars[1]), "lang") == 0)
                return POS_slang;
            break;
        case 'v':
            if (strcmp(&(chars[1]), "erb") == 0)
                return POS_verb;
            break;
        default:
            break;
      }
    return POS__none;
  }

const char *DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::stringFromPOS(TypePOSKnownValues the_enum)
  {
    switch (the_enum)
      {
        case POS_all:
            return "all";
        case POS_noun:
            return "noun";
        case POS_verb:
            return "verb";
        case POS_adjective:
            return "adjective";
        case POS_adverb:
            return "adverb";
        case POS_article:
            return "article";
        case POS_preposition:
            return "preposition";
        case POS_pronoun:
            return "pronoun";
        case POS_slang:
            return "slang";
        case POS_conjunction:
            return "conjunction";
        default:
            assert(false);
            return NULL;
      }
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOSListJSON(const TypePOSListJSON &)
  {
    assert(false);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON &DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::operator=(const TypePOSListJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::fromJSONPOS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field POS of TypePOSListJSON is not a string.");
    TypePOS the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'a':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'd':
                    switch ((unsigned char)(json_string->getData()[2]))
                      {
                        case 'j':
                            if (strcmp(&(json_string->getData()[3]), "ective") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = POS_adjective;
                                    goto open_enum_is_done;
                                  }
                            break;
                        case 'v':
                            if (strcmp(&(json_string->getData()[3]), "erb") == 0)
                                  {
                                    the_open_enum.in_known_list = true;
                                    the_open_enum.list_value = POS_adverb;
                                    goto open_enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    if (strcmp(&(json_string->getData()[2]), "l") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = POS_all;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ticle") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = POS_article;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'c':
            if (strcmp(&(json_string->getData()[1]), "onjunction") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = POS_conjunction;
                    goto open_enum_is_done;
                  }
            break;
        case 'n':
            if (strcmp(&(json_string->getData()[1]), "oun") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = POS_noun;
                    goto open_enum_is_done;
                  }
            break;
        case 'p':
            if (strncmp(&(json_string->getData()[1]), "r", 1) == 0)
              {
                switch ((unsigned char)(json_string->getData()[2]))
                  {
                    case 'e':
                        if (strcmp(&(json_string->getData()[3]), "position") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = POS_preposition;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'o':
                        if (strcmp(&(json_string->getData()[3]), "noun") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = POS_pronoun;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 's':
            if (strcmp(&(json_string->getData()[1]), "lang") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = POS_slang;
                    goto open_enum_is_done;
                  }
            break;
        case 'v':
            if (strcmp(&(json_string->getData()[1]), "erb") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = POS_verb;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setPOS(the_open_enum);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOSListJSON(void) :
        flagHasPOS(false)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::~TypePOSListJSON(void)
  {
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::hasPOS(void) const
  {
    return flagHasPOS;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::getPOS(void)
  {
    assert(flagHasPOS);
    return storePOS;
  }

const DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::TypePOS DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::getPOS(void) const
  {
    assert(flagHasPOS);
    return storePOS;
  }

const char *DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::getPOSAsChars(void) const
  {
    TypePOS result = getPOS();
    if (result.in_known_list)
        return stringFromPOS(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::getPOSAsString(void) const
  {
    return getPOSAsChars();
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::TypeDictionaryInfoJSON(const TypeDictionaryInfoJSON &)
  {
    assert(false);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON &DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::operator=(const TypeDictionaryInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::fromJSONWord(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Word of TypeDictionaryInfoJSON is not a string.");
    setWord(std::string(json_string->getData()));
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::fromJSONDefinitions(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Definitions of TypeDictionaryInfoJSON is not a string.");
    setDefinitions(std::string(json_string->getData()));
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::fromJSONSynonyms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Synonyms of TypeDictionaryInfoJSON is not a string.");
    setSynonyms(std::string(json_string->getData()));
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::fromJSONAntonyms(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Antonyms of TypeDictionaryInfoJSON is not a string.");
    setAntonyms(std::string(json_string->getData()));
  }

void DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::fromJSONURI(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URI of TypeDictionaryInfoJSON is not a string.");
    setURI(std::string(json_string->getData()));
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::TypeDictionaryInfoJSON(void) :
        flagHasWord(false),
        flagHasDefinitions(false),
        flagHasSynonyms(false),
        flagHasAntonyms(false),
        flagHasURI(false)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::~TypeDictionaryInfoJSON(void)
  {
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::hasWord(void) const
  {
    return flagHasWord;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getWord(void)
  {
    assert(flagHasWord);
    return storeWord;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getWord(void) const
  {
    assert(flagHasWord);
    return storeWord;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::hasDefinitions(void) const
  {
    return flagHasDefinitions;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getDefinitions(void)
  {
    assert(flagHasDefinitions);
    return storeDefinitions;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getDefinitions(void) const
  {
    assert(flagHasDefinitions);
    return storeDefinitions;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::hasSynonyms(void) const
  {
    return flagHasSynonyms;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getSynonyms(void)
  {
    assert(flagHasSynonyms);
    return storeSynonyms;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getSynonyms(void) const
  {
    assert(flagHasSynonyms);
    return storeSynonyms;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::hasAntonyms(void) const
  {
    return flagHasAntonyms;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getAntonyms(void)
  {
    assert(flagHasAntonyms);
    return storeAntonyms;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getAntonyms(void) const
  {
    assert(flagHasAntonyms);
    return storeAntonyms;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::hasURI(void) const
  {
    return flagHasURI;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getURI(void)
  {
    assert(flagHasURI);
    return storeURI;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::getURI(void) const
  {
    assert(flagHasURI);
    return storeURI;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DictionaryCommandJSON::TypeNativeDataJSON &DictionaryCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONRequestKindList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RequestKindList of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field RequestKindList of TypeNativeDataJSON has too few elements.");
    std::vector< TypeRequestKindListJSON * > vector_RequestKindList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeRequestKindListJSON *convert_classy = TypeRequestKindListJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_RequestKindList1[num1] = convert_classy;
      }
    assert(vector_RequestKindList1.size() >= 1);
    initRequestKindList();
    for (size_t num5 = 0; num5 < vector_RequestKindList1.size(); ++num5)
        appendRequestKindList(vector_RequestKindList1[num5]);
    for (size_t num1 = 0; num1 < vector_RequestKindList1.size(); ++num1)
      {
        vector_RequestKindList1[num1]->remove_reference();
      }
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONPOSList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field POSList of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field POSList of TypeNativeDataJSON has too few elements.");
    std::vector< TypePOSListJSON * > vector_POSList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePOSListJSON *convert_classy = TypePOSListJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_POSList1[num1] = convert_classy;
      }
    assert(vector_POSList1.size() >= 1);
    initPOSList();
    for (size_t num6 = 0; num6 < vector_POSList1.size(); ++num6)
        appendPOSList(vector_POSList1[num6]);
    for (size_t num1 = 0; num1 < vector_POSList1.size(); ++num1)
      {
        vector_POSList1[num1]->remove_reference();
      }
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONWasSpelled(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WasSpelled of TypeNativeDataJSON is not true for false.");
          }
      }
    setWasSpelled(the_bool);
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONSpellingAttempt(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpellingAttempt of TypeNativeDataJSON is not a string.");
    setSpellingAttempt(std::string(json_string->getData()));
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONDictionaryInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DictionaryInfo of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field DictionaryInfo of TypeNativeDataJSON has too few elements.");
    std::vector< TypeDictionaryInfoJSON * > vector_DictionaryInfo1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeDictionaryInfoJSON *convert_classy = TypeDictionaryInfoJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_DictionaryInfo1[num1] = convert_classy;
      }
    assert(vector_DictionaryInfo1.size() >= 1);
    initDictionaryInfo();
    for (size_t num7 = 0; num7 < vector_DictionaryInfo1.size(); ++num7)
        appendDictionaryInfo(vector_DictionaryInfo1[num7]);
    for (size_t num1 = 0; num1 < vector_DictionaryInfo1.size(); ++num1)
      {
        vector_DictionaryInfo1[num1]->remove_reference();
      }
  }

void DictionaryCommandJSON::TypeNativeDataJSON::fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WebCommandEnabled of TypeNativeDataJSON is not true for false.");
          }
      }
    setWebCommandEnabled(the_bool);
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasRequestKindList(false),
        flagHasPOSList(false),
        flagHasWasSpelled(false),
        flagHasSpellingAttempt(false),
        flagHasDictionaryInfo(false),
        flagHasWebCommandEnabled(false)
  {
  }

DictionaryCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasRequestKindList)
      {
        for (size_t num13 = 0; num13 < storeRequestKindList.size(); ++num13)
          {
            storeRequestKindList[num13]->remove_reference();
          }
      }
    if (flagHasPOSList)
      {
        for (size_t num14 = 0; num14 < storePOSList.size(); ++num14)
          {
            storePOSList[num14]->remove_reference();
          }
      }
    if (flagHasDictionaryInfo)
      {
        for (size_t num15 = 0; num15 < storeDictionaryInfo.size(); ++num15)
          {
            storeDictionaryInfo[num15]->remove_reference();
          }
      }
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasRequestKindList(void) const
  {
    return flagHasRequestKindList;
  }

size_t DictionaryCommandJSON::TypeNativeDataJSON::countOfRequestKindList(void) const
  {
    assert(flagHasRequestKindList);
    return storeRequestKindList.size();
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfRequestKindList(size_t element_num)
  {
    assert(flagHasRequestKindList);
    return storeRequestKindList[element_num];
  }

const DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfRequestKindList(size_t element_num) const
  {
    assert(flagHasRequestKindList);
    return storeRequestKindList[element_num];
  }

std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getRequestKindList(void)
  {
    assert(flagHasRequestKindList);
    return storeRequestKindList;
  }

const std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getRequestKindList(void) const
  {
    assert(flagHasRequestKindList);
    return storeRequestKindList;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasPOSList(void) const
  {
    return flagHasPOSList;
  }

size_t DictionaryCommandJSON::TypeNativeDataJSON::countOfPOSList(void) const
  {
    assert(flagHasPOSList);
    return storePOSList.size();
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfPOSList(size_t element_num)
  {
    assert(flagHasPOSList);
    return storePOSList[element_num];
  }

const DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfPOSList(size_t element_num) const
  {
    assert(flagHasPOSList);
    return storePOSList[element_num];
  }

std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getPOSList(void)
  {
    assert(flagHasPOSList);
    return storePOSList;
  }

const std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getPOSList(void) const
  {
    assert(flagHasPOSList);
    return storePOSList;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasWasSpelled(void) const
  {
    return flagHasWasSpelled;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::getWasSpelled(void)
  {
    assert(flagHasWasSpelled);
    return storeWasSpelled;
  }

const bool DictionaryCommandJSON::TypeNativeDataJSON::getWasSpelled(void) const
  {
    assert(flagHasWasSpelled);
    return storeWasSpelled;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasSpellingAttempt(void) const
  {
    return flagHasSpellingAttempt;
  }

std::string DictionaryCommandJSON::TypeNativeDataJSON::getSpellingAttempt(void)
  {
    assert(flagHasSpellingAttempt);
    return storeSpellingAttempt;
  }

const std::string DictionaryCommandJSON::TypeNativeDataJSON::getSpellingAttempt(void) const
  {
    assert(flagHasSpellingAttempt);
    return storeSpellingAttempt;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasDictionaryInfo(void) const
  {
    return flagHasDictionaryInfo;
  }

size_t DictionaryCommandJSON::TypeNativeDataJSON::countOfDictionaryInfo(void) const
  {
    assert(flagHasDictionaryInfo);
    return storeDictionaryInfo.size();
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfDictionaryInfo(size_t element_num)
  {
    assert(flagHasDictionaryInfo);
    return storeDictionaryInfo[element_num];
  }

const DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON * DictionaryCommandJSON::TypeNativeDataJSON::elementOfDictionaryInfo(size_t element_num) const
  {
    assert(flagHasDictionaryInfo);
    return storeDictionaryInfo[element_num];
  }

std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getDictionaryInfo(void)
  {
    assert(flagHasDictionaryInfo);
    return storeDictionaryInfo;
  }

const std::vector< DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON * > DictionaryCommandJSON::TypeNativeDataJSON::getDictionaryInfo(void) const
  {
    assert(flagHasDictionaryInfo);
    return storeDictionaryInfo;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::hasWebCommandEnabled(void) const
  {
    return flagHasWebCommandEnabled;
  }

bool DictionaryCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void)
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

const bool DictionaryCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void) const
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

DictionaryCommandJSON::DictionaryCommandJSON(const DictionaryCommandJSON &)
  {
    assert(false);
  }

DictionaryCommandJSON &DictionaryCommandJSON::operator=(const DictionaryCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DictionaryCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONArrayValue *generated_array_1_NativeData = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeNativeData.size(); ++num1)
      {
        JSONValueHandler handler_NativeData;
        storeNativeData[num1]->write_as_json(&handler_NativeData);
        handler_NativeData.result->add_reference();
        generated_array_1_NativeData->appendComponent(handler_NativeData.result);
        handler_NativeData.result->remove_reference();
      }
    return generated_array_1_NativeData;
  }

void DictionaryCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NativeData of DictionaryCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field NativeData of DictionaryCommandJSON has too few elements.");
    std::vector< TypeNativeDataJSON * > vector_NativeData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NativeData1[num1] = convert_classy;
      }
    assert(vector_NativeData1.size() >= 1);
    initNativeData();
    for (size_t num8 = 0; num8 < vector_NativeData1.size(); ++num8)
        appendNativeData(vector_NativeData1[num8]);
    for (size_t num1 = 0; num1 < vector_NativeData1.size(); ++num1)
      {
        vector_NativeData1[num1]->remove_reference();
      }
  }

DictionaryCommandJSON::DictionaryCommandJSON(void) :
        flagHasNativeData(false)
  {
  }

DictionaryCommandJSON::~DictionaryCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        for (size_t num22 = 0; num22 < storeNativeData.size(); ++num22)
          {
            storeNativeData[num22]->remove_reference();
          }
      }
  }

const char *DictionaryCommandJSON::getCommandKind(void) const
  {
    return "DictionaryCommand";
  }

bool DictionaryCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

size_t DictionaryCommandJSON::countOfNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData.size();
  }

DictionaryCommandJSON::TypeNativeDataJSON * DictionaryCommandJSON::elementOfNativeData(size_t element_num)
  {
    assert(flagHasNativeData);
    return storeNativeData[element_num];
  }

const DictionaryCommandJSON::TypeNativeDataJSON * DictionaryCommandJSON::elementOfNativeData(size_t element_num) const
  {
    assert(flagHasNativeData);
    return storeNativeData[element_num];
  }

std::vector< DictionaryCommandJSON::TypeNativeDataJSON * > DictionaryCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const std::vector< DictionaryCommandJSON::TypeNativeDataJSON * > DictionaryCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON *DictionaryCommandJSON::TypeNativeDataJSON::TypeRequestKindListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeRequestKindListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeRequestKindListJSON>, TypeRequestKindListJSON *, bool> generator("Type TypeRequestKindList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON *DictionaryCommandJSON::TypeNativeDataJSON::TypePOSListJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePOSListJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePOSListJSON>, TypePOSListJSON *, bool> generator("Type TypePOSList", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON *DictionaryCommandJSON::TypeNativeDataJSON::TypeDictionaryInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDictionaryInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDictionaryInfoJSON>, TypeDictionaryInfoJSON *, bool> generator("Type TypeDictionaryInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DictionaryCommandJSON::TypeNativeDataJSON *DictionaryCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DictionaryCommandJSON *DictionaryCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DictionaryCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DictionaryCommandJSON>, DictionaryCommandJSON *, bool> generator("Type DictionaryCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
