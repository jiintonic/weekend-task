/* file "ImageCarouselTemplateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ImageCarouselTemplateJSON.h"

#include "ImageCarouselTemplateJSON.h"


ImageCarouselTemplateJSON::TypeSize ImageCarouselTemplateJSON::stringToSize(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'L':
            if (strcmp(&(chars[1]), "arge") == 0)
                return Size_Large;
            break;
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

const char *ImageCarouselTemplateJSON::stringFromSize(TypeSize the_enum)
  {
    switch (the_enum)
      {
        case Size_Small:
            return "Small";
        case Size_Medium:
            return "Medium";
        case Size_Large:
            return "Large";
        default:
            assert(false);
            return NULL;
      }
  }

ImageCarouselTemplateJSON::TypeSlidesJSON::TypeSlidesJSON(const TypeSlidesJSON &)
  {
    assert(false);
  }

ImageCarouselTemplateJSON::TypeSlidesJSON &ImageCarouselTemplateJSON::TypeSlidesJSON::operator=(const TypeSlidesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ImageCarouselTemplateJSON::TypeSlidesJSON::fromJSONImageURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ImageURL of TypeSlidesJSON is not a string.");
    setImageURL(std::string(json_string->getData()));
  }

void ImageCarouselTemplateJSON::TypeSlidesJSON::fromJSONDescription(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Description of TypeSlidesJSON is not a string.");
    setDescription(std::string(json_string->getData()));
  }

void ImageCarouselTemplateJSON::TypeSlidesJSON::fromJSONCenterCrop(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field CenterCrop of TypeSlidesJSON is not true for false.");
          }
      }
    setCenterCrop(the_bool);
  }

void ImageCarouselTemplateJSON::TypeSlidesJSON::fromJSONActionAndroidIntent(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    AndroidIntentJSON *convert_classy = AndroidIntentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setActionAndroidIntent(convert_classy);
    convert_classy->remove_reference();
  }

void ImageCarouselTemplateJSON::TypeSlidesJSON::fromJSONActionURIs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ActionURIs of TypeSlidesJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field ActionURIs of TypeSlidesJSON has too few elements.");
    std::vector< std::string > vector_ActionURIs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ActionURIs of TypeSlidesJSON is not a string.");
        vector_ActionURIs1[num1] = std::string(json_string->getData());
      }
    assert(vector_ActionURIs1.size() >= 1);
    initActionURIs();
    for (size_t num3 = 0; num3 < vector_ActionURIs1.size(); ++num3)
        appendActionURIs(vector_ActionURIs1[num3]);
    for (size_t num1 = 0; num1 < vector_ActionURIs1.size(); ++num1)
      {
      }
  }

ImageCarouselTemplateJSON::TypeSlidesJSON::TypeSlidesJSON(void) :
        flagHasImageURL(false),
        flagHasDescription(false),
        flagHasCenterCrop(false),
        flagHasActionAndroidIntent(false),
        flagHasActionURIs(false)
  {
    storeCenterCrop = true;
    extraIndex = create_string_index();
  }

ImageCarouselTemplateJSON::TypeSlidesJSON::~TypeSlidesJSON(void)
  {
    if (flagHasActionAndroidIntent)
      {
        storeActionAndroidIntent->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::hasImageURL(void) const
  {
    return flagHasImageURL;
  }

std::string ImageCarouselTemplateJSON::TypeSlidesJSON::getImageURL(void)
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

const std::string ImageCarouselTemplateJSON::TypeSlidesJSON::getImageURL(void) const
  {
    assert(flagHasImageURL);
    return storeImageURL;
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::hasDescription(void) const
  {
    return flagHasDescription;
  }

std::string ImageCarouselTemplateJSON::TypeSlidesJSON::getDescription(void)
  {
    assert(flagHasDescription);
    return storeDescription;
  }

const std::string ImageCarouselTemplateJSON::TypeSlidesJSON::getDescription(void) const
  {
    assert(flagHasDescription);
    return storeDescription;
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::hasCenterCrop(void) const
  {
    return flagHasCenterCrop;
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::getCenterCrop(void)
  {
    return storeCenterCrop;
  }

const bool ImageCarouselTemplateJSON::TypeSlidesJSON::getCenterCrop(void) const
  {
    return storeCenterCrop;
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::hasActionAndroidIntent(void) const
  {
    return flagHasActionAndroidIntent;
  }

AndroidIntentJSON * ImageCarouselTemplateJSON::TypeSlidesJSON::getActionAndroidIntent(void)
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

const AndroidIntentJSON * ImageCarouselTemplateJSON::TypeSlidesJSON::getActionAndroidIntent(void) const
  {
    assert(flagHasActionAndroidIntent);
    return storeActionAndroidIntent;
  }

bool ImageCarouselTemplateJSON::TypeSlidesJSON::hasActionURIs(void) const
  {
    return flagHasActionURIs;
  }

size_t ImageCarouselTemplateJSON::TypeSlidesJSON::countOfActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs.size();
  }

std::string ImageCarouselTemplateJSON::TypeSlidesJSON::elementOfActionURIs(size_t element_num)
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

const std::string ImageCarouselTemplateJSON::TypeSlidesJSON::elementOfActionURIs(size_t element_num) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs[element_num];
  }

std::vector< std::string > ImageCarouselTemplateJSON::TypeSlidesJSON::getActionURIs(void)
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

const std::vector< std::string > ImageCarouselTemplateJSON::TypeSlidesJSON::getActionURIs(void) const
  {
    assert(flagHasActionURIs);
    return storeActionURIs;
  }

ImageCarouselTemplateJSON::ImageCarouselTemplateJSON(const ImageCarouselTemplateJSON &)
  {
    assert(false);
  }

ImageCarouselTemplateJSON &ImageCarouselTemplateJSON::operator=(const ImageCarouselTemplateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ImageCarouselTemplateJSON::extraSizeToJSON(void) const
  {
    JSONStringValue *generated_string_Size;
    switch (storeSize)
      {
        case Size_Small:
            generated_string_Size = new JSONStringValue("Small");
            break;
        case Size_Medium:
            generated_string_Size = new JSONStringValue("Medium");
            break;
        case Size_Large:
            generated_string_Size = new JSONStringValue("Large");
            break;
        default:
            assert(false);
            generated_string_Size = NULL;
      }
    return generated_string_Size;
  }

JSONValue *ImageCarouselTemplateJSON::extraAutoScrollToJSON(void) const
  {
    JSONValue *generated_boolean_AutoScroll = (storeAutoScroll ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_AutoScroll;
  }

JSONValue *ImageCarouselTemplateJSON::extraSlidesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Slides = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeSlides.size(); ++num1)
      {
        JSONValueHandler handler_Slides;
        storeSlides[num1]->write_as_json(&handler_Slides);
        handler_Slides.result->add_reference();
        generated_array_1_Slides->appendComponent(handler_Slides.result);
        handler_Slides.result->remove_reference();
      }
    return generated_array_1_Slides;
  }

void ImageCarouselTemplateJSON::fromJSONSize(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Size of ImageCarouselTemplateJSON is not a string.");
    TypeSize the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "arge") == 0)
                  {
                    the_enum = Size_Large;
                    goto enum_is_done;
                  }
            break;
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
    throw("The value for field Size of ImageCarouselTemplateJSON is not one of the legal strings.");
  enum_is_done:;
    setSize(the_enum);
  }

void ImageCarouselTemplateJSON::fromJSONAutoScroll(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoScroll of ImageCarouselTemplateJSON is not true for false.");
          }
      }
    setAutoScroll(the_bool);
  }

void ImageCarouselTemplateJSON::fromJSONSlides(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Slides of ImageCarouselTemplateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeSlidesJSON * > vector_Slides1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeSlidesJSON *convert_classy = TypeSlidesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Slides1[num1] = convert_classy;
      }
    initSlides();
    for (size_t num4 = 0; num4 < vector_Slides1.size(); ++num4)
        appendSlides(vector_Slides1[num4]);
    for (size_t num1 = 0; num1 < vector_Slides1.size(); ++num1)
      {
        vector_Slides1[num1]->remove_reference();
      }
  }

ImageCarouselTemplateJSON::ImageCarouselTemplateJSON(void) :
        flagHasSize(false),
        flagHasAutoScroll(false),
        flagHasSlides(false)
  {
    storeSize = Size_Medium;
    storeAutoScroll = false;
    extraIndex = create_string_index();
  }

ImageCarouselTemplateJSON::~ImageCarouselTemplateJSON(void)
  {
    if (flagHasSlides)
      {
        for (size_t num4 = 0; num4 < storeSlides.size(); ++num4)
          {
            storeSlides[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ImageCarouselTemplateJSON::getTemplateName(void) const
  {
    return "ImageCarousel";
  }

bool ImageCarouselTemplateJSON::hasSize(void) const
  {
    return flagHasSize;
  }

ImageCarouselTemplateJSON::TypeSize ImageCarouselTemplateJSON::getSize(void)
  {
    return storeSize;
  }

const ImageCarouselTemplateJSON::TypeSize ImageCarouselTemplateJSON::getSize(void) const
  {
    return storeSize;
  }

const char *ImageCarouselTemplateJSON::getSizeAsChars(void) const
  {
    return stringFromSize(getSize());
  }

std::string ImageCarouselTemplateJSON::getSizeAsString(void) const
  {
    return stringFromSize(getSize());
  }

bool ImageCarouselTemplateJSON::hasAutoScroll(void) const
  {
    return flagHasAutoScroll;
  }

bool ImageCarouselTemplateJSON::getAutoScroll(void)
  {
    return storeAutoScroll;
  }

const bool ImageCarouselTemplateJSON::getAutoScroll(void) const
  {
    return storeAutoScroll;
  }

bool ImageCarouselTemplateJSON::hasSlides(void) const
  {
    return flagHasSlides;
  }

size_t ImageCarouselTemplateJSON::countOfSlides(void) const
  {
    return storeSlides.size();
  }

ImageCarouselTemplateJSON::TypeSlidesJSON * ImageCarouselTemplateJSON::elementOfSlides(size_t element_num)
  {
    return storeSlides[element_num];
  }

const ImageCarouselTemplateJSON::TypeSlidesJSON * ImageCarouselTemplateJSON::elementOfSlides(size_t element_num) const
  {
    return storeSlides[element_num];
  }

std::vector< ImageCarouselTemplateJSON::TypeSlidesJSON * > ImageCarouselTemplateJSON::getSlides(void)
  {
    return storeSlides;
  }

const std::vector< ImageCarouselTemplateJSON::TypeSlidesJSON * > ImageCarouselTemplateJSON::getSlides(void) const
  {
    return storeSlides;
  }

ImageCarouselTemplateJSON::TypeSlidesJSON *ImageCarouselTemplateJSON::TypeSlidesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSlidesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSlidesJSON>, TypeSlidesJSON *, bool> generator("Type TypeSlides", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ImageCarouselTemplateJSON *ImageCarouselTemplateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ImageCarouselTemplateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ImageCarouselTemplateJSON>, ImageCarouselTemplateJSON *, bool> generator("Type ImageCarouselTemplate", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
