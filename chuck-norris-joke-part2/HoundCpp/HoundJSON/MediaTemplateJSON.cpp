/* file "MediaTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MediaTemplateJSON.h"

#include "MediaTemplateJSON.h"


MediaTemplateJSON::TypeImageJSON::TypeShape MediaTemplateJSON::TypeImageJSON::stringToShape(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'R':
            if (strcmp(&(chars[1]), "ectangle") == 0)
                return Shape_Rectangle;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "quare") == 0)
                return Shape_Square;
            break;
        default:
            break;
      }
    throw("The value for field `Shape' is not one of the legal values.");
  }

const char *MediaTemplateJSON::TypeImageJSON::stringFromShape(TypeShape the_enum)
  {
    switch (the_enum)
      {
        case Shape_Rectangle:
            return "Rectangle";
        case Shape_Square:
            return "Square";
        default:
            assert(false);
            return NULL;
      }
  }

MediaTemplateJSON::TypeImageJSON::TypeSize MediaTemplateJSON::TypeImageJSON::stringToSize(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'M':
            if (strcmp(&(chars[1]), "edium") == 0)
                return Size_Medium;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "mall") == 0)
                return Size_Small;
            break;
        default:
            break;
      }
    throw("The value for field `Size' is not one of the legal values.");
  }

const char *MediaTemplateJSON::TypeImageJSON::stringFromSize(TypeSize the_enum)
  {
    switch (the_enum)
      {
        case Size_Small:
            return "Small";
        case Size_Medium:
            return "Medium";
        default:
            assert(false);
            return NULL;
      }
  }

MediaTemplateJSON::TypeImageJSON::TypeImageJSON(const TypeImageJSON &)
  {
    assert(false);
  }

MediaTemplateJSON::TypeImageJSON &MediaTemplateJSON::TypeImageJSON::operator=(const TypeImageJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MediaTemplateJSON::TypeImageJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of TypeImageJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void MediaTemplateJSON::TypeImageJSON::fromJSONShape(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Shape of TypeImageJSON is not a string.");
    TypeShape the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'R':
            if (strcmp(&(json_string->getData()[1]), "ectangle") == 0)
                  {
                    the_enum = Shape_Rectangle;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "quare") == 0)
                  {
                    the_enum = Shape_Square;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Shape of TypeImageJSON is not one of the legal strings.");
  enum_is_done:;
    setShape(the_enum);
  }

void MediaTemplateJSON::TypeImageJSON::fromJSONSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Size of TypeImageJSON is not a string.");
    TypeSize the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edium") == 0)
                  {
                    the_enum = Size_Medium;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "mall") == 0)
                  {
                    the_enum = Size_Small;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Size of TypeImageJSON is not one of the legal strings.");
  enum_is_done:;
    setSize(the_enum);
  }

void MediaTemplateJSON::TypeImageJSON::fromJSONCenterCrop(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CenterCrop of TypeImageJSON is not true for false.");
          }
      }
    setCenterCrop(the_bool);
  }

MediaTemplateJSON::TypeImageJSON::TypeImageJSON(void) :
        flagHasURL(false),
        flagHasShape(false),
        flagHasSize(false),
        flagHasCenterCrop(false)
  {
    storeShape = Shape_Square;
    storeSize = Size_Small;
    storeCenterCrop = true;
    extraIndex = create_string_index();
  }

MediaTemplateJSON::TypeImageJSON::~TypeImageJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool MediaTemplateJSON::TypeImageJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string MediaTemplateJSON::TypeImageJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string MediaTemplateJSON::TypeImageJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool MediaTemplateJSON::TypeImageJSON::hasShape(void) const
  {
    return flagHasShape;
  }

MediaTemplateJSON::TypeImageJSON::TypeShape MediaTemplateJSON::TypeImageJSON::getShape(void)
  {
    return storeShape;
  }

const MediaTemplateJSON::TypeImageJSON::TypeShape MediaTemplateJSON::TypeImageJSON::getShape(void) const
  {
    return storeShape;
  }

const char *MediaTemplateJSON::TypeImageJSON::getShapeAsChars(void) const
  {
    return stringFromShape(getShape());
  }

std::string MediaTemplateJSON::TypeImageJSON::getShapeAsString(void) const
  {
    return stringFromShape(getShape());
  }

bool MediaTemplateJSON::TypeImageJSON::hasSize(void) const
  {
    return flagHasSize;
  }

MediaTemplateJSON::TypeImageJSON::TypeSize MediaTemplateJSON::TypeImageJSON::getSize(void)
  {
    return storeSize;
  }

const MediaTemplateJSON::TypeImageJSON::TypeSize MediaTemplateJSON::TypeImageJSON::getSize(void) const
  {
    return storeSize;
  }

const char *MediaTemplateJSON::TypeImageJSON::getSizeAsChars(void) const
  {
    return stringFromSize(getSize());
  }

std::string MediaTemplateJSON::TypeImageJSON::getSizeAsString(void) const
  {
    return stringFromSize(getSize());
  }

bool MediaTemplateJSON::TypeImageJSON::hasCenterCrop(void) const
  {
    return flagHasCenterCrop;
  }

bool MediaTemplateJSON::TypeImageJSON::getCenterCrop(void)
  {
    return storeCenterCrop;
  }

const bool MediaTemplateJSON::TypeImageJSON::getCenterCrop(void) const
  {
    return storeCenterCrop;
  }

MediaTemplateJSON::MediaTemplateJSON(const MediaTemplateJSON &)
  {
    assert(false);
  }

MediaTemplateJSON &MediaTemplateJSON::operator=(const MediaTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *MediaTemplateJSON::extraTitleToJSON(void) const
  {
    JSONStringValue *generated_string_Title = new JSONStringValue(storeTitle.c_str());
    return generated_string_Title;
  }

JSONValue *MediaTemplateJSON::extraSubtitleToJSON(void) const
  {
    JSONStringValue *generated_string_Subtitle = new JSONStringValue(storeSubtitle.c_str());
    return generated_string_Subtitle;
  }

JSONValue *MediaTemplateJSON::extraRatingToJSON(void) const
  {
    JSONIntegerValue *generated_integer_Rating = new JSONIntegerValue(storeRating);
    return generated_integer_Rating;
  }

JSONValue *MediaTemplateJSON::extraBodyTextToJSON(void) const
  {
    JSONStringValue *generated_string_BodyText = new JSONStringValue(storeBodyText.c_str());
    return generated_string_BodyText;
  }

JSONValue *MediaTemplateJSON::extraFooterToJSON(void) const
  {
    JSONStringValue *generated_string_Footer = new JSONStringValue(storeFooter.c_str());
    return generated_string_Footer;
  }

JSONValue *MediaTemplateJSON::extraAudioPreviewURIToJSON(void) const
  {
    JSONStringValue *generated_string_AudioPreviewURI = new JSONStringValue(storeAudioPreviewURI.c_str());
    return generated_string_AudioPreviewURI;
  }

JSONValue *MediaTemplateJSON::extraImageToJSON(void) const
  {
    JSONValueHandler handler_Image;
    storeImage->write_as_json(&handler_Image);
    handler_Image.result->add_reference();
    return handler_Image.result;
  }

JSONValue *MediaTemplateJSON::extraActionAndroidIntentToJSON(void) const
  {
    JSONValueHandler handler_ActionAndroidIntent;
    storeActionAndroidIntent->write_as_json(&handler_ActionAndroidIntent);
    handler_ActionAndroidIntent.result->add_reference();
    return handler_ActionAndroidIntent.result;
  }

JSONValue *MediaTemplateJSON::extraActionURIsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ActionURIs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeActionURIs.size(); ++num1)
      {
        JSONStringValue *generated_string_ActionURIs = new JSONStringValue(storeActionURIs[num1].c_str());
        generated_array_1_ActionURIs->appendComponent(generated_string_ActionURIs);
      }
    return generated_array_1_ActionURIs;
  }

void MediaTemplateJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of MediaTemplateJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void MediaTemplateJSON::fromJSONSubtitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Subtitle of MediaTemplateJSON is not a string.");
    setSubtitle(std::string(json_string->getData()));
  }

void MediaTemplateJSON::fromJSONRating(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    uint8_t extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field Rating of MediaTemplateJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field Rating of MediaTemplateJSON is not an integer.");
          }
        extracted_integer = (uint8_t)(json_rational->getUnsignedLongInt())    ;
      }
    else
      {
        extracted_integer = (uint8_t)(json_integer->getUnsignedLongInt())    ;
      }
    setRating(extracted_integer);
  }

void MediaTemplateJSON::fromJSONBodyText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BodyText of MediaTemplateJSON is not a string.");
    setBodyText(std::string(json_string->getData()));
  }

void MediaTemplateJSON::fromJSONFooter(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Footer of MediaTemplateJSON is not a string.");
    setFooter(std::string(json_string->getData()));
  }

void MediaTemplateJSON::fromJSONAudioPreviewURI(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AudioPreviewURI of MediaTemplateJSON is not a string.");
    setAudioPreviewURI(std::string(json_string->getData()));
  }

void MediaTemplateJSON::fromJSONImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeImageJSON *convert_classy = TypeImageJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setImage(convert_classy);
    convert_classy->remove_reference();
  }

void MediaTemplateJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void MediaTemplateJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of MediaTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of MediaTemplateJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of MediaTemplateJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num2 = 0; num2 < vector_ActionURIs1.size(); ++num2)
        appendActionURIs(vector_ActionURIs1[num2]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

MediaTemplateJSON::MediaTemplateJSON(void) :
        flagHasTitle(false),
        flagHasSubtitle(false),
        flagHasRating(false),
        flagHasBodyText(false),
        flagHasFooter(false),
        flagHasAudioPreviewURI(false),
        flagHasImage(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    extraIndex = create_string_index();
  }

MediaTemplateJSON::~MediaTemplateJSON(void)
  {
    if (flagHasImage)
      {
        storeImage->remove_reference();
      }
    if (flagHasActionAndroidIntent)
      {
        storeActionAndroidIntent->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *MediaTemplateJSON::getTemplateName(void) const
  {
    return "Media";
  }

bool MediaTemplateJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string MediaTemplateJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string MediaTemplateJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool MediaTemplateJSON::hasSubtitle(void) const
  {
    return flagHasSubtitle;
  }

std::string MediaTemplateJSON::getSubtitle(void)
  {
    assert(flagHasSubtitle);
    return storeSubtitle;
  }

const std::string MediaTemplateJSON::getSubtitle(void) const
  {
    assert(flagHasSubtitle);
    return storeSubtitle;
  }

bool MediaTemplateJSON::hasRating(void) const
  {
    return flagHasRating;
  }

uint8_t MediaTemplateJSON::getRating(void)
  {
    assert(flagHasRating);
    return storeRating;
  }

const uint8_t MediaTemplateJSON::getRating(void) const
  {
    assert(flagHasRating);
    return storeRating;
  }

bool MediaTemplateJSON::hasBodyText(void) const
  {
    return flagHasBodyText;
  }

std::string MediaTemplateJSON::getBodyText(void)
  {
    assert(flagHasBodyText);
    return storeBodyText;
  }

const std::string MediaTemplateJSON::getBodyText(void) const
  {
    assert(flagHasBodyText);
    return storeBodyText;
  }

bool MediaTemplateJSON::hasFooter(void) const
  {
    return flagHasFooter;
  }

std::string MediaTemplateJSON::getFooter(void)
  {
    assert(flagHasFooter);
    return storeFooter;
  }

const std::string MediaTemplateJSON::getFooter(void) const
  {
    assert(flagHasFooter);
    return storeFooter;
  }

bool MediaTemplateJSON::hasAudioPreviewURI(void) const
  {
    return flagHasAudioPreviewURI;
  }

std::string MediaTemplateJSON::getAudioPreviewURI(void)
  {
    assert(flagHasAudioPreviewURI);
    return storeAudioPreviewURI;
  }

const std::string MediaTemplateJSON::getAudioPreviewURI(void) const
  {
    assert(flagHasAudioPreviewURI);
    return storeAudioPreviewURI;
  }

bool MediaTemplateJSON::hasImage(void) const
  {
    return flagHasImage;
  }

MediaTemplateJSON::TypeImageJSON * MediaTemplateJSON::getImage(void)
  {
    assert(flagHasImage);
    return storeImage;
  }

const MediaTemplateJSON::TypeImageJSON * MediaTemplateJSON::getImage(void) const
  {
    assert(flagHasImage);
    return storeImage;
  }

bool MediaTemplateJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * MediaTemplateJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * MediaTemplateJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool MediaTemplateJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t MediaTemplateJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string MediaTemplateJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string MediaTemplateJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > MediaTemplateJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > MediaTemplateJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

MediaTemplateJSON::TypeImageJSON *MediaTemplateJSON::TypeImageJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeImageJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeImageJSON>, TypeImageJSON *, bool> generator("Type TypeImage", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
MediaTemplateJSON *MediaTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MediaTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MediaTemplateJSON>, MediaTemplateJSON *, bool> generator("Type MediaTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
