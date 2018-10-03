/* file "SMSClientStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SMSClientStateJSON.h"

#include "SMSClientStateJSON.h"


SMSClientStateJSON::TypeCompositionStep SMSClientStateJSON::stringToCompositionStep(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'C':
            if (strcmp(&(chars[1]), "omposing") == 0)
                return CompositionStep_Composing;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "isambiguating") == 0)
                return CompositionStep_Disambiguating;
            break;
        default:
            break;
      }
    throw("The value for field `CompositionStep' is not one of the legal values.");
  }

const char *SMSClientStateJSON::stringFromCompositionStep(TypeCompositionStep the_enum)
  {
    switch (the_enum)
      {
        case CompositionStep_Disambiguating:
            return "Disambiguating";
        case CompositionStep_Composing:
            return "Composing";
        default:
            assert(false);
            return NULL;
      }
  }

SMSClientStateJSON::SMSClientStateJSON(const SMSClientStateJSON &)
  {
    assert(false);
  }

SMSClientStateJSON &SMSClientStateJSON::operator=(const SMSClientStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *SMSClientStateJSON::extraCompositionStepToJSON(void) const
  {
    JSONStringValue *generated_string_CompositionStep;
    switch (storeCompositionStep)
      {
        case CompositionStep_Disambiguating:
            generated_string_CompositionStep = new JSONStringValue("Disambiguating");
            break;
        case CompositionStep_Composing:
            generated_string_CompositionStep = new JSONStringValue("Composing");
            break;
        default:
            assert(false);
            generated_string_CompositionStep = NULL;
      }
    return generated_string_CompositionStep;
  }

JSONValue *SMSClientStateJSON::extraDisambiguationOrderedListToJSON(void) const
  {
    JSONArrayValue *generated_array_1_DisambiguationOrderedList = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeDisambiguationOrderedList.size(); ++num1)
      {
        JSONStringValue *generated_string_DisambiguationOrderedList = new JSONStringValue(storeDisambiguationOrderedList[num1].c_str());
        generated_array_1_DisambiguationOrderedList->appendComponent(generated_string_DisambiguationOrderedList);
      }
    return generated_array_1_DisambiguationOrderedList;
  }

JSONValue *SMSClientStateJSON::extraDisambiguateChoiceIdsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_DisambiguateChoiceIds = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeDisambiguateChoiceIds.size(); ++num2)
      {
        JSONStringValue *generated_string_DisambiguateChoiceIds = new JSONStringValue(storeDisambiguateChoiceIds[num2].c_str());
        generated_array_2_DisambiguateChoiceIds->appendComponent(generated_string_DisambiguateChoiceIds);
      }
    return generated_array_2_DisambiguateChoiceIds;
  }

JSONValue *SMSClientStateJSON::extraSMSToJSON(void) const
  {
    JSONValueHandler handler_SMS;
    storeSMS->write_as_json(&handler_SMS);
    handler_SMS.result->add_reference();
    return handler_SMS.result;
  }

JSONValue *SMSClientStateJSON::extraLastEditedTextFieldTypeToJSON(void) const
  {
    JSONValueHandler handler_LastEditedTextFieldType;
    storeLastEditedTextFieldType->write_as_json(&handler_LastEditedTextFieldType);
    handler_LastEditedTextFieldType.result->add_reference();
    return handler_LastEditedTextFieldType.result;
  }

void SMSClientStateJSON::fromJSONCompositionStep(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CompositionStep of SMSClientStateJSON is not a string.");
    TypeCompositionStep the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'C':
            if (strcmp(&(json_string->getData()[1]), "omposing") == 0)
                  {
                    the_enum = CompositionStep_Composing;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "isambiguating") == 0)
                  {
                    the_enum = CompositionStep_Disambiguating;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CompositionStep of SMSClientStateJSON is not one of the legal strings.");
  enum_is_done:;
    setCompositionStep(the_enum);
  }

void SMSClientStateJSON::fromJSONDisambiguationOrderedList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguationOrderedList of SMSClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DisambiguationOrderedList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DisambiguationOrderedList of SMSClientStateJSON is not a string.");
        vector_DisambiguationOrderedList1[num1] = std::string(json_string->getData());
      }
    initDisambiguationOrderedList();
    for (size_t num3 = 0; num3 < vector_DisambiguationOrderedList1.size(); ++num3)
        appendDisambiguationOrderedList(vector_DisambiguationOrderedList1[num3]);
    for (size_t num1 = 0; num1 < vector_DisambiguationOrderedList1.size(); ++num1)
      {
      }
  }

void SMSClientStateJSON::fromJSONDisambiguateChoiceIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguateChoiceIds of SMSClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DisambiguateChoiceIds1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DisambiguateChoiceIds of SMSClientStateJSON is not a string.");
        vector_DisambiguateChoiceIds1[num1] = std::string(json_string->getData());
      }
    initDisambiguateChoiceIds();
    for (size_t num4 = 0; num4 < vector_DisambiguateChoiceIds1.size(); ++num4)
        appendDisambiguateChoiceIds(vector_DisambiguateChoiceIds1[num4]);
    for (size_t num1 = 0; num1 < vector_DisambiguateChoiceIds1.size(); ++num1)
      {
      }
  }

void SMSClientStateJSON::fromJSONSMS(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSJSON *convert_classy = SMSJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setSMS(convert_classy);
    convert_classy->remove_reference();
  }

void SMSClientStateJSON::fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    SMSFieldTypeJSON *convert_classy = SMSFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastEditedTextFieldType(convert_classy);
    convert_classy->remove_reference();
  }

SMSClientStateJSON::SMSClientStateJSON(void) :
        flagHasCompositionStep(false),
        flagHasDisambiguationOrderedList(false),
        flagHasDisambiguateChoiceIds(false),
        flagHasSMS(false),
        flagHasLastEditedTextFieldType(false)
  {
  }

SMSClientStateJSON::~SMSClientStateJSON(void)
  {
    if (flagHasSMS)
      {
        storeSMS->remove_reference();
      }
    if (flagHasLastEditedTextFieldType)
      {
        storeLastEditedTextFieldType->remove_reference();
      }
  }

const char *SMSClientStateJSON::getClientVerticalStateKind(void) const
  {
    return "SMSClientState";
  }

bool SMSClientStateJSON::hasCompositionStep(void) const
  {
    return flagHasCompositionStep;
  }

SMSClientStateJSON::TypeCompositionStep SMSClientStateJSON::getCompositionStep(void)
  {
    assert(flagHasCompositionStep);
    return storeCompositionStep;
  }

const SMSClientStateJSON::TypeCompositionStep SMSClientStateJSON::getCompositionStep(void) const
  {
    assert(flagHasCompositionStep);
    return storeCompositionStep;
  }

const char *SMSClientStateJSON::getCompositionStepAsChars(void) const
  {
    return stringFromCompositionStep(getCompositionStep());
  }

std::string SMSClientStateJSON::getCompositionStepAsString(void) const
  {
    return stringFromCompositionStep(getCompositionStep());
  }

bool SMSClientStateJSON::hasDisambiguationOrderedList(void) const
  {
    return flagHasDisambiguationOrderedList;
  }

size_t SMSClientStateJSON::countOfDisambiguationOrderedList(void) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList.size();
  }

std::string SMSClientStateJSON::elementOfDisambiguationOrderedList(size_t element_num)
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList[element_num];
  }

const std::string SMSClientStateJSON::elementOfDisambiguationOrderedList(size_t element_num) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList[element_num];
  }

std::vector< std::string > SMSClientStateJSON::getDisambiguationOrderedList(void)
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList;
  }

const std::vector< std::string > SMSClientStateJSON::getDisambiguationOrderedList(void) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList;
  }

bool SMSClientStateJSON::hasDisambiguateChoiceIds(void) const
  {
    return flagHasDisambiguateChoiceIds;
  }

size_t SMSClientStateJSON::countOfDisambiguateChoiceIds(void) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds.size();
  }

std::string SMSClientStateJSON::elementOfDisambiguateChoiceIds(size_t element_num)
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds[element_num];
  }

const std::string SMSClientStateJSON::elementOfDisambiguateChoiceIds(size_t element_num) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds[element_num];
  }

std::vector< std::string > SMSClientStateJSON::getDisambiguateChoiceIds(void)
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds;
  }

const std::vector< std::string > SMSClientStateJSON::getDisambiguateChoiceIds(void) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds;
  }

bool SMSClientStateJSON::hasSMS(void) const
  {
    return flagHasSMS;
  }

SMSJSON * SMSClientStateJSON::getSMS(void)
  {
    assert(flagHasSMS);
    return storeSMS;
  }

const SMSJSON * SMSClientStateJSON::getSMS(void) const
  {
    assert(flagHasSMS);
    return storeSMS;
  }

bool SMSClientStateJSON::hasLastEditedTextFieldType(void) const
  {
    return flagHasLastEditedTextFieldType;
  }

SMSFieldTypeJSON * SMSClientStateJSON::getLastEditedTextFieldType(void)
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

const SMSFieldTypeJSON * SMSClientStateJSON::getLastEditedTextFieldType(void) const
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

SMSFieldTypeJSON::TypeValue SMSClientStateJSON::getLastEditedTextFieldTypeValue(void)
  {
    return getLastEditedTextFieldType()->getValue();
  }

const SMSFieldTypeJSON::TypeValue SMSClientStateJSON::getLastEditedTextFieldTypeValue(void) const
  {
    return getLastEditedTextFieldType()->getValue();
  }

const char *SMSClientStateJSON::getLastEditedTextFieldTypeAsChars(void) const
  {
    return getLastEditedTextFieldType()->getValueAsChars();
  }

std::string SMSClientStateJSON::getLastEditedTextFieldTypeAsString(void) const
  {
    return getLastEditedTextFieldType()->getValueAsString();
  }

SMSClientStateJSON *SMSClientStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SMSClientStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SMSClientStateJSON>, SMSClientStateJSON *, bool> generator("Type SMSClientState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
