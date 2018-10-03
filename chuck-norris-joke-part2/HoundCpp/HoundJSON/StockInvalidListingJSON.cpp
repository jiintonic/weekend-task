/* file "StockInvalidListingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockInvalidListingJSON.h"

#include "StockInvalidListingJSON.h"


StockInvalidListingJSON::StockInvalidListingJSON(const StockInvalidListingJSON &)
  {
    assert(false);
  }

StockInvalidListingJSON &StockInvalidListingJSON::operator=(const StockInvalidListingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockInvalidListingJSON::fromJSONSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSymbol(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONShortName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShortName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONShortPossessiveName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setShortPossessiveName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONMediumName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setMediumName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONLongName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLongName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingRequestTypeJSON *convert_classy = StockListingRequestTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setListingRequestType(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONExchangeExplicit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExchangeExplicit of StockInvalidListingJSON is not true for false.");
          }
      }
    setExchangeExplicit(the_bool);
  }

void StockInvalidListingJSON::fromJSONRequestedStockExchangeShortName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStockExchangeShortName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONRequestedStockExchangeLongName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStockExchangeLongName(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONRequestedStockExchangeSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockAttributeValueJSON *convert_classy = StockAttributeValueJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestedStockExchangeSymbol(convert_classy);
    convert_classy->remove_reference();
  }

void StockInvalidListingJSON::fromJSONAlternateListing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingJSON *convert_classy = StockListingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlternateListing(convert_classy);
    convert_classy->remove_reference();
  }

StockInvalidListingJSON::StockInvalidListingJSON(void) :
        flagHasSymbol(false),
        flagHasShortName(false),
        flagHasShortPossessiveName(false),
        flagHasMediumName(false),
        flagHasLongName(false),
        flagHasListingRequestType(false),
        flagHasExchangeExplicit(false),
        flagHasRequestedStockExchangeShortName(false),
        flagHasRequestedStockExchangeLongName(false),
        flagHasRequestedStockExchangeSymbol(false),
        flagHasAlternateListing(false)
  {
    extraIndex = create_string_index();
  }

StockInvalidListingJSON::~StockInvalidListingJSON(void)
  {
    if (flagHasSymbol)
      {
        storeSymbol->remove_reference();
      }
    if (flagHasShortName)
      {
        storeShortName->remove_reference();
      }
    if (flagHasShortPossessiveName)
      {
        storeShortPossessiveName->remove_reference();
      }
    if (flagHasMediumName)
      {
        storeMediumName->remove_reference();
      }
    if (flagHasLongName)
      {
        storeLongName->remove_reference();
      }
    if (flagHasListingRequestType)
      {
        storeListingRequestType->remove_reference();
      }
    if (flagHasRequestedStockExchangeShortName)
      {
        storeRequestedStockExchangeShortName->remove_reference();
      }
    if (flagHasRequestedStockExchangeLongName)
      {
        storeRequestedStockExchangeLongName->remove_reference();
      }
    if (flagHasRequestedStockExchangeSymbol)
      {
        storeRequestedStockExchangeSymbol->remove_reference();
      }
    if (flagHasAlternateListing)
      {
        storeAlternateListing->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockInvalidListingJSON::hasSymbol(void) const
  {
    return flagHasSymbol;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getSymbol(void)
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getSymbol(void) const
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

bool StockInvalidListingJSON::hasShortName(void) const
  {
    return flagHasShortName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getShortName(void)
  {
    assert(flagHasShortName);
    return storeShortName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getShortName(void) const
  {
    assert(flagHasShortName);
    return storeShortName;
  }

bool StockInvalidListingJSON::hasShortPossessiveName(void) const
  {
    return flagHasShortPossessiveName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getShortPossessiveName(void)
  {
    assert(flagHasShortPossessiveName);
    return storeShortPossessiveName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getShortPossessiveName(void) const
  {
    assert(flagHasShortPossessiveName);
    return storeShortPossessiveName;
  }

bool StockInvalidListingJSON::hasMediumName(void) const
  {
    return flagHasMediumName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getMediumName(void)
  {
    assert(flagHasMediumName);
    return storeMediumName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getMediumName(void) const
  {
    assert(flagHasMediumName);
    return storeMediumName;
  }

bool StockInvalidListingJSON::hasLongName(void) const
  {
    return flagHasLongName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getLongName(void)
  {
    assert(flagHasLongName);
    return storeLongName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getLongName(void) const
  {
    assert(flagHasLongName);
    return storeLongName;
  }

bool StockInvalidListingJSON::hasListingRequestType(void) const
  {
    return flagHasListingRequestType;
  }

StockListingRequestTypeJSON * StockInvalidListingJSON::getListingRequestType(void)
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

const StockListingRequestTypeJSON * StockInvalidListingJSON::getListingRequestType(void) const
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

StockListingRequestTypeJSON::TypeValue StockInvalidListingJSON::getListingRequestTypeValue(void)
  {
    return getListingRequestType()->getValue();
  }

const StockListingRequestTypeJSON::TypeValue StockInvalidListingJSON::getListingRequestTypeValue(void) const
  {
    return getListingRequestType()->getValue();
  }

const char *StockInvalidListingJSON::getListingRequestTypeAsChars(void) const
  {
    return getListingRequestType()->getValueAsChars();
  }

std::string StockInvalidListingJSON::getListingRequestTypeAsString(void) const
  {
    return getListingRequestType()->getValueAsString();
  }

bool StockInvalidListingJSON::hasExchangeExplicit(void) const
  {
    return flagHasExchangeExplicit;
  }

bool StockInvalidListingJSON::getExchangeExplicit(void)
  {
    assert(flagHasExchangeExplicit);
    return storeExchangeExplicit;
  }

const bool StockInvalidListingJSON::getExchangeExplicit(void) const
  {
    assert(flagHasExchangeExplicit);
    return storeExchangeExplicit;
  }

bool StockInvalidListingJSON::hasRequestedStockExchangeShortName(void) const
  {
    return flagHasRequestedStockExchangeShortName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeShortName(void)
  {
    assert(flagHasRequestedStockExchangeShortName);
    return storeRequestedStockExchangeShortName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeShortName(void) const
  {
    assert(flagHasRequestedStockExchangeShortName);
    return storeRequestedStockExchangeShortName;
  }

bool StockInvalidListingJSON::hasRequestedStockExchangeLongName(void) const
  {
    return flagHasRequestedStockExchangeLongName;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeLongName(void)
  {
    assert(flagHasRequestedStockExchangeLongName);
    return storeRequestedStockExchangeLongName;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeLongName(void) const
  {
    assert(flagHasRequestedStockExchangeLongName);
    return storeRequestedStockExchangeLongName;
  }

bool StockInvalidListingJSON::hasRequestedStockExchangeSymbol(void) const
  {
    return flagHasRequestedStockExchangeSymbol;
  }

StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeSymbol(void)
  {
    assert(flagHasRequestedStockExchangeSymbol);
    return storeRequestedStockExchangeSymbol;
  }

const StockAttributeValueJSON * StockInvalidListingJSON::getRequestedStockExchangeSymbol(void) const
  {
    assert(flagHasRequestedStockExchangeSymbol);
    return storeRequestedStockExchangeSymbol;
  }

bool StockInvalidListingJSON::hasAlternateListing(void) const
  {
    return flagHasAlternateListing;
  }

StockListingJSON * StockInvalidListingJSON::getAlternateListing(void)
  {
    assert(flagHasAlternateListing);
    return storeAlternateListing;
  }

const StockListingJSON * StockInvalidListingJSON::getAlternateListing(void) const
  {
    assert(flagHasAlternateListing);
    return storeAlternateListing;
  }

StockInvalidListingJSON *StockInvalidListingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockInvalidListingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockInvalidListingJSON>, StockInvalidListingJSON *, bool> generator("Type StockInvalidListing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
