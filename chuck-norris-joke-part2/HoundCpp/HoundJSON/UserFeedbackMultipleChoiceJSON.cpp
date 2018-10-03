/* file "UserFeedbackMultipleChoiceJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserFeedbackMultipleChoiceJSON.h"

#include "UserFeedbackMultipleChoiceJSON.h"


UserFeedbackMultipleChoiceJSON::UserFeedbackMultipleChoiceJSON(const UserFeedbackMultipleChoiceJSON &)
  {
    assert(false);
  }

UserFeedbackMultipleChoiceJSON &UserFeedbackMultipleChoiceJSON::operator=(const UserFeedbackMultipleChoiceJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserFeedbackMultipleChoiceJSON::extraChoicesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_Choices = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeChoices.size(); ++num1)
      {
        JSONStringValue *generated_string_Choices = new JSONStringValue(storeChoices[num1].c_str());
        generated_array_1_Choices->appendComponent(generated_string_Choices);
      }
    return generated_array_1_Choices;
  }

JSONValue *UserFeedbackMultipleChoiceJSON::extraChoiceLabelsToJSON(void) const
  {
    JSONArrayValue *generated_array_2_ChoiceLabels = new JSONArrayValue();
    for (size_t num2 = 0; num2 < storeChoiceLabels.size(); ++num2)
      {
        JSONStringValue *generated_string_ChoiceLabels = new JSONStringValue(storeChoiceLabels[num2].c_str());
        generated_array_2_ChoiceLabels->appendComponent(generated_string_ChoiceLabels);
      }
    return generated_array_2_ChoiceLabels;
  }

JSONValue *UserFeedbackMultipleChoiceJSON::extraAnswersToJSON(void) const
  {
    JSONArrayValue *generated_array_3_Answers = new JSONArrayValue();
    for (size_t num3 = 0; num3 < storeAnswers.size(); ++num3)
      {
        JSONIntegerValue *generated_integer_Answers = new JSONIntegerValue(storeAnswers[num3].get_o_integer());
        generated_array_3_Answers->appendComponent(generated_integer_Answers);
      }
    return generated_array_3_Answers;
  }

void UserFeedbackMultipleChoiceJSON::fromJSONChoices(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Choices of UserFeedbackMultipleChoiceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field Choices of UserFeedbackMultipleChoiceJSON has too few elements.");
    std::vector< std::string > vector_Choices1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field Choices of UserFeedbackMultipleChoiceJSON is not a string.");
        vector_Choices1[num1] = std::string(json_string->getData());
      }
    assert(vector_Choices1.size() >= 2);
    initChoices();
    for (size_t num4 = 0; num4 < vector_Choices1.size(); ++num4)
        appendChoices(vector_Choices1[num4]);
    for (size_t num1 = 0; num1 < vector_Choices1.size(); ++num1)
      {
      }
  }

void UserFeedbackMultipleChoiceJSON::fromJSONChoiceLabels(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ChoiceLabels of UserFeedbackMultipleChoiceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field ChoiceLabels of UserFeedbackMultipleChoiceJSON has too few elements.");
    std::vector< std::string > vector_ChoiceLabels1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field ChoiceLabels of UserFeedbackMultipleChoiceJSON is not a string.");
        vector_ChoiceLabels1[num1] = std::string(json_string->getData());
      }
    assert(vector_ChoiceLabels1.size() >= 2);
    initChoiceLabels();
    for (size_t num5 = 0; num5 < vector_ChoiceLabels1.size(); ++num5)
        appendChoiceLabels(vector_ChoiceLabels1[num5]);
    for (size_t num1 = 0; num1 < vector_ChoiceLabels1.size(); ++num1)
      {
      }
  }

void UserFeedbackMultipleChoiceJSON::fromJSONAnswers(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Answers of UserFeedbackMultipleChoiceJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OInteger > vector_Answers1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OInteger extracted_integer;
        const JSONIntegerValue *json_integer = json_array1->component(num1)->integer_value();
        if (json_integer == NULL)
          {
            const JSONRationalValue *json_rational = json_array1->component(num1)->rational_value();
            if (json_rational == NULL)
              {
                throw("The value for an element of field Answers of UserFeedbackMultipleChoiceJSON is not a number.");
              }
            if (!(json_rational->isInteger()))
              {
                throw("The value for an element of field Answers of UserFeedbackMultipleChoiceJSON is not an integer.");
              }
            extracted_integer = OInteger(json_rational->getInteger())        ;
          }
        else
          {
            extracted_integer = OInteger(json_integer->getData())        ;
          }
        vector_Answers1[num1] = extracted_integer;
      }
    initAnswers();
    for (size_t num6 = 0; num6 < vector_Answers1.size(); ++num6)
        appendAnswers(vector_Answers1[num6]);
    for (size_t num1 = 0; num1 < vector_Answers1.size(); ++num1)
      {
      }
  }

UserFeedbackMultipleChoiceJSON::UserFeedbackMultipleChoiceJSON(void) :
        flagHasChoices(false),
        flagHasChoiceLabels(false),
        flagHasAnswers(false)
  {
    extraIndex = create_string_index();
  }

UserFeedbackMultipleChoiceJSON::~UserFeedbackMultipleChoiceJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserFeedbackMultipleChoiceJSON::getFeedbackKind(void) const
  {
    return "MultipleChoice";
  }

bool UserFeedbackMultipleChoiceJSON::hasChoices(void) const
  {
    return flagHasChoices;
  }

size_t UserFeedbackMultipleChoiceJSON::countOfChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices.size();
  }

std::string UserFeedbackMultipleChoiceJSON::elementOfChoices(size_t element_num)
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

const std::string UserFeedbackMultipleChoiceJSON::elementOfChoices(size_t element_num) const
  {
    assert(flagHasChoices);
    return storeChoices[element_num];
  }

std::vector< std::string > UserFeedbackMultipleChoiceJSON::getChoices(void)
  {
    assert(flagHasChoices);
    return storeChoices;
  }

const std::vector< std::string > UserFeedbackMultipleChoiceJSON::getChoices(void) const
  {
    assert(flagHasChoices);
    return storeChoices;
  }

bool UserFeedbackMultipleChoiceJSON::hasChoiceLabels(void) const
  {
    return flagHasChoiceLabels;
  }

size_t UserFeedbackMultipleChoiceJSON::countOfChoiceLabels(void) const
  {
    assert(flagHasChoiceLabels);
    return storeChoiceLabels.size();
  }

std::string UserFeedbackMultipleChoiceJSON::elementOfChoiceLabels(size_t element_num)
  {
    assert(flagHasChoiceLabels);
    return storeChoiceLabels[element_num];
  }

const std::string UserFeedbackMultipleChoiceJSON::elementOfChoiceLabels(size_t element_num) const
  {
    assert(flagHasChoiceLabels);
    return storeChoiceLabels[element_num];
  }

std::vector< std::string > UserFeedbackMultipleChoiceJSON::getChoiceLabels(void)
  {
    assert(flagHasChoiceLabels);
    return storeChoiceLabels;
  }

const std::vector< std::string > UserFeedbackMultipleChoiceJSON::getChoiceLabels(void) const
  {
    assert(flagHasChoiceLabels);
    return storeChoiceLabels;
  }

bool UserFeedbackMultipleChoiceJSON::hasAnswers(void) const
  {
    return flagHasAnswers;
  }

size_t UserFeedbackMultipleChoiceJSON::countOfAnswers(void) const
  {
    assert(flagHasAnswers);
    return storeAnswers.size();
  }

OInteger UserFeedbackMultipleChoiceJSON::elementOfAnswers(size_t element_num)
  {
    assert(flagHasAnswers);
    return storeAnswers[element_num];
  }

const OInteger UserFeedbackMultipleChoiceJSON::elementOfAnswers(size_t element_num) const
  {
    assert(flagHasAnswers);
    return storeAnswers[element_num];
  }

std::vector< OInteger > UserFeedbackMultipleChoiceJSON::getAnswers(void)
  {
    assert(flagHasAnswers);
    return storeAnswers;
  }

const std::vector< OInteger > UserFeedbackMultipleChoiceJSON::getAnswers(void) const
  {
    assert(flagHasAnswers);
    return storeAnswers;
  }

char UserFeedbackMultipleChoiceJSON::Generator::lowerBoundAnswers[] = "0";
UserFeedbackMultipleChoiceJSON *UserFeedbackMultipleChoiceJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserFeedbackMultipleChoiceJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserFeedbackMultipleChoiceJSON>, UserFeedbackMultipleChoiceJSON *, bool> generator("Type UserFeedbackMultipleChoice", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
