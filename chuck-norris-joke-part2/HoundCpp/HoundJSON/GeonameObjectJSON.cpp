/* file "GeonameObjectJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameObjectJSON.h"

#include "GeonameObjectJSON.h"


GeonameObjectJSON::TypeAttributesJSON::TypeAttributesJSON(const TypeAttributesJSON &)
  {
    assert(false);
  }

GeonameObjectJSON::TypeAttributesJSON &GeonameObjectJSON::TypeAttributesJSON::operator=(const TypeAttributesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameObjectJSON::TypeAttributesJSON::fromJSONAttributeRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AttributeRequested of TypeAttributesJSON is not true for false.");
          }
      }
    setAttributeRequested(the_bool);
  }

void GeonameObjectJSON::TypeAttributesJSON::fromJSONAttributeName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AttributeName of TypeAttributesJSON is not a string.");
    setAttributeName(std::string(json_string->getData()));
  }

void GeonameObjectJSON::TypeAttributesJSON::fromJSONAttributeValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AttributeValue of TypeAttributesJSON is not a string.");
    setAttributeValue(std::string(json_string->getData()));
  }

void GeonameObjectJSON::TypeAttributesJSON::fromJSONAttributeValueRaw(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AttributeValueRaw of TypeAttributesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AttributeValueRaw of TypeAttributesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAttributeValueRaw(extracted_integer);
  }

void GeonameObjectJSON::TypeAttributesJSON::fromJSONAttributeValueIsLong(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AttributeValueIsLong of TypeAttributesJSON is not true for false.");
          }
      }
    setAttributeValueIsLong(the_bool);
  }

GeonameObjectJSON::TypeAttributesJSON::TypeAttributesJSON(void) :
        flagHasAttributeRequested(false),
        flagHasAttributeName(false),
        flagHasAttributeValue(false),
        flagHasAttributeValueRaw(false),
        flagHasAttributeValueIsLong(false)
  {
  }

GeonameObjectJSON::TypeAttributesJSON::~TypeAttributesJSON(void)
  {
  }

bool GeonameObjectJSON::TypeAttributesJSON::hasAttributeRequested(void) const
  {
    return flagHasAttributeRequested;
  }

bool GeonameObjectJSON::TypeAttributesJSON::getAttributeRequested(void)
  {
    assert(flagHasAttributeRequested);
    return storeAttributeRequested;
  }

const bool GeonameObjectJSON::TypeAttributesJSON::getAttributeRequested(void) const
  {
    assert(flagHasAttributeRequested);
    return storeAttributeRequested;
  }

bool GeonameObjectJSON::TypeAttributesJSON::hasAttributeName(void) const
  {
    return flagHasAttributeName;
  }

std::string GeonameObjectJSON::TypeAttributesJSON::getAttributeName(void)
  {
    assert(flagHasAttributeName);
    return storeAttributeName;
  }

const std::string GeonameObjectJSON::TypeAttributesJSON::getAttributeName(void) const
  {
    assert(flagHasAttributeName);
    return storeAttributeName;
  }

bool GeonameObjectJSON::TypeAttributesJSON::hasAttributeValue(void) const
  {
    return flagHasAttributeValue;
  }

std::string GeonameObjectJSON::TypeAttributesJSON::getAttributeValue(void)
  {
    assert(flagHasAttributeValue);
    return storeAttributeValue;
  }

const std::string GeonameObjectJSON::TypeAttributesJSON::getAttributeValue(void) const
  {
    assert(flagHasAttributeValue);
    return storeAttributeValue;
  }

bool GeonameObjectJSON::TypeAttributesJSON::hasAttributeValueRaw(void) const
  {
    return flagHasAttributeValueRaw;
  }

OInteger GeonameObjectJSON::TypeAttributesJSON::getAttributeValueRaw(void)
  {
    assert(flagHasAttributeValueRaw);
    return storeAttributeValueRaw;
  }

const OInteger GeonameObjectJSON::TypeAttributesJSON::getAttributeValueRaw(void) const
  {
    assert(flagHasAttributeValueRaw);
    return storeAttributeValueRaw;
  }

bool GeonameObjectJSON::TypeAttributesJSON::hasAttributeValueIsLong(void) const
  {
    return flagHasAttributeValueIsLong;
  }

bool GeonameObjectJSON::TypeAttributesJSON::getAttributeValueIsLong(void)
  {
    assert(flagHasAttributeValueIsLong);
    return storeAttributeValueIsLong;
  }

const bool GeonameObjectJSON::TypeAttributesJSON::getAttributeValueIsLong(void) const
  {
    assert(flagHasAttributeValueIsLong);
    return storeAttributeValueIsLong;
  }

GeonameObjectJSON::GeonameObjectJSON(const GeonameObjectJSON &)
  {
    assert(false);
  }

GeonameObjectJSON &GeonameObjectJSON::operator=(const GeonameObjectJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameObjectJSON::fromJSONGeonameID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GeonameID of GeonameObjectJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GeonameID of GeonameObjectJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGeonameID(extracted_integer);
  }

void GeonameObjectJSON::fromJSONGeonameObjectType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field GeonameObjectType of GeonameObjectJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field GeonameObjectType of GeonameObjectJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setGeonameObjectType(extracted_integer);
  }

void GeonameObjectJSON::fromJSONGeonameName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field GeonameName of GeonameObjectJSON is not a string.");
    setGeonameName(std::string(json_string->getData()));
  }

void GeonameObjectJSON::fromJSONURL(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URL of GeonameObjectJSON is not a string.");
    setURL(std::string(json_string->getData()));
  }

void GeonameObjectJSON::fromJSONAttributes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Attributes of GeonameObjectJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeAttributesJSON * > vector_Attributes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeAttributesJSON *convert_classy = TypeAttributesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Attributes1[num1] = convert_classy;
      }
    initAttributes();
    for (size_t num2 = 0; num2 < vector_Attributes1.size(); ++num2)
        appendAttributes(vector_Attributes1[num2]);
    for (size_t num1 = 0; num1 < vector_Attributes1.size(); ++num1)
      {
        vector_Attributes1[num1]->remove_reference();
      }
  }

GeonameObjectJSON::GeonameObjectJSON(void) :
        flagHasGeonameID(false),
        flagHasGeonameObjectType(false),
        flagHasGeonameName(false),
        flagHasURL(false),
        flagHasAttributes(false)
  {
  }

GeonameObjectJSON::~GeonameObjectJSON(void)
  {
    if (flagHasAttributes)
      {
        for (size_t num4 = 0; num4 < storeAttributes.size(); ++num4)
          {
            storeAttributes[num4]->remove_reference();
          }
      }
  }

bool GeonameObjectJSON::hasGeonameID(void) const
  {
    return flagHasGeonameID;
  }

OInteger GeonameObjectJSON::getGeonameID(void)
  {
    assert(flagHasGeonameID);
    return storeGeonameID;
  }

const OInteger GeonameObjectJSON::getGeonameID(void) const
  {
    assert(flagHasGeonameID);
    return storeGeonameID;
  }

bool GeonameObjectJSON::hasGeonameObjectType(void) const
  {
    return flagHasGeonameObjectType;
  }

OInteger GeonameObjectJSON::getGeonameObjectType(void)
  {
    assert(flagHasGeonameObjectType);
    return storeGeonameObjectType;
  }

const OInteger GeonameObjectJSON::getGeonameObjectType(void) const
  {
    assert(flagHasGeonameObjectType);
    return storeGeonameObjectType;
  }

bool GeonameObjectJSON::hasGeonameName(void) const
  {
    return flagHasGeonameName;
  }

std::string GeonameObjectJSON::getGeonameName(void)
  {
    assert(flagHasGeonameName);
    return storeGeonameName;
  }

const std::string GeonameObjectJSON::getGeonameName(void) const
  {
    assert(flagHasGeonameName);
    return storeGeonameName;
  }

bool GeonameObjectJSON::hasURL(void) const
  {
    return flagHasURL;
  }

std::string GeonameObjectJSON::getURL(void)
  {
    assert(flagHasURL);
    return storeURL;
  }

const std::string GeonameObjectJSON::getURL(void) const
  {
    assert(flagHasURL);
    return storeURL;
  }

bool GeonameObjectJSON::hasAttributes(void) const
  {
    return flagHasAttributes;
  }

size_t GeonameObjectJSON::countOfAttributes(void) const
  {
    assert(flagHasAttributes);
    return storeAttributes.size();
  }

GeonameObjectJSON::TypeAttributesJSON * GeonameObjectJSON::elementOfAttributes(size_t element_num)
  {
    assert(flagHasAttributes);
    return storeAttributes[element_num];
  }

const GeonameObjectJSON::TypeAttributesJSON * GeonameObjectJSON::elementOfAttributes(size_t element_num) const
  {
    assert(flagHasAttributes);
    return storeAttributes[element_num];
  }

std::vector< GeonameObjectJSON::TypeAttributesJSON * > GeonameObjectJSON::getAttributes(void)
  {
    assert(flagHasAttributes);
    return storeAttributes;
  }

const std::vector< GeonameObjectJSON::TypeAttributesJSON * > GeonameObjectJSON::getAttributes(void) const
  {
    assert(flagHasAttributes);
    return storeAttributes;
  }

char GeonameObjectJSON::Generator::lowerBoundGeonameID[] = "1";
char GeonameObjectJSON::Generator::lowerBoundGeonameObjectType[] = "1";
GeonameObjectJSON::TypeAttributesJSON *GeonameObjectJSON::TypeAttributesJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
GeonameObjectJSON *GeonameObjectJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameObjectJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool> generator("Type GeonameObject", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
