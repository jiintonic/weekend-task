/* file "UberPriceEstimateDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberPriceEstimateDetailsJSON.h"

#include "UberPriceEstimateDetailsJSON.h"


UberPriceEstimateDetailsJSON::UberPriceEstimateDetailsJSON(const UberPriceEstimateDetailsJSON &)
  {
    assert(false);
  }

UberPriceEstimateDetailsJSON &UberPriceEstimateDetailsJSON::operator=(const UberPriceEstimateDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberPriceEstimateDetailsJSON::fromJSONproduct_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field product_id of UberPriceEstimateDetailsJSON is not a string.");
    setproduct_id(std::string(json_string->getData()));
  }

void UberPriceEstimateDetailsJSON::fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typecurrency_code or_result;
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
        throw("The value for field currency_code of UberPriceEstimateDetailsJSON is not one of the allowed values.");
    setcurrency_code(or_result);
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

void UberPriceEstimateDetailsJSON::fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field display_name of UberPriceEstimateDetailsJSON is not a string.");
    setdisplay_name(std::string(json_string->getData()));
  }

void UberPriceEstimateDetailsJSON::fromJSONestimate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field estimate of UberPriceEstimateDetailsJSON is not a string.");
    setestimate(std::string(json_string->getData()));
  }

void UberPriceEstimateDetailsJSON::fromJSONlow_estimate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typelow_estimate or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
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
        throw("The value for field low_estimate of UberPriceEstimateDetailsJSON is not one of the allowed values.");
    setlow_estimate(or_result);
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

void UberPriceEstimateDetailsJSON::fromJSONhigh_estimate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typehigh_estimate or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
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
        throw("The value for field high_estimate of UberPriceEstimateDetailsJSON is not one of the allowed values.");
    sethigh_estimate(or_result);
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

void UberPriceEstimateDetailsJSON::fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typesurge_multiplier or_result;
    bool or_done = false;
    if (!or_done)
      {
        try
          {
            const JSONRationalValue *json_rational = json_value->rational_value();
            double the_double;
            if (json_rational != NULL)
              {
                the_double = json_rational->getDouble();
              }
            else
              {
                const JSONIntegerValue *json_integer = json_value->integer_value();
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
        throw("The value for field surge_multiplier of UberPriceEstimateDetailsJSON is not one of the allowed values.");
    setsurge_multiplier(or_result);
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

void UberPriceEstimateDetailsJSON::fromJSONduration(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field duration of UberPriceEstimateDetailsJSON is not a number.");
          }
      }
    setdurationText(the_rational_text);
  }

void UberPriceEstimateDetailsJSON::fromJSONdistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field distance of UberPriceEstimateDetailsJSON is not a number.");
          }
      }
    setdistanceText(the_rational_text);
  }

UberPriceEstimateDetailsJSON::UberPriceEstimateDetailsJSON(void) :
        flagHasproduct_id(false),
        flagHascurrency_code(false),
        flagHasdisplay_name(false),
        flagHasestimate(false),
        flagHaslow_estimate(false),
        flagHashigh_estimate(false),
        flagHassurge_multiplier(false),
        flagHasduration(false),
        flagHasdistance(false)
  {
    extraIndex = create_string_index();
  }

UberPriceEstimateDetailsJSON::~UberPriceEstimateDetailsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberPriceEstimateDetailsJSON::hasproduct_id(void) const
  {
    return flagHasproduct_id;
  }

std::string UberPriceEstimateDetailsJSON::getproduct_id(void)
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

const std::string UberPriceEstimateDetailsJSON::getproduct_id(void) const
  {
    assert(flagHasproduct_id);
    return storeproduct_id;
  }

bool UberPriceEstimateDetailsJSON::hascurrency_code(void) const
  {
    return flagHascurrency_code;
  }

UberPriceEstimateDetailsJSON::Typecurrency_code UberPriceEstimateDetailsJSON::getcurrency_code(void)
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

const UberPriceEstimateDetailsJSON::Typecurrency_code UberPriceEstimateDetailsJSON::getcurrency_code(void) const
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

bool UberPriceEstimateDetailsJSON::hasdisplay_name(void) const
  {
    return flagHasdisplay_name;
  }

std::string UberPriceEstimateDetailsJSON::getdisplay_name(void)
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

const std::string UberPriceEstimateDetailsJSON::getdisplay_name(void) const
  {
    assert(flagHasdisplay_name);
    return storedisplay_name;
  }

bool UberPriceEstimateDetailsJSON::hasestimate(void) const
  {
    return flagHasestimate;
  }

std::string UberPriceEstimateDetailsJSON::getestimate(void)
  {
    assert(flagHasestimate);
    return storeestimate;
  }

const std::string UberPriceEstimateDetailsJSON::getestimate(void) const
  {
    assert(flagHasestimate);
    return storeestimate;
  }

bool UberPriceEstimateDetailsJSON::haslow_estimate(void) const
  {
    return flagHaslow_estimate;
  }

UberPriceEstimateDetailsJSON::Typelow_estimate UberPriceEstimateDetailsJSON::getlow_estimate(void)
  {
    assert(flagHaslow_estimate);
    return storelow_estimate;
  }

const UberPriceEstimateDetailsJSON::Typelow_estimate UberPriceEstimateDetailsJSON::getlow_estimate(void) const
  {
    assert(flagHaslow_estimate);
    return storelow_estimate;
  }

bool UberPriceEstimateDetailsJSON::hashigh_estimate(void) const
  {
    return flagHashigh_estimate;
  }

UberPriceEstimateDetailsJSON::Typehigh_estimate UberPriceEstimateDetailsJSON::gethigh_estimate(void)
  {
    assert(flagHashigh_estimate);
    return storehigh_estimate;
  }

const UberPriceEstimateDetailsJSON::Typehigh_estimate UberPriceEstimateDetailsJSON::gethigh_estimate(void) const
  {
    assert(flagHashigh_estimate);
    return storehigh_estimate;
  }

bool UberPriceEstimateDetailsJSON::hassurge_multiplier(void) const
  {
    return flagHassurge_multiplier;
  }

UberPriceEstimateDetailsJSON::Typesurge_multiplier UberPriceEstimateDetailsJSON::getsurge_multiplier(void)
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

const UberPriceEstimateDetailsJSON::Typesurge_multiplier UberPriceEstimateDetailsJSON::getsurge_multiplier(void) const
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

bool UberPriceEstimateDetailsJSON::hasduration(void) const
  {
    return flagHasduration;
  }

double UberPriceEstimateDetailsJSON::getduration(void)
  {
    assert(flagHasduration);
    if (textStoreduration != "")
      {
        return atof(textStoreduration.c_str());
      }
    return storeduration;
  }

const double UberPriceEstimateDetailsJSON::getduration(void) const
  {
    assert(flagHasduration);
    if (textStoreduration != "")
      {
        return atof(textStoreduration.c_str());
      }
    return storeduration;
  }

std::string UberPriceEstimateDetailsJSON::getdurationAsText(void) const
  {
    assert(flagHasduration);
    if (textStoreduration == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeduration);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreduration);
      }
  }

bool UberPriceEstimateDetailsJSON::hasdistance(void) const
  {
    return flagHasdistance;
  }

double UberPriceEstimateDetailsJSON::getdistance(void)
  {
    assert(flagHasdistance);
    if (textStoredistance != "")
      {
        return atof(textStoredistance.c_str());
      }
    return storedistance;
  }

const double UberPriceEstimateDetailsJSON::getdistance(void) const
  {
    assert(flagHasdistance);
    if (textStoredistance != "")
      {
        return atof(textStoredistance.c_str());
      }
    return storedistance;
  }

std::string UberPriceEstimateDetailsJSON::getdistanceAsText(void) const
  {
    assert(flagHasdistance);
    if (textStoredistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storedistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStoredistance);
      }
  }

UberPriceEstimateDetailsJSON *UberPriceEstimateDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberPriceEstimateDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberPriceEstimateDetailsJSON>, UberPriceEstimateDetailsJSON *, bool> generator("Type UberPriceEstimateDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
