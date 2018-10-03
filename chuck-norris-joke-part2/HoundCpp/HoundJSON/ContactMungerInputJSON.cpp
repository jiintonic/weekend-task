/* file "ContactMungerInputJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactMungerInputJSON.h"

#include "ContactMungerInputJSON.h"


ContactMungerInputJSON::TypeCommandJSON::TypeCommandJSON(const TypeCommandJSON &)
  {
    assert(false);
  }

ContactMungerInputJSON::TypeCommandJSON &ContactMungerInputJSON::TypeCommandJSON::operator=(const TypeCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactMungerInputJSON::TypeCommandJSON::fromJSONPath(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Path of TypeCommandJSON is not a string.");
    setPath(std::string(json_string->getData()));
  }

void ContactMungerInputJSON::TypeCommandJSON::fromJSONAction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Action of TypeCommandJSON is not a string.");
    setAction(std::string(json_string->getData()));
  }

void ContactMungerInputJSON::TypeCommandJSON::fromJSONData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ContactMungerDataJSON *convert_classy = ContactMungerDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setData(convert_classy);
    convert_classy->remove_reference();
  }

ContactMungerInputJSON::TypeCommandJSON::TypeCommandJSON(void) :
        flagHasPath(false),
        flagHasAction(false),
        flagHasData(false)
  {
    extraIndex = create_string_index();
  }

ContactMungerInputJSON::TypeCommandJSON::~TypeCommandJSON(void)
  {
    if (flagHasData)
      {
        storeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactMungerInputJSON::TypeCommandJSON::hasPath(void) const
  {
    return flagHasPath;
  }

std::string ContactMungerInputJSON::TypeCommandJSON::getPath(void)
  {
    assert(flagHasPath);
    return storePath;
  }

const std::string ContactMungerInputJSON::TypeCommandJSON::getPath(void) const
  {
    assert(flagHasPath);
    return storePath;
  }

bool ContactMungerInputJSON::TypeCommandJSON::hasAction(void) const
  {
    return flagHasAction;
  }

std::string ContactMungerInputJSON::TypeCommandJSON::getAction(void)
  {
    assert(flagHasAction);
    return storeAction;
  }

const std::string ContactMungerInputJSON::TypeCommandJSON::getAction(void) const
  {
    assert(flagHasAction);
    return storeAction;
  }

bool ContactMungerInputJSON::TypeCommandJSON::hasData(void) const
  {
    return flagHasData;
  }

ContactMungerDataJSON * ContactMungerInputJSON::TypeCommandJSON::getData(void)
  {
    assert(flagHasData);
    return storeData;
  }

const ContactMungerDataJSON * ContactMungerInputJSON::TypeCommandJSON::getData(void) const
  {
    assert(flagHasData);
    return storeData;
  }

ContactMungerInputJSON::ContactMungerInputJSON(const ContactMungerInputJSON &)
  {
    assert(false);
  }

ContactMungerInputJSON &ContactMungerInputJSON::operator=(const ContactMungerInputJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactMungerInputJSON::fromJSONCommand(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Command of ContactMungerInputJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Command of ContactMungerInputJSON has too few elements.");
    std::vector< TypeCommandJSON * > vector_Command1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeCommandJSON *convert_classy = TypeCommandJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Command1[num1] = convert_classy;
      }
    assert(vector_Command1.size() >= 1);
    initCommand();
    for (size_t num2 = 0; num2 < vector_Command1.size(); ++num2)
        appendCommand(vector_Command1[num2]);
    for (size_t num1 = 0; num1 < vector_Command1.size(); ++num1)
      {
        vector_Command1[num1]->remove_reference();
      }
  }

ContactMungerInputJSON::ContactMungerInputJSON(void) :
        flagHasCommand(false)
  {
    extraIndex = create_string_index();
  }

ContactMungerInputJSON::~ContactMungerInputJSON(void)
  {
    if (flagHasCommand)
      {
        for (size_t num4 = 0; num4 < storeCommand.size(); ++num4)
          {
            storeCommand[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactMungerInputJSON::hasCommand(void) const
  {
    return flagHasCommand;
  }

size_t ContactMungerInputJSON::countOfCommand(void) const
  {
    assert(flagHasCommand);
    return storeCommand.size();
  }

ContactMungerInputJSON::TypeCommandJSON * ContactMungerInputJSON::elementOfCommand(size_t element_num)
  {
    assert(flagHasCommand);
    return storeCommand[element_num];
  }

const ContactMungerInputJSON::TypeCommandJSON * ContactMungerInputJSON::elementOfCommand(size_t element_num) const
  {
    assert(flagHasCommand);
    return storeCommand[element_num];
  }

std::vector< ContactMungerInputJSON::TypeCommandJSON * > ContactMungerInputJSON::getCommand(void)
  {
    assert(flagHasCommand);
    return storeCommand;
  }

const std::vector< ContactMungerInputJSON::TypeCommandJSON * > ContactMungerInputJSON::getCommand(void) const
  {
    assert(flagHasCommand);
    return storeCommand;
  }

ContactMungerInputJSON::TypeCommandJSON *ContactMungerInputJSON::TypeCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeCommandJSON>, TypeCommandJSON *, bool> generator("Type TypeCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ContactMungerInputJSON *ContactMungerInputJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactMungerInputJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactMungerInputJSON>, ContactMungerInputJSON *, bool> generator("Type ContactMungerInput", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
