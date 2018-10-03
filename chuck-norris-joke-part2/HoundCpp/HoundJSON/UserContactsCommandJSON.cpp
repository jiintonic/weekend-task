/* file "UserContactsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "UserContactsCommandJSON.h"

#include "UserContactsCommandJSON.h"


UserContactsCommandJSON::UserContactsCommandJSON(const UserContactsCommandJSON &)
  {
    assert(false);
  }

UserContactsCommandJSON &UserContactsCommandJSON::operator=(const UserContactsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *UserContactsCommandJSON::extraStartingContactCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_StartingContactCount = new JSONIntegerValue(storeStartingContactCount.get_o_integer());
    return generated_integer_StartingContactCount;
  }

JSONValue *UserContactsCommandJSON::extraEndingContactCountToJSON(void) const
  {
    JSONIntegerValue *generated_integer_EndingContactCount = new JSONIntegerValue(storeEndingContactCount.get_o_integer());
    return generated_integer_EndingContactCount;
  }

JSONValue *UserContactsCommandJSON::extraFoundMatchesToJSON(void) const
  {
    JSONArrayValue *generated_array_1_FoundMatches = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeFoundMatches.size(); ++num1)
      {
        JSONValueHandler handler_FoundMatches;
        storeFoundMatches[num1]->write_as_json(&handler_FoundMatches);
        handler_FoundMatches.result->add_reference();
        generated_array_1_FoundMatches->appendComponent(handler_FoundMatches.result);
        handler_FoundMatches.result->remove_reference();
      }
    return generated_array_1_FoundMatches;
  }

void UserContactsCommandJSON::fromJSONStartingContactCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field StartingContactCount of UserContactsCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field StartingContactCount of UserContactsCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setStartingContactCount(extracted_integer);
  }

void UserContactsCommandJSON::fromJSONEndingContactCount(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field EndingContactCount of UserContactsCommandJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field EndingContactCount of UserContactsCommandJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setEndingContactCount(extracted_integer);
  }

void UserContactsCommandJSON::fromJSONFoundMatches(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field FoundMatches of UserContactsCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OneContactJSON * > vector_FoundMatches1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_FoundMatches1[num1] = convert_classy;
      }
    initFoundMatches();
    for (size_t num2 = 0; num2 < vector_FoundMatches1.size(); ++num2)
        appendFoundMatches(vector_FoundMatches1[num2]);
    for (size_t num1 = 0; num1 < vector_FoundMatches1.size(); ++num1)
      {
        vector_FoundMatches1[num1]->remove_reference();
      }
  }

UserContactsCommandJSON::UserContactsCommandJSON(void) :
        flagHasStartingContactCount(false),
        flagHasEndingContactCount(false),
        flagHasFoundMatches(false)
  {
    extraIndex = create_string_index();
  }

UserContactsCommandJSON::~UserContactsCommandJSON(void)
  {
    if (flagHasFoundMatches)
      {
        for (size_t num4 = 0; num4 < storeFoundMatches.size(); ++num4)
          {
            storeFoundMatches[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *UserContactsCommandJSON::getCommandKind(void) const
  {
    return "UserContactsCommand";
  }

bool UserContactsCommandJSON::hasStartingContactCount(void) const
  {
    return flagHasStartingContactCount;
  }

OInteger UserContactsCommandJSON::getStartingContactCount(void)
  {
    assert(flagHasStartingContactCount);
    return storeStartingContactCount;
  }

const OInteger UserContactsCommandJSON::getStartingContactCount(void) const
  {
    assert(flagHasStartingContactCount);
    return storeStartingContactCount;
  }

bool UserContactsCommandJSON::hasEndingContactCount(void) const
  {
    return flagHasEndingContactCount;
  }

OInteger UserContactsCommandJSON::getEndingContactCount(void)
  {
    assert(flagHasEndingContactCount);
    return storeEndingContactCount;
  }

const OInteger UserContactsCommandJSON::getEndingContactCount(void) const
  {
    assert(flagHasEndingContactCount);
    return storeEndingContactCount;
  }

bool UserContactsCommandJSON::hasFoundMatches(void) const
  {
    return flagHasFoundMatches;
  }

size_t UserContactsCommandJSON::countOfFoundMatches(void) const
  {
    assert(flagHasFoundMatches);
    return storeFoundMatches.size();
  }

OneContactJSON * UserContactsCommandJSON::elementOfFoundMatches(size_t element_num)
  {
    assert(flagHasFoundMatches);
    return storeFoundMatches[element_num];
  }

const OneContactJSON * UserContactsCommandJSON::elementOfFoundMatches(size_t element_num) const
  {
    assert(flagHasFoundMatches);
    return storeFoundMatches[element_num];
  }

std::vector< OneContactJSON * > UserContactsCommandJSON::getFoundMatches(void)
  {
    assert(flagHasFoundMatches);
    return storeFoundMatches;
  }

const std::vector< OneContactJSON * > UserContactsCommandJSON::getFoundMatches(void) const
  {
    assert(flagHasFoundMatches);
    return storeFoundMatches;
  }

char UserContactsCommandJSON::Generator::lowerBoundStartingContactCount[] = "0";
char UserContactsCommandJSON::Generator::lowerBoundEndingContactCount[] = "0";
UserContactsCommandJSON *UserContactsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    UserContactsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<UserContactsCommandJSON>, UserContactsCommandJSON *, bool> generator("Type UserContactsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
