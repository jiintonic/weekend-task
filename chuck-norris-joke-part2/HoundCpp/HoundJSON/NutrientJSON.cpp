/* file "NutrientJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "NutrientJSON.h"

#include "NutrientJSON.h"


NutrientJSON::NutrientJSON(const NutrientJSON &)
  {
    assert(false);
  }

NutrientJSON &NutrientJSON::operator=(const NutrientJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void NutrientJSON::fromJSONID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ID of NutrientJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ID of NutrientJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setID(extracted_integer);
  }

void NutrientJSON::fromJSONAmountPer100g(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AmountPer100g of NutrientJSON is not a number.");
          }
      }
    setAmountPer100gText(the_rational_text);
  }

void NutrientJSON::fromJSONRDIPer100g(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field RDIPer100g of NutrientJSON is not a number.");
          }
      }
    setRDIPer100gText(the_rational_text);
  }

void NutrientJSON::fromJSONSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenName of NutrientJSON is not a string.");
    setSpokenName(std::string(json_string->getData()));
  }

void NutrientJSON::fromJSONWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenName of NutrientJSON is not a string.");
    setWrittenName(std::string(json_string->getData()));
  }

void NutrientJSON::fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenUnits of NutrientJSON is not a string.");
    setSpokenUnits(std::string(json_string->getData()));
  }

void NutrientJSON::fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenUnits of NutrientJSON is not a string.");
    setWrittenUnits(std::string(json_string->getData()));
  }

void NutrientJSON::fromJSONOutputUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OutputUnitsUOMAuxID of NutrientJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OutputUnitsUOMAuxID of NutrientJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOutputUnitsUOMAuxID(extracted_integer);
  }

void NutrientJSON::fromJSONDefaultUnitsUOMAuxID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field DefaultUnitsUOMAuxID of NutrientJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field DefaultUnitsUOMAuxID of NutrientJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setDefaultUnitsUOMAuxID(extracted_integer);
  }

void NutrientJSON::fromJSONOutputUnitsUOMID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field OutputUnitsUOMID of NutrientJSON is not a string.");
    setOutputUnitsUOMID(std::string(json_string->getData()));
  }

void NutrientJSON::fromJSONDefaultUnitsUOMID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field DefaultUnitsUOMID of NutrientJSON is not a string.");
    setDefaultUnitsUOMID(std::string(json_string->getData()));
  }

NutrientJSON::NutrientJSON(void) :
        flagHasID(false),
        flagHasAmountPer100g(false),
        flagHasRDIPer100g(false),
        flagHasSpokenName(false),
        flagHasWrittenName(false),
        flagHasSpokenUnits(false),
        flagHasWrittenUnits(false),
        flagHasOutputUnitsUOMAuxID(false),
        flagHasDefaultUnitsUOMAuxID(false),
        flagHasOutputUnitsUOMID(false),
        flagHasDefaultUnitsUOMID(false)
  {
  }

NutrientJSON::~NutrientJSON(void)
  {
  }

bool NutrientJSON::hasID(void) const
  {
    return flagHasID;
  }

OInteger NutrientJSON::getID(void)
  {
    assert(flagHasID);
    return storeID;
  }

const OInteger NutrientJSON::getID(void) const
  {
    assert(flagHasID);
    return storeID;
  }

bool NutrientJSON::hasAmountPer100g(void) const
  {
    return flagHasAmountPer100g;
  }

double NutrientJSON::getAmountPer100g(void)
  {
    assert(flagHasAmountPer100g);
    if (textStoreAmountPer100g != "")
      {
        return atof(textStoreAmountPer100g.c_str());
      }
    return storeAmountPer100g;
  }

const double NutrientJSON::getAmountPer100g(void) const
  {
    assert(flagHasAmountPer100g);
    if (textStoreAmountPer100g != "")
      {
        return atof(textStoreAmountPer100g.c_str());
      }
    return storeAmountPer100g;
  }

std::string NutrientJSON::getAmountPer100gAsText(void) const
  {
    assert(flagHasAmountPer100g);
    if (textStoreAmountPer100g == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeAmountPer100g);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreAmountPer100g);
      }
  }

bool NutrientJSON::hasRDIPer100g(void) const
  {
    return flagHasRDIPer100g;
  }

double NutrientJSON::getRDIPer100g(void)
  {
    assert(flagHasRDIPer100g);
    if (textStoreRDIPer100g != "")
      {
        return atof(textStoreRDIPer100g.c_str());
      }
    return storeRDIPer100g;
  }

const double NutrientJSON::getRDIPer100g(void) const
  {
    assert(flagHasRDIPer100g);
    if (textStoreRDIPer100g != "")
      {
        return atof(textStoreRDIPer100g.c_str());
      }
    return storeRDIPer100g;
  }

std::string NutrientJSON::getRDIPer100gAsText(void) const
  {
    assert(flagHasRDIPer100g);
    if (textStoreRDIPer100g == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeRDIPer100g);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreRDIPer100g);
      }
  }

bool NutrientJSON::hasSpokenName(void) const
  {
    return flagHasSpokenName;
  }

std::string NutrientJSON::getSpokenName(void)
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

const std::string NutrientJSON::getSpokenName(void) const
  {
    assert(flagHasSpokenName);
    return storeSpokenName;
  }

bool NutrientJSON::hasWrittenName(void) const
  {
    return flagHasWrittenName;
  }

std::string NutrientJSON::getWrittenName(void)
  {
    assert(flagHasWrittenName);
    return storeWrittenName;
  }

const std::string NutrientJSON::getWrittenName(void) const
  {
    assert(flagHasWrittenName);
    return storeWrittenName;
  }

bool NutrientJSON::hasSpokenUnits(void) const
  {
    return flagHasSpokenUnits;
  }

std::string NutrientJSON::getSpokenUnits(void)
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

const std::string NutrientJSON::getSpokenUnits(void) const
  {
    assert(flagHasSpokenUnits);
    return storeSpokenUnits;
  }

bool NutrientJSON::hasWrittenUnits(void) const
  {
    return flagHasWrittenUnits;
  }

std::string NutrientJSON::getWrittenUnits(void)
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

const std::string NutrientJSON::getWrittenUnits(void) const
  {
    assert(flagHasWrittenUnits);
    return storeWrittenUnits;
  }

bool NutrientJSON::hasOutputUnitsUOMAuxID(void) const
  {
    return flagHasOutputUnitsUOMAuxID;
  }

OInteger NutrientJSON::getOutputUnitsUOMAuxID(void)
  {
    assert(flagHasOutputUnitsUOMAuxID);
    return storeOutputUnitsUOMAuxID;
  }

const OInteger NutrientJSON::getOutputUnitsUOMAuxID(void) const
  {
    assert(flagHasOutputUnitsUOMAuxID);
    return storeOutputUnitsUOMAuxID;
  }

bool NutrientJSON::hasDefaultUnitsUOMAuxID(void) const
  {
    return flagHasDefaultUnitsUOMAuxID;
  }

OInteger NutrientJSON::getDefaultUnitsUOMAuxID(void)
  {
    assert(flagHasDefaultUnitsUOMAuxID);
    return storeDefaultUnitsUOMAuxID;
  }

const OInteger NutrientJSON::getDefaultUnitsUOMAuxID(void) const
  {
    assert(flagHasDefaultUnitsUOMAuxID);
    return storeDefaultUnitsUOMAuxID;
  }

bool NutrientJSON::hasOutputUnitsUOMID(void) const
  {
    return flagHasOutputUnitsUOMID;
  }

std::string NutrientJSON::getOutputUnitsUOMID(void)
  {
    assert(flagHasOutputUnitsUOMID);
    return storeOutputUnitsUOMID;
  }

const std::string NutrientJSON::getOutputUnitsUOMID(void) const
  {
    assert(flagHasOutputUnitsUOMID);
    return storeOutputUnitsUOMID;
  }

bool NutrientJSON::hasDefaultUnitsUOMID(void) const
  {
    return flagHasDefaultUnitsUOMID;
  }

std::string NutrientJSON::getDefaultUnitsUOMID(void)
  {
    assert(flagHasDefaultUnitsUOMID);
    return storeDefaultUnitsUOMID;
  }

const std::string NutrientJSON::getDefaultUnitsUOMID(void) const
  {
    assert(flagHasDefaultUnitsUOMID);
    return storeDefaultUnitsUOMID;
  }

char NutrientJSON::Generator::lowerBoundID[] = "0";
char NutrientJSON::Generator::lowerBoundOutputUnitsUOMAuxID[] = "-1";
char NutrientJSON::Generator::lowerBoundDefaultUnitsUOMAuxID[] = "-1";
NutrientJSON *NutrientJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    NutrientJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<NutrientJSON>, NutrientJSON *, bool> generator("Type Nutrient", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
