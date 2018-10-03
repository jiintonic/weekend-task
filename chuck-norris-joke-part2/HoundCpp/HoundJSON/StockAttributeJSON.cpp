/* file "StockAttributeJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "StockAttributeJSON.h"

#include "StockAttributeJSON.h"


StockAttributeJSON::TypeValue::TypeValue(void)
  {
  }

StockAttributeJSON::TypeValue::TypeValue(const TypeValue &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

StockAttributeJSON::TypeValue::TypeValue(TypeValueKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool StockAttributeJSON::TypeValue::operator==(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool StockAttributeJSON::TypeValue::operator!=(const TypeValue &other) const
  {
    return !(operator==(other));
  }

bool StockAttributeJSON::TypeValue::operator<(const TypeValue &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool StockAttributeJSON::TypeValue::operator>(const TypeValue &other) const
  {
    return other.operator<(*this);
  }

bool StockAttributeJSON::TypeValue::operator>=(const TypeValue &other) const
  {
    return !(operator<(other));
  }

bool StockAttributeJSON::TypeValue::operator<=(const TypeValue &other) const
  {
    return !(other.operator<(*this));
  }

StockAttributeJSON::TypeValueKnownValues StockAttributeJSON::stringToValue(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "losePrice") == 0)
                return Value_ClosePrice;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ongName") == 0)
                return Value_LongName;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "arketCap") == 0)
                return Value_MarketCap;
            break;
        case 'O':
            if (strcmp(&(chars[1]), "penPrice") == 0)
                return Value_OpenPrice;
            break;
        case 'P':
            switch ((unsigned char)(chars[1]))
              {
                case 'E':
                    if (strcmp(&(chars[2]), "Ratio") == 0)
                        return Value_PERatio;
                    break;
                case 'e':
                    if (strcmp(&(chars[2]), "rcentChange") == 0)
                        return Value_PercentChange;
                    break;
                case 'r':
                    if (strcmp(&(chars[2]), "ice") == 0)
                        return Value_Price;
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(chars[1]))
              {
                case 'h':
                    if (strcmp(&(chars[2]), "ortName") == 0)
                        return Value_ShortName;
                    break;
                case 'y':
                    if (strcmp(&(chars[2]), "mbol") == 0)
                        return Value_Symbol;
                    break;
                default:
                    break;
              }
            break;
        case 'V':
            switch ((unsigned char)(chars[1]))
              {
                case 'a':
                    if (strcmp(&(chars[2]), "lueChange") == 0)
                        return Value_ValueChange;
                    break;
                case 'o':
                    if (strcmp(&(chars[2]), "lume") == 0)
                        return Value_Volume;
                    break;
                default:
                    break;
              }
            break;
        default:
            break;
      }
    return Value__none;
  }

const char *StockAttributeJSON::stringFromValue(TypeValueKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Value_Symbol:
            return "Symbol";
        case Value_ShortName:
            return "ShortName";
        case Value_LongName:
            return "LongName";
        case Value_Price:
            return "Price";
        case Value_PERatio:
            return "PERatio";
        case Value_MarketCap:
            return "MarketCap";
        case Value_Volume:
            return "Volume";
        case Value_ValueChange:
            return "ValueChange";
        case Value_PercentChange:
            return "PercentChange";
        case Value_OpenPrice:
            return "OpenPrice";
        case Value_ClosePrice:
            return "ClosePrice";
        default:
            assert(false);
            return NULL;
      }
  }

StockAttributeJSON::StockAttributeJSON(const StockAttributeJSON &)
  {
    assert(false);
  }

StockAttributeJSON &StockAttributeJSON::operator=(const StockAttributeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void StockAttributeJSON::fromJSONValue(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Value of StockAttributeJSON is not a string.");
    TypeValue the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "losePrice") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_ClosePrice;
                    goto open_enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ongName") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_LongName;
                    goto open_enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "arketCap") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_MarketCap;
                    goto open_enum_is_done;
                  }
            break;
        case 'O':
            if (strcmp(&(json_string->getData()[1]), "penPrice") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Value_OpenPrice;
                    goto open_enum_is_done;
                  }
            break;
        case 'P':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'E':
                    if (strcmp(&(json_string->getData()[2]), "Ratio") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PERatio;
                            goto open_enum_is_done;
                          }
                    break;
                case 'e':
                    if (strcmp(&(json_string->getData()[2]), "rcentChange") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_PercentChange;
                            goto open_enum_is_done;
                          }
                    break;
                case 'r':
                    if (strcmp(&(json_string->getData()[2]), "ice") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Price;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'S':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'h':
                    if (strcmp(&(json_string->getData()[2]), "ortName") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ShortName;
                            goto open_enum_is_done;
                          }
                    break;
                case 'y':
                    if (strcmp(&(json_string->getData()[2]), "mbol") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Symbol;
                            goto open_enum_is_done;
                          }
                    break;
                default:
                    break;
              }
            break;
        case 'V':
            switch ((unsigned char)(json_string->getData()[1]))
              {
                case 'a':
                    if (strcmp(&(json_string->getData()[2]), "lueChange") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_ValueChange;
                            goto open_enum_is_done;
                          }
                    break;
                case 'o':
                    if (strcmp(&(json_string->getData()[2]), "lume") == 0)
                          {
                            the_open_enum.in_known_list = true;
                            the_open_enum.list_value = Value_Volume;
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
    setValue(the_open_enum);
  }

StockAttributeJSON::StockAttributeJSON(void) :
        flagHasValue(false)
  {
  }

StockAttributeJSON::StockAttributeJSON(TypeValue init_value) :
        flagHasValue(true),
        storeValue(init_value)
  {
  }

StockAttributeJSON::StockAttributeJSON(const char *init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value);
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

StockAttributeJSON::StockAttributeJSON(std::string init_value) :
        flagHasValue(true)
  {
    TypeValueKnownValues known = stringToValue(init_value.c_str());
    if (known == Value__none)
      {
        storeValue.in_known_list = false;
        storeValue.string_value = init_value;
      }
    else
      {
        storeValue.in_known_list = true;
        storeValue.list_value = known;
      }
  }

StockAttributeJSON::StockAttributeJSON(TypeValueKnownValues init_value) :
        flagHasValue(true)
  {
    assert(init_value != Value__none);
    storeValue.in_known_list = true;
    storeValue.list_value = init_value;
  }

StockAttributeJSON::~StockAttributeJSON(void)
  {
  }

bool StockAttributeJSON::hasValue(void) const
  {
    return flagHasValue;
  }

StockAttributeJSON::TypeValue StockAttributeJSON::getValue(void)
  {
    assert(flagHasValue);
    return storeValue;
  }

const StockAttributeJSON::TypeValue StockAttributeJSON::getValue(void) const
  {
    assert(flagHasValue);
    return storeValue;
  }

const char *StockAttributeJSON::getValueAsChars(void) const
  {
    TypeValue result = getValue();
    if (result.in_known_list)
        return stringFromValue(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string StockAttributeJSON::getValueAsString(void) const
  {
    return getValueAsChars();
  }

StockAttributeJSON *StockAttributeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    StockAttributeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<StockAttributeJSON>, StockAttributeJSON *, bool> generator("Type StockAttribute", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
