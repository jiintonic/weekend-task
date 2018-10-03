/* file "AmountJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "AmountJSON.h"

#include "AmountJSON.h"
#include "UnitOfMeasureAmountJSON.h"
#include "MonetaryAmountJSON.h"


AmountJSON::TypeUnitJSON::TypeUnitJSON(const TypeUnitJSON &)
  {
    assert(false);
  }

AmountJSON::TypeUnitJSON &AmountJSON::TypeUnitJSON::operator=(const TypeUnitJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AmountJSON::TypeUnitJSON::fromJSONSingularSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SingularSpokenName of TypeUnitJSON is not a string.");
    setSingularSpokenName(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONSingularWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SingularWrittenName of TypeUnitJSON is not a string.");
    setSingularWrittenName(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONPluralSpokenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PluralSpokenName of TypeUnitJSON is not a string.");
    setPluralSpokenName(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONPluralWrittenName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PluralWrittenName of TypeUnitJSON is not a string.");
    setPluralWrittenName(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONAbbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Abbreviation of TypeUnitJSON is not a string.");
    setAbbreviation(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Symbol of TypeUnitJSON is not a string.");
    setSymbol(std::string(json_string->getData()));
  }

void AmountJSON::TypeUnitJSON::fromJSONSymbolIsPrefix(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SymbolIsPrefix of TypeUnitJSON is not true for false.");
          }
      }
    setSymbolIsPrefix(the_bool);
  }

AmountJSON::TypeUnitJSON::TypeUnitJSON(void) :
        flagHasSingularSpokenName(false),
        flagHasSingularWrittenName(false),
        flagHasPluralSpokenName(false),
        flagHasPluralWrittenName(false),
        flagHasAbbreviation(false),
        flagHasSymbol(false),
        flagHasSymbolIsPrefix(false)
  {
    extraIndex = create_string_index();
  }

AmountJSON::TypeUnitJSON::~TypeUnitJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AmountJSON::TypeUnitJSON::hasSingularSpokenName(void) const
  {
    return flagHasSingularSpokenName;
  }

std::string AmountJSON::TypeUnitJSON::getSingularSpokenName(void)
  {
    assert(flagHasSingularSpokenName);
    return storeSingularSpokenName;
  }

const std::string AmountJSON::TypeUnitJSON::getSingularSpokenName(void) const
  {
    assert(flagHasSingularSpokenName);
    return storeSingularSpokenName;
  }

bool AmountJSON::TypeUnitJSON::hasSingularWrittenName(void) const
  {
    return flagHasSingularWrittenName;
  }

std::string AmountJSON::TypeUnitJSON::getSingularWrittenName(void)
  {
    assert(flagHasSingularWrittenName);
    return storeSingularWrittenName;
  }

const std::string AmountJSON::TypeUnitJSON::getSingularWrittenName(void) const
  {
    assert(flagHasSingularWrittenName);
    return storeSingularWrittenName;
  }

bool AmountJSON::TypeUnitJSON::hasPluralSpokenName(void) const
  {
    return flagHasPluralSpokenName;
  }

std::string AmountJSON::TypeUnitJSON::getPluralSpokenName(void)
  {
    assert(flagHasPluralSpokenName);
    return storePluralSpokenName;
  }

const std::string AmountJSON::TypeUnitJSON::getPluralSpokenName(void) const
  {
    assert(flagHasPluralSpokenName);
    return storePluralSpokenName;
  }

bool AmountJSON::TypeUnitJSON::hasPluralWrittenName(void) const
  {
    return flagHasPluralWrittenName;
  }

std::string AmountJSON::TypeUnitJSON::getPluralWrittenName(void)
  {
    assert(flagHasPluralWrittenName);
    return storePluralWrittenName;
  }

const std::string AmountJSON::TypeUnitJSON::getPluralWrittenName(void) const
  {
    assert(flagHasPluralWrittenName);
    return storePluralWrittenName;
  }

bool AmountJSON::TypeUnitJSON::hasAbbreviation(void) const
  {
    return flagHasAbbreviation;
  }

std::string AmountJSON::TypeUnitJSON::getAbbreviation(void)
  {
    assert(flagHasAbbreviation);
    return storeAbbreviation;
  }

const std::string AmountJSON::TypeUnitJSON::getAbbreviation(void) const
  {
    assert(flagHasAbbreviation);
    return storeAbbreviation;
  }

bool AmountJSON::TypeUnitJSON::hasSymbol(void) const
  {
    return flagHasSymbol;
  }

std::string AmountJSON::TypeUnitJSON::getSymbol(void)
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

const std::string AmountJSON::TypeUnitJSON::getSymbol(void) const
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

bool AmountJSON::TypeUnitJSON::hasSymbolIsPrefix(void) const
  {
    return flagHasSymbolIsPrefix;
  }

bool AmountJSON::TypeUnitJSON::getSymbolIsPrefix(void)
  {
    assert(flagHasSymbolIsPrefix);
    return storeSymbolIsPrefix;
  }

const bool AmountJSON::TypeUnitJSON::getSymbolIsPrefix(void) const
  {
    assert(flagHasSymbolIsPrefix);
    return storeSymbolIsPrefix;
  }

AmountJSON::AmountJSON(const AmountJSON &)
  {
    assert(false);
  }

AmountJSON &AmountJSON::operator=(const AmountJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void AmountJSON::fromJSONQuantity(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Quantity of AmountJSON is not a number.");
          }
      }
    setQuantityText(the_rational_text);
  }

void AmountJSON::fromJSONQuantityDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    QuantityJSON *convert_classy = QuantityJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setQuantityDetails(convert_classy);
    convert_classy->remove_reference();
  }

void AmountJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUnitJSON *convert_classy = TypeUnitJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnit(convert_classy);
    convert_classy->remove_reference();
  }

void AmountJSON::fromJSONUnitDetails(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UnitJSON *convert_classy = UnitJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUnitDetails(convert_classy);
    convert_classy->remove_reference();
  }

void AmountJSON::fromJSONSpokenQuantityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenQuantityName of AmountJSON is not a string.");
    setSpokenQuantityName(std::string(json_string->getData()));
  }

void AmountJSON::fromJSONWrittenQuantityName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenQuantityName of AmountJSON is not a string.");
    setWrittenQuantityName(std::string(json_string->getData()));
  }

AmountJSON::AmountJSON(void) :
        flagHasQuantity(false),
        flagHasQuantityDetails(false),
        flagHasUnit(false),
        flagHasUnitDetails(false),
        flagHasSpokenQuantityName(false),
        flagHasWrittenQuantityName(false)
  {
    extraIndex = create_string_index();
  }

AmountJSON::~AmountJSON(void)
  {
    if (flagHasQuantityDetails)
      {
        storeQuantityDetails->remove_reference();
      }
    if (flagHasUnit)
      {
        storeUnit->remove_reference();
      }
    if (flagHasUnitDetails)
      {
        storeUnitDetails->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool AmountJSON::hasQuantity(void) const
  {
    return flagHasQuantity;
  }

double AmountJSON::getQuantity(void)
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

const double AmountJSON::getQuantity(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity != "")
      {
        return atof(textStoreQuantity.c_str());
      }
    return storeQuantity;
  }

std::string AmountJSON::getQuantityAsText(void) const
  {
    assert(flagHasQuantity);
    if (textStoreQuantity == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeQuantity);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreQuantity);
      }
  }

bool AmountJSON::hasQuantityDetails(void) const
  {
    return flagHasQuantityDetails;
  }

QuantityJSON * AmountJSON::getQuantityDetails(void)
  {
    assert(flagHasQuantityDetails);
    return storeQuantityDetails;
  }

const QuantityJSON * AmountJSON::getQuantityDetails(void) const
  {
    assert(flagHasQuantityDetails);
    return storeQuantityDetails;
  }

bool AmountJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

AmountJSON::TypeUnitJSON * AmountJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const AmountJSON::TypeUnitJSON * AmountJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

bool AmountJSON::hasUnitDetails(void) const
  {
    return flagHasUnitDetails;
  }

UnitJSON * AmountJSON::getUnitDetails(void)
  {
    assert(flagHasUnitDetails);
    return storeUnitDetails;
  }

const UnitJSON * AmountJSON::getUnitDetails(void) const
  {
    assert(flagHasUnitDetails);
    return storeUnitDetails;
  }

bool AmountJSON::hasSpokenQuantityName(void) const
  {
    return flagHasSpokenQuantityName;
  }

std::string AmountJSON::getSpokenQuantityName(void)
  {
    assert(flagHasSpokenQuantityName);
    return storeSpokenQuantityName;
  }

const std::string AmountJSON::getSpokenQuantityName(void) const
  {
    assert(flagHasSpokenQuantityName);
    return storeSpokenQuantityName;
  }

bool AmountJSON::hasWrittenQuantityName(void) const
  {
    return flagHasWrittenQuantityName;
  }

std::string AmountJSON::getWrittenQuantityName(void)
  {
    assert(flagHasWrittenQuantityName);
    return storeWrittenQuantityName;
  }

const std::string AmountJSON::getWrittenQuantityName(void) const
  {
    assert(flagHasWrittenQuantityName);
    return storeWrittenQuantityName;
  }

AmountJSON::TypeUnitJSON *AmountJSON::TypeUnitJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeUnitJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeUnitJSON>, TypeUnitJSON *, bool> generator("Type TypeUnit", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
AmountJSON *AmountJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    AmountJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<AmountJSON>, AmountJSON *, bool> generator("Type Amount", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
