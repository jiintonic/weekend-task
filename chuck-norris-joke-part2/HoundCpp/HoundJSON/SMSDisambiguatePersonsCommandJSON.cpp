/* file "SMSDisambiguatePersonsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSDisambiguatePersonsCommandJSON.h"

#include "SMSDisambiguatePersonsCommandJSON.h"


SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON &SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras)
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

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONChoiceList(JSONValue *json_value, bool ignore_extras)
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

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONWhichContactChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    WhichContactChoicesJSON *convert_classy = WhichContactChoicesJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setWhichContactChoices(convert_classy);
    convert_classy->remove_reference();
  }

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONPreviousMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PreviousMessage of TypeNativeDataJSON is not a string.");
    setPreviousMessage(std::string(json_string->getData()));
  }

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONSpokenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenBody of TypeNativeDataJSON is not a string.");
    setSpokenBody(std::string(json_string->getData()));
  }

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONWrittenBody(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenBody of TypeNativeDataJSON is not a string.");
    setWrittenBody(std::string(json_string->getData()));
  }

void SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorMessage of TypeNativeDataJSON is not a string.");
    setErrorMessage(std::string(json_string->getData()));
  }

SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasMultiSelect(false),
        flagHasChoiceList(false),
        flagHasWhichContactChoices(false),
        flagHasPreviousMessage(false),
        flagHasSpokenBody(false),
        flagHasWrittenBody(false),
        flagHasErrorMessage(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasChoiceList)
      {
        for (size_t num4 = 0; num4 < storeChoiceList.size(); ++num4)
          {
            storeChoiceList[num4]->remove_reference();
          }
      }
    if (flagHasWhichContactChoices)
      {
        storeWhichContactChoices->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasMultiSelect(void) const
  {
    return flagHasMultiSelect;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getMultiSelect(void)
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

const bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getMultiSelect(void) const
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasChoiceList(void) const
  {
    return flagHasChoiceList;
  }

size_t SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::countOfChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList.size();
  }

DisambiguateChoiceJSON * SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num)
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

const DisambiguateChoiceJSON * SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

std::vector< DisambiguateChoiceJSON * > SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getChoiceList(void)
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

const std::vector< DisambiguateChoiceJSON * > SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasWhichContactChoices(void) const
  {
    return flagHasWhichContactChoices;
  }

WhichContactChoicesJSON * SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getWhichContactChoices(void)
  {
    assert(flagHasWhichContactChoices);
    return storeWhichContactChoices;
  }

const WhichContactChoicesJSON * SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getWhichContactChoices(void) const
  {
    assert(flagHasWhichContactChoices);
    return storeWhichContactChoices;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasPreviousMessage(void) const
  {
    return flagHasPreviousMessage;
  }

std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getPreviousMessage(void)
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

const std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getPreviousMessage(void) const
  {
    assert(flagHasPreviousMessage);
    return storePreviousMessage;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasSpokenBody(void) const
  {
    return flagHasSpokenBody;
  }

std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getSpokenBody(void)
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

const std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getSpokenBody(void) const
  {
    assert(flagHasSpokenBody);
    return storeSpokenBody;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasWrittenBody(void) const
  {
    return flagHasWrittenBody;
  }

std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getWrittenBody(void)
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

const std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getWrittenBody(void) const
  {
    assert(flagHasWrittenBody);
    return storeWrittenBody;
  }

bool SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::hasErrorMessage(void) const
  {
    return flagHasErrorMessage;
  }

std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getErrorMessage(void)
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

const std::string SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::getErrorMessage(void) const
  {
    assert(flagHasErrorMessage);
    return storeErrorMessage;
  }

SMSDisambiguatePersonsCommandJSON::SMSDisambiguatePersonsCommandJSON(const SMSDisambiguatePersonsCommandJSON &)
  {
    assert(false);
  }

SMSDisambiguatePersonsCommandJSON &SMSDisambiguatePersonsCommandJSON::operator=(const SMSDisambiguatePersonsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSDisambiguatePersonsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void SMSDisambiguatePersonsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

SMSDisambiguatePersonsCommandJSON::SMSDisambiguatePersonsCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

SMSDisambiguatePersonsCommandJSON::~SMSDisambiguatePersonsCommandJSON(void)
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

const char *SMSDisambiguatePersonsCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "SMSDisambiguatePersonsCommand";
  }

bool SMSDisambiguatePersonsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON * SMSDisambiguatePersonsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON * SMSDisambiguatePersonsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON *SMSDisambiguatePersonsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SMSDisambiguatePersonsCommandJSON *SMSDisambiguatePersonsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSDisambiguatePersonsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSDisambiguatePersonsCommandJSON>, SMSDisambiguatePersonsCommandJSON *, bool> generator("Type SMSDisambiguatePersonsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
