/* file "MeasuredAmountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "MeasuredAmountJSON.h"

#include "MeasuredAmountJSON.h"


MeasuredAmountJSON::MeasuredAmountJSON(const MeasuredAmountJSON &)
  {
    assert(false);
  }

MeasuredAmountJSON &MeasuredAmountJSON::operator=(const MeasuredAmountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void MeasuredAmountJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitOfMeasureJSON *convert_classy = UnitOfMeasureJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnit(convert_classy);
    convert_classy->remove_reference();
  }

void MeasuredAmountJSON::fromJSONSingularName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SingularName of MeasuredAmountJSON is not a string.");
    setSingularName(std::string(json_string->getData()));
  }

void MeasuredAmountJSON::fromJSONPluralName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PluralName of MeasuredAmountJSON is not a string.");
    setPluralName(std::string(json_string->getData()));
  }

void MeasuredAmountJSON::fromJSONAbbreviatedName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field AbbreviatedName of MeasuredAmountJSON is not a string.");
    setAbbreviatedName(std::string(json_string->getData()));
  }

void MeasuredAmountJSON::fromJSONReferenceUnitsPerUnit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ReferenceUnitsPerUnit of MeasuredAmountJSON is not a number.");
          }
      }
    setReferenceUnitsPerUnitText(the_rational_text);
  }

void MeasuredAmountJSON::fromJSONUnitsPerReferenceUnit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field UnitsPerReferenceUnit of MeasuredAmountJSON is not a number.");
          }
      }
    setUnitsPerReferenceUnitText(the_rational_text);
  }

void MeasuredAmountJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Value of MeasuredAmountJSON is not a number.");
          }
      }
    setValueText(the_rational_text);
  }

MeasuredAmountJSON::MeasuredAmountJSON(void) :
        flagHasUnit(false),
        flagHasSingularName(false),
        flagHasPluralName(false),
        flagHasAbbreviatedName(false),
        flagHasReferenceUnitsPerUnit(false),
        flagHasUnitsPerReferenceUnit(false),
        flagHasValue(false)
  {
  }

MeasuredAmountJSON::~MeasuredAmountJSON(void)
  {
    if (flagHasUnit)
      {
        storeUnit->remove_reference();
      }
  }

bool MeasuredAmountJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

UnitOfMeasureJSON * MeasuredAmountJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const UnitOfMeasureJSON * MeasuredAmountJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

UnitOfMeasureJSON::TypeValue MeasuredAmountJSON::getUnitValue(void)
  {
    return getUnit()->getValue();
  }

const UnitOfMeasureJSON::TypeValue MeasuredAmountJSON::getUnitValue(void) const
  {
    return getUnit()->getValue();
  }

const char *MeasuredAmountJSON::getUnitAsChars(void) const
  {
    return getUnit()->getValueAsChars();
  }

std::string MeasuredAmountJSON::getUnitAsString(void) const
  {
    return getUnit()->getValueAsString();
  }

bool MeasuredAmountJSON::hasSingularName(void) const
  {
    return flagHasSingularName;
  }

std::string MeasuredAmountJSON::getSingularName(void)
  {
    assert(flagHasSingularName);
    return storeSingularName;
  }

const std::string MeasuredAmountJSON::getSingularName(void) const
  {
    assert(flagHasSingularName);
    return storeSingularName;
  }

bool MeasuredAmountJSON::hasPluralName(void) const
  {
    return flagHasPluralName;
  }

std::string MeasuredAmountJSON::getPluralName(void)
  {
    assert(flagHasPluralName);
    return storePluralName;
  }

const std::string MeasuredAmountJSON::getPluralName(void) const
  {
    assert(flagHasPluralName);
    return storePluralName;
  }

bool MeasuredAmountJSON::hasAbbreviatedName(void) const
  {
    return flagHasAbbreviatedName;
  }

std::string MeasuredAmountJSON::getAbbreviatedName(void)
  {
    assert(flagHasAbbreviatedName);
    return storeAbbreviatedName;
  }

const std::string MeasuredAmountJSON::getAbbreviatedName(void) const
  {
    assert(flagHasAbbreviatedName);
    return storeAbbreviatedName;
  }

bool MeasuredAmountJSON::hasReferenceUnitsPerUnit(void) const
  {
    return flagHasReferenceUnitsPerUnit;
  }

double MeasuredAmountJSON::getReferenceUnitsPerUnit(void)
  {
    assert(flagHasReferenceUnitsPerUnit);
    if (textStoreReferenceUnitsPerUnit != "")
      {
        return atof(textStoreReferenceUnitsPerUnit.c_str());
      }
    return storeReferenceUnitsPerUnit;
  }

const double MeasuredAmountJSON::getReferenceUnitsPerUnit(void) const
  {
    assert(flagHasReferenceUnitsPerUnit);
    if (textStoreReferenceUnitsPerUnit != "")
      {
        return atof(textStoreReferenceUnitsPerUnit.c_str());
      }
    return storeReferenceUnitsPerUnit;
  }

std::string MeasuredAmountJSON::getReferenceUnitsPerUnitAsText(void) const
  {
    assert(flagHasReferenceUnitsPerUnit);
    if (textStoreReferenceUnitsPerUnit == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeReferenceUnitsPerUnit);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreReferenceUnitsPerUnit);
      }
  }

bool MeasuredAmountJSON::hasUnitsPerReferenceUnit(void) const
  {
    return flagHasUnitsPerReferenceUnit;
  }

double MeasuredAmountJSON::getUnitsPerReferenceUnit(void)
  {
    assert(flagHasUnitsPerReferenceUnit);
    if (textStoreUnitsPerReferenceUnit != "")
      {
        return atof(textStoreUnitsPerReferenceUnit.c_str());
      }
    return storeUnitsPerReferenceUnit;
  }

const double MeasuredAmountJSON::getUnitsPerReferenceUnit(void) const
  {
    assert(flagHasUnitsPerReferenceUnit);
    if (textStoreUnitsPerReferenceUnit != "")
      {
        return atof(textStoreUnitsPerReferenceUnit.c_str());
      }
    return storeUnitsPerReferenceUnit;
  }

std::string MeasuredAmountJSON::getUnitsPerReferenceUnitAsText(void) const
  {
    assert(flagHasUnitsPerReferenceUnit);
    if (textStoreUnitsPerReferenceUnit == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeUnitsPerReferenceUnit);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreUnitsPerReferenceUnit);
      }
  }

bool MeasuredAmountJSON::hasValue(void) const
  {
    return flagHasValue;
  }

double MeasuredAmountJSON::getValue(void)
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

const double MeasuredAmountJSON::getValue(void) const
  {
    assert(flagHasValue);
    if (textStoreValue != "")
      {
        return atof(textStoreValue.c_str());
      }
    return storeValue;
  }

std::string MeasuredAmountJSON::getValueAsText(void) const
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

MeasuredAmountJSON *MeasuredAmountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    MeasuredAmountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool> generator("Type MeasuredAmount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
