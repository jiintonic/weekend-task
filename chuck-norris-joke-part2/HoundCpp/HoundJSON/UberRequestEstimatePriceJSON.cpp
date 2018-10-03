/* file "UberRequestEstimatePriceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestEstimatePriceJSON.h"

#include "UberRequestEstimatePriceJSON.h"


UberRequestEstimatePriceJSON::UberRequestEstimatePriceJSON(const UberRequestEstimatePriceJSON &)
  {
    assert(false);
  }

UberRequestEstimatePriceJSON &UberRequestEstimatePriceJSON::operator=(const UberRequestEstimatePriceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestEstimatePriceJSON::fromJSONdisplay(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field display of UberRequestEstimatePriceJSON is not a string.");
    setdisplay(std::string(json_string->getData()));
  }

void UberRequestEstimatePriceJSON::fromJSONlow_estimate(JSONValue *json_value, bool ignore_extras)
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
      {
        try
          {
            EmptyObjectJSON *convert_classy = EmptyObjectJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice2 = convert_classy;
            or_result.key = 2;
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
        throw("The value for field low_estimate of UberRequestEstimatePriceJSON is not one of the allowed values.");
    setlow_estimate(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        case 2:
            or_result.u.choice2->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void UberRequestEstimatePriceJSON::fromJSONhigh_estimate(JSONValue *json_value, bool ignore_extras)
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
      {
        try
          {
            EmptyObjectJSON *convert_classy = EmptyObjectJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice2 = convert_classy;
            or_result.key = 2;
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
        throw("The value for field high_estimate of UberRequestEstimatePriceJSON is not one of the allowed values.");
    sethigh_estimate(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        case 2:
            or_result.u.choice2->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void UberRequestEstimatePriceJSON::fromJSONminimum(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typeminimum or_result;
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
      {
        try
          {
            EmptyObjectJSON *convert_classy = EmptyObjectJSON::from_json(json_value, ignore_extras);
            convert_classy->add_reference();
            or_result.u.choice2 = convert_classy;
            or_result.key = 2;
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
        throw("The value for field minimum of UberRequestEstimatePriceJSON is not one of the allowed values.");
    setminimum(or_result);
    switch (or_result.key)
      {
        case 0:
            break;
        case 1:
            break;
        case 2:
            or_result.u.choice2->remove_reference();
            break;
        default:
            assert(false);
      }
  }

void UberRequestEstimatePriceJSON::fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field currency_code of UberRequestEstimatePriceJSON is not one of the allowed values.");
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

void UberRequestEstimatePriceJSON::fromJSONsurge_multiplier(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field surge_multiplier of UberRequestEstimatePriceJSON is not one of the allowed values.");
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

void UberRequestEstimatePriceJSON::fromJSONsurge_confirmation_href(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typesurge_confirmation_href or_result;
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
        throw("The value for field surge_confirmation_href of UberRequestEstimatePriceJSON is not one of the allowed values.");
    setsurge_confirmation_href(or_result);
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

void UberRequestEstimatePriceJSON::fromJSONsurge_confirmation_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typesurge_confirmation_id or_result;
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
        throw("The value for field surge_confirmation_id of UberRequestEstimatePriceJSON is not one of the allowed values.");
    setsurge_confirmation_id(or_result);
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

void UberRequestEstimatePriceJSON::fromJSONfare_id(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field fare_id of UberRequestEstimatePriceJSON is not a string.");
    setfare_id(std::string(json_string->getData()));
  }

UberRequestEstimatePriceJSON::UberRequestEstimatePriceJSON(void) :
        flagHasdisplay(false),
        flagHaslow_estimate(false),
        flagHashigh_estimate(false),
        flagHasminimum(false),
        flagHascurrency_code(false),
        flagHassurge_multiplier(false),
        flagHassurge_confirmation_href(false),
        flagHassurge_confirmation_id(false),
        flagHasfare_id(false)
  {
    extraIndex = create_string_index();
  }

UberRequestEstimatePriceJSON::~UberRequestEstimatePriceJSON(void)
  {
    if (flagHaslow_estimate)
      {
        switch (storelow_estimate.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                storelow_estimate.u.choice2->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    if (flagHashigh_estimate)
      {
        switch (storehigh_estimate.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                storehigh_estimate.u.choice2->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    if (flagHasminimum)
      {
        switch (storeminimum.key)
          {
            case 0:
                break;
            case 1:
                break;
            case 2:
                storeminimum.u.choice2->remove_reference();
                break;
            default:
                assert(false);
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestEstimatePriceJSON::hasdisplay(void) const
  {
    return flagHasdisplay;
  }

std::string UberRequestEstimatePriceJSON::getdisplay(void)
  {
    assert(flagHasdisplay);
    return storedisplay;
  }

const std::string UberRequestEstimatePriceJSON::getdisplay(void) const
  {
    assert(flagHasdisplay);
    return storedisplay;
  }

bool UberRequestEstimatePriceJSON::haslow_estimate(void) const
  {
    return flagHaslow_estimate;
  }

UberRequestEstimatePriceJSON::Typelow_estimate UberRequestEstimatePriceJSON::getlow_estimate(void)
  {
    assert(flagHaslow_estimate);
    return storelow_estimate;
  }

const UberRequestEstimatePriceJSON::Typelow_estimate UberRequestEstimatePriceJSON::getlow_estimate(void) const
  {
    assert(flagHaslow_estimate);
    return storelow_estimate;
  }

bool UberRequestEstimatePriceJSON::hashigh_estimate(void) const
  {
    return flagHashigh_estimate;
  }

UberRequestEstimatePriceJSON::Typehigh_estimate UberRequestEstimatePriceJSON::gethigh_estimate(void)
  {
    assert(flagHashigh_estimate);
    return storehigh_estimate;
  }

const UberRequestEstimatePriceJSON::Typehigh_estimate UberRequestEstimatePriceJSON::gethigh_estimate(void) const
  {
    assert(flagHashigh_estimate);
    return storehigh_estimate;
  }

bool UberRequestEstimatePriceJSON::hasminimum(void) const
  {
    return flagHasminimum;
  }

UberRequestEstimatePriceJSON::Typeminimum UberRequestEstimatePriceJSON::getminimum(void)
  {
    assert(flagHasminimum);
    return storeminimum;
  }

const UberRequestEstimatePriceJSON::Typeminimum UberRequestEstimatePriceJSON::getminimum(void) const
  {
    assert(flagHasminimum);
    return storeminimum;
  }

bool UberRequestEstimatePriceJSON::hascurrency_code(void) const
  {
    return flagHascurrency_code;
  }

UberRequestEstimatePriceJSON::Typecurrency_code UberRequestEstimatePriceJSON::getcurrency_code(void)
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

const UberRequestEstimatePriceJSON::Typecurrency_code UberRequestEstimatePriceJSON::getcurrency_code(void) const
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

bool UberRequestEstimatePriceJSON::hassurge_multiplier(void) const
  {
    return flagHassurge_multiplier;
  }

UberRequestEstimatePriceJSON::Typesurge_multiplier UberRequestEstimatePriceJSON::getsurge_multiplier(void)
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

const UberRequestEstimatePriceJSON::Typesurge_multiplier UberRequestEstimatePriceJSON::getsurge_multiplier(void) const
  {
    assert(flagHassurge_multiplier);
    return storesurge_multiplier;
  }

bool UberRequestEstimatePriceJSON::hassurge_confirmation_href(void) const
  {
    return flagHassurge_confirmation_href;
  }

UberRequestEstimatePriceJSON::Typesurge_confirmation_href UberRequestEstimatePriceJSON::getsurge_confirmation_href(void)
  {
    assert(flagHassurge_confirmation_href);
    return storesurge_confirmation_href;
  }

const UberRequestEstimatePriceJSON::Typesurge_confirmation_href UberRequestEstimatePriceJSON::getsurge_confirmation_href(void) const
  {
    assert(flagHassurge_confirmation_href);
    return storesurge_confirmation_href;
  }

bool UberRequestEstimatePriceJSON::hassurge_confirmation_id(void) const
  {
    return flagHassurge_confirmation_id;
  }

UberRequestEstimatePriceJSON::Typesurge_confirmation_id UberRequestEstimatePriceJSON::getsurge_confirmation_id(void)
  {
    assert(flagHassurge_confirmation_id);
    return storesurge_confirmation_id;
  }

const UberRequestEstimatePriceJSON::Typesurge_confirmation_id UberRequestEstimatePriceJSON::getsurge_confirmation_id(void) const
  {
    assert(flagHassurge_confirmation_id);
    return storesurge_confirmation_id;
  }

bool UberRequestEstimatePriceJSON::hasfare_id(void) const
  {
    return flagHasfare_id;
  }

std::string UberRequestEstimatePriceJSON::getfare_id(void)
  {
    assert(flagHasfare_id);
    return storefare_id;
  }

const std::string UberRequestEstimatePriceJSON::getfare_id(void) const
  {
    assert(flagHasfare_id);
    return storefare_id;
  }

UberRequestEstimatePriceJSON *UberRequestEstimatePriceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestEstimatePriceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimatePriceJSON>, UberRequestEstimatePriceJSON *, bool> generator("Type UberRequestEstimatePrice", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
