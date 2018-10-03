/* file "StockSecurityDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockSecurityDetailsJSON.h"

#include "StockSecurityDetailsJSON.h"


StockSecurityDetailsJSON::StockSecurityDetailsJSON(const StockSecurityDetailsJSON &)
  {
    assert(false);
  }

StockSecurityDetailsJSON &StockSecurityDetailsJSON::operator=(const StockSecurityDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockSecurityDetailsJSON::fromJSONCIK(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeCIK or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field CIK of StockSecurityDetailsJSON is not one of the allowed values.");
    setCIK(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONSymbol(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Symbol of StockSecurityDetailsJSON is not a string.");
    setSymbol(std::string(json_string->getData()));
  }

void StockSecurityDetailsJSON::fromJSONISIN(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeISIN or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field ISIN of StockSecurityDetailsJSON is not one of the allowed values.");
    setISIN(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONValoren(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeValoren or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field Valoren of StockSecurityDetailsJSON is not one of the allowed values.");
    setValoren(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONName(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Name of StockSecurityDetailsJSON is not a string.");
    setName(std::string(json_string->getData()));
  }

void StockSecurityDetailsJSON::fromJSONMarket(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMarket or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field Market of StockSecurityDetailsJSON is not one of the allowed values.");
    setMarket(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONMarketIdentificationCode(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMarketIdentificationCode or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field MarketIdentificationCode of StockSecurityDetailsJSON is not one of the allowed values.");
    setMarketIdentificationCode(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONMostLiquidExchange(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeMostLiquidExchange or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
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
                    throw("The value for ??? is not true for false.");
                  }
              }
            or_result.u.choice0 = the_bool;
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
        throw("The value for field MostLiquidExchange of StockSecurityDetailsJSON is not one of the allowed values.");
    setMostLiquidExchange(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

void StockSecurityDetailsJSON::fromJSONCategoryOrIndustry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeCategoryOrIndustry or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONStringValue *json_string = json_value->string_value();
            if (json_string == NULL)
                throw("The value for ??? is not a string.");
            or_result.choice0 = std::string(json_string->getData());
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
        throw("The value for field CategoryOrIndustry of StockSecurityDetailsJSON is not one of the allowed values.");
    setCategoryOrIndustry(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        default:
            assert(false);
      }
  }

StockSecurityDetailsJSON::StockSecurityDetailsJSON(void) :
        flagHasCIK(false),
        flagHasSymbol(false),
        flagHasISIN(false),
        flagHasValoren(false),
        flagHasName(false),
        flagHasMarket(false),
        flagHasMarketIdentificationCode(false),
        flagHasMostLiquidExchange(false),
        flagHasCategoryOrIndustry(false)
  {
    extraIndex = create_string_index();
  }

StockSecurityDetailsJSON::~StockSecurityDetailsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockSecurityDetailsJSON::hasCIK(void) const
  {
    return flagHasCIK;
  }

StockSecurityDetailsJSON::TypeCIK StockSecurityDetailsJSON::getCIK(void)
  {
    assert(flagHasCIK);
    return storeCIK;
  }

const StockSecurityDetailsJSON::TypeCIK StockSecurityDetailsJSON::getCIK(void) const
  {
    assert(flagHasCIK);
    return storeCIK;
  }

bool StockSecurityDetailsJSON::hasSymbol(void) const
  {
    return flagHasSymbol;
  }

std::string StockSecurityDetailsJSON::getSymbol(void)
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

const std::string StockSecurityDetailsJSON::getSymbol(void) const
  {
    assert(flagHasSymbol);
    return storeSymbol;
  }

bool StockSecurityDetailsJSON::hasISIN(void) const
  {
    return flagHasISIN;
  }

StockSecurityDetailsJSON::TypeISIN StockSecurityDetailsJSON::getISIN(void)
  {
    assert(flagHasISIN);
    return storeISIN;
  }

const StockSecurityDetailsJSON::TypeISIN StockSecurityDetailsJSON::getISIN(void) const
  {
    assert(flagHasISIN);
    return storeISIN;
  }

bool StockSecurityDetailsJSON::hasValoren(void) const
  {
    return flagHasValoren;
  }

StockSecurityDetailsJSON::TypeValoren StockSecurityDetailsJSON::getValoren(void)
  {
    assert(flagHasValoren);
    return storeValoren;
  }

const StockSecurityDetailsJSON::TypeValoren StockSecurityDetailsJSON::getValoren(void) const
  {
    assert(flagHasValoren);
    return storeValoren;
  }

bool StockSecurityDetailsJSON::hasName(void) const
  {
    return flagHasName;
  }

std::string StockSecurityDetailsJSON::getName(void)
  {
    assert(flagHasName);
    return storeName;
  }

const std::string StockSecurityDetailsJSON::getName(void) const
  {
    assert(flagHasName);
    return storeName;
  }

bool StockSecurityDetailsJSON::hasMarket(void) const
  {
    return flagHasMarket;
  }

StockSecurityDetailsJSON::TypeMarket StockSecurityDetailsJSON::getMarket(void)
  {
    assert(flagHasMarket);
    return storeMarket;
  }

const StockSecurityDetailsJSON::TypeMarket StockSecurityDetailsJSON::getMarket(void) const
  {
    assert(flagHasMarket);
    return storeMarket;
  }

bool StockSecurityDetailsJSON::hasMarketIdentificationCode(void) const
  {
    return flagHasMarketIdentificationCode;
  }

StockSecurityDetailsJSON::TypeMarketIdentificationCode StockSecurityDetailsJSON::getMarketIdentificationCode(void)
  {
    assert(flagHasMarketIdentificationCode);
    return storeMarketIdentificationCode;
  }

const StockSecurityDetailsJSON::TypeMarketIdentificationCode StockSecurityDetailsJSON::getMarketIdentificationCode(void) const
  {
    assert(flagHasMarketIdentificationCode);
    return storeMarketIdentificationCode;
  }

bool StockSecurityDetailsJSON::hasMostLiquidExchange(void) const
  {
    return flagHasMostLiquidExchange;
  }

StockSecurityDetailsJSON::TypeMostLiquidExchange StockSecurityDetailsJSON::getMostLiquidExchange(void)
  {
    assert(flagHasMostLiquidExchange);
    return storeMostLiquidExchange;
  }

const StockSecurityDetailsJSON::TypeMostLiquidExchange StockSecurityDetailsJSON::getMostLiquidExchange(void) const
  {
    assert(flagHasMostLiquidExchange);
    return storeMostLiquidExchange;
  }

bool StockSecurityDetailsJSON::hasCategoryOrIndustry(void) const
  {
    return flagHasCategoryOrIndustry;
  }

StockSecurityDetailsJSON::TypeCategoryOrIndustry StockSecurityDetailsJSON::getCategoryOrIndustry(void)
  {
    assert(flagHasCategoryOrIndustry);
    return storeCategoryOrIndustry;
  }

const StockSecurityDetailsJSON::TypeCategoryOrIndustry StockSecurityDetailsJSON::getCategoryOrIndustry(void) const
  {
    assert(flagHasCategoryOrIndustry);
    return storeCategoryOrIndustry;
  }

StockSecurityDetailsJSON *StockSecurityDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockSecurityDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockSecurityDetailsJSON>, StockSecurityDetailsJSON *, bool> generator("Type StockSecurityDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
