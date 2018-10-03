/* file "LocalResultJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "LocalResultJSON.h"

#include "LocalResultJSON.h"


LocalResultJSON::TypePhoneJSON::TypePhoneJSON(const TypePhoneJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypePhoneJSON &LocalResultJSON::TypePhoneJSON::operator=(const TypePhoneJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypePhoneJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypePhoneJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void LocalResultJSON::TypePhoneJSON::fromJSONNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Number of TypePhoneJSON is not a string.");
    setNumber(std::string(json_string->getData()));
  }

LocalResultJSON::TypePhoneJSON::TypePhoneJSON(void) :
        flagHasLabel(false),
        flagHasNumber(false)
  {
  }

LocalResultJSON::TypePhoneJSON::~TypePhoneJSON(void)
  {
  }

bool LocalResultJSON::TypePhoneJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string LocalResultJSON::TypePhoneJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string LocalResultJSON::TypePhoneJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool LocalResultJSON::TypePhoneJSON::hasNumber(void) const
  {
    return flagHasNumber;
  }

std::string LocalResultJSON::TypePhoneJSON::getNumber(void)
  {
    assert(flagHasNumber);
    return storeNumber;
  }

const std::string LocalResultJSON::TypePhoneJSON::getNumber(void) const
  {
    assert(flagHasNumber);
    return storeNumber;
  }

LocalResultJSON::TypeLinksJSON::TypeType LocalResultJSON::TypeLinksJSON::stringToType(const char *chars)
  {
    if (strcmp(chars, "Web") == 0)
        return Type_Web;
    throw("The value for field `Type' is not one of the legal values.");
  }

const char *LocalResultJSON::TypeLinksJSON::stringFromType(TypeType the_enum)
  {
    switch (the_enum)
      {
        case Type_Web:
            return "Web";
        default:
            assert(false);
            return NULL;
      }
  }

LocalResultJSON::TypeLinksJSON::TypeLinksJSON(const TypeLinksJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeLinksJSON &LocalResultJSON::TypeLinksJSON::operator=(const TypeLinksJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeLinksJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of TypeLinksJSON is not a string.");
    if (!(strcmp(json_string->getData(), "Web") == 0))
        throw("The value for field Type of TypeLinksJSON is not `Web'.");
    setType();
  }

void LocalResultJSON::TypeLinksJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypeLinksJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeLinksJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of TypeLinksJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

LocalResultJSON::TypeLinksJSON::TypeLinksJSON(void) :
        flagHasType(false),
        flagHasLabel(false),
        flagHasURL(false)
  {
  }

LocalResultJSON::TypeLinksJSON::~TypeLinksJSON(void)
  {
  }

bool LocalResultJSON::TypeLinksJSON::hasType(void) const
  {
    return flagHasType;
  }

LocalResultJSON::TypeLinksJSON::TypeType LocalResultJSON::TypeLinksJSON::getType(void)
  {
    assert(flagHasType);
    return Type_Web;
  }

const LocalResultJSON::TypeLinksJSON::TypeType LocalResultJSON::TypeLinksJSON::getType(void) const
  {
    assert(flagHasType);
    return Type_Web;
  }

const char *LocalResultJSON::TypeLinksJSON::getTypeAsChars(void) const
  {
    return stringFromType(getType());
  }

std::string LocalResultJSON::TypeLinksJSON::getTypeAsString(void) const
  {
    return stringFromType(getType());
  }

bool LocalResultJSON::TypeLinksJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string LocalResultJSON::TypeLinksJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string LocalResultJSON::TypeLinksJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool LocalResultJSON::TypeLinksJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string LocalResultJSON::TypeLinksJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string LocalResultJSON::TypeLinksJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

LocalResultJSON::TypePhotosJSON::TypePhotosJSON(const TypePhotosJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypePhotosJSON &LocalResultJSON::TypePhotosJSON::operator=(const TypePhotosJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypePhotosJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of TypePhotosJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void LocalResultJSON::TypePhotosJSON::fromJSONThumbURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ThumbURL of TypePhotosJSON is not a string.");
    setThumbURL(std::string(json_string->getData()));
  }

LocalResultJSON::TypePhotosJSON::TypePhotosJSON(void) :
        flagHasURL(false),
        flagHasThumbURL(false)
  {
    extraIndex = create_string_index();
  }

LocalResultJSON::TypePhotosJSON::~TypePhotosJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalResultJSON::TypePhotosJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string LocalResultJSON::TypePhotosJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string LocalResultJSON::TypePhotosJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool LocalResultJSON::TypePhotosJSON::hasThumbURL(void) const
  {
    return flagHasThumbURL;
  }

std::string LocalResultJSON::TypePhotosJSON::getThumbURL(void)
  {
    assert(flagHasThumbURL);
    return storeThumbURL;
  }

const std::string LocalResultJSON::TypePhotosJSON::getThumbURL(void) const
  {
    assert(flagHasThumbURL);
    return storeThumbURL;
  }

LocalResultJSON::TypeCategoriesJSON::TypeCategoriesJSON(const TypeCategoriesJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeCategoriesJSON &LocalResultJSON::TypeCategoriesJSON::operator=(const TypeCategoriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeCategoriesJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    YelpCategoryAliasJSON *convert_classy = YelpCategoryAliasJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlias(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::TypeCategoriesJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    YelpCategoryTitleJSON *convert_classy = YelpCategoryTitleJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setTitle(convert_classy);
    convert_classy->remove_reference();
  }

LocalResultJSON::TypeCategoriesJSON::TypeCategoriesJSON(void) :
        flagHasAlias(false),
        flagHasTitle(false)
  {
  }

LocalResultJSON::TypeCategoriesJSON::~TypeCategoriesJSON(void)
  {
    if (flagHasAlias)
      {
        storeAlias->remove_reference();
      }
    if (flagHasTitle)
      {
        storeTitle->remove_reference();
      }
  }

bool LocalResultJSON::TypeCategoriesJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

YelpCategoryAliasJSON * LocalResultJSON::TypeCategoriesJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const YelpCategoryAliasJSON * LocalResultJSON::TypeCategoriesJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

YelpCategoryAliasJSON::TypeValue LocalResultJSON::TypeCategoriesJSON::getAliasValue(void)
  {
    return getAlias()->getValue();
  }

const YelpCategoryAliasJSON::TypeValue LocalResultJSON::TypeCategoriesJSON::getAliasValue(void) const
  {
    return getAlias()->getValue();
  }

const char *LocalResultJSON::TypeCategoriesJSON::getAliasAsChars(void) const
  {
    return getAlias()->getValueAsChars();
  }

std::string LocalResultJSON::TypeCategoriesJSON::getAliasAsString(void) const
  {
    return getAlias()->getValueAsString();
  }

bool LocalResultJSON::TypeCategoriesJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

YelpCategoryTitleJSON * LocalResultJSON::TypeCategoriesJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const YelpCategoryTitleJSON * LocalResultJSON::TypeCategoriesJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

std::string LocalResultJSON::TypeCategoriesJSON::getTitleValue(void)
  {
    return getTitle()->getValue();
  }

const std::string LocalResultJSON::TypeCategoriesJSON::getTitleValue(void) const
  {
    return getTitle()->getValue();
  }

LocalResultJSON::TypeDistanceFromReferenceJSON::TypeUnit LocalResultJSON::TypeDistanceFromReferenceJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'k':
            if (strcmp(&(chars[1]), "m") == 0)
                return Unit_km;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "i") == 0)
                return Unit_mi;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *LocalResultJSON::TypeDistanceFromReferenceJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_km:
            return "km";
        case Unit_mi:
            return "mi";
        default:
            assert(false);
            return NULL;
      }
  }

LocalResultJSON::TypeDistanceFromReferenceJSON::TypeDistanceFromReferenceJSON(const TypeDistanceFromReferenceJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeDistanceFromReferenceJSON &LocalResultJSON::TypeDistanceFromReferenceJSON::operator=(const TypeDistanceFromReferenceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeDistanceFromReferenceJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypeDistanceFromReferenceJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

void LocalResultJSON::TypeDistanceFromReferenceJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of TypeDistanceFromReferenceJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'k':
            if (strcmp(&(json_string->getData()[1]), "m") == 0)
                  {
                    the_enum = Unit_km;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "i") == 0)
                  {
                    the_enum = Unit_mi;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of TypeDistanceFromReferenceJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

LocalResultJSON::TypeDistanceFromReferenceJSON::TypeDistanceFromReferenceJSON(void) :
        flagHasValue(false),
        flagHasUnit(false)
  {
  }

LocalResultJSON::TypeDistanceFromReferenceJSON::~TypeDistanceFromReferenceJSON(void)
  {
  }

bool LocalResultJSON::TypeDistanceFromReferenceJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double LocalResultJSON::TypeDistanceFromReferenceJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double LocalResultJSON::TypeDistanceFromReferenceJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string LocalResultJSON::TypeDistanceFromReferenceJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

bool LocalResultJSON::TypeDistanceFromReferenceJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

LocalResultJSON::TypeDistanceFromReferenceJSON::TypeUnit LocalResultJSON::TypeDistanceFromReferenceJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const LocalResultJSON::TypeDistanceFromReferenceJSON::TypeUnit LocalResultJSON::TypeDistanceFromReferenceJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const char *LocalResultJSON::TypeDistanceFromReferenceJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string LocalResultJSON::TypeDistanceFromReferenceJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

LocalResultJSON::TypeDistanceFromUserJSON::TypeUnit LocalResultJSON::TypeDistanceFromUserJSON::stringToUnit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'k':
            if (strcmp(&(chars[1]), "m") == 0)
                return Unit_km;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "i") == 0)
                return Unit_mi;
            break;
        default:
            break;
      }
    throw("The value for field `Unit' is not one of the legal values.");
  }

const char *LocalResultJSON::TypeDistanceFromUserJSON::stringFromUnit(TypeUnit the_enum)
  {
    switch (the_enum)
      {
        case Unit_km:
            return "km";
        case Unit_mi:
            return "mi";
        default:
            assert(false);
            return NULL;
      }
  }

LocalResultJSON::TypeDistanceFromUserJSON::TypeDistanceFromUserJSON(const TypeDistanceFromUserJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeDistanceFromUserJSON &LocalResultJSON::TypeDistanceFromUserJSON::operator=(const TypeDistanceFromUserJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeDistanceFromUserJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of TypeDistanceFromUserJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

void LocalResultJSON::TypeDistanceFromUserJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Unit of TypeDistanceFromUserJSON is not a string.");
    TypeUnit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'k':
            if (strcmp(&(json_string->getData()[1]), "m") == 0)
                  {
                    the_enum = Unit_km;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "i") == 0)
                  {
                    the_enum = Unit_mi;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Unit of TypeDistanceFromUserJSON is not one of the legal strings.");
  enum_is_done:;
    setUnit(the_enum);
  }

LocalResultJSON::TypeDistanceFromUserJSON::TypeDistanceFromUserJSON(void) :
        flagHasValue(false),
        flagHasUnit(false)
  {
  }

LocalResultJSON::TypeDistanceFromUserJSON::~TypeDistanceFromUserJSON(void)
  {
  }

bool LocalResultJSON::TypeDistanceFromUserJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double LocalResultJSON::TypeDistanceFromUserJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double LocalResultJSON::TypeDistanceFromUserJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string LocalResultJSON::TypeDistanceFromUserJSON::getValueAsText(void) const
  {
    assert(flagHasValue);
    if (textStoreValue == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeValue);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreValue);
      }
  }

bool LocalResultJSON::TypeDistanceFromUserJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

LocalResultJSON::TypeDistanceFromUserJSON::TypeUnit LocalResultJSON::TypeDistanceFromUserJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const LocalResultJSON::TypeDistanceFromUserJSON::TypeUnit LocalResultJSON::TypeDistanceFromUserJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const char *LocalResultJSON::TypeDistanceFromUserJSON::getUnitAsChars(void) const
  {
    return stringFromUnit(getUnit());
  }

std::string LocalResultJSON::TypeDistanceFromUserJSON::getUnitAsString(void) const
  {
    return stringFromUnit(getUnit());
  }

LocalResultJSON::TypeReviewsJSON::TypeUserJSON::TypeUserJSON(const TypeUserJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeReviewsJSON::TypeUserJSON &LocalResultJSON::TypeReviewsJSON::TypeUserJSON::operator=(const TypeUserJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeReviewsJSON::TypeUserJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of TypeUserJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::TypeUserJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of TypeUserJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::TypeUserJSON::fromJSONPhotoURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PhotoURL of TypeUserJSON is not a string.");
    setPhotoURL(std::string(json_string->getData()));
  }

LocalResultJSON::TypeReviewsJSON::TypeUserJSON::TypeUserJSON(void) :
        flagHasName(false),
        flagHasID(false),
        flagHasPhotoURL(false)
  {
  }

LocalResultJSON::TypeReviewsJSON::TypeUserJSON::~TypeUserJSON(void)
  {
  }

bool LocalResultJSON::TypeReviewsJSON::TypeUserJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool LocalResultJSON::TypeReviewsJSON::TypeUserJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool LocalResultJSON::TypeReviewsJSON::TypeUserJSON::hasPhotoURL(void) const
  {
    return flagHasPhotoURL;
  }

std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getPhotoURL(void)
  {
    assert(flagHasPhotoURL);
    return storePhotoURL;
  }

const std::string LocalResultJSON::TypeReviewsJSON::TypeUserJSON::getPhotoURL(void) const
  {
    assert(flagHasPhotoURL);
    return storePhotoURL;
  }

LocalResultJSON::TypeReviewsJSON::TypeReviewsJSON(const TypeReviewsJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeReviewsJSON &LocalResultJSON::TypeReviewsJSON::operator=(const TypeReviewsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONRating(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rating of TypeReviewsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rating of TypeReviewsJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setRating(extracted_integer);
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONLanguage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Language of TypeReviewsJSON is not a string.");
    setLanguage(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONCreated(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Created of TypeReviewsJSON is not a string.");
    setCreated(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of TypeReviewsJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeReviewsJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeReviewsJSON::fromJSONUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUserJSON *convert_classy = TypeUserJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUser(convert_classy);
    convert_classy->remove_reference();
  }

LocalResultJSON::TypeReviewsJSON::TypeReviewsJSON(void) :
        flagHasRating(false),
        flagHasLanguage(false),
        flagHasCreated(false),
        flagHasURL(false),
        flagHasText(false),
        flagHasUser(false)
  {
  }

LocalResultJSON::TypeReviewsJSON::~TypeReviewsJSON(void)
  {
    if (flagHasUser)
      {
        storeUser->remove_reference();
      }
  }

bool LocalResultJSON::TypeReviewsJSON::hasRating(void) const
  {
    return flagHasRating;
  }

uint8_t LocalResultJSON::TypeReviewsJSON::getRating(void)
  {
    assert(flagHasRating);
    return storeRating;
  }

const uint8_t LocalResultJSON::TypeReviewsJSON::getRating(void) const
  {
    assert(flagHasRating);
    return storeRating;
  }

bool LocalResultJSON::TypeReviewsJSON::hasLanguage(void) const
  {
    return flagHasLanguage;
  }

std::string LocalResultJSON::TypeReviewsJSON::getLanguage(void)
  {
    assert(flagHasLanguage);
    return storeLanguage;
  }

const std::string LocalResultJSON::TypeReviewsJSON::getLanguage(void) const
  {
    assert(flagHasLanguage);
    return storeLanguage;
  }

bool LocalResultJSON::TypeReviewsJSON::hasCreated(void) const
  {
    return flagHasCreated;
  }

std::string LocalResultJSON::TypeReviewsJSON::getCreated(void)
  {
    assert(flagHasCreated);
    return storeCreated;
  }

const std::string LocalResultJSON::TypeReviewsJSON::getCreated(void) const
  {
    assert(flagHasCreated);
    return storeCreated;
  }

bool LocalResultJSON::TypeReviewsJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string LocalResultJSON::TypeReviewsJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string LocalResultJSON::TypeReviewsJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool LocalResultJSON::TypeReviewsJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string LocalResultJSON::TypeReviewsJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string LocalResultJSON::TypeReviewsJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

bool LocalResultJSON::TypeReviewsJSON::hasUser(void) const
  {
    return flagHasUser;
  }

LocalResultJSON::TypeReviewsJSON::TypeUserJSON * LocalResultJSON::TypeReviewsJSON::getUser(void)
  {
    assert(flagHasUser);
    return storeUser;
  }

const LocalResultJSON::TypeReviewsJSON::TypeUserJSON * LocalResultJSON::TypeReviewsJSON::getUser(void) const
  {
    assert(flagHasUser);
    return storeUser;
  }

LocalResultJSON::TypeHoursJSON::TypeHoursJSON(const TypeHoursJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeHoursJSON &LocalResultJSON::TypeHoursJSON::operator=(const TypeHoursJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeHoursJSON::fromJSONMonday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Monday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Monday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Monday1[num1] = convert_classy;
      }
    initMonday();
    for (size_t num16 = 0; num16 < vector_Monday1.size(); ++num16)
        appendMonday(vector_Monday1[num16]);
    for (size_t num1 = 0; num1 < vector_Monday1.size(); ++num1)
      {
        vector_Monday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONTuesday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Tuesday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Tuesday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Tuesday1[num1] = convert_classy;
      }
    initTuesday();
    for (size_t num17 = 0; num17 < vector_Tuesday1.size(); ++num17)
        appendTuesday(vector_Tuesday1[num17]);
    for (size_t num1 = 0; num1 < vector_Tuesday1.size(); ++num1)
      {
        vector_Tuesday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONWednesday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Wednesday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Wednesday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Wednesday1[num1] = convert_classy;
      }
    initWednesday();
    for (size_t num18 = 0; num18 < vector_Wednesday1.size(); ++num18)
        appendWednesday(vector_Wednesday1[num18]);
    for (size_t num1 = 0; num1 < vector_Wednesday1.size(); ++num1)
      {
        vector_Wednesday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONThursday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Thursday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Thursday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Thursday1[num1] = convert_classy;
      }
    initThursday();
    for (size_t num19 = 0; num19 < vector_Thursday1.size(); ++num19)
        appendThursday(vector_Thursday1[num19]);
    for (size_t num1 = 0; num1 < vector_Thursday1.size(); ++num1)
      {
        vector_Thursday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONFriday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Friday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Friday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Friday1[num1] = convert_classy;
      }
    initFriday();
    for (size_t num20 = 0; num20 < vector_Friday1.size(); ++num20)
        appendFriday(vector_Friday1[num20]);
    for (size_t num1 = 0; num1 < vector_Friday1.size(); ++num1)
      {
        vector_Friday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONSaturday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Saturday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Saturday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Saturday1[num1] = convert_classy;
      }
    initSaturday();
    for (size_t num21 = 0; num21 < vector_Saturday1.size(); ++num21)
        appendSaturday(vector_Saturday1[num21]);
    for (size_t num1 = 0; num1 < vector_Saturday1.size(); ++num1)
      {
        vector_Saturday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::TypeHoursJSON::fromJSONSunday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Sunday of TypeHoursJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_Sunday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Sunday1[num1] = convert_classy;
      }
    initSunday();
    for (size_t num22 = 0; num22 < vector_Sunday1.size(); ++num22)
        appendSunday(vector_Sunday1[num22]);
    for (size_t num1 = 0; num1 < vector_Sunday1.size(); ++num1)
      {
        vector_Sunday1[num1]->remove_reference();
      }
  }

LocalResultJSON::TypeHoursJSON::TypeHoursJSON(void) :
        flagHasMonday(false),
        flagHasTuesday(false),
        flagHasWednesday(false),
        flagHasThursday(false),
        flagHasFriday(false),
        flagHasSaturday(false),
        flagHasSunday(false)
  {
    extraIndex = create_string_index();
  }

LocalResultJSON::TypeHoursJSON::~TypeHoursJSON(void)
  {
    if (flagHasMonday)
      {
        for (size_t num43 = 0; num43 < storeMonday.size(); ++num43)
          {
            storeMonday[num43]->remove_reference();
          }
      }
    if (flagHasTuesday)
      {
        for (size_t num44 = 0; num44 < storeTuesday.size(); ++num44)
          {
            storeTuesday[num44]->remove_reference();
          }
      }
    if (flagHasWednesday)
      {
        for (size_t num45 = 0; num45 < storeWednesday.size(); ++num45)
          {
            storeWednesday[num45]->remove_reference();
          }
      }
    if (flagHasThursday)
      {
        for (size_t num46 = 0; num46 < storeThursday.size(); ++num46)
          {
            storeThursday[num46]->remove_reference();
          }
      }
    if (flagHasFriday)
      {
        for (size_t num47 = 0; num47 < storeFriday.size(); ++num47)
          {
            storeFriday[num47]->remove_reference();
          }
      }
    if (flagHasSaturday)
      {
        for (size_t num48 = 0; num48 < storeSaturday.size(); ++num48)
          {
            storeSaturday[num48]->remove_reference();
          }
      }
    if (flagHasSunday)
      {
        for (size_t num49 = 0; num49 < storeSunday.size(); ++num49)
          {
            storeSunday[num49]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalResultJSON::TypeHoursJSON::hasMonday(void) const
  {
    return flagHasMonday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfMonday(void) const
  {
    assert(flagHasMonday);
    return storeMonday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfMonday(size_t element_num)
  {
    assert(flagHasMonday);
    return storeMonday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfMonday(size_t element_num) const
  {
    assert(flagHasMonday);
    return storeMonday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getMonday(void)
  {
    assert(flagHasMonday);
    return storeMonday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getMonday(void) const
  {
    assert(flagHasMonday);
    return storeMonday;
  }

bool LocalResultJSON::TypeHoursJSON::hasTuesday(void) const
  {
    return flagHasTuesday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfTuesday(void) const
  {
    assert(flagHasTuesday);
    return storeTuesday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfTuesday(size_t element_num)
  {
    assert(flagHasTuesday);
    return storeTuesday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfTuesday(size_t element_num) const
  {
    assert(flagHasTuesday);
    return storeTuesday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getTuesday(void)
  {
    assert(flagHasTuesday);
    return storeTuesday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getTuesday(void) const
  {
    assert(flagHasTuesday);
    return storeTuesday;
  }

bool LocalResultJSON::TypeHoursJSON::hasWednesday(void) const
  {
    return flagHasWednesday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfWednesday(void) const
  {
    assert(flagHasWednesday);
    return storeWednesday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfWednesday(size_t element_num)
  {
    assert(flagHasWednesday);
    return storeWednesday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfWednesday(size_t element_num) const
  {
    assert(flagHasWednesday);
    return storeWednesday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getWednesday(void)
  {
    assert(flagHasWednesday);
    return storeWednesday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getWednesday(void) const
  {
    assert(flagHasWednesday);
    return storeWednesday;
  }

bool LocalResultJSON::TypeHoursJSON::hasThursday(void) const
  {
    return flagHasThursday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfThursday(void) const
  {
    assert(flagHasThursday);
    return storeThursday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfThursday(size_t element_num)
  {
    assert(flagHasThursday);
    return storeThursday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfThursday(size_t element_num) const
  {
    assert(flagHasThursday);
    return storeThursday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getThursday(void)
  {
    assert(flagHasThursday);
    return storeThursday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getThursday(void) const
  {
    assert(flagHasThursday);
    return storeThursday;
  }

bool LocalResultJSON::TypeHoursJSON::hasFriday(void) const
  {
    return flagHasFriday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfFriday(void) const
  {
    assert(flagHasFriday);
    return storeFriday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfFriday(size_t element_num)
  {
    assert(flagHasFriday);
    return storeFriday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfFriday(size_t element_num) const
  {
    assert(flagHasFriday);
    return storeFriday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getFriday(void)
  {
    assert(flagHasFriday);
    return storeFriday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getFriday(void) const
  {
    assert(flagHasFriday);
    return storeFriday;
  }

bool LocalResultJSON::TypeHoursJSON::hasSaturday(void) const
  {
    return flagHasSaturday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfSaturday(void) const
  {
    assert(flagHasSaturday);
    return storeSaturday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfSaturday(size_t element_num)
  {
    assert(flagHasSaturday);
    return storeSaturday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfSaturday(size_t element_num) const
  {
    assert(flagHasSaturday);
    return storeSaturday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getSaturday(void)
  {
    assert(flagHasSaturday);
    return storeSaturday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getSaturday(void) const
  {
    assert(flagHasSaturday);
    return storeSaturday;
  }

bool LocalResultJSON::TypeHoursJSON::hasSunday(void) const
  {
    return flagHasSunday;
  }

size_t LocalResultJSON::TypeHoursJSON::countOfSunday(void) const
  {
    assert(flagHasSunday);
    return storeSunday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfSunday(size_t element_num)
  {
    assert(flagHasSunday);
    return storeSunday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::TypeHoursJSON::elementOfSunday(size_t element_num) const
  {
    assert(flagHasSunday);
    return storeSunday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getSunday(void)
  {
    assert(flagHasSunday);
    return storeSunday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::TypeHoursJSON::getSunday(void) const
  {
    assert(flagHasSunday);
    return storeSunday;
  }

LocalResultJSON::TypeAttributesJSON::TypeWifi LocalResultJSON::TypeAttributesJSON::stringToWifi(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'f':
            if (strcmp(&(chars[1]), "ree") == 0)
                return Wifi_free;
            break;
        case 'n':
            if (strcmp(&(chars[1]), "o") == 0)
                return Wifi_no;
            break;
        case 'p':
            if (strcmp(&(chars[1]), "aid") == 0)
                return Wifi_paid;
            break;
        default:
            break;
      }
    throw("The value for field `Wifi' is not one of the legal values.");
  }

const char *LocalResultJSON::TypeAttributesJSON::stringFromWifi(TypeWifi the_enum)
  {
    switch (the_enum)
      {
        case Wifi_no:
            return "no";
        case Wifi_free:
            return "free";
        case Wifi_paid:
            return "paid";
        default:
            assert(false);
            return NULL;
      }
  }

LocalResultJSON::TypeAttributesJSON::TypeParking LocalResultJSON::TypeAttributesJSON::stringToParking(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'g':
            if (strcmp(&(chars[1]), "arage") == 0)
                return Parking_garage;
            break;
        case 'l':
            if (strcmp(&(chars[1]), "ot") == 0)
                return Parking_lot;
            break;
        case 's':
            if (strcmp(&(chars[1]), "treet") == 0)
                return Parking_street;
            break;
        case 'v':
            if (strncmp(&(chars[1]), "al", 2) == 0)
              {
                switch ((unsigned char)(chars[3]))
                  {
                    case 'e':
                        if (strcmp(&(chars[4]), "t") == 0)
                            return Parking_valet;
                        break;
                    case 'i':
                        if (strcmp(&(chars[4]), "dated") == 0)
                            return Parking_validated;
                        break;
                    default:
                        break;
                  }
              }
            break;
        default:
            break;
      }
    throw("The value for field `Parking' is not one of the legal values.");
  }

const char *LocalResultJSON::TypeAttributesJSON::stringFromParking(TypeParking the_enum)
  {
    switch (the_enum)
      {
        case Parking_lot:
            return "lot";
        case Parking_street:
            return "street";
        case Parking_garage:
            return "garage";
        case Parking_valet:
            return "valet";
        case Parking_validated:
            return "validated";
        default:
            assert(false);
            return NULL;
      }
  }

LocalResultJSON::TypeAttributesJSON::TypeAttributesJSON(const TypeAttributesJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeAttributesJSON &LocalResultJSON::TypeAttributesJSON::operator=(const TypeAttributesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONDelivers(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Delivers of TypeAttributesJSON is not true for false.");
          }
      }
    setDelivers(the_bool);
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONTakesReservations(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TakesReservations of TypeAttributesJSON is not true for false.");
          }
      }
    setTakesReservations(the_bool);
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONGoodForKids(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field GoodForKids of TypeAttributesJSON is not true for false.");
          }
      }
    setGoodForKids(the_bool);
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONOutdoorSeating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OutdoorSeating of TypeAttributesJSON is not true for false.");
          }
      }
    setOutdoorSeating(the_bool);
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONWifi(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Wifi of TypeAttributesJSON is not a string.");
    TypeWifi the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'f':
            if (strcmp(&(json_string->getData()[1]), "ree") == 0)
                  {
                    the_enum = Wifi_free;
                    goto enum_is_done;
                  }
            break;
        case 'n':
            if (strcmp(&(json_string->getData()[1]), "o") == 0)
                  {
                    the_enum = Wifi_no;
                    goto enum_is_done;
                  }
            break;
        case 'p':
            if (strcmp(&(json_string->getData()[1]), "aid") == 0)
                  {
                    the_enum = Wifi_paid;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Wifi of TypeAttributesJSON is not one of the legal strings.");
  enum_is_done:;
    setWifi(the_enum);
  }

void LocalResultJSON::TypeAttributesJSON::fromJSONParking(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Parking of TypeAttributesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeParking > vector_Parking1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Parking of TypeAttributesJSON is not a string.");
        TypeParking the_enum;
        switch ((unsigned char)(json_string->getData()[0]))
          {
            case 'g':
                if (strcmp(&(json_string->getData()[1]), "arage") == 0)
                      {
                        the_enum = Parking_garage;
                        goto enum_is_done;
                      }
                break;
            case 'l':
                if (strcmp(&(json_string->getData()[1]), "ot") == 0)
                      {
                        the_enum = Parking_lot;
                        goto enum_is_done;
                      }
                break;
            case 's':
                if (strcmp(&(json_string->getData()[1]), "treet") == 0)
                      {
                        the_enum = Parking_street;
                        goto enum_is_done;
                      }
                break;
            case 'v':
                if (strncmp(&(json_string->getData()[1]), "al", 2) == 0)
                  {
                    switch ((unsigned char)(json_string->getData()[3]))
                      {
                        case 'e':
                            if (strcmp(&(json_string->getData()[4]), "t") == 0)
                                  {
                                    the_enum = Parking_valet;
                                    goto enum_is_done;
                                  }
                            break;
                        case 'i':
                            if (strcmp(&(json_string->getData()[4]), "dated") == 0)
                                  {
                                    the_enum = Parking_validated;
                                    goto enum_is_done;
                                  }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            default:
                break;
          }
        throw("The value for an element of field Parking of TypeAttributesJSON is not one of the legal strings.");
      enum_is_done:;
        vector_Parking1[num1] = the_enum;
      }
    initParking();
    for (size_t num23 = 0; num23 < vector_Parking1.size(); ++num23)
        appendParking(vector_Parking1[num23]);
    for (size_t num1 = 0; num1 < vector_Parking1.size(); ++num1)
      {
      }
  }

LocalResultJSON::TypeAttributesJSON::TypeAttributesJSON(void) :
        flagHasDelivers(false),
        flagHasTakesReservations(false),
        flagHasGoodForKids(false),
        flagHasOutdoorSeating(false),
        flagHasWifi(false),
        flagHasParking(false)
  {
    extraIndex = create_string_index();
  }

LocalResultJSON::TypeAttributesJSON::~TypeAttributesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalResultJSON::TypeAttributesJSON::hasDelivers(void) const
  {
    return flagHasDelivers;
  }

bool LocalResultJSON::TypeAttributesJSON::getDelivers(void)
  {
    assert(flagHasDelivers);
    return storeDelivers;
  }

const bool LocalResultJSON::TypeAttributesJSON::getDelivers(void) const
  {
    assert(flagHasDelivers);
    return storeDelivers;
  }

bool LocalResultJSON::TypeAttributesJSON::hasTakesReservations(void) const
  {
    return flagHasTakesReservations;
  }

bool LocalResultJSON::TypeAttributesJSON::getTakesReservations(void)
  {
    assert(flagHasTakesReservations);
    return storeTakesReservations;
  }

const bool LocalResultJSON::TypeAttributesJSON::getTakesReservations(void) const
  {
    assert(flagHasTakesReservations);
    return storeTakesReservations;
  }

bool LocalResultJSON::TypeAttributesJSON::hasGoodForKids(void) const
  {
    return flagHasGoodForKids;
  }

bool LocalResultJSON::TypeAttributesJSON::getGoodForKids(void)
  {
    assert(flagHasGoodForKids);
    return storeGoodForKids;
  }

const bool LocalResultJSON::TypeAttributesJSON::getGoodForKids(void) const
  {
    assert(flagHasGoodForKids);
    return storeGoodForKids;
  }

bool LocalResultJSON::TypeAttributesJSON::hasOutdoorSeating(void) const
  {
    return flagHasOutdoorSeating;
  }

bool LocalResultJSON::TypeAttributesJSON::getOutdoorSeating(void)
  {
    assert(flagHasOutdoorSeating);
    return storeOutdoorSeating;
  }

const bool LocalResultJSON::TypeAttributesJSON::getOutdoorSeating(void) const
  {
    assert(flagHasOutdoorSeating);
    return storeOutdoorSeating;
  }

bool LocalResultJSON::TypeAttributesJSON::hasWifi(void) const
  {
    return flagHasWifi;
  }

LocalResultJSON::TypeAttributesJSON::TypeWifi LocalResultJSON::TypeAttributesJSON::getWifi(void)
  {
    assert(flagHasWifi);
    return storeWifi;
  }

const LocalResultJSON::TypeAttributesJSON::TypeWifi LocalResultJSON::TypeAttributesJSON::getWifi(void) const
  {
    assert(flagHasWifi);
    return storeWifi;
  }

const char *LocalResultJSON::TypeAttributesJSON::getWifiAsChars(void) const
  {
    return stringFromWifi(getWifi());
  }

std::string LocalResultJSON::TypeAttributesJSON::getWifiAsString(void) const
  {
    return stringFromWifi(getWifi());
  }

bool LocalResultJSON::TypeAttributesJSON::hasParking(void) const
  {
    return flagHasParking;
  }

size_t LocalResultJSON::TypeAttributesJSON::countOfParking(void) const
  {
    assert(flagHasParking);
    return storeParking.size();
  }

LocalResultJSON::TypeAttributesJSON::TypeParking LocalResultJSON::TypeAttributesJSON::elementOfParking(size_t element_num)
  {
    assert(flagHasParking);
    return storeParking[element_num];
  }

const LocalResultJSON::TypeAttributesJSON::TypeParking LocalResultJSON::TypeAttributesJSON::elementOfParking(size_t element_num) const
  {
    assert(flagHasParking);
    return storeParking[element_num];
  }

std::vector< LocalResultJSON::TypeAttributesJSON::TypeParking > LocalResultJSON::TypeAttributesJSON::getParking(void)
  {
    assert(flagHasParking);
    return storeParking;
  }

const std::vector< LocalResultJSON::TypeAttributesJSON::TypeParking > LocalResultJSON::TypeAttributesJSON::getParking(void) const
  {
    assert(flagHasParking);
    return storeParking;
  }

LocalResultJSON::TypeAttributesForDisplayJSON::TypeAttributesForDisplayJSON(const TypeAttributesForDisplayJSON &)
  {
    assert(false);
  }

LocalResultJSON::TypeAttributesForDisplayJSON &LocalResultJSON::TypeAttributesForDisplayJSON::operator=(const TypeAttributesForDisplayJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::TypeAttributesForDisplayJSON::fromJSONLabel(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Label of TypeAttributesForDisplayJSON is not a string.");
    setLabel(std::string(json_string->getData()));
  }

void LocalResultJSON::TypeAttributesForDisplayJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of TypeAttributesForDisplayJSON is not a string.");
    setValue(std::string(json_string->getData()));
  }

LocalResultJSON::TypeAttributesForDisplayJSON::TypeAttributesForDisplayJSON(void) :
        flagHasLabel(false),
        flagHasValue(false)
  {
  }

LocalResultJSON::TypeAttributesForDisplayJSON::~TypeAttributesForDisplayJSON(void)
  {
  }

bool LocalResultJSON::TypeAttributesForDisplayJSON::hasLabel(void) const
  {
    return flagHasLabel;
  }

std::string LocalResultJSON::TypeAttributesForDisplayJSON::getLabel(void)
  {
    assert(flagHasLabel);
    return storeLabel;
  }

const std::string LocalResultJSON::TypeAttributesForDisplayJSON::getLabel(void) const
  {
    assert(flagHasLabel);
    return storeLabel;
  }

bool LocalResultJSON::TypeAttributesForDisplayJSON::hasValue(void) const
  {
    return flagHasValue;
  }

std::string LocalResultJSON::TypeAttributesForDisplayJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const std::string LocalResultJSON::TypeAttributesForDisplayJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

LocalResultJSON::LocalResultJSON(const LocalResultJSON &)
  {
    assert(false);
  }

LocalResultJSON &LocalResultJSON::operator=(const LocalResultJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void LocalResultJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of LocalResultJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void LocalResultJSON::fromJSONAlias(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Alias of LocalResultJSON is not a string.");
    setAlias(std::string(json_string->getData()));
  }

void LocalResultJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ID of LocalResultJSON is not a string.");
    setID(std::string(json_string->getData()));
  }

void LocalResultJSON::fromJSONRating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Rating of LocalResultJSON is not a number.");
          }
      }
    setRatingText(the_rational_text);
  }

void LocalResultJSON::fromJSONReviewCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ReviewCount of LocalResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ReviewCount of LocalResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setReviewCount(extracted_integer);
  }

void LocalResultJSON::fromJSONPrice(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Price of LocalResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Price of LocalResultJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setPrice(extracted_integer);
  }

void LocalResultJSON::fromJSONPhone(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Phone of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypePhoneJSON * > vector_Phone1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePhoneJSON *convert_classy = TypePhoneJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Phone1[num1] = convert_classy;
      }
    initPhone();
    for (size_t num24 = 0; num24 < vector_Phone1.size(); ++num24)
        appendPhone(vector_Phone1[num24]);
    for (size_t num1 = 0; num1 < vector_Phone1.size(); ++num1)
      {
        vector_Phone1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONLinks(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Links of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeLinksJSON * > vector_Links1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeLinksJSON *convert_classy = TypeLinksJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Links1[num1] = convert_classy;
      }
    initLinks();
    for (size_t num25 = 0; num25 < vector_Links1.size(); ++num25)
        appendLinks(vector_Links1[num25]);
    for (size_t num1 = 0; num1 < vector_Links1.size(); ++num1)
      {
        vector_Links1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONYelpURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field YelpURL of LocalResultJSON is not a string.");
    setYelpURL(std::string(json_string->getData()));
  }

void LocalResultJSON::fromJSONEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Email of LocalResultJSON is not a string.");
    setEmail(std::string(json_string->getData()));
  }

void LocalResultJSON::fromJSONPhotos(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Photos of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypePhotosJSON * > vector_Photos1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypePhotosJSON *convert_classy = TypePhotosJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Photos1[num1] = convert_classy;
      }
    initPhotos();
    for (size_t num26 = 0; num26 < vector_Photos1.size(); ++num26)
        appendPhotos(vector_Photos1[num26]);
    for (size_t num1 = 0; num1 < vector_Photos1.size(); ++num1)
      {
        vector_Photos1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONIsRestaurant(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsRestaurant of LocalResultJSON is not true for false.");
          }
      }
    setIsRestaurant(the_bool);
  }

void LocalResultJSON::fromJSONPermanentlyClosed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PermanentlyClosed of LocalResultJSON is not true for false.");
          }
      }
    setPermanentlyClosed(the_bool);
  }

void LocalResultJSON::fromJSONIsClaimed(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IsClaimed of LocalResultJSON is not true for false.");
          }
      }
    setIsClaimed(the_bool);
  }

void LocalResultJSON::fromJSONCategories(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Categories of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeCategoriesJSON * > vector_Categories1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeCategoriesJSON *convert_classy = TypeCategoriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Categories1[num1] = convert_classy;
      }
    initCategories();
    for (size_t num27 = 0; num27 < vector_Categories1.size(); ++num27)
        appendCategories(vector_Categories1[num27]);
    for (size_t num1 = 0; num1 < vector_Categories1.size(); ++num1)
      {
        vector_Categories1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocation(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::fromJSONDistanceFromReference(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDistanceFromReferenceJSON *convert_classy = TypeDistanceFromReferenceJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDistanceFromReference(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::fromJSONDistanceFromUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDistanceFromUserJSON *convert_classy = TypeDistanceFromUserJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDistanceFromUser(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::fromJSONBearingFromUser(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field BearingFromUser of LocalResultJSON is not a number.");
          }
      }
    setBearingFromUserText(the_rational_text);
  }

void LocalResultJSON::fromJSONReviews(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Reviews of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeReviewsJSON * > vector_Reviews1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeReviewsJSON *convert_classy = TypeReviewsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Reviews1[num1] = convert_classy;
      }
    initReviews();
    for (size_t num28 = 0; num28 < vector_Reviews1.size(); ++num28)
        appendReviews(vector_Reviews1[num28]);
    for (size_t num1 = 0; num1 < vector_Reviews1.size(); ++num1)
      {
        vector_Reviews1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONHours(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeHoursJSON *convert_classy = TypeHoursJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHours(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::fromJSONHoursToday(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HoursToday of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< LocalResultBusinessHoursJSON * > vector_HoursToday1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        LocalResultBusinessHoursJSON *convert_classy = LocalResultBusinessHoursJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HoursToday1[num1] = convert_classy;
      }
    initHoursToday();
    for (size_t num29 = 0; num29 < vector_HoursToday1.size(); ++num29)
        appendHoursToday(vector_HoursToday1[num29]);
    for (size_t num1 = 0; num1 < vector_HoursToday1.size(); ++num1)
      {
        vector_HoursToday1[num1]->remove_reference();
      }
  }

void LocalResultJSON::fromJSONOpenNow(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field OpenNow of LocalResultJSON is not true for false.");
          }
      }
    setOpenNow(the_bool);
  }

void LocalResultJSON::fromJSONMinutesToOpen(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinutesToOpen of LocalResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinutesToOpen of LocalResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinutesToOpen(extracted_integer);
  }

void LocalResultJSON::fromJSONMinutesToClose(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field MinutesToClose of LocalResultJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field MinutesToClose of LocalResultJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setMinutesToClose(extracted_integer);
  }

void LocalResultJSON::fromJSONOpen24Hours(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Open24Hours of LocalResultJSON is not true for false.");
          }
      }
    setOpen24Hours(the_bool);
  }

void LocalResultJSON::fromJSONAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeAttributesJSON *convert_classy = TypeAttributesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAttributes(convert_classy);
    convert_classy->remove_reference();
  }

void LocalResultJSON::fromJSONAttributesForDisplay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field AttributesForDisplay of LocalResultJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAttributesForDisplayJSON * > vector_AttributesForDisplay1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAttributesForDisplayJSON *convert_classy = TypeAttributesForDisplayJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_AttributesForDisplay1[num1] = convert_classy;
      }
    initAttributesForDisplay();
    for (size_t num30 = 0; num30 < vector_AttributesForDisplay1.size(); ++num30)
        appendAttributesForDisplay(vector_AttributesForDisplay1[num30]);
    for (size_t num1 = 0; num1 < vector_AttributesForDisplay1.size(); ++num1)
      {
        vector_AttributesForDisplay1[num1]->remove_reference();
      }
  }

LocalResultJSON::LocalResultJSON(void) :
        flagHasName(false),
        flagHasAlias(false),
        flagHasID(false),
        flagHasRating(false),
        flagHasReviewCount(false),
        flagHasPrice(false),
        flagHasPhone(false),
        flagHasLinks(false),
        flagHasYelpURL(false),
        flagHasEmail(false),
        flagHasPhotos(false),
        flagHasIsRestaurant(false),
        flagHasPermanentlyClosed(false),
        flagHasIsClaimed(false),
        flagHasCategories(false),
        flagHasLocation(false),
        flagHasDistanceFromReference(false),
        flagHasDistanceFromUser(false),
        flagHasBearingFromUser(false),
        flagHasReviews(false),
        flagHasHours(false),
        flagHasHoursToday(false),
        flagHasOpenNow(false),
        flagHasMinutesToOpen(false),
        flagHasMinutesToClose(false),
        flagHasOpen24Hours(false),
        flagHasAttributes(false),
        flagHasAttributesForDisplay(false)
  {
    extraIndex = create_string_index();
  }

LocalResultJSON::~LocalResultJSON(void)
  {
    if (flagHasPhone)
      {
        for (size_t num64 = 0; num64 < storePhone.size(); ++num64)
          {
            storePhone[num64]->remove_reference();
          }
      }
    if (flagHasLinks)
      {
        for (size_t num65 = 0; num65 < storeLinks.size(); ++num65)
          {
            storeLinks[num65]->remove_reference();
          }
      }
    if (flagHasPhotos)
      {
        for (size_t num66 = 0; num66 < storePhotos.size(); ++num66)
          {
            storePhotos[num66]->remove_reference();
          }
      }
    if (flagHasCategories)
      {
        for (size_t num67 = 0; num67 < storeCategories.size(); ++num67)
          {
            storeCategories[num67]->remove_reference();
          }
      }
    if (flagHasLocation)
      {
        storeLocation->remove_reference();
      }
    if (flagHasDistanceFromReference)
      {
        storeDistanceFromReference->remove_reference();
      }
    if (flagHasDistanceFromUser)
      {
        storeDistanceFromUser->remove_reference();
      }
    if (flagHasReviews)
      {
        for (size_t num68 = 0; num68 < storeReviews.size(); ++num68)
          {
            storeReviews[num68]->remove_reference();
          }
      }
    if (flagHasHours)
      {
        storeHours->remove_reference();
      }
    if (flagHasHoursToday)
      {
        for (size_t num69 = 0; num69 < storeHoursToday.size(); ++num69)
          {
            storeHoursToday[num69]->remove_reference();
          }
      }
    if (flagHasAttributes)
      {
        storeAttributes->remove_reference();
      }
    if (flagHasAttributesForDisplay)
      {
        for (size_t num70 = 0; num70 < storeAttributesForDisplay.size(); ++num70)
          {
            storeAttributesForDisplay[num70]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool LocalResultJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string LocalResultJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string LocalResultJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool LocalResultJSON::hasAlias(void) const
  {
    return flagHasAlias;
  }

std::string LocalResultJSON::getAlias(void)
  {
    assert(flagHasAlias);
    return storeAlias;
  }

const std::string LocalResultJSON::getAlias(void) const
  {
    assert(flagHasAlias);
    return storeAlias;
  }

bool LocalResultJSON::hasID(void) const
  {
    return flagHasID;
  }

std::string LocalResultJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const std::string LocalResultJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool LocalResultJSON::hasRating(void) const
  {
    return flagHasRating;
  }

double LocalResultJSON::getRating(void)
  {
    assert(flagHasRating);
    if (textStoreRating != "")
      {
        return atof(textStoreRating.c_str());
      }
    return storeRating;
  }

const double LocalResultJSON::getRating(void) const
  {
    assert(flagHasRating);
    if (textStoreRating != "")
      {
        return atof(textStoreRating.c_str());
      }
    return storeRating;
  }

std::string LocalResultJSON::getRatingAsText(void) const
  {
    assert(flagHasRating);
    if (textStoreRating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRating);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRating);
      }
  }

bool LocalResultJSON::hasReviewCount(void) const
  {
    return flagHasReviewCount;
  }

OInteger LocalResultJSON::getReviewCount(void)
  {
    assert(flagHasReviewCount);
    return storeReviewCount;
  }

const OInteger LocalResultJSON::getReviewCount(void) const
  {
    assert(flagHasReviewCount);
    return storeReviewCount;
  }

bool LocalResultJSON::hasPrice(void) const
  {
    return flagHasPrice;
  }

uint8_t LocalResultJSON::getPrice(void)
  {
    assert(flagHasPrice);
    return storePrice;
  }

const uint8_t LocalResultJSON::getPrice(void) const
  {
    assert(flagHasPrice);
    return storePrice;
  }

bool LocalResultJSON::hasPhone(void) const
  {
    return flagHasPhone;
  }

size_t LocalResultJSON::countOfPhone(void) const
  {
    assert(flagHasPhone);
    return storePhone.size();
  }

LocalResultJSON::TypePhoneJSON * LocalResultJSON::elementOfPhone(size_t element_num)
  {
    assert(flagHasPhone);
    return storePhone[element_num];
  }

const LocalResultJSON::TypePhoneJSON * LocalResultJSON::elementOfPhone(size_t element_num) const
  {
    assert(flagHasPhone);
    return storePhone[element_num];
  }

std::vector< LocalResultJSON::TypePhoneJSON * > LocalResultJSON::getPhone(void)
  {
    assert(flagHasPhone);
    return storePhone;
  }

const std::vector< LocalResultJSON::TypePhoneJSON * > LocalResultJSON::getPhone(void) const
  {
    assert(flagHasPhone);
    return storePhone;
  }

bool LocalResultJSON::hasLinks(void) const
  {
    return flagHasLinks;
  }

size_t LocalResultJSON::countOfLinks(void) const
  {
    assert(flagHasLinks);
    return storeLinks.size();
  }

LocalResultJSON::TypeLinksJSON * LocalResultJSON::elementOfLinks(size_t element_num)
  {
    assert(flagHasLinks);
    return storeLinks[element_num];
  }

const LocalResultJSON::TypeLinksJSON * LocalResultJSON::elementOfLinks(size_t element_num) const
  {
    assert(flagHasLinks);
    return storeLinks[element_num];
  }

std::vector< LocalResultJSON::TypeLinksJSON * > LocalResultJSON::getLinks(void)
  {
    assert(flagHasLinks);
    return storeLinks;
  }

const std::vector< LocalResultJSON::TypeLinksJSON * > LocalResultJSON::getLinks(void) const
  {
    assert(flagHasLinks);
    return storeLinks;
  }

bool LocalResultJSON::hasYelpURL(void) const
  {
    return flagHasYelpURL;
  }

std::string LocalResultJSON::getYelpURL(void)
  {
    assert(flagHasYelpURL);
    return storeYelpURL;
  }

const std::string LocalResultJSON::getYelpURL(void) const
  {
    assert(flagHasYelpURL);
    return storeYelpURL;
  }

bool LocalResultJSON::hasEmail(void) const
  {
    return flagHasEmail;
  }

std::string LocalResultJSON::getEmail(void)
  {
    assert(flagHasEmail);
    return storeEmail;
  }

const std::string LocalResultJSON::getEmail(void) const
  {
    assert(flagHasEmail);
    return storeEmail;
  }

bool LocalResultJSON::hasPhotos(void) const
  {
    return flagHasPhotos;
  }

size_t LocalResultJSON::countOfPhotos(void) const
  {
    assert(flagHasPhotos);
    return storePhotos.size();
  }

LocalResultJSON::TypePhotosJSON * LocalResultJSON::elementOfPhotos(size_t element_num)
  {
    assert(flagHasPhotos);
    return storePhotos[element_num];
  }

const LocalResultJSON::TypePhotosJSON * LocalResultJSON::elementOfPhotos(size_t element_num) const
  {
    assert(flagHasPhotos);
    return storePhotos[element_num];
  }

std::vector< LocalResultJSON::TypePhotosJSON * > LocalResultJSON::getPhotos(void)
  {
    assert(flagHasPhotos);
    return storePhotos;
  }

const std::vector< LocalResultJSON::TypePhotosJSON * > LocalResultJSON::getPhotos(void) const
  {
    assert(flagHasPhotos);
    return storePhotos;
  }

bool LocalResultJSON::hasIsRestaurant(void) const
  {
    return flagHasIsRestaurant;
  }

bool LocalResultJSON::getIsRestaurant(void)
  {
    assert(flagHasIsRestaurant);
    return storeIsRestaurant;
  }

const bool LocalResultJSON::getIsRestaurant(void) const
  {
    assert(flagHasIsRestaurant);
    return storeIsRestaurant;
  }

bool LocalResultJSON::hasPermanentlyClosed(void) const
  {
    return flagHasPermanentlyClosed;
  }

bool LocalResultJSON::getPermanentlyClosed(void)
  {
    assert(flagHasPermanentlyClosed);
    return storePermanentlyClosed;
  }

const bool LocalResultJSON::getPermanentlyClosed(void) const
  {
    assert(flagHasPermanentlyClosed);
    return storePermanentlyClosed;
  }

bool LocalResultJSON::hasIsClaimed(void) const
  {
    return flagHasIsClaimed;
  }

bool LocalResultJSON::getIsClaimed(void)
  {
    assert(flagHasIsClaimed);
    return storeIsClaimed;
  }

const bool LocalResultJSON::getIsClaimed(void) const
  {
    assert(flagHasIsClaimed);
    return storeIsClaimed;
  }

bool LocalResultJSON::hasCategories(void) const
  {
    return flagHasCategories;
  }

size_t LocalResultJSON::countOfCategories(void) const
  {
    assert(flagHasCategories);
    return storeCategories.size();
  }

LocalResultJSON::TypeCategoriesJSON * LocalResultJSON::elementOfCategories(size_t element_num)
  {
    assert(flagHasCategories);
    return storeCategories[element_num];
  }

const LocalResultJSON::TypeCategoriesJSON * LocalResultJSON::elementOfCategories(size_t element_num) const
  {
    assert(flagHasCategories);
    return storeCategories[element_num];
  }

std::vector< LocalResultJSON::TypeCategoriesJSON * > LocalResultJSON::getCategories(void)
  {
    assert(flagHasCategories);
    return storeCategories;
  }

const std::vector< LocalResultJSON::TypeCategoriesJSON * > LocalResultJSON::getCategories(void) const
  {
    assert(flagHasCategories);
    return storeCategories;
  }

bool LocalResultJSON::hasLocation(void) const
  {
    return flagHasLocation;
  }

MapLocationJSON * LocalResultJSON::getLocation(void)
  {
    assert(flagHasLocation);
    return storeLocation;
  }

const MapLocationJSON * LocalResultJSON::getLocation(void) const
  {
    assert(flagHasLocation);
    return storeLocation;
  }

bool LocalResultJSON::hasDistanceFromReference(void) const
  {
    return flagHasDistanceFromReference;
  }

LocalResultJSON::TypeDistanceFromReferenceJSON * LocalResultJSON::getDistanceFromReference(void)
  {
    assert(flagHasDistanceFromReference);
    return storeDistanceFromReference;
  }

const LocalResultJSON::TypeDistanceFromReferenceJSON * LocalResultJSON::getDistanceFromReference(void) const
  {
    assert(flagHasDistanceFromReference);
    return storeDistanceFromReference;
  }

bool LocalResultJSON::hasDistanceFromUser(void) const
  {
    return flagHasDistanceFromUser;
  }

LocalResultJSON::TypeDistanceFromUserJSON * LocalResultJSON::getDistanceFromUser(void)
  {
    assert(flagHasDistanceFromUser);
    return storeDistanceFromUser;
  }

const LocalResultJSON::TypeDistanceFromUserJSON * LocalResultJSON::getDistanceFromUser(void) const
  {
    assert(flagHasDistanceFromUser);
    return storeDistanceFromUser;
  }

bool LocalResultJSON::hasBearingFromUser(void) const
  {
    return flagHasBearingFromUser;
  }

double LocalResultJSON::getBearingFromUser(void)
  {
    assert(flagHasBearingFromUser);
    if (textStoreBearingFromUser != "")
      {
        return atof(textStoreBearingFromUser.c_str());
      }
    return storeBearingFromUser;
  }

const double LocalResultJSON::getBearingFromUser(void) const
  {
    assert(flagHasBearingFromUser);
    if (textStoreBearingFromUser != "")
      {
        return atof(textStoreBearingFromUser.c_str());
      }
    return storeBearingFromUser;
  }

std::string LocalResultJSON::getBearingFromUserAsText(void) const
  {
    assert(flagHasBearingFromUser);
    if (textStoreBearingFromUser == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeBearingFromUser);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreBearingFromUser);
      }
  }

bool LocalResultJSON::hasReviews(void) const
  {
    return flagHasReviews;
  }

size_t LocalResultJSON::countOfReviews(void) const
  {
    assert(flagHasReviews);
    return storeReviews.size();
  }

LocalResultJSON::TypeReviewsJSON * LocalResultJSON::elementOfReviews(size_t element_num)
  {
    assert(flagHasReviews);
    return storeReviews[element_num];
  }

const LocalResultJSON::TypeReviewsJSON * LocalResultJSON::elementOfReviews(size_t element_num) const
  {
    assert(flagHasReviews);
    return storeReviews[element_num];
  }

std::vector< LocalResultJSON::TypeReviewsJSON * > LocalResultJSON::getReviews(void)
  {
    assert(flagHasReviews);
    return storeReviews;
  }

const std::vector< LocalResultJSON::TypeReviewsJSON * > LocalResultJSON::getReviews(void) const
  {
    assert(flagHasReviews);
    return storeReviews;
  }

bool LocalResultJSON::hasHours(void) const
  {
    return flagHasHours;
  }

LocalResultJSON::TypeHoursJSON * LocalResultJSON::getHours(void)
  {
    assert(flagHasHours);
    return storeHours;
  }

const LocalResultJSON::TypeHoursJSON * LocalResultJSON::getHours(void) const
  {
    assert(flagHasHours);
    return storeHours;
  }

bool LocalResultJSON::hasHoursToday(void) const
  {
    return flagHasHoursToday;
  }

size_t LocalResultJSON::countOfHoursToday(void) const
  {
    assert(flagHasHoursToday);
    return storeHoursToday.size();
  }

LocalResultBusinessHoursJSON * LocalResultJSON::elementOfHoursToday(size_t element_num)
  {
    assert(flagHasHoursToday);
    return storeHoursToday[element_num];
  }

const LocalResultBusinessHoursJSON * LocalResultJSON::elementOfHoursToday(size_t element_num) const
  {
    assert(flagHasHoursToday);
    return storeHoursToday[element_num];
  }

std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::getHoursToday(void)
  {
    assert(flagHasHoursToday);
    return storeHoursToday;
  }

const std::vector< LocalResultBusinessHoursJSON * > LocalResultJSON::getHoursToday(void) const
  {
    assert(flagHasHoursToday);
    return storeHoursToday;
  }

bool LocalResultJSON::hasOpenNow(void) const
  {
    return flagHasOpenNow;
  }

bool LocalResultJSON::getOpenNow(void)
  {
    assert(flagHasOpenNow);
    return storeOpenNow;
  }

const bool LocalResultJSON::getOpenNow(void) const
  {
    assert(flagHasOpenNow);
    return storeOpenNow;
  }

bool LocalResultJSON::hasMinutesToOpen(void) const
  {
    return flagHasMinutesToOpen;
  }

OInteger LocalResultJSON::getMinutesToOpen(void)
  {
    assert(flagHasMinutesToOpen);
    return storeMinutesToOpen;
  }

const OInteger LocalResultJSON::getMinutesToOpen(void) const
  {
    assert(flagHasMinutesToOpen);
    return storeMinutesToOpen;
  }

bool LocalResultJSON::hasMinutesToClose(void) const
  {
    return flagHasMinutesToClose;
  }

OInteger LocalResultJSON::getMinutesToClose(void)
  {
    assert(flagHasMinutesToClose);
    return storeMinutesToClose;
  }

const OInteger LocalResultJSON::getMinutesToClose(void) const
  {
    assert(flagHasMinutesToClose);
    return storeMinutesToClose;
  }

bool LocalResultJSON::hasOpen24Hours(void) const
  {
    return flagHasOpen24Hours;
  }

bool LocalResultJSON::getOpen24Hours(void)
  {
    assert(flagHasOpen24Hours);
    return storeOpen24Hours;
  }

const bool LocalResultJSON::getOpen24Hours(void) const
  {
    assert(flagHasOpen24Hours);
    return storeOpen24Hours;
  }

bool LocalResultJSON::hasAttributes(void) const
  {
    return flagHasAttributes;
  }

LocalResultJSON::TypeAttributesJSON * LocalResultJSON::getAttributes(void)
  {
    assert(flagHasAttributes);
    return storeAttributes;
  }

const LocalResultJSON::TypeAttributesJSON * LocalResultJSON::getAttributes(void) const
  {
    assert(flagHasAttributes);
    return storeAttributes;
  }

bool LocalResultJSON::hasAttributesForDisplay(void) const
  {
    return flagHasAttributesForDisplay;
  }

size_t LocalResultJSON::countOfAttributesForDisplay(void) const
  {
    assert(flagHasAttributesForDisplay);
    return storeAttributesForDisplay.size();
  }

LocalResultJSON::TypeAttributesForDisplayJSON * LocalResultJSON::elementOfAttributesForDisplay(size_t element_num)
  {
    assert(flagHasAttributesForDisplay);
    return storeAttributesForDisplay[element_num];
  }

const LocalResultJSON::TypeAttributesForDisplayJSON * LocalResultJSON::elementOfAttributesForDisplay(size_t element_num) const
  {
    assert(flagHasAttributesForDisplay);
    return storeAttributesForDisplay[element_num];
  }

std::vector< LocalResultJSON::TypeAttributesForDisplayJSON * > LocalResultJSON::getAttributesForDisplay(void)
  {
    assert(flagHasAttributesForDisplay);
    return storeAttributesForDisplay;
  }

const std::vector< LocalResultJSON::TypeAttributesForDisplayJSON * > LocalResultJSON::getAttributesForDisplay(void) const
  {
    assert(flagHasAttributesForDisplay);
    return storeAttributesForDisplay;
  }

char LocalResultJSON::Generator::lowerBoundReviewCount[] = "0";
LocalResultJSON::TypePhoneJSON *LocalResultJSON::TypePhoneJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePhoneJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePhoneJSON>, TypePhoneJSON *, bool> generator("Type TypePhone", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeLinksJSON *LocalResultJSON::TypeLinksJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLinksJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypePhotosJSON *LocalResultJSON::TypePhotosJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypePhotosJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypePhotosJSON>, TypePhotosJSON *, bool> generator("Type TypePhotos", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeCategoriesJSON *LocalResultJSON::TypeCategoriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeCategoriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeCategoriesJSON>, TypeCategoriesJSON *, bool> generator("Type TypeCategories", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeDistanceFromReferenceJSON *LocalResultJSON::TypeDistanceFromReferenceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDistanceFromReferenceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromReferenceJSON>, TypeDistanceFromReferenceJSON *, bool> generator("Type TypeDistanceFromReference", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeDistanceFromUserJSON *LocalResultJSON::TypeDistanceFromUserJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeDistanceFromUserJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeDistanceFromUserJSON>, TypeDistanceFromUserJSON *, bool> generator("Type TypeDistanceFromUser", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeReviewsJSON::TypeUserJSON *LocalResultJSON::TypeReviewsJSON::TypeUserJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeUserJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeUserJSON>, TypeUserJSON *, bool> generator("Type TypeUser", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeReviewsJSON *LocalResultJSON::TypeReviewsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeReviewsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeReviewsJSON>, TypeReviewsJSON *, bool> generator("Type TypeReviews", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeHoursJSON *LocalResultJSON::TypeHoursJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHoursJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHoursJSON>, TypeHoursJSON *, bool> generator("Type TypeHours", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
char LocalResultJSON::Generator::lowerBoundMinutesToOpen[] = "0";
char LocalResultJSON::Generator::lowerBoundMinutesToClose[] = "0";
LocalResultJSON::TypeAttributesJSON *LocalResultJSON::TypeAttributesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAttributesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAttributesJSON>, TypeAttributesJSON *, bool> generator("Type TypeAttributes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON::TypeAttributesForDisplayJSON *LocalResultJSON::TypeAttributesForDisplayJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeAttributesForDisplayJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeAttributesForDisplayJSON>, TypeAttributesForDisplayJSON *, bool> generator("Type TypeAttributesForDisplay", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
LocalResultJSON *LocalResultJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    LocalResultJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<LocalResultJSON>, LocalResultJSON *, bool> generator("Type LocalResult", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
