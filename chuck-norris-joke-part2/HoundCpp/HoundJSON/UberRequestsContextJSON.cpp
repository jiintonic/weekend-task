/* file "UberRequestsContextJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UberRequestsContextJSON.h"

#include "UberRequestsContextJSON.h"


UberRequestsContextJSON::TypeNextState::TypeNextState(void)
  {
  }

UberRequestsContextJSON::TypeNextState::TypeNextState(const TypeNextState &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UberRequestsContextJSON::TypeNextState::TypeNextState(TypeNextStateKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UberRequestsContextJSON::TypeNextState::operator==(const TypeNextState &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UberRequestsContextJSON::TypeNextState::operator!=(const TypeNextState &other) const
  {
    return !(operator==(other));
  }

bool UberRequestsContextJSON::TypeNextState::operator<(const TypeNextState &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UberRequestsContextJSON::TypeNextState::operator>(const TypeNextState &other) const
  {
    return other.operator<(*this);
  }

bool UberRequestsContextJSON::TypeNextState::operator>=(const TypeNextState &other) const
  {
    return !(operator<(other));
  }

bool UberRequestsContextJSON::TypeNextState::operator<=(const TypeNextState &other) const
  {
    return !(other.operator<(*this));
  }

UberRequestsContextJSON::TypeNextStateKnownValues UberRequestsContextJSON::stringToNextState(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'l':
            if (strcmp(&(chars[1]), "ogin") == 0)
                return NextState_login;
            break;
        case 'r':
            if (strcmp(&(chars[1]), "equest_confirmation") == 0)
                return NextState_request_confirmation;
            break;
        case 's':
            switch ((unsigned char)(chars[1]))
              {
                case 'e':
                    if (strncmp(&(chars[2]), "lect_", 5) == 0)
                      {
                        switch ((unsigned char)(chars[7]))
                          {
                            case 'd':
                                if (strcmp(&(chars[8]), "rop_off_location") == 0)
                                    return NextState_select_drop_off_location;
                                break;
                            case 'p':
                                if (strcmp(&(chars[8]), "ick_up_location") == 0)
                                    return NextState_select_pick_up_location;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(chars[2]), "rge_confirmation") == 0)
                        return NextState_surge_confirmation;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return NextState__none;
  }

const char *UberRequestsContextJSON::stringFromNextState(TypeNextStateKnownValues the_enum)
  {
    switch (the_enum)
      {
        case NextState_select_pick_up_location:
            return "select_pick_up_location";
        case NextState_select_drop_off_location:
            return "select_drop_off_location";
        case NextState_request_confirmation:
            return "request_confirmation";
        case NextState_login:
            return "login";
        case NextState_surge_confirmation:
            return "surge_confirmation";
        default:
            assert(false);
            return NULL;
      }
  }

UberRequestsContextJSON::UberRequestsContextJSON(const UberRequestsContextJSON &)
  {
    assert(false);
  }

UberRequestsContextJSON &UberRequestsContextJSON::operator=(const UberRequestsContextJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UberRequestsContextJSON::fromJSONNextState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NextState of UberRequestsContextJSON is not a string.");
    TypeNextState the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'l':
            if (strcmp(&(json_string->getData()[1]), "ogin") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = NextState_login;
                    goto open_enum_is_done;
                  }
            break;
        case 'r':
            if (strcmp(&(json_string->getData()[1]), "equest_confirmation") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = NextState_request_confirmation;
                    goto open_enum_is_done;
                  }
            break;
        case 's':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'e':
                    if (strncmp(&(json_string->getData()[2]), "lect_", 5) == 0)
                      {
                        switch ((unsigned char)(json_string->getData()[7]))
                          {
                            case 'd':
                                if (strcmp(&(json_string->getData()[8]), "rop_off_location") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NextState_select_drop_off_location;
                                        goto open_enum_is_done;
                                      }
                                break;
                            case 'p':
                                if (strcmp(&(json_string->getData()[8]), "ick_up_location") == 0)
                                      {
                                        the_open_enum.in_known_list = true;
                                        the_open_enum.list_value = NextState_select_pick_up_location;
                                        goto open_enum_is_done;
                                      }
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'u':
                    if (strcmp(&(json_string->getData()[2]), "rge_confirmation") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = NextState_surge_confirmation;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setNextState(the_open_enum);
  }

void UberRequestsContextJSON::fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field SurgeMultiplier of UberRequestsContextJSON is not a number.");
          }
      }
    setSurgeMultiplierText(the_rational_text);
  }

void UberRequestsContextJSON::fromJSONUberRequestsSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberRequestsSpecJSON *convert_classy = UberRequestsSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberRequestsSpec(convert_classy);
    convert_classy->remove_reference();
  }

void UberRequestsContextJSON::fromJSONUberProducts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    UberCompositeProductsJSON *convert_classy = UberCompositeProductsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setUberProducts(convert_classy);
    convert_classy->remove_reference();
  }

UberRequestsContextJSON::UberRequestsContextJSON(void) :
        flagHasNextState(false),
        flagHasSurgeMultiplier(false),
        flagHasUberRequestsSpec(false),
        flagHasUberProducts(false)
  {
    extraIndex = create_string_index();
  }

UberRequestsContextJSON::~UberRequestsContextJSON(void)
  {
    if (flagHasUberRequestsSpec)
      {
        storeUberRequestsSpec->remove_reference();
      }
    if (flagHasUberProducts)
      {
        storeUberProducts->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UberRequestsContextJSON::hasNextState(void) const
  {
    return flagHasNextState;
  }

UberRequestsContextJSON::TypeNextState UberRequestsContextJSON::getNextState(void)
  {
    assert(flagHasNextState);
    return storeNextState;
  }

const UberRequestsContextJSON::TypeNextState UberRequestsContextJSON::getNextState(void) const
  {
    assert(flagHasNextState);
    return storeNextState;
  }

const char *UberRequestsContextJSON::getNextStateAsChars(void) const
  {
    TypeNextState result = getNextState();
    if (result.in_known_list)
        return stringFromNextState(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UberRequestsContextJSON::getNextStateAsString(void) const
  {
    return getNextStateAsChars();
  }

bool UberRequestsContextJSON::hasSurgeMultiplier(void) const
  {
    return flagHasSurgeMultiplier;
  }

double UberRequestsContextJSON::getSurgeMultiplier(void)
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

const double UberRequestsContextJSON::getSurgeMultiplier(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier != "")
      {
        return atof(textStoreSurgeMultiplier.c_str());
      }
    return storeSurgeMultiplier;
  }

std::string UberRequestsContextJSON::getSurgeMultiplierAsText(void) const
  {
    assert(flagHasSurgeMultiplier);
    if (textStoreSurgeMultiplier == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeSurgeMultiplier);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreSurgeMultiplier);
      }
  }

bool UberRequestsContextJSON::hasUberRequestsSpec(void) const
  {
    return flagHasUberRequestsSpec;
  }

UberRequestsSpecJSON * UberRequestsContextJSON::getUberRequestsSpec(void)
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

const UberRequestsSpecJSON * UberRequestsContextJSON::getUberRequestsSpec(void) const
  {
    assert(flagHasUberRequestsSpec);
    return storeUberRequestsSpec;
  }

bool UberRequestsContextJSON::hasUberProducts(void) const
  {
    return flagHasUberProducts;
  }

UberCompositeProductsJSON * UberRequestsContextJSON::getUberProducts(void)
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

const UberCompositeProductsJSON * UberRequestsContextJSON::getUberProducts(void) const
  {
    assert(flagHasUberProducts);
    return storeUberProducts;
  }

UberRequestsContextJSON *UberRequestsContextJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UberRequestsContextJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UberRequestsContextJSON>, UberRequestsContextJSON *, bool> generator("Type UberRequestsContext", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
