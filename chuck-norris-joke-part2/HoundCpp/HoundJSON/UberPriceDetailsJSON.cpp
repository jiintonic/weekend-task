/* file "UberPriceDetailsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberPriceDetailsJSON.h"

#include "UberPriceDetailsJSON.h"


UberPriceDetailsJSON::Typedistance_unit UberPriceDetailsJSON::stringTodistance_unit(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'k':
            if (strcmp(&(chars[1]), "m") == 0)
                return distance_unit_km;
            break;
        case 'm':
            if (strcmp(&(chars[1]), "ile") == 0)
                return distance_unit_mile;
            break;
        default:
            break;
      }
    throw("The value for field `distance_unit' is not one of the legal values.");
  }

const char *UberPriceDetailsJSON::stringFromdistance_unit(Typedistance_unit the_enum)
  {
    switch (the_enum)
      {
        case distance_unit_mile:
            return "mile";
        case distance_unit_km:
            return "km";
        default:
            assert(false);
            return NULL;
      }
  }

UberPriceDetailsJSON::Typeservice_feesJSON::Typeservice_feesJSON(const Typeservice_feesJSON &)
  {
    assert(false);
  }

UberPriceDetailsJSON::Typeservice_feesJSON &UberPriceDetailsJSON::Typeservice_feesJSON::operator=(const Typeservice_feesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberPriceDetailsJSON::Typeservice_feesJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of Typeservice_feesJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void UberPriceDetailsJSON::Typeservice_feesJSON::fromJSONfee(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field fee of Typeservice_feesJSON is not a number.");
          }
      }
    setfeeText(the_rational_text);
  }

UberPriceDetailsJSON::Typeservice_feesJSON::Typeservice_feesJSON(void) :
        flagHasname(false),
        flagHasfee(false)
  {
    extraIndex = create_string_index();
  }

UberPriceDetailsJSON::Typeservice_feesJSON::~Typeservice_feesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberPriceDetailsJSON::Typeservice_feesJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string UberPriceDetailsJSON::Typeservice_feesJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string UberPriceDetailsJSON::Typeservice_feesJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool UberPriceDetailsJSON::Typeservice_feesJSON::hasfee(void) const
  {
    return flagHasfee;
  }

double UberPriceDetailsJSON::Typeservice_feesJSON::getfee(void)
  {
    assert(flagHasfee);
    if (textStorefee != "")
      {
        return atof(textStorefee.c_str());
      }
    return storefee;
  }

const double UberPriceDetailsJSON::Typeservice_feesJSON::getfee(void) const
  {
    assert(flagHasfee);
    if (textStorefee != "")
      {
        return atof(textStorefee.c_str());
      }
    return storefee;
  }

std::string UberPriceDetailsJSON::Typeservice_feesJSON::getfeeAsText(void) const
  {
    assert(flagHasfee);
    if (textStorefee == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storefee);
        return &(buffer[0]);
      }
    else
      {
        return (textStorefee);
      }
  }

UberPriceDetailsJSON::UberPriceDetailsJSON(const UberPriceDetailsJSON &)
  {
    assert(false);
  }

UberPriceDetailsJSON &UberPriceDetailsJSON::operator=(const UberPriceDetailsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberPriceDetailsJSON::fromJSONbase(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field base of UberPriceDetailsJSON is not a number.");
          }
      }
    setbaseText(the_rational_text);
  }

void UberPriceDetailsJSON::fromJSONminimum(JSONValue *json_value, bool ignore_extras)
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
        throw("The value for field minimum of UberPriceDetailsJSON is not one of the allowed values.");
    setminimum(or_result);
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

void UberPriceDetailsJSON::fromJSONcost_per_minute(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field cost_per_minute of UberPriceDetailsJSON is not a number.");
          }
      }
    setcost_per_minuteText(the_rational_text);
  }

void UberPriceDetailsJSON::fromJSONcost_per_distance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field cost_per_distance of UberPriceDetailsJSON is not a number.");
          }
      }
    setcost_per_distanceText(the_rational_text);
  }

void UberPriceDetailsJSON::fromJSONdistance_unit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field distance_unit of UberPriceDetailsJSON is not a string.");
    Typedistance_unit the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'k':
            if (strcmp(&(json_string->getData()[1]), "m") == 0)
                  {
                    the_enum = distance_unit_km;
                    goto enum_is_done;
                  }
            break;
        case 'm':
            if (strcmp(&(json_string->getData()[1]), "ile") == 0)
                  {
                    the_enum = distance_unit_mile;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field distance_unit of UberPriceDetailsJSON is not one of the legal strings.");
  enum_is_done:;
    setdistance_unit(the_enum);
  }

void UberPriceDetailsJSON::fromJSONcancellation_fee(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field cancellation_fee of UberPriceDetailsJSON is not a number.");
          }
      }
    setcancellation_feeText(the_rational_text);
  }

void UberPriceDetailsJSON::fromJSONcurrency_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field currency_code of UberPriceDetailsJSON is not a string.");
    setcurrency_code(std::string(json_string->getData()));
  }

void UberPriceDetailsJSON::fromJSONservice_fees(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field service_fees of UberPriceDetailsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< Typeservice_feesJSON * > vector_service_fees1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        Typeservice_feesJSON *convert_classy = Typeservice_feesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_service_fees1[num1] = convert_classy;
      }
    initservice_fees();
    for (size_t num2 = 0; num2 < vector_service_fees1.size(); ++num2)
        appendservice_fees(vector_service_fees1[num2]);
    for (size_t num1 = 0; num1 < vector_service_fees1.size(); ++num1)
      {
        vector_service_fees1[num1]->remove_reference();
      }
  }

UberPriceDetailsJSON::UberPriceDetailsJSON(void) :
        flagHasbase(false),
        flagHasminimum(false),
        flagHascost_per_minute(false),
        flagHascost_per_distance(false),
        flagHasdistance_unit(false),
        flagHascancellation_fee(false),
        flagHascurrency_code(false),
        flagHasservice_fees(false)
  {
    extraIndex = create_string_index();
  }

UberPriceDetailsJSON::~UberPriceDetailsJSON(void)
  {
    if (flagHasservice_fees)
      {
        for (size_t num4 = 0; num4 < storeservice_fees.size(); ++num4)
          {
            storeservice_fees[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberPriceDetailsJSON::hasbase(void) const
  {
    return flagHasbase;
  }

double UberPriceDetailsJSON::getbase(void)
  {
    assert(flagHasbase);
    if (textStorebase != "")
      {
        return atof(textStorebase.c_str());
      }
    return storebase;
  }

const double UberPriceDetailsJSON::getbase(void) const
  {
    assert(flagHasbase);
    if (textStorebase != "")
      {
        return atof(textStorebase.c_str());
      }
    return storebase;
  }

std::string UberPriceDetailsJSON::getbaseAsText(void) const
  {
    assert(flagHasbase);
    if (textStorebase == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storebase);
        return &(buffer[0]);
      }
    else
      {
        return (textStorebase);
      }
  }

bool UberPriceDetailsJSON::hasminimum(void) const
  {
    return flagHasminimum;
  }

UberPriceDetailsJSON::Typeminimum UberPriceDetailsJSON::getminimum(void)
  {
    assert(flagHasminimum);
    return storeminimum;
  }

const UberPriceDetailsJSON::Typeminimum UberPriceDetailsJSON::getminimum(void) const
  {
    assert(flagHasminimum);
    return storeminimum;
  }

bool UberPriceDetailsJSON::hascost_per_minute(void) const
  {
    return flagHascost_per_minute;
  }

double UberPriceDetailsJSON::getcost_per_minute(void)
  {
    assert(flagHascost_per_minute);
    if (textStorecost_per_minute != "")
      {
        return atof(textStorecost_per_minute.c_str());
      }
    return storecost_per_minute;
  }

const double UberPriceDetailsJSON::getcost_per_minute(void) const
  {
    assert(flagHascost_per_minute);
    if (textStorecost_per_minute != "")
      {
        return atof(textStorecost_per_minute.c_str());
      }
    return storecost_per_minute;
  }

std::string UberPriceDetailsJSON::getcost_per_minuteAsText(void) const
  {
    assert(flagHascost_per_minute);
    if (textStorecost_per_minute == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storecost_per_minute);
        return &(buffer[0]);
      }
    else
      {
        return (textStorecost_per_minute);
      }
  }

bool UberPriceDetailsJSON::hascost_per_distance(void) const
  {
    return flagHascost_per_distance;
  }

double UberPriceDetailsJSON::getcost_per_distance(void)
  {
    assert(flagHascost_per_distance);
    if (textStorecost_per_distance != "")
      {
        return atof(textStorecost_per_distance.c_str());
      }
    return storecost_per_distance;
  }

const double UberPriceDetailsJSON::getcost_per_distance(void) const
  {
    assert(flagHascost_per_distance);
    if (textStorecost_per_distance != "")
      {
        return atof(textStorecost_per_distance.c_str());
      }
    return storecost_per_distance;
  }

std::string UberPriceDetailsJSON::getcost_per_distanceAsText(void) const
  {
    assert(flagHascost_per_distance);
    if (textStorecost_per_distance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storecost_per_distance);
        return &(buffer[0]);
      }
    else
      {
        return (textStorecost_per_distance);
      }
  }

bool UberPriceDetailsJSON::hasdistance_unit(void) const
  {
    return flagHasdistance_unit;
  }

UberPriceDetailsJSON::Typedistance_unit UberPriceDetailsJSON::getdistance_unit(void)
  {
    assert(flagHasdistance_unit);
    return storedistance_unit;
  }

const UberPriceDetailsJSON::Typedistance_unit UberPriceDetailsJSON::getdistance_unit(void) const
  {
    assert(flagHasdistance_unit);
    return storedistance_unit;
  }

const char *UberPriceDetailsJSON::getdistance_unitAsChars(void) const
  {
    return stringFromdistance_unit(getdistance_unit());
  }

std::string UberPriceDetailsJSON::getdistance_unitAsString(void) const
  {
    return stringFromdistance_unit(getdistance_unit());
  }

bool UberPriceDetailsJSON::hascancellation_fee(void) const
  {
    return flagHascancellation_fee;
  }

double UberPriceDetailsJSON::getcancellation_fee(void)
  {
    assert(flagHascancellation_fee);
    if (textStorecancellation_fee != "")
      {
        return atof(textStorecancellation_fee.c_str());
      }
    return storecancellation_fee;
  }

const double UberPriceDetailsJSON::getcancellation_fee(void) const
  {
    assert(flagHascancellation_fee);
    if (textStorecancellation_fee != "")
      {
        return atof(textStorecancellation_fee.c_str());
      }
    return storecancellation_fee;
  }

std::string UberPriceDetailsJSON::getcancellation_feeAsText(void) const
  {
    assert(flagHascancellation_fee);
    if (textStorecancellation_fee == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storecancellation_fee);
        return &(buffer[0]);
      }
    else
      {
        return (textStorecancellation_fee);
      }
  }

bool UberPriceDetailsJSON::hascurrency_code(void) const
  {
    return flagHascurrency_code;
  }

std::string UberPriceDetailsJSON::getcurrency_code(void)
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

const std::string UberPriceDetailsJSON::getcurrency_code(void) const
  {
    assert(flagHascurrency_code);
    return storecurrency_code;
  }

bool UberPriceDetailsJSON::hasservice_fees(void) const
  {
    return flagHasservice_fees;
  }

size_t UberPriceDetailsJSON::countOfservice_fees(void) const
  {
    assert(flagHasservice_fees);
    return storeservice_fees.size();
  }

UberPriceDetailsJSON::Typeservice_feesJSON * UberPriceDetailsJSON::elementOfservice_fees(size_t element_num)
  {
    assert(flagHasservice_fees);
    return storeservice_fees[element_num];
  }

const UberPriceDetailsJSON::Typeservice_feesJSON * UberPriceDetailsJSON::elementOfservice_fees(size_t element_num) const
  {
    assert(flagHasservice_fees);
    return storeservice_fees[element_num];
  }

std::vector< UberPriceDetailsJSON::Typeservice_feesJSON * > UberPriceDetailsJSON::getservice_fees(void)
  {
    assert(flagHasservice_fees);
    return storeservice_fees;
  }

const std::vector< UberPriceDetailsJSON::Typeservice_feesJSON * > UberPriceDetailsJSON::getservice_fees(void) const
  {
    assert(flagHasservice_fees);
    return storeservice_fees;
  }

UberPriceDetailsJSON::Typeservice_feesJSON *UberPriceDetailsJSON::Typeservice_feesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typeservice_feesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typeservice_feesJSON>, Typeservice_feesJSON *, bool> generator("Type Typeservice_fees", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
UberPriceDetailsJSON *UberPriceDetailsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberPriceDetailsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberPriceDetailsJSON>, UberPriceDetailsJSON *, bool> generator("Type UberPriceDetails", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
