/* file "HintsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HintsJSON.h"

#include "HintsJSON.h"


HintsJSON::TypeSpokenJSON::TypePriority HintsJSON::TypeSpokenJSON::stringToPriority(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "igh") == 0)
                return Priority_High;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ow") == 0)
                return Priority_Low;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "edium") == 0)
                return Priority_Medium;
            break;
        default:
            break;
      }
    throw("The value for field `Priority' is not one of the legal values.");
  }

const char *HintsJSON::TypeSpokenJSON::stringFromPriority(TypePriority the_enum)
  {
    switch (the_enum)
      {
        case Priority_Low:
            return "Low";
        case Priority_Medium:
            return "Medium";
        case Priority_High:
            return "High";
        default:
            assert(false);
            return NULL;
      }
  }

HintsJSON::TypeSpokenJSON::TypeSpokenJSON(const TypeSpokenJSON &)
  {
    assert(false);
  }

HintsJSON::TypeSpokenJSON &HintsJSON::TypeSpokenJSON::operator=(const TypeSpokenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HintsJSON::TypeSpokenJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeSpokenJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

void HintsJSON::TypeSpokenJSON::fromJSONPriority(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Priority of TypeSpokenJSON is not a string.");
    TypePriority the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "igh") == 0)
                  {
                    the_enum = Priority_High;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ow") == 0)
                  {
                    the_enum = Priority_Low;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edium") == 0)
                  {
                    the_enum = Priority_Medium;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Priority of TypeSpokenJSON is not one of the legal strings.");
  enum_is_done:;
    setPriority(the_enum);
  }

HintsJSON::TypeSpokenJSON::TypeSpokenJSON(void) :
        flagHasText(false),
        flagHasPriority(false)
  {
    storePriority = Priority_Medium;
    extraIndex = create_string_index();
  }

HintsJSON::TypeSpokenJSON::~TypeSpokenJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HintsJSON::TypeSpokenJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string HintsJSON::TypeSpokenJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string HintsJSON::TypeSpokenJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

bool HintsJSON::TypeSpokenJSON::hasPriority(void) const
  {
    return flagHasPriority;
  }

HintsJSON::TypeSpokenJSON::TypePriority HintsJSON::TypeSpokenJSON::getPriority(void)
  {
    return storePriority;
  }

const HintsJSON::TypeSpokenJSON::TypePriority HintsJSON::TypeSpokenJSON::getPriority(void) const
  {
    return storePriority;
  }

const char *HintsJSON::TypeSpokenJSON::getPriorityAsChars(void) const
  {
    return stringFromPriority(getPriority());
  }

std::string HintsJSON::TypeSpokenJSON::getPriorityAsString(void) const
  {
    return stringFromPriority(getPriority());
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON::TypePriority HintsJSON::TypeWrittenJSON::TypeHintsJSON::stringToPriority(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "igh") == 0)
                return Priority_High;
            break;
        case 'L':
            if (strcmp(&(chars[1]), "ow") == 0)
                return Priority_Low;
            break;
        case 'M':
            if (strcmp(&(chars[1]), "edium") == 0)
                return Priority_Medium;
            break;
        default:
            break;
      }
    throw("The value for field `Priority' is not one of the legal values.");
  }

const char *HintsJSON::TypeWrittenJSON::TypeHintsJSON::stringFromPriority(TypePriority the_enum)
  {
    switch (the_enum)
      {
        case Priority_Low:
            return "Low";
        case Priority_Medium:
            return "Medium";
        case Priority_High:
            return "High";
        default:
            assert(false);
            return NULL;
      }
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON::TypeHintsJSON(const TypeHintsJSON &)
  {
    assert(false);
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON &HintsJSON::TypeWrittenJSON::TypeHintsJSON::operator=(const TypeHintsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HintsJSON::TypeWrittenJSON::TypeHintsJSON::fromJSONText(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Text of TypeHintsJSON is not a string.");
    setText(std::string(json_string->getData()));
  }

void HintsJSON::TypeWrittenJSON::TypeHintsJSON::fromJSONPriority(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Priority of TypeHintsJSON is not a string.");
    TypePriority the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "igh") == 0)
                  {
                    the_enum = Priority_High;
                    goto enum_is_done;
                  }
            break;
        case 'L':
            if (strcmp(&(json_string->getData()[1]), "ow") == 0)
                  {
                    the_enum = Priority_Low;
                    goto enum_is_done;
                  }
            break;
        case 'M':
            if (strcmp(&(json_string->getData()[1]), "edium") == 0)
                  {
                    the_enum = Priority_Medium;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field Priority of TypeHintsJSON is not one of the legal strings.");
  enum_is_done:;
    setPriority(the_enum);
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON::TypeHintsJSON(void) :
        flagHasText(false),
        flagHasPriority(false)
  {
    storePriority = Priority_Medium;
    extraIndex = create_string_index();
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON::~TypeHintsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HintsJSON::TypeWrittenJSON::TypeHintsJSON::hasText(void) const
  {
    return flagHasText;
  }

std::string HintsJSON::TypeWrittenJSON::TypeHintsJSON::getText(void)
  {
    assert(flagHasText);
    return storeText;
  }

const std::string HintsJSON::TypeWrittenJSON::TypeHintsJSON::getText(void) const
  {
    assert(flagHasText);
    return storeText;
  }

bool HintsJSON::TypeWrittenJSON::TypeHintsJSON::hasPriority(void) const
  {
    return flagHasPriority;
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON::TypePriority HintsJSON::TypeWrittenJSON::TypeHintsJSON::getPriority(void)
  {
    return storePriority;
  }

const HintsJSON::TypeWrittenJSON::TypeHintsJSON::TypePriority HintsJSON::TypeWrittenJSON::TypeHintsJSON::getPriority(void) const
  {
    return storePriority;
  }

const char *HintsJSON::TypeWrittenJSON::TypeHintsJSON::getPriorityAsChars(void) const
  {
    return stringFromPriority(getPriority());
  }

std::string HintsJSON::TypeWrittenJSON::TypeHintsJSON::getPriorityAsString(void) const
  {
    return stringFromPriority(getPriority());
  }

HintsJSON::TypeWrittenJSON::TypeWrittenJSON(const TypeWrittenJSON &)
  {
    assert(false);
  }

HintsJSON::TypeWrittenJSON &HintsJSON::TypeWrittenJSON::operator=(const TypeWrittenJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HintsJSON::TypeWrittenJSON::fromJSONHints(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Hints of TypeWrittenJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Hints of TypeWrittenJSON has too few elements.");
    std::vector< TypeHintsJSON * > vector_Hints1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeHintsJSON *convert_classy = TypeHintsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Hints1[num1] = convert_classy;
      }
    assert(vector_Hints1.size() >= 1);
    initHints();
    for (size_t num2 = 0; num2 < vector_Hints1.size(); ++num2)
        appendHints(vector_Hints1[num2]);
    for (size_t num1 = 0; num1 < vector_Hints1.size(); ++num1)
      {
        vector_Hints1[num1]->remove_reference();
      }
  }

HintsJSON::TypeWrittenJSON::TypeWrittenJSON(void) :
        flagHasHints(false)
  {
    extraIndex = create_string_index();
  }

HintsJSON::TypeWrittenJSON::~TypeWrittenJSON(void)
  {
    if (flagHasHints)
      {
        for (size_t num4 = 0; num4 < storeHints.size(); ++num4)
          {
            storeHints[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HintsJSON::TypeWrittenJSON::hasHints(void) const
  {
    return flagHasHints;
  }

size_t HintsJSON::TypeWrittenJSON::countOfHints(void) const
  {
    assert(flagHasHints);
    return storeHints.size();
  }

HintsJSON::TypeWrittenJSON::TypeHintsJSON * HintsJSON::TypeWrittenJSON::elementOfHints(size_t element_num)
  {
    assert(flagHasHints);
    return storeHints[element_num];
  }

const HintsJSON::TypeWrittenJSON::TypeHintsJSON * HintsJSON::TypeWrittenJSON::elementOfHints(size_t element_num) const
  {
    assert(flagHasHints);
    return storeHints[element_num];
  }

std::vector< HintsJSON::TypeWrittenJSON::TypeHintsJSON * > HintsJSON::TypeWrittenJSON::getHints(void)
  {
    assert(flagHasHints);
    return storeHints;
  }

const std::vector< HintsJSON::TypeWrittenJSON::TypeHintsJSON * > HintsJSON::TypeWrittenJSON::getHints(void) const
  {
    assert(flagHasHints);
    return storeHints;
  }

HintsJSON::HintsJSON(const HintsJSON &)
  {
    assert(false);
  }

HintsJSON &HintsJSON::operator=(const HintsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HintsJSON::fromJSONSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeSpokenJSON *convert_classy = TypeSpokenJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSpoken(convert_classy);
    convert_classy->remove_reference();
  }

void HintsJSON::fromJSONWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeWrittenJSON *convert_classy = TypeWrittenJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWritten(convert_classy);
    convert_classy->remove_reference();
  }

HintsJSON::HintsJSON(void) :
        flagHasSpoken(false),
        flagHasWritten(false)
  {
    extraIndex = create_string_index();
  }

HintsJSON::~HintsJSON(void)
  {
    if (flagHasSpoken)
      {
        storeSpoken->remove_reference();
      }
    if (flagHasWritten)
      {
        storeWritten->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HintsJSON::hasSpoken(void) const
  {
    return flagHasSpoken;
  }

HintsJSON::TypeSpokenJSON * HintsJSON::getSpoken(void)
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

const HintsJSON::TypeSpokenJSON * HintsJSON::getSpoken(void) const
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

bool HintsJSON::hasWritten(void) const
  {
    return flagHasWritten;
  }

HintsJSON::TypeWrittenJSON * HintsJSON::getWritten(void)
  {
    assert(flagHasWritten);
    return storeWritten;
  }

const HintsJSON::TypeWrittenJSON * HintsJSON::getWritten(void) const
  {
    assert(flagHasWritten);
    return storeWritten;
  }

HintsJSON::TypeSpokenJSON *HintsJSON::TypeSpokenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeSpokenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeSpokenJSON>, TypeSpokenJSON *, bool> generator("Type TypeSpoken", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HintsJSON::TypeWrittenJSON::TypeHintsJSON *HintsJSON::TypeWrittenJSON::TypeHintsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeHintsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeHintsJSON>, TypeHintsJSON *, bool> generator("Type TypeHints", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HintsJSON::TypeWrittenJSON *HintsJSON::TypeWrittenJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeWrittenJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeWrittenJSON>, TypeWrittenJSON *, bool> generator("Type TypeWritten", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HintsJSON *HintsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HintsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HintsJSON>, HintsJSON *, bool> generator("Type Hints", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
