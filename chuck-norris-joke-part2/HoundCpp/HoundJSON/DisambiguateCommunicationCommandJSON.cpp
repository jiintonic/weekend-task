/* file "DisambiguateCommunicationCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisambiguateCommunicationCommandJSON.h"

#include "DisambiguateCommunicationCommandJSON.h"


DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::TypeLastSelectedInfoAsStringsJSON(const TypeLastSelectedInfoAsStringsJSON &)
  {
    assert(false);
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON &DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::operator=(const TypeLastSelectedInfoAsStringsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::fromJSONSpoken(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Spoken of TypeLastSelectedInfoAsStringsJSON is not a string.");
    setSpoken(std::string(json_string->getData()));
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::fromJSONWritten(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Written of TypeLastSelectedInfoAsStringsJSON is not a string.");
    setWritten(std::string(json_string->getData()));
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::TypeLastSelectedInfoAsStringsJSON(void) :
        flagHasSpoken(false),
        flagHasWritten(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::~TypeLastSelectedInfoAsStringsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::hasSpoken(void) const
  {
    return flagHasSpoken;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::getSpoken(void)
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::getSpoken(void) const
  {
    assert(flagHasSpoken);
    return storeSpoken;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::hasWritten(void) const
  {
    return flagHasWritten;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::getWritten(void)
  {
    assert(flagHasWritten);
    return storeWritten;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::getWritten(void) const
  {
    assert(flagHasWritten);
    return storeWritten;
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON &DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONMultiSelect(JSONValue *json_value, bool ignore_extras)
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

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONChoiceList(JSONValue *json_value, bool ignore_extras)
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
    for (size_t num4 = 0; num4 < vector_ChoiceList1.size(); ++num4)
        appendChoiceList(vector_ChoiceList1[num4]);
    for (size_t num1 = 0; num1 < vector_ChoiceList1.size(); ++num1)
      {
        vector_ChoiceList1[num1]->remove_reference();
      }
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONErrorSpokenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorSpokenResponse of TypeNativeDataJSON is not a string.");
    setErrorSpokenResponse(std::string(json_string->getData()));
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONErrorSpokenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorSpokenResponseLong of TypeNativeDataJSON is not a string.");
    setErrorSpokenResponseLong(std::string(json_string->getData()));
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONErrorWrittenResponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorWrittenResponse of TypeNativeDataJSON is not a string.");
    setErrorWrittenResponse(std::string(json_string->getData()));
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONErrorWrittenResponseLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ErrorWrittenResponseLong of TypeNativeDataJSON is not a string.");
    setErrorWrittenResponseLong(std::string(json_string->getData()));
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONHadInvalidChoice(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field HadInvalidChoice of TypeNativeDataJSON is not true for false.");
          }
      }
    setHadInvalidChoice(the_bool);
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONCommunicationType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    CommunicationTypeJSON *convert_classy = CommunicationTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setCommunicationType(convert_classy);
    convert_classy->remove_reference();
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONAutoListen(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AutoListen of TypeNativeDataJSON is not true for false.");
          }
      }
    setAutoListen(the_bool);
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONContactResultChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ContactResultChoices of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeContactResultChoices > vector_ContactResultChoices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeContactResultChoices or_result;
        bool or_done = false;
        if (!or_done)
          {
            try
              {
                SMSContactResultJSON *convert_classy = SMSContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
                convert_classy->add_reference();
                or_result.u.choice0 = convert_classy;
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
                EmailContactResultJSON *convert_classy = EmailContactResultJSON::from_json(json_array1->component(num1), ignore_extras);
                convert_classy->add_reference();
                or_result.u.choice1 = convert_classy;
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
            throw("The value for an element of field ContactResultChoices of TypeNativeDataJSON is not one of the allowed values.");
        vector_ContactResultChoices1[num1] = or_result;
      }
    initContactResultChoices();
    for (size_t num5 = 0; num5 < vector_ContactResultChoices1.size(); ++num5)
        appendContactResultChoices(vector_ContactResultChoices1[num5]);
    for (size_t num1 = 0; num1 < vector_ContactResultChoices1.size(); ++num1)
      {
        switch (vector_ContactResultChoices1[num1].key)
          {
            case 0:
                vector_ContactResultChoices1[num1].u.choice0->remove_reference();
                break;
            case 1:
                vector_ContactResultChoices1[num1].u.choice1->remove_reference();
                break;
            default:
                assert(false);
          }
      }
  }

void DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::fromJSONLastSelectedInfoAsStrings(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field LastSelectedInfoAsStrings of TypeNativeDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeLastSelectedInfoAsStringsJSON * > vector_LastSelectedInfoAsStrings1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeLastSelectedInfoAsStringsJSON *convert_classy = TypeLastSelectedInfoAsStringsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_LastSelectedInfoAsStrings1[num1] = convert_classy;
      }
    initLastSelectedInfoAsStrings();
    for (size_t num6 = 0; num6 < vector_LastSelectedInfoAsStrings1.size(); ++num6)
        appendLastSelectedInfoAsStrings(vector_LastSelectedInfoAsStrings1[num6]);
    for (size_t num1 = 0; num1 < vector_LastSelectedInfoAsStrings1.size(); ++num1)
      {
        vector_LastSelectedInfoAsStrings1[num1]->remove_reference();
      }
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasMultiSelect(false),
        flagHasChoiceList(false),
        flagHasErrorSpokenResponse(false),
        flagHasErrorSpokenResponseLong(false),
        flagHasErrorWrittenResponse(false),
        flagHasErrorWrittenResponseLong(false),
        flagHasHadInvalidChoice(false),
        flagHasCommunicationType(false),
        flagHasAutoListen(false),
        flagHasContactResultChoices(false),
        flagHasLastSelectedInfoAsStrings(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasChoiceList)
      {
        for (size_t num10 = 0; num10 < storeChoiceList.size(); ++num10)
          {
            storeChoiceList[num10]->remove_reference();
          }
      }
    if (flagHasCommunicationType)
      {
        storeCommunicationType->remove_reference();
      }
    if (flagHasContactResultChoices)
      {
        for (size_t num11 = 0; num11 < storeContactResultChoices.size(); ++num11)
          {
            switch (storeContactResultChoices[num11].key)
              {
                case 0:
                    storeContactResultChoices[num11].u.choice0->remove_reference();
                    break;
                case 1:
                    storeContactResultChoices[num11].u.choice1->remove_reference();
                    break;
                default:
                    assert(false);
              }
          }
      }
    if (flagHasLastSelectedInfoAsStrings)
      {
        for (size_t num12 = 0; num12 < storeLastSelectedInfoAsStrings.size(); ++num12)
          {
            storeLastSelectedInfoAsStrings[num12]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasMultiSelect(void) const
  {
    return flagHasMultiSelect;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getMultiSelect(void)
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

const bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getMultiSelect(void) const
  {
    assert(flagHasMultiSelect);
    return storeMultiSelect;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasChoiceList(void) const
  {
    return flagHasChoiceList;
  }

size_t DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::countOfChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList.size();
  }

DisambiguateChoiceJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num)
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

const DisambiguateChoiceJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfChoiceList(size_t element_num) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList[element_num];
  }

std::vector< DisambiguateChoiceJSON * > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getChoiceList(void)
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

const std::vector< DisambiguateChoiceJSON * > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getChoiceList(void) const
  {
    assert(flagHasChoiceList);
    return storeChoiceList;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasErrorSpokenResponse(void) const
  {
    return flagHasErrorSpokenResponse;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorSpokenResponse(void)
  {
    assert(flagHasErrorSpokenResponse);
    return storeErrorSpokenResponse;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorSpokenResponse(void) const
  {
    assert(flagHasErrorSpokenResponse);
    return storeErrorSpokenResponse;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasErrorSpokenResponseLong(void) const
  {
    return flagHasErrorSpokenResponseLong;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorSpokenResponseLong(void)
  {
    assert(flagHasErrorSpokenResponseLong);
    return storeErrorSpokenResponseLong;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorSpokenResponseLong(void) const
  {
    assert(flagHasErrorSpokenResponseLong);
    return storeErrorSpokenResponseLong;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasErrorWrittenResponse(void) const
  {
    return flagHasErrorWrittenResponse;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorWrittenResponse(void)
  {
    assert(flagHasErrorWrittenResponse);
    return storeErrorWrittenResponse;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorWrittenResponse(void) const
  {
    assert(flagHasErrorWrittenResponse);
    return storeErrorWrittenResponse;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasErrorWrittenResponseLong(void) const
  {
    return flagHasErrorWrittenResponseLong;
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorWrittenResponseLong(void)
  {
    assert(flagHasErrorWrittenResponseLong);
    return storeErrorWrittenResponseLong;
  }

const std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getErrorWrittenResponseLong(void) const
  {
    assert(flagHasErrorWrittenResponseLong);
    return storeErrorWrittenResponseLong;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasHadInvalidChoice(void) const
  {
    return flagHasHadInvalidChoice;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getHadInvalidChoice(void)
  {
    assert(flagHasHadInvalidChoice);
    return storeHadInvalidChoice;
  }

const bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getHadInvalidChoice(void) const
  {
    assert(flagHasHadInvalidChoice);
    return storeHadInvalidChoice;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasCommunicationType(void) const
  {
    return flagHasCommunicationType;
  }

CommunicationTypeJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationType(void)
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

const CommunicationTypeJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationType(void) const
  {
    assert(flagHasCommunicationType);
    return storeCommunicationType;
  }

CommunicationTypeJSON::TypeValue DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void)
  {
    return getCommunicationType()->getValue();
  }

const CommunicationTypeJSON::TypeValue DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationTypeValue(void) const
  {
    return getCommunicationType()->getValue();
  }

const char *DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsChars(void) const
  {
    return getCommunicationType()->getValueAsChars();
  }

std::string DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getCommunicationTypeAsString(void) const
  {
    return getCommunicationType()->getValueAsString();
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasAutoListen(void) const
  {
    return flagHasAutoListen;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getAutoListen(void)
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

const bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getAutoListen(void) const
  {
    assert(flagHasAutoListen);
    return storeAutoListen;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasContactResultChoices(void) const
  {
    return flagHasContactResultChoices;
  }

size_t DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::countOfContactResultChoices(void) const
  {
    assert(flagHasContactResultChoices);
    return storeContactResultChoices.size();
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeContactResultChoices DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfContactResultChoices(size_t element_num)
  {
    assert(flagHasContactResultChoices);
    return storeContactResultChoices[element_num];
  }

const DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeContactResultChoices DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfContactResultChoices(size_t element_num) const
  {
    assert(flagHasContactResultChoices);
    return storeContactResultChoices[element_num];
  }

std::vector< DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeContactResultChoices > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getContactResultChoices(void)
  {
    assert(flagHasContactResultChoices);
    return storeContactResultChoices;
  }

const std::vector< DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeContactResultChoices > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getContactResultChoices(void) const
  {
    assert(flagHasContactResultChoices);
    return storeContactResultChoices;
  }

bool DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::hasLastSelectedInfoAsStrings(void) const
  {
    return flagHasLastSelectedInfoAsStrings;
  }

size_t DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::countOfLastSelectedInfoAsStrings(void) const
  {
    assert(flagHasLastSelectedInfoAsStrings);
    return storeLastSelectedInfoAsStrings.size();
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfLastSelectedInfoAsStrings(size_t element_num)
  {
    assert(flagHasLastSelectedInfoAsStrings);
    return storeLastSelectedInfoAsStrings[element_num];
  }

const DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON * DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::elementOfLastSelectedInfoAsStrings(size_t element_num) const
  {
    assert(flagHasLastSelectedInfoAsStrings);
    return storeLastSelectedInfoAsStrings[element_num];
  }

std::vector< DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON * > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getLastSelectedInfoAsStrings(void)
  {
    assert(flagHasLastSelectedInfoAsStrings);
    return storeLastSelectedInfoAsStrings;
  }

const std::vector< DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON * > DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::getLastSelectedInfoAsStrings(void) const
  {
    assert(flagHasLastSelectedInfoAsStrings);
    return storeLastSelectedInfoAsStrings;
  }

DisambiguateCommunicationCommandJSON::DisambiguateCommunicationCommandJSON(const DisambiguateCommunicationCommandJSON &)
  {
    assert(false);
  }

DisambiguateCommunicationCommandJSON &DisambiguateCommunicationCommandJSON::operator=(const DisambiguateCommunicationCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisambiguateCommunicationCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void DisambiguateCommunicationCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

DisambiguateCommunicationCommandJSON::DisambiguateCommunicationCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

DisambiguateCommunicationCommandJSON::~DisambiguateCommunicationCommandJSON(void)
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

const char *DisambiguateCommunicationCommandJSON::getDisambiguateCommandKind(void) const
  {
    return "DisambiguateCommunicationCommand";
  }

bool DisambiguateCommunicationCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON * DisambiguateCommunicationCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const DisambiguateCommunicationCommandJSON::TypeNativeDataJSON * DisambiguateCommunicationCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON *DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::TypeLastSelectedInfoAsStringsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeLastSelectedInfoAsStringsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeLastSelectedInfoAsStringsJSON>, TypeLastSelectedInfoAsStringsJSON *, bool> generator("Type TypeLastSelectedInfoAsStrings", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DisambiguateCommunicationCommandJSON::TypeNativeDataJSON *DisambiguateCommunicationCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DisambiguateCommunicationCommandJSON *DisambiguateCommunicationCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisambiguateCommunicationCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisambiguateCommunicationCommandJSON>, DisambiguateCommunicationCommandJSON *, bool> generator("Type DisambiguateCommunicationCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
