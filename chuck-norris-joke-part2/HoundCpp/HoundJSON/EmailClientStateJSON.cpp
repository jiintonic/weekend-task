/* file "EmailClientStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "EmailClientStateJSON.h"

#include "EmailClientStateJSON.h"


EmailClientStateJSON::TypeCompositionStep EmailClientStateJSON::stringToCompositionStep(const char *chars)
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

const char *EmailClientStateJSON::stringFromCompositionStep(TypeCompositionStep the_enum)
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

EmailClientStateJSON::EmailClientStateJSON(const EmailClientStateJSON &)
  {
    assert(false);
  }

EmailClientStateJSON &EmailClientStateJSON::operator=(const EmailClientStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *EmailClientStateJSON::extraCompositionStepToJSON(void) const
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

JSONValue *EmailClientStateJSON::extraDisambiguationOrderedListToJSON(void) const
  {
    JSONArrayValue *generated_array_1_DisambiguationOrderedList = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeDisambiguationOrderedList.size(); ++num1)
      {
        JSONStringValue *generated_string_DisambiguationOrderedList = new JSONStringValue(storeDisambiguationOrderedList[num1].c_str());
        generated_array_1_DisambiguationOrderedList->appendComponent(generated_string_DisambiguationOrderedList);
      }
    return generated_array_1_DisambiguationOrderedList;
  }

JSONValue *EmailClientStateJSON::extraDisambiguateChoiceIdsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_DisambiguateChoiceIds = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeDisambiguateChoiceIds.size(); ++num2)
      {
        JSONStringValue *generated_string_DisambiguateChoiceIds = new JSONStringValue(storeDisambiguateChoiceIds[num2].c_str());
        generated_array_2_DisambiguateChoiceIds->appendComponent(generated_string_DisambiguateChoiceIds);
      }
    return generated_array_2_DisambiguateChoiceIds;
  }

JSONValue *EmailClientStateJSON::extraEmailToJSON(void) const
  {
    JSONValueHandler handler_Email;
    storeEmail->write_as_json(&handler_Email);
    handler_Email.result->add_reference();
    return handler_Email.result;
  }

JSONValue *EmailClientStateJSON::extraLastEditedTextFieldTypeToJSON(void) const
  {
    JSONValueHandler handler_LastEditedTextFieldType;
    storeLastEditedTextFieldType->write_as_json(&handler_LastEditedTextFieldType);
    handler_LastEditedTextFieldType.result->add_reference();
    return handler_LastEditedTextFieldType.result;
  }

void EmailClientStateJSON::fromJSONCompositionStep(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CompositionStep of EmailClientStateJSON is not a string.");
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
    throw("The value for field CompositionStep of EmailClientStateJSON is not one of the legal strings.");
  enum_is_done:;
    setCompositionStep(the_enum);
  }

void EmailClientStateJSON::fromJSONDisambiguationOrderedList(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguationOrderedList of EmailClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DisambiguationOrderedList1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DisambiguationOrderedList of EmailClientStateJSON is not a string.");
        vector_DisambiguationOrderedList1[num1] = std::string(json_string->getData());
      }
    initDisambiguationOrderedList();
    for (size_t num3 = 0; num3 < vector_DisambiguationOrderedList1.size(); ++num3)
        appendDisambiguationOrderedList(vector_DisambiguationOrderedList1[num3]);
    for (size_t num1 = 0; num1 < vector_DisambiguationOrderedList1.size(); ++num1)
      {
      }
  }

void EmailClientStateJSON::fromJSONDisambiguateChoiceIds(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DisambiguateChoiceIds of EmailClientStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DisambiguateChoiceIds1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DisambiguateChoiceIds of EmailClientStateJSON is not a string.");
        vector_DisambiguateChoiceIds1[num1] = std::string(json_string->getData());
      }
    initDisambiguateChoiceIds();
    for (size_t num4 = 0; num4 < vector_DisambiguateChoiceIds1.size(); ++num4)
        appendDisambiguateChoiceIds(vector_DisambiguateChoiceIds1[num4]);
    for (size_t num1 = 0; num1 < vector_DisambiguateChoiceIds1.size(); ++num1)
      {
      }
  }

void EmailClientStateJSON::fromJSONEmail(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailJSON *convert_classy = EmailJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEmail(convert_classy);
    convert_classy->remove_reference();
  }

void EmailClientStateJSON::fromJSONLastEditedTextFieldType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    EmailFieldTypeJSON *convert_classy = EmailFieldTypeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLastEditedTextFieldType(convert_classy);
    convert_classy->remove_reference();
  }

EmailClientStateJSON::EmailClientStateJSON(void) :
        flagHasCompositionStep(false),
        flagHasDisambiguationOrderedList(false),
        flagHasDisambiguateChoiceIds(false),
        flagHasEmail(false),
        flagHasLastEditedTextFieldType(false)
  {
  }

EmailClientStateJSON::~EmailClientStateJSON(void)
  {
    if (flagHasEmail)
      {
        storeEmail->remove_reference();
      }
    if (flagHasLastEditedTextFieldType)
      {
        storeLastEditedTextFieldType->remove_reference();
      }
  }

const char *EmailClientStateJSON::getClientVerticalStateKind(void) const
  {
    return "EmailClientState";
  }

bool EmailClientStateJSON::hasCompositionStep(void) const
  {
    return flagHasCompositionStep;
  }

EmailClientStateJSON::TypeCompositionStep EmailClientStateJSON::getCompositionStep(void)
  {
    assert(flagHasCompositionStep);
    return storeCompositionStep;
  }

const EmailClientStateJSON::TypeCompositionStep EmailClientStateJSON::getCompositionStep(void) const
  {
    assert(flagHasCompositionStep);
    return storeCompositionStep;
  }

const char *EmailClientStateJSON::getCompositionStepAsChars(void) const
  {
    return stringFromCompositionStep(getCompositionStep());
  }

std::string EmailClientStateJSON::getCompositionStepAsString(void) const
  {
    return stringFromCompositionStep(getCompositionStep());
  }

bool EmailClientStateJSON::hasDisambiguationOrderedList(void) const
  {
    return flagHasDisambiguationOrderedList;
  }

size_t EmailClientStateJSON::countOfDisambiguationOrderedList(void) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList.size();
  }

std::string EmailClientStateJSON::elementOfDisambiguationOrderedList(size_t element_num)
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList[element_num];
  }

const std::string EmailClientStateJSON::elementOfDisambiguationOrderedList(size_t element_num) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList[element_num];
  }

std::vector< std::string > EmailClientStateJSON::getDisambiguationOrderedList(void)
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList;
  }

const std::vector< std::string > EmailClientStateJSON::getDisambiguationOrderedList(void) const
  {
    assert(flagHasDisambiguationOrderedList);
    return storeDisambiguationOrderedList;
  }

bool EmailClientStateJSON::hasDisambiguateChoiceIds(void) const
  {
    return flagHasDisambiguateChoiceIds;
  }

size_t EmailClientStateJSON::countOfDisambiguateChoiceIds(void) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds.size();
  }

std::string EmailClientStateJSON::elementOfDisambiguateChoiceIds(size_t element_num)
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds[element_num];
  }

const std::string EmailClientStateJSON::elementOfDisambiguateChoiceIds(size_t element_num) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds[element_num];
  }

std::vector< std::string > EmailClientStateJSON::getDisambiguateChoiceIds(void)
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds;
  }

const std::vector< std::string > EmailClientStateJSON::getDisambiguateChoiceIds(void) const
  {
    assert(flagHasDisambiguateChoiceIds);
    return storeDisambiguateChoiceIds;
  }

bool EmailClientStateJSON::hasEmail(void) const
  {
    return flagHasEmail;
  }

EmailJSON * EmailClientStateJSON::getEmail(void)
  {
    assert(flagHasEmail);
    return storeEmail;
  }

const EmailJSON * EmailClientStateJSON::getEmail(void) const
  {
    assert(flagHasEmail);
    return storeEmail;
  }

bool EmailClientStateJSON::hasLastEditedTextFieldType(void) const
  {
    return flagHasLastEditedTextFieldType;
  }

EmailFieldTypeJSON * EmailClientStateJSON::getLastEditedTextFieldType(void)
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

const EmailFieldTypeJSON * EmailClientStateJSON::getLastEditedTextFieldType(void) const
  {
    assert(flagHasLastEditedTextFieldType);
    return storeLastEditedTextFieldType;
  }

EmailFieldTypeJSON::TypeValue EmailClientStateJSON::getLastEditedTextFieldTypeValue(void)
  {
    return getLastEditedTextFieldType()->getValue();
  }

const EmailFieldTypeJSON::TypeValue EmailClientStateJSON::getLastEditedTextFieldTypeValue(void) const
  {
    return getLastEditedTextFieldType()->getValue();
  }

const char *EmailClientStateJSON::getLastEditedTextFieldTypeAsChars(void) const
  {
    return getLastEditedTextFieldType()->getValueAsChars();
  }

std::string EmailClientStateJSON::getLastEditedTextFieldTypeAsString(void) const
  {
    return getLastEditedTextFieldType()->getValueAsString();
  }

EmailClientStateJSON *EmailClientStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    EmailClientStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<EmailClientStateJSON>, EmailClientStateJSON *, bool> generator("Type EmailClientState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
