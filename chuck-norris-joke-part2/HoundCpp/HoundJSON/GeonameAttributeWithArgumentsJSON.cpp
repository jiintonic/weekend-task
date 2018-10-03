/* file "GeonameAttributeWithArgumentsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "GeonameAttributeWithArgumentsJSON.h"

#include "GeonameAttributeWithArgumentsJSON.h"


GeonameAttributeWithArgumentsJSON::GeonameAttributeWithArgumentsJSON(const GeonameAttributeWithArgumentsJSON &)
  {
    assert(false);
  }

GeonameAttributeWithArgumentsJSON &GeonameAttributeWithArgumentsJSON::operator=(const GeonameAttributeWithArgumentsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void GeonameAttributeWithArgumentsJSON::fromJSONAttributeID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AttributeID of GeonameAttributeWithArgumentsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AttributeID of GeonameAttributeWithArgumentsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAttributeID(extracted_integer);
  }

void GeonameAttributeWithArgumentsJSON::fromJSONArguments(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Arguments of GeonameAttributeWithArgumentsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< GeonameAttributeArgumentJSON * > vector_Arguments1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        GeonameAttributeArgumentJSON *convert_classy = GeonameAttributeArgumentJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Arguments1[num1] = convert_classy;
      }
    initArguments();
    for (size_t num2 = 0; num2 < vector_Arguments1.size(); ++num2)
        appendArguments(vector_Arguments1[num2]);
    for (size_t num1 = 0; num1 < vector_Arguments1.size(); ++num1)
      {
        vector_Arguments1[num1]->remove_reference();
      }
  }

GeonameAttributeWithArgumentsJSON::GeonameAttributeWithArgumentsJSON(void) :
        flagHasAttributeID(false),
        flagHasArguments(false)
  {
  }

GeonameAttributeWithArgumentsJSON::~GeonameAttributeWithArgumentsJSON(void)
  {
    if (flagHasArguments)
      {
        for (size_t num4 = 0; num4 < storeArguments.size(); ++num4)
          {
            storeArguments[num4]->remove_reference();
          }
      }
  }

bool GeonameAttributeWithArgumentsJSON::hasAttributeID(void) const
  {
    return flagHasAttributeID;
  }

OInteger GeonameAttributeWithArgumentsJSON::getAttributeID(void)
  {
    assert(flagHasAttributeID);
    return storeAttributeID;
  }

const OInteger GeonameAttributeWithArgumentsJSON::getAttributeID(void) const
  {
    assert(flagHasAttributeID);
    return storeAttributeID;
  }

bool GeonameAttributeWithArgumentsJSON::hasArguments(void) const
  {
    return flagHasArguments;
  }

size_t GeonameAttributeWithArgumentsJSON::countOfArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments.size();
  }

GeonameAttributeArgumentJSON * GeonameAttributeWithArgumentsJSON::elementOfArguments(size_t element_num)
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

const GeonameAttributeArgumentJSON * GeonameAttributeWithArgumentsJSON::elementOfArguments(size_t element_num) const
  {
    assert(flagHasArguments);
    return storeArguments[element_num];
  }

std::vector< GeonameAttributeArgumentJSON * > GeonameAttributeWithArgumentsJSON::getArguments(void)
  {
    assert(flagHasArguments);
    return storeArguments;
  }

const std::vector< GeonameAttributeArgumentJSON * > GeonameAttributeWithArgumentsJSON::getArguments(void) const
  {
    assert(flagHasArguments);
    return storeArguments;
  }

char GeonameAttributeWithArgumentsJSON::Generator::lowerBoundAttributeID[] = "1";
GeonameAttributeWithArgumentsJSON *GeonameAttributeWithArgumentsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    GeonameAttributeWithArgumentsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeWithArgumentsJSON>, GeonameAttributeWithArgumentsJSON *, bool> generator("Type GeonameAttributeWithArguments", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
