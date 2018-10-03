/* file "SMSDisambiguatePhoneNumbersCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguatePhoneNumbersCommandJSON.h"

#include "SMSDisambiguatePhoneNumbersCommandJSON.h"


SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON &SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
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
            throw("The value for field MultiSelect of TypeNativeDataJSON is not true for false.");
          }
      }
    setMultiSelect(the_bool);
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONChoiceList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChoiceList of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field ChoiceList of TypeNativeDataJSON has too few elements.");
    std::vector< DisambiguateChoiceJSON * > vector_ChoiceList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        DisambiguateChoiceJSON *convert_classy = DisambiguateChoiceJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ChoiceList1[num1] = convert_classy;
      }
    assert(vector_ChoiceList1.size() >= 2);
    initChoiceList();
    for (size_t num2 = 0; num2 < vector_ChoiceList1.size(); ++num2)
        appendChoiceList(vector_ChoiceList1[num2]);
    for (size_t num1 = 0; num1 < vector_ChoiceList1.size(); ++num1)
      {
        vector_ChoiceList1[num1]->remove_reference();
      }
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONContactNumberChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ContactNumberChoicesJSON *convert_classy = ContactNumberChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setContactNumberChoices(convert_classy);
    convert_classy->remove_reference();
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONPreviousMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousMessage of TypeNativeDataJSON is not a string.");
    setPreviousMessage(std::string(json_string->getData()));
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenBody of TypeNativeDataJSON is not a string.");
    setSpokenBody(std::string(json_string->getData()));
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenBody of TypeNativeDataJSON is not a string.");
    setWrittenBody(std::string(json_string->getData()));
  }

void SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of TypeNativeDataJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasMultiSelect(false),
        flagHasChoiceList(false),
        flagHasContactNumberChoices(false),
        flagHasPreviousMessage(false),
        flagHasSpokenBody(false),
        flagHasWrittenBody(false),
        flagHasErrorMessage(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasChoiceList)
      {
        for (size_t num4 = 0; num4 < storeChoiceList.size(); ++num4)
          {
            storeChoiceList[num4]->remove_reference();
          }
      }
    if (flagHasContactNumberChoices)
      {
        storeContactNumberChoices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasMultiSelect(void) const
  {
    return flagHasMultiSelect;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getMultiSelect(void)
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

const bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getMultiSelect(void) const
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasChoiceList(void) const
  {
    return flagHasChoiceList;
  }

size_t SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::countOfChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList.size();
  }

DisambiguateChoiceJSON * SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num)
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

const DisambiguateChoiceJSON * SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

std::vector< DisambiguateChoiceJSON * > SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getChoiceList(void)
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

const std::vector< DisambiguateChoiceJSON * > SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasContactNumberChoices(void) const
  {
    return flagHasContactNumberChoices;
  }

ContactNumberChoicesJSON * SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getContactNumberChoices(void)
  {
    assert(flagHasContactNumberChoices);
    return storeContactNumberChoices;
  }

const ContactNumberChoicesJSON * SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getContactNumberChoices(void) const
  {
    assert(flagHasContactNumberChoices);
    return storeContactNumberChoices;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasPreviousMessage(void) const
  {
    return flagHasPreviousMessage;
  }

std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getPreviousMessage(void)
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

const std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getPreviousMessage(void) const
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasSpokenBody(void) const
  {
    return flagHasSpokenBody;
  }

std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getSpokenBody(void)
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

const std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getSpokenBody(void) const
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasWrittenBody(void) const
  {
    return flagHasWrittenBody;
  }

std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getWrittenBody(void)
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

const std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getWrittenBody(void) const
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

SMSDisambiguatePhoneNumbersCommandJSON::SMSDisambiguatePhoneNumbersCommandJSON(const SMSDisambiguatePhoneNumbersCommandJSON &)
  {
    assert(false);
  }

SMSDisambiguatePhoneNumbersCommandJSON &SMSDisambiguatePhoneNumbersCommandJSON::operator=(const SMSDisambiguatePhoneNumbersCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSDisambiguatePhoneNumbersCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SMSDisambiguatePhoneNumbersCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SMSDisambiguatePhoneNumbersCommandJSON::SMSDisambiguatePhoneNumbersCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguatePhoneNumbersCommandJSON::~SMSDisambiguatePhoneNumbersCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *SMSDisambiguatePhoneNumbersCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "SMSDisambiguatePhoneNumbersCommand";
  }

bool SMSDisambiguatePhoneNumbersCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON * SMSDisambiguatePhoneNumbersCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON * SMSDisambiguatePhoneNumbersCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON *SMSDisambiguatePhoneNumbersCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeNativeDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SMSDisambiguatePhoneNumbersCommandJSON *SMSDisambiguatePhoneNumbersCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguatePhoneNumbersCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguatePhoneNumbersCommandJSON>, SMSDisambiguatePhoneNumbersCommandJSON *, bool> generator("Type SMSDisambiguatePhoneNumbersCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
