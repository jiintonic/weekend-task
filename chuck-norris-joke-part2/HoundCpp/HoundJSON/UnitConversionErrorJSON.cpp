/* file "UnitConversionErrorJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UnitConversionErrorJSON.h"

#include "UnitConversionErrorJSON.h"


UnitConversionErrorJSON::TypeType::TypeType(void)
  {
  }

UnitConversionErrorJSON::TypeType::TypeType(const TypeType &other) : in_known_list(other.in_known_list)
  {
    if (in_known_list)
        list_value = other.list_value;
    else
        string_value = other.string_value;
  }

UnitConversionErrorJSON::TypeType::TypeType(TypeTypeKnownValues other) : in_known_list(true), list_value(other)

  {
  }

bool UnitConversionErrorJSON::TypeType::operator==(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return false;
    if (in_known_list)
        return list_value == other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) == 0);
  }

bool UnitConversionErrorJSON::TypeType::operator!=(const TypeType &other) const
  {
    return !(operator==(other));
  }

bool UnitConversionErrorJSON::TypeType::operator<(const TypeType &other) const
  {
    if (in_known_list != other.in_known_list)
        return in_known_list;
    if (in_known_list)
        return list_value < other.list_value;
    else
        return (strcmp(string_value.c_str(), other.string_value.c_str()) < 0);
  }

bool UnitConversionErrorJSON::TypeType::operator>(const TypeType &other) const
  {
    return other.operator<(*this);
  }

bool UnitConversionErrorJSON::TypeType::operator>=(const TypeType &other) const
  {
    return !(operator<(other));
  }

bool UnitConversionErrorJSON::TypeType::operator<=(const TypeType &other) const
  {
    return !(other.operator<(*this));
  }

UnitConversionErrorJSON::TypeTypeKnownValues UnitConversionErrorJSON::stringToType(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "adAdjective") == 0)
                return Type_BadAdjective;
            break;
        case 'I':
            if (strcmp(&(chars[1]), "nvalidDensity") == 0)
                return Type_InvalidDensity;
            break;
        case 'N':
            if (strncmp(&(chars[1]), "oValid", 6) == 0)
              {
                switch ((unsigned char)(chars[7]))
                  {
                    case 'I':
                        if (strcmp(&(chars[8]), "nputFound") == 0)
                            return Type_NoValidInputFound;
                        break;
                    case 'O':
                        if (strcmp(&(chars[8]), "utputFound") == 0)
                            return Type_NoValidOutputFound;
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ypeMismatch") == 0)
                return Type_TypeMismatch;
            break;
        case 'U':
            if (strcmp(&(chars[1]), "nnecessaryDensity") == 0)
                return Type_UnnecessaryDensity;
            break;
        default:
            break;
      }
    return Type__none;
  }

const char *UnitConversionErrorJSON::stringFromType(TypeTypeKnownValues the_enum)
  {
    switch (the_enum)
      {
        case Type_TypeMismatch:
            return "TypeMismatch";
        case Type_InvalidDensity:
            return "InvalidDensity";
        case Type_UnnecessaryDensity:
            return "UnnecessaryDensity";
        case Type_NoValidInputFound:
            return "NoValidInputFound";
        case Type_NoValidOutputFound:
            return "NoValidOutputFound";
        case Type_BadAdjective:
            return "BadAdjective";
        default:
            assert(false);
            return NULL;
      }
  }

UnitConversionErrorJSON::UnitConversionErrorJSON(const UnitConversionErrorJSON &)
  {
    assert(false);
  }

UnitConversionErrorJSON &UnitConversionErrorJSON::operator=(const UnitConversionErrorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UnitConversionErrorJSON::fromJSONType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Type of UnitConversionErrorJSON is not a string.");
    TypeType the_open_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "adAdjective") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_BadAdjective;
                    goto open_enum_is_done;
                  }
            break;
        case 'I':
            if (strcmp(&(json_string->getData()[1]), "nvalidDensity") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_InvalidDensity;
                    goto open_enum_is_done;
                  }
            break;
        case 'N':
            if (strncmp(&(json_string->getData()[1]), "oValid", 6) == 0)
              {
                switch ((unsigned char)(json_string->getData()[7]))
                  {
                    case 'I':
                        if (strcmp(&(json_string->getData()[8]), "nputFound") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Type_NoValidInputFound;
                                goto open_enum_is_done;
                              }
                        break;
                    case 'O':
                        if (strcmp(&(json_string->getData()[8]), "utputFound") == 0)
                              {
                                the_open_enum.in_known_list = true;
                                the_open_enum.list_value = Type_NoValidOutputFound;
                                goto open_enum_is_done;
                              }
                        break;
                    default:
                        break;
                  }
              }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ypeMismatch") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_TypeMismatch;
                    goto open_enum_is_done;
                  }
            break;
        case 'U':
            if (strcmp(&(json_string->getData()[1]), "nnecessaryDensity") == 0)
                  {
                    the_open_enum.in_known_list = true;
                    the_open_enum.list_value = Type_UnnecessaryDensity;
                    goto open_enum_is_done;
                  }
            break;
        default:
            break;
      }
    the_open_enum.in_known_list = false;
    the_open_enum.string_value = json_string->getData();
  open_enum_is_done:;
    setType(the_open_enum);
  }

void UnitConversionErrorJSON::fromJSONInputUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field InputUnit of UnitConversionErrorJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field InputUnit of UnitConversionErrorJSON has too few elements.");
    std::vector< UnitOfMeasureJSON * > vector_InputUnit1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnitOfMeasureJSON *convert_classy = UnitOfMeasureJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_InputUnit1[num1] = convert_classy;
      }
    assert(vector_InputUnit1.size() >= 1);
    initInputUnit();
    for (size_t num3 = 0; num3 < vector_InputUnit1.size(); ++num3)
        appendInputUnit(vector_InputUnit1[num3]);
    for (size_t num1 = 0; num1 < vector_InputUnit1.size(); ++num1)
      {
        vector_InputUnit1[num1]->remove_reference();
      }
  }

void UnitConversionErrorJSON::fromJSONOutputUnit(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field OutputUnit of UnitConversionErrorJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field OutputUnit of UnitConversionErrorJSON has too few elements.");
    std::vector< UnitOfMeasureJSON * > vector_OutputUnit1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UnitOfMeasureJSON *convert_classy = UnitOfMeasureJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_OutputUnit1[num1] = convert_classy;
      }
    assert(vector_OutputUnit1.size() >= 1);
    initOutputUnit();
    for (size_t num4 = 0; num4 < vector_OutputUnit1.size(); ++num4)
        appendOutputUnit(vector_OutputUnit1[num4]);
    for (size_t num1 = 0; num1 < vector_OutputUnit1.size(); ++num1)
      {
        vector_OutputUnit1[num1]->remove_reference();
      }
  }

UnitConversionErrorJSON::UnitConversionErrorJSON(void) :
        flagHasType(false),
        flagHasInputUnit(false),
        flagHasOutputUnit(false)
  {
  }

UnitConversionErrorJSON::~UnitConversionErrorJSON(void)
  {
    if (flagHasInputUnit)
      {
        for (size_t num7 = 0; num7 < storeInputUnit.size(); ++num7)
          {
            storeInputUnit[num7]->remove_reference();
          }
      }
    if (flagHasOutputUnit)
      {
        for (size_t num8 = 0; num8 < storeOutputUnit.size(); ++num8)
          {
            storeOutputUnit[num8]->remove_reference();
          }
      }
  }

bool UnitConversionErrorJSON::hasType(void) const
  {
    return flagHasType;
  }

UnitConversionErrorJSON::TypeType UnitConversionErrorJSON::getType(void)
  {
    assert(flagHasType);
    return storeType;
  }

const UnitConversionErrorJSON::TypeType UnitConversionErrorJSON::getType(void) const
  {
    assert(flagHasType);
    return storeType;
  }

const char *UnitConversionErrorJSON::getTypeAsChars(void) const
  {
    TypeType result = getType();
    if (result.in_known_list)
        return stringFromType(result.list_value);
    else
        return result.string_value.c_str();
  }

std::string UnitConversionErrorJSON::getTypeAsString(void) const
  {
    return getTypeAsChars();
  }

bool UnitConversionErrorJSON::hasInputUnit(void) const
  {
    return flagHasInputUnit;
  }

size_t UnitConversionErrorJSON::countOfInputUnit(void) const
  {
    assert(flagHasInputUnit);
    return storeInputUnit.size();
  }

UnitOfMeasureJSON * UnitConversionErrorJSON::elementOfInputUnit(size_t element_num)
  {
    assert(flagHasInputUnit);
    return storeInputUnit[element_num];
  }

const UnitOfMeasureJSON * UnitConversionErrorJSON::elementOfInputUnit(size_t element_num) const
  {
    assert(flagHasInputUnit);
    return storeInputUnit[element_num];
  }

std::vector< UnitOfMeasureJSON * > UnitConversionErrorJSON::getInputUnit(void)
  {
    assert(flagHasInputUnit);
    return storeInputUnit;
  }

const std::vector< UnitOfMeasureJSON * > UnitConversionErrorJSON::getInputUnit(void) const
  {
    assert(flagHasInputUnit);
    return storeInputUnit;
  }

bool UnitConversionErrorJSON::hasOutputUnit(void) const
  {
    return flagHasOutputUnit;
  }

size_t UnitConversionErrorJSON::countOfOutputUnit(void) const
  {
    assert(flagHasOutputUnit);
    return storeOutputUnit.size();
  }

UnitOfMeasureJSON * UnitConversionErrorJSON::elementOfOutputUnit(size_t element_num)
  {
    assert(flagHasOutputUnit);
    return storeOutputUnit[element_num];
  }

const UnitOfMeasureJSON * UnitConversionErrorJSON::elementOfOutputUnit(size_t element_num) const
  {
    assert(flagHasOutputUnit);
    return storeOutputUnit[element_num];
  }

std::vector< UnitOfMeasureJSON * > UnitConversionErrorJSON::getOutputUnit(void)
  {
    assert(flagHasOutputUnit);
    return storeOutputUnit;
  }

const std::vector< UnitOfMeasureJSON * > UnitConversionErrorJSON::getOutputUnit(void) const
  {
    assert(flagHasOutputUnit);
    return storeOutputUnit;
  }

UnitConversionErrorJSON *UnitConversionErrorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UnitConversionErrorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UnitConversionErrorJSON>, UnitConversionErrorJSON *, bool> generator("Type UnitConversionError", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
