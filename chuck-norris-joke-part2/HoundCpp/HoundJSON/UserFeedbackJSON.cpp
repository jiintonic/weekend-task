/* file "UserFeedbackJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserFeedbackJSON.h"

#include "UserFeedbackJSON.h"


UserFeedbackJSON::UserFeedbackJSON(const UserFeedbackJSON &)
  {
    assert(false);
  }

UserFeedbackJSON &UserFeedbackJSON::operator=(const UserFeedbackJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void UserFeedbackJSON::fromJSONQueryRequestID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field QueryRequestID of UserFeedbackJSON is not a string.");
    setQueryRequestID(std::string(json_string->getData()));
  }

void UserFeedbackJSON::fromJSONServerGeneratedID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ServerGeneratedID of UserFeedbackJSON is not a string.");
    setServerGeneratedID(std::string(json_string->getData()));
  }

void UserFeedbackJSON::fromJSONFeedbackItems(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FeedbackItems of UserFeedbackJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< UserFeedbackItemJSON * > vector_FeedbackItems1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        UserFeedbackItemJSON *convert_classy = UserFeedbackItemJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FeedbackItems1[num1] = convert_classy;
      }
    initFeedbackItems();
    for (size_t num2 = 0; num2 < vector_FeedbackItems1.size(); ++num2)
        appendFeedbackItems(vector_FeedbackItems1[num2]);
    for (size_t num1 = 0; num1 < vector_FeedbackItems1.size(); ++num1)
      {
        vector_FeedbackItems1[num1]->remove_reference();
      }
  }

UserFeedbackJSON::UserFeedbackJSON(void) :
        flagHasQueryRequestID(false),
        flagHasServerGeneratedID(false),
        flagHasFeedbackItems(false)
  {
    extraIndex = create_string_index();
  }

UserFeedbackJSON::~UserFeedbackJSON(void)
  {
    if (flagHasFeedbackItems)
      {
        for (size_t num4 = 0; num4 < storeFeedbackItems.size(); ++num4)
          {
            storeFeedbackItems[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool UserFeedbackJSON::hasQueryRequestID(void) const
  {
    return flagHasQueryRequestID;
  }

std::string UserFeedbackJSON::getQueryRequestID(void)
  {
    assert(flagHasQueryRequestID);
    return storeQueryRequestID;
  }

const std::string UserFeedbackJSON::getQueryRequestID(void) const
  {
    assert(flagHasQueryRequestID);
    return storeQueryRequestID;
  }

bool UserFeedbackJSON::hasServerGeneratedID(void) const
  {
    return flagHasServerGeneratedID;
  }

std::string UserFeedbackJSON::getServerGeneratedID(void)
  {
    assert(flagHasServerGeneratedID);
    return storeServerGeneratedID;
  }

const std::string UserFeedbackJSON::getServerGeneratedID(void) const
  {
    assert(flagHasServerGeneratedID);
    return storeServerGeneratedID;
  }

bool UserFeedbackJSON::hasFeedbackItems(void) const
  {
    return flagHasFeedbackItems;
  }

size_t UserFeedbackJSON::countOfFeedbackItems(void) const
  {
    assert(flagHasFeedbackItems);
    return storeFeedbackItems.size();
  }

UserFeedbackItemJSON * UserFeedbackJSON::elementOfFeedbackItems(size_t element_num)
  {
    assert(flagHasFeedbackItems);
    return storeFeedbackItems[element_num];
  }

const UserFeedbackItemJSON * UserFeedbackJSON::elementOfFeedbackItems(size_t element_num) const
  {
    assert(flagHasFeedbackItems);
    return storeFeedbackItems[element_num];
  }

std::vector< UserFeedbackItemJSON * > UserFeedbackJSON::getFeedbackItems(void)
  {
    assert(flagHasFeedbackItems);
    return storeFeedbackItems;
  }

const std::vector< UserFeedbackItemJSON * > UserFeedbackJSON::getFeedbackItems(void) const
  {
    assert(flagHasFeedbackItems);
    return storeFeedbackItems;
  }

UserFeedbackJSON *UserFeedbackJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserFeedbackJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserFeedbackJSON>, UserFeedbackJSON *, bool> generator("Type UserFeedback", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
