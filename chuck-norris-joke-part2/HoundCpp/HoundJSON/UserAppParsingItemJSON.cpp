/* file "UserAppParsingItemJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserAppParsingItemJSON.h"

#include "UserAppParsingItemJSON.h"


UserAppParsingItemJSON::TypePlatform::TypePlatform(void)
  {
  }

UserAppParsingItemJSON::TypePlatform::TypePlatform(const TypePlatform &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UserAppParsingItemJSON::TypePlatform::TypePlatform(TypePlatformKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UserAppParsingItemJSON::TypePlatform::operator==(const TypePlatform &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UserAppParsingItemJSON::TypePlatform::operator!=(const TypePlatform &other) const
  {
    return !(operator==(other));
  }

bool UserAppParsingItemJSON::TypePlatform::operator<(const TypePlatform &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UserAppParsingItemJSON::TypePlatform::operator>(const TypePlatform &other) const
  {
    return other.operator<(*this);
  }

bool UserAppParsingItemJSON::TypePlatform::operator>=(const TypePlatform &other) const
  {
    return !(operator<(other));
  }

bool UserAppParsingItemJSON::TypePlatform::operator<=(const TypePlatform &other) const
  {
    return !(other.operator<(*this));
  }

UserAppParsingItemJSON::TypePlatformKnownValues UserAppParsingItemJSON::stringToPlatform(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'A':
            if (strcmp(&(chars[1]), "ndroid") == 0)
                return Platform_Android;
            break;
        case 'i':
            if (strcmp(&(chars[1]), "OS") == 0)
                return Platform_iOS;
            break;
        default:
            break;
      }
    return Platform__none;
  }

const char *UserAppParsingItemJSON::stringFromPlatform(TypePlatformKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Platform_Android:
            return "Android";
        case Platform_iOS:
            return "iOS";
        default:
            assert(false);
            return NULL;
      }
  }

UserAppParsingItemJSON::UserAppParsingItemJSON(const UserAppParsingItemJSON &)
  {
    assert(false);
  }

UserAppParsingItemJSON &UserAppParsingItemJSON::operator=(const UserAppParsingItemJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserAppParsingItemJSON::fromJSONIndex(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Index of UserAppParsingItemJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Index of UserAppParsingItemJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIndex(extracted_integer);
  }

void UserAppParsingItemJSON::fromJSONPlatform(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Platform of UserAppParsingItemJSON is not a string.");
    TypePlatform the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'A':
            if (strcmp(&(json_string->getData()[1]), "ndroid") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Platform_Android;
                    goto open_enum_is_done;
                  }
            break;
        case 'i':
            if (strcmp(&(json_string->getData()[1]), "OS") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Platform_iOS;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setPlatform(the_open_enum);
  }

void UserAppParsingItemJSON::fromJSONAppID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppID of UserAppParsingItemJSON is not a string.");
    setAppID(std::string(json_string->getData()));
  }

void UserAppParsingItemJSON::fromJSONAliasMatched(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AliasMatched of UserAppParsingItemJSON is not true for false.");
          }
      }
    setAliasMatched(the_bool);
  }

void UserAppParsingItemJSON::fromJSONPopularityMeasure(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field PopularityMeasure of UserAppParsingItemJSON is not a number.");
          }
      }
    setPopularityMeasureText(the_rational_text);
  }

UserAppParsingItemJSON::UserAppParsingItemJSON(void) :
        flagHasIndex(false),
        flagHasPlatform(false),
        flagHasAppID(false),
        flagHasAliasMatched(false),
        flagHasPopularityMeasure(false)
  {
    storePopularityMeasure = 1;
    extraIndex = create_string_index();
  }

UserAppParsingItemJSON::~UserAppParsingItemJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UserAppParsingItemJSON::hasIndex(void) const
  {
    return flagHasIndex;
  }

OInteger UserAppParsingItemJSON::getIndex(void)
  {
    assert(flagHasIndex);
    return storeIndex;
  }

const OInteger UserAppParsingItemJSON::getIndex(void) const
  {
    assert(flagHasIndex);
    return storeIndex;
  }

bool UserAppParsingItemJSON::hasPlatform(void) const
  {
    return flagHasPlatform;
  }

UserAppParsingItemJSON::TypePlatform UserAppParsingItemJSON::getPlatform(void)
  {
    assert(flagHasPlatform);
    return storePlatform;
  }

const UserAppParsingItemJSON::TypePlatform UserAppParsingItemJSON::getPlatform(void) const
  {
    assert(flagHasPlatform);
    return storePlatform;
  }

const char *UserAppParsingItemJSON::getPlatformAsChars(void) const
  {
    TypePlatform result = getPlatform();
    if (result.in_known_list)
        return stringFromPlatform(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UserAppParsingItemJSON::getPlatformAsString(void) const
  {
    return getPlatformAsChars();
  }

bool UserAppParsingItemJSON::hasAppID(void) const
  {
    return flagHasAppID;
  }

std::string UserAppParsingItemJSON::getAppID(void)
  {
    assert(flagHasAppID);
    return storeAppID;
  }

const std::string UserAppParsingItemJSON::getAppID(void) const
  {
    assert(flagHasAppID);
    return storeAppID;
  }

bool UserAppParsingItemJSON::hasAliasMatched(void) const
  {
    return flagHasAliasMatched;
  }

bool UserAppParsingItemJSON::getAliasMatched(void)
  {
    assert(flagHasAliasMatched);
    return storeAliasMatched;
  }

const bool UserAppParsingItemJSON::getAliasMatched(void) const
  {
    assert(flagHasAliasMatched);
    return storeAliasMatched;
  }

bool UserAppParsingItemJSON::hasPopularityMeasure(void) const
  {
    return flagHasPopularityMeasure;
  }

double UserAppParsingItemJSON::getPopularityMeasure(void)
  {
    if (textStorePopularityMeasure != "")
      {
        return atof(textStorePopularityMeasure.c_str());
      }
    return storePopularityMeasure;
  }

const double UserAppParsingItemJSON::getPopularityMeasure(void) const
  {
    if (textStorePopularityMeasure != "")
      {
        return atof(textStorePopularityMeasure.c_str());
      }
    return storePopularityMeasure;
  }

std::string UserAppParsingItemJSON::getPopularityMeasureAsText(void) const
  {
    if (textStorePopularityMeasure == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storePopularityMeasure);
        return &(buffer[0]);
      }
    else
      {
        return (textStorePopularityMeasure);
      }
  }

char UserAppParsingItemJSON::Generator::lowerBoundIndex[] = "0";
UserAppParsingItemJSON *UserAppParsingItemJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserAppParsingItemJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserAppParsingItemJSON>, UserAppParsingItemJSON *, bool> generator("Type UserAppParsingItem", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
