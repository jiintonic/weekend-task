/* file "AppSpecJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AppSpecJSON.h"

#include "AppSpecJSON.h"


AppSpecJSON::TypePlatform::TypePlatform(void)
  {
  }

AppSpecJSON::TypePlatform::TypePlatform(const TypePlatform &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

AppSpecJSON::TypePlatform::TypePlatform(TypePlatformKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool AppSpecJSON::TypePlatform::operator==(const TypePlatform &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool AppSpecJSON::TypePlatform::operator!=(const TypePlatform &other) const
  {
    return !(operator==(other));
  }

bool AppSpecJSON::TypePlatform::operator<(const TypePlatform &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool AppSpecJSON::TypePlatform::operator>(const TypePlatform &other) const
  {
    return other.operator<(*this);
  }

bool AppSpecJSON::TypePlatform::operator>=(const TypePlatform &other) const
  {
    return !(operator<(other));
  }

bool AppSpecJSON::TypePlatform::operator<=(const TypePlatform &other) const
  {
    return !(other.operator<(*this));
  }

AppSpecJSON::TypePlatformKnownValues AppSpecJSON::stringToPlatform(const char *chars)
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

const char *AppSpecJSON::stringFromPlatform(TypePlatformKnownValues the_enum)
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

AppSpecJSON::AppSpecJSON(const AppSpecJSON &)
  {
    assert(false);
  }

AppSpecJSON &AppSpecJSON::operator=(const AppSpecJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AppSpecJSON::fromJSONPlatform(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Platform of AppSpecJSON is not a string.");
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

void AppSpecJSON::fromJSONAppID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppID of AppSpecJSON is not a string.");
    setAppID(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONLaunchURLScheme(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LaunchURLScheme of AppSpecJSON is not a string.");
    setLaunchURLScheme(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONAppName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppName of AppSpecJSON is not a string.");
    setAppName(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONAppSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppSpokenName of AppSpecJSON is not a string.");
    setAppSpokenName(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONAliases(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Aliases of AppSpecJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_Aliases1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Aliases of AppSpecJSON is not a string.");
        vector_Aliases1[num1] = std::string(json_string->getData());
      }
    initAliases();
    for (size_t num2 = 0; num2 < vector_Aliases1.size(); ++num2)
        appendAliases(vector_Aliases1[num2]);
    for (size_t num1 = 0; num1 < vector_Aliases1.size(); ++num1)
      {
      }
  }

void AppSpecJSON::fromJSONPopularityMeasure(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PopularityMeasure of AppSpecJSON is not a number.");
          }
      }
    setPopularityMeasureText(the_rational_text);
  }

void AppSpecJSON::fromJSONCompanyName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CompanyName of AppSpecJSON is not a string.");
    setCompanyName(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONAppPrice(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AppPrice of AppSpecJSON is not a number.");
          }
      }
    setAppPriceText(the_rational_text);
  }

void AppSpecJSON::fromJSONAppRating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AppRating of AppSpecJSON is not a number.");
          }
      }
    setAppRatingText(the_rational_text);
  }

void AppSpecJSON::fromJSONAppURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppURL of AppSpecJSON is not a string.");
    setAppURL(std::string(json_string->getData()));
  }

void AppSpecJSON::fromJSONAppIconURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AppIconURL of AppSpecJSON is not a string.");
    setAppIconURL(std::string(json_string->getData()));
  }

AppSpecJSON::AppSpecJSON(void) :
        flagHasPlatform(false),
        flagHasAppID(false),
        flagHasLaunchURLScheme(false),
        flagHasAppName(false),
        flagHasAppSpokenName(false),
        flagHasAliases(false),
        flagHasPopularityMeasure(false),
        flagHasCompanyName(false),
        flagHasAppPrice(false),
        flagHasAppRating(false),
        flagHasAppURL(false),
        flagHasAppIconURL(false)
  {
    storePopularityMeasure = 1;
    extraIndex = create_string_index();
  }

AppSpecJSON::~AppSpecJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AppSpecJSON::hasPlatform(void) const
  {
    return flagHasPlatform;
  }

AppSpecJSON::TypePlatform AppSpecJSON::getPlatform(void)
  {
    assert(flagHasPlatform);
    return storePlatform;
  }

const AppSpecJSON::TypePlatform AppSpecJSON::getPlatform(void) const
  {
    assert(flagHasPlatform);
    return storePlatform;
  }

const char *AppSpecJSON::getPlatformAsChars(void) const
  {
    TypePlatform result = getPlatform();
    if (result.in_known_list)
        return stringFromPlatform(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string AppSpecJSON::getPlatformAsString(void) const
  {
    return getPlatformAsChars();
  }

bool AppSpecJSON::hasAppID(void) const
  {
    return flagHasAppID;
  }

std::string AppSpecJSON::getAppID(void)
  {
    assert(flagHasAppID);
    return storeAppID;
  }

const std::string AppSpecJSON::getAppID(void) const
  {
    assert(flagHasAppID);
    return storeAppID;
  }

bool AppSpecJSON::hasLaunchURLScheme(void) const
  {
    return flagHasLaunchURLScheme;
  }

std::string AppSpecJSON::getLaunchURLScheme(void)
  {
    assert(flagHasLaunchURLScheme);
    return storeLaunchURLScheme;
  }

const std::string AppSpecJSON::getLaunchURLScheme(void) const
  {
    assert(flagHasLaunchURLScheme);
    return storeLaunchURLScheme;
  }

bool AppSpecJSON::hasAppName(void) const
  {
    return flagHasAppName;
  }

std::string AppSpecJSON::getAppName(void)
  {
    assert(flagHasAppName);
    return storeAppName;
  }

const std::string AppSpecJSON::getAppName(void) const
  {
    assert(flagHasAppName);
    return storeAppName;
  }

bool AppSpecJSON::hasAppSpokenName(void) const
  {
    return flagHasAppSpokenName;
  }

std::string AppSpecJSON::getAppSpokenName(void)
  {
    assert(flagHasAppSpokenName);
    return storeAppSpokenName;
  }

const std::string AppSpecJSON::getAppSpokenName(void) const
  {
    assert(flagHasAppSpokenName);
    return storeAppSpokenName;
  }

bool AppSpecJSON::hasAliases(void) const
  {
    return flagHasAliases;
  }

size_t AppSpecJSON::countOfAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases.size();
  }

std::string AppSpecJSON::elementOfAliases(size_t element_num)
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

const std::string AppSpecJSON::elementOfAliases(size_t element_num) const
  {
    assert(flagHasAliases);
    return storeAliases[element_num];
  }

std::vector< std::string > AppSpecJSON::getAliases(void)
  {
    assert(flagHasAliases);
    return storeAliases;
  }

const std::vector< std::string > AppSpecJSON::getAliases(void) const
  {
    assert(flagHasAliases);
    return storeAliases;
  }

bool AppSpecJSON::hasPopularityMeasure(void) const
  {
    return flagHasPopularityMeasure;
  }

double AppSpecJSON::getPopularityMeasure(void)
  {
    if (textStorePopularityMeasure != "")
      {
        return atof(textStorePopularityMeasure.c_str());
      }
    return storePopularityMeasure;
  }

const double AppSpecJSON::getPopularityMeasure(void) const
  {
    if (textStorePopularityMeasure != "")
      {
        return atof(textStorePopularityMeasure.c_str());
      }
    return storePopularityMeasure;
  }

std::string AppSpecJSON::getPopularityMeasureAsText(void) const
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

bool AppSpecJSON::hasCompanyName(void) const
  {
    return flagHasCompanyName;
  }

std::string AppSpecJSON::getCompanyName(void)
  {
    assert(flagHasCompanyName);
    return storeCompanyName;
  }

const std::string AppSpecJSON::getCompanyName(void) const
  {
    assert(flagHasCompanyName);
    return storeCompanyName;
  }

bool AppSpecJSON::hasAppPrice(void) const
  {
    return flagHasAppPrice;
  }

double AppSpecJSON::getAppPrice(void)
  {
    assert(flagHasAppPrice);
    if (textStoreAppPrice != "")
      {
        return atof(textStoreAppPrice.c_str());
      }
    return storeAppPrice;
  }

const double AppSpecJSON::getAppPrice(void) const
  {
    assert(flagHasAppPrice);
    if (textStoreAppPrice != "")
      {
        return atof(textStoreAppPrice.c_str());
      }
    return storeAppPrice;
  }

std::string AppSpecJSON::getAppPriceAsText(void) const
  {
    assert(flagHasAppPrice);
    if (textStoreAppPrice == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAppPrice);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAppPrice);
      }
  }

bool AppSpecJSON::hasAppRating(void) const
  {
    return flagHasAppRating;
  }

double AppSpecJSON::getAppRating(void)
  {
    assert(flagHasAppRating);
    if (textStoreAppRating != "")
      {
        return atof(textStoreAppRating.c_str());
      }
    return storeAppRating;
  }

const double AppSpecJSON::getAppRating(void) const
  {
    assert(flagHasAppRating);
    if (textStoreAppRating != "")
      {
        return atof(textStoreAppRating.c_str());
      }
    return storeAppRating;
  }

std::string AppSpecJSON::getAppRatingAsText(void) const
  {
    assert(flagHasAppRating);
    if (textStoreAppRating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAppRating);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAppRating);
      }
  }

bool AppSpecJSON::hasAppURL(void) const
  {
    return flagHasAppURL;
  }

std::string AppSpecJSON::getAppURL(void)
  {
    assert(flagHasAppURL);
    return storeAppURL;
  }

const std::string AppSpecJSON::getAppURL(void) const
  {
    assert(flagHasAppURL);
    return storeAppURL;
  }

bool AppSpecJSON::hasAppIconURL(void) const
  {
    return flagHasAppIconURL;
  }

std::string AppSpecJSON::getAppIconURL(void)
  {
    assert(flagHasAppIconURL);
    return storeAppIconURL;
  }

const std::string AppSpecJSON::getAppIconURL(void) const
  {
    assert(flagHasAppIconURL);
    return storeAppIconURL;
  }

AppSpecJSON *AppSpecJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AppSpecJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AppSpecJSON>, AppSpecJSON *, bool> generator("Type AppSpec", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
