/* file "HotelSearchConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HotelSearchConversationStateElementJSON.h"

#include "HotelSearchConversationStateElementJSON.h"


HotelSearchConversationStateElementJSON::TypeHotelKind HotelSearchConversationStateElementJSON::stringToHotelKind(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'H':
            if (strcmp(&(chars[1]), "otel") == 0)
                return HotelKind_Hotel;
            break;
        case 'S':
            if (strcmp(&(chars[1]), "howList") == 0)
                return HotelKind_ShowList;
            break;
        default:
            break;
      }
    throw("The value for field `HotelKind' is not one of the legal values.");
  }

const char *HotelSearchConversationStateElementJSON::stringFromHotelKind(TypeHotelKind the_enum)
  {
    switch (the_enum)
      {
        case HotelKind_Hotel:
            return "Hotel";
        case HotelKind_ShowList:
            return "ShowList";
        default:
            assert(false);
            return NULL;
      }
  }

HotelSearchConversationStateElementJSON::HotelSearchConversationStateElementJSON(const HotelSearchConversationStateElementJSON &)
  {
    assert(false);
  }

HotelSearchConversationStateElementJSON &HotelSearchConversationStateElementJSON::operator=(const HotelSearchConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HotelSearchConversationStateElementJSON::fromJSONHotelKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field HotelKind of HotelSearchConversationStateElementJSON is not a string.");
    TypeHotelKind the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'H':
            if (strcmp(&(json_string->getData()[1]), "otel") == 0)
                  {
                    the_enum = HotelKind_Hotel;
                    goto enum_is_done;
                  }
            break;
        case 'S':
            if (strcmp(&(json_string->getData()[1]), "howList") == 0)
                  {
                    the_enum = HotelKind_ShowList;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field HotelKind of HotelSearchConversationStateElementJSON is not one of the legal strings.");
  enum_is_done:;
    setHotelKind(the_enum);
  }

void HotelSearchConversationStateElementJSON::fromJSONHotelFilterSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    HotelFilterSpecJSON *convert_classy = HotelFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setHotelFilterSpec(convert_classy);
    convert_classy->remove_reference();
  }

void HotelSearchConversationStateElementJSON::fromJSONHotelSearchResults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field HotelSearchResults of HotelSearchConversationStateElementJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< HotelJSON * > vector_HotelSearchResults1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        HotelJSON *convert_classy = HotelJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_HotelSearchResults1[num1] = convert_classy;
      }
    initHotelSearchResults();
    for (size_t num2 = 0; num2 < vector_HotelSearchResults1.size(); ++num2)
        appendHotelSearchResults(vector_HotelSearchResults1[num2]);
    for (size_t num1 = 0; num1 < vector_HotelSearchResults1.size(); ++num1)
      {
        vector_HotelSearchResults1[num1]->remove_reference();
      }
  }

void HotelSearchConversationStateElementJSON::fromJSONResultIndexReferenced(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResultIndexReferenced of HotelSearchConversationStateElementJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResultIndexReferenced of HotelSearchConversationStateElementJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setResultIndexReferenced(extracted_integer);
  }

HotelSearchConversationStateElementJSON::HotelSearchConversationStateElementJSON(void) :
        flagHasHotelKind(false),
        flagHasHotelFilterSpec(false),
        flagHasHotelSearchResults(false),
        flagHasResultIndexReferenced(false)
  {
    extraIndex = create_string_index();
  }

HotelSearchConversationStateElementJSON::~HotelSearchConversationStateElementJSON(void)
  {
    if (flagHasHotelFilterSpec)
      {
        storeHotelFilterSpec->remove_reference();
      }
    if (flagHasHotelSearchResults)
      {
        for (size_t num4 = 0; num4 < storeHotelSearchResults.size(); ++num4)
          {
            storeHotelSearchResults[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HotelSearchConversationStateElementJSON::hasHotelKind(void) const
  {
    return flagHasHotelKind;
  }

HotelSearchConversationStateElementJSON::TypeHotelKind HotelSearchConversationStateElementJSON::getHotelKind(void)
  {
    assert(flagHasHotelKind);
    return storeHotelKind;
  }

const HotelSearchConversationStateElementJSON::TypeHotelKind HotelSearchConversationStateElementJSON::getHotelKind(void) const
  {
    assert(flagHasHotelKind);
    return storeHotelKind;
  }

const char *HotelSearchConversationStateElementJSON::getHotelKindAsChars(void) const
  {
    return stringFromHotelKind(getHotelKind());
  }

std::string HotelSearchConversationStateElementJSON::getHotelKindAsString(void) const
  {
    return stringFromHotelKind(getHotelKind());
  }

bool HotelSearchConversationStateElementJSON::hasHotelFilterSpec(void) const
  {
    return flagHasHotelFilterSpec;
  }

HotelFilterSpecJSON * HotelSearchConversationStateElementJSON::getHotelFilterSpec(void)
  {
    assert(flagHasHotelFilterSpec);
    return storeHotelFilterSpec;
  }

const HotelFilterSpecJSON * HotelSearchConversationStateElementJSON::getHotelFilterSpec(void) const
  {
    assert(flagHasHotelFilterSpec);
    return storeHotelFilterSpec;
  }

bool HotelSearchConversationStateElementJSON::hasHotelSearchResults(void) const
  {
    return flagHasHotelSearchResults;
  }

size_t HotelSearchConversationStateElementJSON::countOfHotelSearchResults(void) const
  {
    assert(flagHasHotelSearchResults);
    return storeHotelSearchResults.size();
  }

HotelJSON * HotelSearchConversationStateElementJSON::elementOfHotelSearchResults(size_t element_num)
  {
    assert(flagHasHotelSearchResults);
    return storeHotelSearchResults[element_num];
  }

const HotelJSON * HotelSearchConversationStateElementJSON::elementOfHotelSearchResults(size_t element_num) const
  {
    assert(flagHasHotelSearchResults);
    return storeHotelSearchResults[element_num];
  }

std::vector< HotelJSON * > HotelSearchConversationStateElementJSON::getHotelSearchResults(void)
  {
    assert(flagHasHotelSearchResults);
    return storeHotelSearchResults;
  }

const std::vector< HotelJSON * > HotelSearchConversationStateElementJSON::getHotelSearchResults(void) const
  {
    assert(flagHasHotelSearchResults);
    return storeHotelSearchResults;
  }

bool HotelSearchConversationStateElementJSON::hasResultIndexReferenced(void) const
  {
    return flagHasResultIndexReferenced;
  }

OInteger HotelSearchConversationStateElementJSON::getResultIndexReferenced(void)
  {
    assert(flagHasResultIndexReferenced);
    return storeResultIndexReferenced;
  }

const OInteger HotelSearchConversationStateElementJSON::getResultIndexReferenced(void) const
  {
    assert(flagHasResultIndexReferenced);
    return storeResultIndexReferenced;
  }

char HotelSearchConversationStateElementJSON::Generator::lowerBoundResultIndexReferenced[] = "0";
HotelSearchConversationStateElementJSON *HotelSearchConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HotelSearchConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HotelSearchConversationStateElementJSON>, HotelSearchConversationStateElementJSON *, bool> generator("Type HotelSearchConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
