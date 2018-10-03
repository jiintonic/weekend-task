/* file "StockConversationRequestedListingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockConversationRequestedListingJSON.h"

#include "StockConversationRequestedListingJSON.h"


StockConversationRequestedListingJSON::StockConversationRequestedListingJSON(const StockConversationRequestedListingJSON &)
  {
    assert(false);
  }

StockConversationRequestedListingJSON &StockConversationRequestedListingJSON::operator=(const StockConversationRequestedListingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockConversationRequestedListingJSON::fromJSONListingID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ListingID of StockConversationRequestedListingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ListingID of StockConversationRequestedListingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setListingID(extracted_integer);
  }

void StockConversationRequestedListingJSON::fromJSONListingRequestType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    StockListingRequestTypeJSON *convert_classy = StockListingRequestTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setListingRequestType(convert_classy);
    convert_classy->remove_reference();
  }

void StockConversationRequestedListingJSON::fromJSONNumShares(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field NumShares of StockConversationRequestedListingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field NumShares of StockConversationRequestedListingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setNumShares(extracted_integer);
  }

void StockConversationRequestedListingJSON::fromJSONAlternateListingID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AlternateListingID of StockConversationRequestedListingJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AlternateListingID of StockConversationRequestedListingJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAlternateListingID(extracted_integer);
  }

StockConversationRequestedListingJSON::StockConversationRequestedListingJSON(void) :
        flagHasListingID(false),
        flagHasListingRequestType(false),
        flagHasNumShares(false),
        flagHasAlternateListingID(false)
  {
    extraIndex = create_string_index();
  }

StockConversationRequestedListingJSON::~StockConversationRequestedListingJSON(void)
  {
    if (flagHasListingRequestType)
      {
        storeListingRequestType->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockConversationRequestedListingJSON::hasListingID(void) const
  {
    return flagHasListingID;
  }

OInteger StockConversationRequestedListingJSON::getListingID(void)
  {
    assert(flagHasListingID);
    return storeListingID;
  }

const OInteger StockConversationRequestedListingJSON::getListingID(void) const
  {
    assert(flagHasListingID);
    return storeListingID;
  }

bool StockConversationRequestedListingJSON::hasListingRequestType(void) const
  {
    return flagHasListingRequestType;
  }

StockListingRequestTypeJSON * StockConversationRequestedListingJSON::getListingRequestType(void)
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

const StockListingRequestTypeJSON * StockConversationRequestedListingJSON::getListingRequestType(void) const
  {
    assert(flagHasListingRequestType);
    return storeListingRequestType;
  }

StockListingRequestTypeJSON::TypeValue StockConversationRequestedListingJSON::getListingRequestTypeValue(void)
  {
    return getListingRequestType()->getValue();
  }

const StockListingRequestTypeJSON::TypeValue StockConversationRequestedListingJSON::getListingRequestTypeValue(void) const
  {
    return getListingRequestType()->getValue();
  }

const char *StockConversationRequestedListingJSON::getListingRequestTypeAsChars(void) const
  {
    return getListingRequestType()->getValueAsChars();
  }

std::string StockConversationRequestedListingJSON::getListingRequestTypeAsString(void) const
  {
    return getListingRequestType()->getValueAsString();
  }

bool StockConversationRequestedListingJSON::hasNumShares(void) const
  {
    return flagHasNumShares;
  }

OInteger StockConversationRequestedListingJSON::getNumShares(void)
  {
    assert(flagHasNumShares);
    return storeNumShares;
  }

const OInteger StockConversationRequestedListingJSON::getNumShares(void) const
  {
    assert(flagHasNumShares);
    return storeNumShares;
  }

bool StockConversationRequestedListingJSON::hasAlternateListingID(void) const
  {
    return flagHasAlternateListingID;
  }

OInteger StockConversationRequestedListingJSON::getAlternateListingID(void)
  {
    assert(flagHasAlternateListingID);
    return storeAlternateListingID;
  }

const OInteger StockConversationRequestedListingJSON::getAlternateListingID(void) const
  {
    assert(flagHasAlternateListingID);
    return storeAlternateListingID;
  }

StockConversationRequestedListingJSON *StockConversationRequestedListingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockConversationRequestedListingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockConversationRequestedListingJSON>, StockConversationRequestedListingJSON *, bool> generator("Type StockConversationRequestedListing", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
