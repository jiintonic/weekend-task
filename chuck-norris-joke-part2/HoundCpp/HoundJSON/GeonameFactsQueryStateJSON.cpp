/* file "GeonameFactsQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameFactsQueryStateJSON.h"

#include "GeonameFactsQueryStateJSON.h"


GeonameFactsQueryStateJSON::TypeGeonameFactsCommandKind GeonameFactsQueryStateJSON::stringToGeonameFactsCommandKind(const char *chars)
  {
    if (strncmp(chars, "GeonameFacts", 12) == 0)
      {
        switch ((unsigned char)(chars[12]))
          {
            case 'C':
                if (strcmp(&(chars[13]), "ommand") == 0)
                    return GeonameFactsCommandKind_GeonameFactsCommand;
                break;
            case 'I':
                if (strcmp(&(chars[13]), "nformationNugget") == 0)
                    return GeonameFactsCommandKind_GeonameFactsInformationNugget;
                break;
            default:
                break;
          }
      }
    throw("The value for field `GeonameFactsCommandKind' is not one of the legal values.");
  }

const char *GeonameFactsQueryStateJSON::stringFromGeonameFactsCommandKind(TypeGeonameFactsCommandKind the_enum)
  {
    switch (the_enum)
      {
        case GeonameFactsCommandKind_GeonameFactsInformationNugget:
            return "GeonameFactsInformationNugget";
        case GeonameFactsCommandKind_GeonameFactsCommand:
            return "GeonameFactsCommand";
        default:
            assert(false);
            return NULL;
      }
  }

GeonameFactsQueryStateJSON::GeonameFactsQueryStateJSON(const GeonameFactsQueryStateJSON &)
  {
    assert(false);
  }

GeonameFactsQueryStateJSON &GeonameFactsQueryStateJSON::operator=(const GeonameFactsQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameFactsQueryStateJSON::fromJSONGeonameFactsCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GeonameFactsCommandKind of GeonameFactsQueryStateJSON is not a string.");
    TypeGeonameFactsCommandKind the_enum;
    if (strncmp(json_string->getData(), "GeonameFacts", 12) == 0)
      {
        switch ((unsigned char)(json_string->getData()[12]))
          {
            case 'C':
                if (strcmp(&(json_string->getData()[13]), "ommand") == 0)
                      {
                        the_enum = GeonameFactsCommandKind_GeonameFactsCommand;
                        goto enum_is_done;
                      }
                break;
            case 'I':
                if (strcmp(&(json_string->getData()[13]), "nformationNugget") == 0)
                      {
                        the_enum = GeonameFactsCommandKind_GeonameFactsInformationNugget;
                        goto enum_is_done;
                      }
                break;
            default:
                break;
          }
      }
    throw("The value for field GeonameFactsCommandKind of GeonameFactsQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setGeonameFactsCommandKind(the_enum);
  }

void GeonameFactsQueryStateJSON::fromJSONGeonames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Geonames of GeonameFactsQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< GeonameObjectJSON * > vector_Geonames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GeonameObjectJSON *convert_classy = GeonameObjectJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Geonames1[num1] = convert_classy;
      }
    initGeonames();
    for (size_t num3 = 0; num3 < vector_Geonames1.size(); ++num3)
        appendGeonames(vector_Geonames1[num3]);
    for (size_t num1 = 0; num1 < vector_Geonames1.size(); ++num1)
      {
        vector_Geonames1[num1]->remove_reference();
      }
  }

void GeonameFactsQueryStateJSON::fromJSONGeonameAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field GeonameAttributes of GeonameFactsQueryStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< GeonameAttributeWithArgumentsJSON * > vector_GeonameAttributes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GeonameAttributeWithArgumentsJSON *convert_classy = GeonameAttributeWithArgumentsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_GeonameAttributes1[num1] = convert_classy;
      }
    initGeonameAttributes();
    for (size_t num4 = 0; num4 < vector_GeonameAttributes1.size(); ++num4)
        appendGeonameAttributes(vector_GeonameAttributes1[num4]);
    for (size_t num1 = 0; num1 < vector_GeonameAttributes1.size(); ++num1)
      {
        vector_GeonameAttributes1[num1]->remove_reference();
      }
  }

GeonameFactsQueryStateJSON::GeonameFactsQueryStateJSON(void) :
        flagHasGeonameFactsCommandKind(false),
        flagHasGeonames(false),
        flagHasGeonameAttributes(false)
  {
    extraIndex = create_string_index();
  }

GeonameFactsQueryStateJSON::~GeonameFactsQueryStateJSON(void)
  {
    if (flagHasGeonames)
      {
        for (size_t num7 = 0; num7 < storeGeonames.size(); ++num7)
          {
            storeGeonames[num7]->remove_reference();
          }
      }
    if (flagHasGeonameAttributes)
      {
        for (size_t num8 = 0; num8 < storeGeonameAttributes.size(); ++num8)
          {
            storeGeonameAttributes[num8]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool GeonameFactsQueryStateJSON::hasGeonameFactsCommandKind(void) const
  {
    return flagHasGeonameFactsCommandKind;
  }

GeonameFactsQueryStateJSON::TypeGeonameFactsCommandKind GeonameFactsQueryStateJSON::getGeonameFactsCommandKind(void)
  {
    assert(flagHasGeonameFactsCommandKind);
    return storeGeonameFactsCommandKind;
  }

const GeonameFactsQueryStateJSON::TypeGeonameFactsCommandKind GeonameFactsQueryStateJSON::getGeonameFactsCommandKind(void) const
  {
    assert(flagHasGeonameFactsCommandKind);
    return storeGeonameFactsCommandKind;
  }

const char *GeonameFactsQueryStateJSON::getGeonameFactsCommandKindAsChars(void) const
  {
    return stringFromGeonameFactsCommandKind(getGeonameFactsCommandKind());
  }

std::string GeonameFactsQueryStateJSON::getGeonameFactsCommandKindAsString(void) const
  {
    return stringFromGeonameFactsCommandKind(getGeonameFactsCommandKind());
  }

bool GeonameFactsQueryStateJSON::hasGeonames(void) const
  {
    return flagHasGeonames;
  }

size_t GeonameFactsQueryStateJSON::countOfGeonames(void) const
  {
    assert(flagHasGeonames);
    return storeGeonames.size();
  }

GeonameObjectJSON * GeonameFactsQueryStateJSON::elementOfGeonames(size_t element_num)
  {
    assert(flagHasGeonames);
    return storeGeonames[element_num];
  }

const GeonameObjectJSON * GeonameFactsQueryStateJSON::elementOfGeonames(size_t element_num) const
  {
    assert(flagHasGeonames);
    return storeGeonames[element_num];
  }

std::vector< GeonameObjectJSON * > GeonameFactsQueryStateJSON::getGeonames(void)
  {
    assert(flagHasGeonames);
    return storeGeonames;
  }

const std::vector< GeonameObjectJSON * > GeonameFactsQueryStateJSON::getGeonames(void) const
  {
    assert(flagHasGeonames);
    return storeGeonames;
  }

bool GeonameFactsQueryStateJSON::hasGeonameAttributes(void) const
  {
    return flagHasGeonameAttributes;
  }

size_t GeonameFactsQueryStateJSON::countOfGeonameAttributes(void) const
  {
    assert(flagHasGeonameAttributes);
    return storeGeonameAttributes.size();
  }

GeonameAttributeWithArgumentsJSON * GeonameFactsQueryStateJSON::elementOfGeonameAttributes(size_t element_num)
  {
    assert(flagHasGeonameAttributes);
    return storeGeonameAttributes[element_num];
  }

const GeonameAttributeWithArgumentsJSON * GeonameFactsQueryStateJSON::elementOfGeonameAttributes(size_t element_num) const
  {
    assert(flagHasGeonameAttributes);
    return storeGeonameAttributes[element_num];
  }

std::vector< GeonameAttributeWithArgumentsJSON * > GeonameFactsQueryStateJSON::getGeonameAttributes(void)
  {
    assert(flagHasGeonameAttributes);
    return storeGeonameAttributes;
  }

const std::vector< GeonameAttributeWithArgumentsJSON * > GeonameFactsQueryStateJSON::getGeonameAttributes(void) const
  {
    assert(flagHasGeonameAttributes);
    return storeGeonameAttributes;
  }

GeonameFactsQueryStateJSON *GeonameFactsQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameFactsQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameFactsQueryStateJSON>, GeonameFactsQueryStateJSON *, bool> generator("Type GeonameFactsQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
