/* file "StockRequestedListingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockRequestedListingJSON.h"

#include "StockRequestedListingJSON.h"


StockRequestedListingJSON::StockRequestedListingJSON(const StockRequestedListingJSON &)
  {
    assert(false);
  }

StockRequestedListingJSON &StockRequestedListingJSON::operator=(const StockRequestedListingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockRequestedListingJSON::fromJSONStockListing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingJSON *convert_classy = StockListingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStockListing(convert_classy);
    convert_classy->remove_reference();
  }

void StockRequestedListingJSON::fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingRequestTypeJSON *convert_classy = StockListingRequestTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setListingRequestType(convert_classy);
    convert_classy->remove_reference();
  }

void StockRequestedListingJSON::fromJSONExchangeExplicit(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ExchangeExplicit of StockRequestedListingJSON is not true for false.");
          }
      }
    setExchangeExplicit(the_bool);
  }

void StockRequestedListingJSON::fromJSONPrimaryHasData(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field PrimaryHasData of StockRequestedListingJSON is not true for false.");
          }
      }
    setPrimaryHasData(the_bool);
  }

void StockRequestedListingJSON::fromJSONAllowDataWarnings(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AllowDataWarnings of StockRequestedListingJSON is not true for false.");
          }
      }
    setAllowDataWarnings(the_bool);
  }

void StockRequestedListingJSON::fromJSONAlternateListing(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingJSON *convert_classy = StockListingJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setAlternateListing(convert_classy);
    convert_classy->remove_reference();
  }

void StockRequestedListingJSON::fromJSONRemoteDelay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field RemoteDelay of StockRequestedListingJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeRemoteDelay > vector_RemoteDelay1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeRemoteDelay or_result;
        bool or_done = false;
        if (!or_done)
          {
            try
              {
                const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
                double the_double;
                if (json_rational != NULL)
                  {
                    the_double = json_rational->getDouble();
                  }
                else
                  {
                    const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
                    if (json_integer != NULL)
                      {
                        the_double = json_integer->getLongInt();
                      }
                    else
                      {
                        throw("The value for ??? is not a number.");
                      }
                  }
                or_result.u.choice0 = the_double;
                or_result.key = 0;
                or_done = true;
              }
            catch (char *e1)
              {
                free(e1);
              }
            catch (const char *e1)
              {
              }
          }
        if (!or_done)
          {
            try
              {
                or_result.key = 1;
                or_done = true;
              }
            catch (char *e1)
              {
                free(e1);
              }
            catch (const char *e1)
              {
              }
          }
        if (!or_done)
            throw("The value for an element of field RemoteDelay of StockRequestedListingJSON is not one of the allowed values.");
        vector_RemoteDelay1[num1] = or_result;
      }
    initRemoteDelay();
    for (size_t num2 = 0; num2 < vector_RemoteDelay1.size(); ++num2)
        appendRemoteDelay(vector_RemoteDelay1[num2]);
    for (size_t num1 = 0; num1 < vector_RemoteDelay1.size(); ++num1)
      {
        switch (vector_RemoteDelay1[num1].key)
          {
            case 0:
                break;
            case 1:
                break;
            default:
                assert(false);
          }
      }
  }

StockRequestedListingJSON::StockRequestedListingJSON(void) :
        flagHasStockListing(false),
        flagHasListingRequestType(false),
        flagHasExchangeExplicit(false),
        flagHasPrimaryHasData(false),
        flagHasAllowDataWarnings(false),
        flagHasAlternateListing(false),
        flagHasRemoteDelay(false)
  {
    extraIndex = create_string_index();
  }

StockRequestedListingJSON::~StockRequestedListingJSON(void)
  {
    if (flagHasStockListing)
      {
        storeStockListing->remove_reference();
      }
    if (flagHasListingRequestType)
      {
        storeListingRequestType->remove_reference();
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

bool StockRequestedListingJSON::hasStockListing(void) const
  {
    return flagHasStockListing;
  }

StockListingJSON * StockRequestedListingJSON::getStockListing(void)
  {
    assert(flagHasStockListing);
    return storeStockListing;
  }

const StockListingJSON * StockRequestedListingJSON::getStockListing(void) const
  {
    assert(flagHasStockListing);
    return storeStockListing;
  }

bool StockRequestedListingJSON::hasListingRequestType(void) const
  {
    return flagHasListingRequestType;
  }

StockListingRequestTypeJSON * StockRequestedListingJSON::getListingRequestType(void)
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

const StockListingRequestTypeJSON * StockRequestedListingJSON::getListingRequestType(void) const
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

StockListingRequestTypeJSON::TypeValue StockRequestedListingJSON::getListingRequestTypeValue(void)
  {
    return getListingRequestType()->getValue();
  }

const StockListingRequestTypeJSON::TypeValue StockRequestedListingJSON::getListingRequestTypeValue(void) const
  {
    return getListingRequestType()->getValue();
  }

const char *StockRequestedListingJSON::getListingRequestTypeAsChars(void) const
  {
    return getListingRequestType()->getValueAsChars();
  }

std::string StockRequestedListingJSON::getListingRequestTypeAsString(void) const
  {
    return getListingRequestType()->getValueAsString();
  }

bool StockRequestedListingJSON::hasExchangeExplicit(void) const
  {
    return flagHasExchangeExplicit;
  }

bool StockRequestedListingJSON::getExchangeExplicit(void)
  {
    assert(flagHasExchangeExplicit);
    return storeExchangeExplicit;
  }

const bool StockRequestedListingJSON::getExchangeExplicit(void) const
  {
    assert(flagHasExchangeExplicit);
    return storeExchangeExplicit;
  }

bool StockRequestedListingJSON::hasPrimaryHasData(void) const
  {
    return flagHasPrimaryHasData;
  }

bool StockRequestedListingJSON::getPrimaryHasData(void)
  {
    assert(flagHasPrimaryHasData);
    return storePrimaryHasData;
  }

const bool StockRequestedListingJSON::getPrimaryHasData(void) const
  {
    assert(flagHasPrimaryHasData);
    return storePrimaryHasData;
  }

bool StockRequestedListingJSON::hasAllowDataWarnings(void) const
  {
    return flagHasAllowDataWarnings;
  }

bool StockRequestedListingJSON::getAllowDataWarnings(void)
  {
    assert(flagHasAllowDataWarnings);
    return storeAllowDataWarnings;
  }

const bool StockRequestedListingJSON::getAllowDataWarnings(void) const
  {
    assert(flagHasAllowDataWarnings);
    return storeAllowDataWarnings;
  }

bool StockRequestedListingJSON::hasAlternateListing(void) const
  {
    return flagHasAlternateListing;
  }

StockListingJSON * StockRequestedListingJSON::getAlternateListing(void)
  {
    assert(flagHasAlternateListing);
    return storeAlternateListing;
  }

const StockListingJSON * StockRequestedListingJSON::getAlternateListing(void) const
  {
    assert(flagHasAlternateListing);
    return storeAlternateListing;
  }

bool StockRequestedListingJSON::hasRemoteDelay(void) const
  {
    return flagHasRemoteDelay;
  }

size_t StockRequestedListingJSON::countOfRemoteDelay(void) const
  {
    assert(flagHasRemoteDelay);
    return storeRemoteDelay.size();
  }

StockRequestedListingJSON::TypeRemoteDelay StockRequestedListingJSON::elementOfRemoteDelay(size_t element_num)
  {
    assert(flagHasRemoteDelay);
    return storeRemoteDelay[element_num];
  }

const StockRequestedListingJSON::TypeRemoteDelay StockRequestedListingJSON::elementOfRemoteDelay(size_t element_num) const
  {
    assert(flagHasRemoteDelay);
    return storeRemoteDelay[element_num];
  }

std::vector< StockRequestedListingJSON::TypeRemoteDelay > StockRequestedListingJSON::getRemoteDelay(void)
  {
    assert(flagHasRemoteDelay);
    return storeRemoteDelay;
  }

const std::vector< StockRequestedListingJSON::TypeRemoteDelay > StockRequestedListingJSON::getRemoteDelay(void) const
  {
    assert(flagHasRemoteDelay);
    return storeRemoteDelay;
  }

StockRequestedListingJSON *StockRequestedListingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockRequestedListingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockRequestedListingJSON>, StockRequestedListingJSON *, bool> generator("Type StockRequestedListing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
