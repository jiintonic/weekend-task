/* file "UberRequestDriverJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestDriverJSON.h"

#include "UberRequestDriverJSON.h"


UberRequestDriverJSON::UberRequestDriverJSON(const UberRequestDriverJSON &)
  {
    assert(false);
  }

UberRequestDriverJSON &UberRequestDriverJSON::operator=(const UberRequestDriverJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestDriverJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of UberRequestDriverJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void UberRequestDriverJSON::fromJSONphone_number(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field phone_number of UberRequestDriverJSON is not a string.");
    setphone_number(std::string(json_string->getData()));
  }

void UberRequestDriverJSON::fromJSONrating(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field rating of UberRequestDriverJSON is not a number.");
          }
      }
    setratingText(the_rational_text);
  }

void UberRequestDriverJSON::fromJSONpicture_url(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typepicture_url or_result;
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
        throw("The value for field picture_url of UberRequestDriverJSON is not one of the allowed values.");
    setpicture_url(or_result);
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

UberRequestDriverJSON::UberRequestDriverJSON(void) :
        flagHasname(false),
        flagHasphone_number(false),
        flagHasrating(false),
        flagHaspicture_url(false)
  {
    extraIndex = create_string_index();
  }

UberRequestDriverJSON::~UberRequestDriverJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestDriverJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string UberRequestDriverJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string UberRequestDriverJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool UberRequestDriverJSON::hasphone_number(void) const
  {
    return flagHasphone_number;
  }

std::string UberRequestDriverJSON::getphone_number(void)
  {
    assert(flagHasphone_number);
    return storephone_number;
  }

const std::string UberRequestDriverJSON::getphone_number(void) const
  {
    assert(flagHasphone_number);
    return storephone_number;
  }

bool UberRequestDriverJSON::hasrating(void) const
  {
    return flagHasrating;
  }

double UberRequestDriverJSON::getrating(void)
  {
    assert(flagHasrating);
    if (textStorerating != "")
      {
        return atof(textStorerating.c_str());
      }
    return storerating;
  }

const double UberRequestDriverJSON::getrating(void) const
  {
    assert(flagHasrating);
    if (textStorerating != "")
      {
        return atof(textStorerating.c_str());
      }
    return storerating;
  }

std::string UberRequestDriverJSON::getratingAsText(void) const
  {
    assert(flagHasrating);
    if (textStorerating == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storerating);
        return &(buffer[0]);
      }
    else
      {
        return (textStorerating);
      }
  }

bool UberRequestDriverJSON::haspicture_url(void) const
  {
    return flagHaspicture_url;
  }

UberRequestDriverJSON::Typepicture_url UberRequestDriverJSON::getpicture_url(void)
  {
    assert(flagHaspicture_url);
    return storepicture_url;
  }

const UberRequestDriverJSON::Typepicture_url UberRequestDriverJSON::getpicture_url(void) const
  {
    assert(flagHaspicture_url);
    return storepicture_url;
  }

UberRequestDriverJSON *UberRequestDriverJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestDriverJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestDriverJSON>, UberRequestDriverJSON *, bool> generator("Type UberRequestDriver", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
