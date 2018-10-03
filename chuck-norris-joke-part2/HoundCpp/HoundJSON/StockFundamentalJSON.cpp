/* file "StockFundamentalJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockFundamentalJSON.h"

#include "StockFundamentalJSON.h"


StockFundamentalJSON::StockFundamentalJSON(const StockFundamentalJSON &)
  {
    assert(false);
  }

StockFundamentalJSON &StockFundamentalJSON::operator=(const StockFundamentalJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockFundamentalJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of StockFundamentalJSON is not a string.");
    setType(std::string(json_string->getData()));
  }

void StockFundamentalJSON::fromJSONReportType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeReportType or_result;
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
        throw("The value for field ReportType of StockFundamentalJSON is not one of the allowed values.");
    setReportType(or_result);
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

void StockFundamentalJSON::fromJSONIsRestated(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeIsRestated or_result;
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
        throw("The value for field IsRestated of StockFundamentalJSON is not one of the allowed values.");
    setIsRestated(or_result);
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

void StockFundamentalJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeValue or_result;
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
        throw("The value for field Value of StockFundamentalJSON is not one of the allowed values.");
    setValue(or_result);
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

void StockFundamentalJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeDate or_result;
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
        throw("The value for field Date of StockFundamentalJSON is not one of the allowed values.");
    setDate(or_result);
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

void StockFundamentalJSON::fromJSONLastUpdated(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeLastUpdated or_result;
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
        throw("The value for field LastUpdated of StockFundamentalJSON is not one of the allowed values.");
    setLastUpdated(or_result);
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

void StockFundamentalJSON::fromJSONUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeUnit or_result;
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
        throw("The value for field Unit of StockFundamentalJSON is not one of the allowed values.");
    setUnit(or_result);
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

StockFundamentalJSON::StockFundamentalJSON(void) :
        flagHasType(false),
        flagHasReportType(false),
        flagHasIsRestated(false),
        flagHasValue(false),
        flagHasDate(false),
        flagHasLastUpdated(false),
        flagHasUnit(false)
  {
    extraIndex = create_string_index();
  }

StockFundamentalJSON::~StockFundamentalJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool StockFundamentalJSON::hasType(void) const
  {
    return flagHasType;
  }

std::string StockFundamentalJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const std::string StockFundamentalJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

bool StockFundamentalJSON::hasReportType(void) const
  {
    return flagHasReportType;
  }

StockFundamentalJSON::TypeReportType StockFundamentalJSON::getReportType(void)
  {
    assert(flagHasReportType);
    return storeReportType;
  }

const StockFundamentalJSON::TypeReportType StockFundamentalJSON::getReportType(void) const
  {
    assert(flagHasReportType);
    return storeReportType;
  }

bool StockFundamentalJSON::hasIsRestated(void) const
  {
    return flagHasIsRestated;
  }

StockFundamentalJSON::TypeIsRestated StockFundamentalJSON::getIsRestated(void)
  {
    assert(flagHasIsRestated);
    return storeIsRestated;
  }

const StockFundamentalJSON::TypeIsRestated StockFundamentalJSON::getIsRestated(void) const
  {
    assert(flagHasIsRestated);
    return storeIsRestated;
  }

bool StockFundamentalJSON::hasValue(void) const
  {
    return flagHasValue;
  }

StockFundamentalJSON::TypeValue StockFundamentalJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const StockFundamentalJSON::TypeValue StockFundamentalJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

bool StockFundamentalJSON::hasDate(void) const
  {
    return flagHasDate;
  }

StockFundamentalJSON::TypeDate StockFundamentalJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const StockFundamentalJSON::TypeDate StockFundamentalJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool StockFundamentalJSON::hasLastUpdated(void) const
  {
    return flagHasLastUpdated;
  }

StockFundamentalJSON::TypeLastUpdated StockFundamentalJSON::getLastUpdated(void)
  {
    assert(flagHasLastUpdated);
    return storeLastUpdated;
  }

const StockFundamentalJSON::TypeLastUpdated StockFundamentalJSON::getLastUpdated(void) const
  {
    assert(flagHasLastUpdated);
    return storeLastUpdated;
  }

bool StockFundamentalJSON::hasUnit(void) const
  {
    return flagHasUnit;
  }

StockFundamentalJSON::TypeUnit StockFundamentalJSON::getUnit(void)
  {
    assert(flagHasUnit);
    return storeUnit;
  }

const StockFundamentalJSON::TypeUnit StockFundamentalJSON::getUnit(void) const
  {
    assert(flagHasUnit);
    return storeUnit;
  }

StockFundamentalJSON *StockFundamentalJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockFundamentalJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockFundamentalJSON>, StockFundamentalJSON *, bool> generator("Type StockFundamental", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
