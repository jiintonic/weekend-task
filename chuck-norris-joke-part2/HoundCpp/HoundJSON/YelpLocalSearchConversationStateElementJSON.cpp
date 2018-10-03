/* file "YelpLocalSearchConversationStateElementJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "YelpLocalSearchConversationStateElementJSON.h"

#include "YelpLocalSearchConversationStateElementJSON.h"


YelpLocalSearchConversationStateElementJSON::TypeCommandKind YelpLocalSearchConversationStateElementJSON::stringToCommandKind(const char *chars)
  {
    if (strcmp(chars, "LocalSearchCommand") == 0)
        return CommandKind_LocalSearchCommand;
    throw("The value for field `CommandKind' is not one of the legal values.");
  }

const char *YelpLocalSearchConversationStateElementJSON::stringFromCommandKind(TypeCommandKind the_enum)
  {
    switch (the_enum)
      {
        case CommandKind_LocalSearchCommand:
            return "LocalSearchCommand";
        default:
            assert(false);
            return NULL;
      }
  }

YelpLocalSearchConversationStateElementJSON::TypeLocalSearchCommandKind YelpLocalSearchConversationStateElementJSON::stringToLocalSearchCommandKind(const char *chars)
  {
    if (strcmp(chars, "ShowList") == 0)
        return LocalSearchCommandKind_ShowList;
    throw("The value for field `LocalSearchCommandKind' is not one of the legal values.");
  }

const char *YelpLocalSearchConversationStateElementJSON::stringFromLocalSearchCommandKind(TypeLocalSearchCommandKind the_enum)
  {
    switch (the_enum)
      {
        case LocalSearchCommandKind_ShowList:
            return "ShowList";
        default:
            assert(false);
            return NULL;
      }
  }

YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::TypeResultIDsJSON(const TypeResultIDsJSON &)
  {
    assert(false);
  }

YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON &YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::operator=(const TypeResultIDsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::fromJSONYelpID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field YelpID of TypeResultIDsJSON is not a string.");
    setYelpID(std::string(json_string->getData()));
  }

void YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::fromJSONAuxiliaryID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field AuxiliaryID of TypeResultIDsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field AuxiliaryID of TypeResultIDsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setAuxiliaryID(extracted_integer);
  }

YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::TypeResultIDsJSON(void) :
        flagHasYelpID(false),
        flagHasAuxiliaryID(false)
  {
    extraIndex = create_string_index();
  }

YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::~TypeResultIDsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::hasYelpID(void) const
  {
    return flagHasYelpID;
  }

std::string YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::getYelpID(void)
  {
    assert(flagHasYelpID);
    return storeYelpID;
  }

const std::string YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::getYelpID(void) const
  {
    assert(flagHasYelpID);
    return storeYelpID;
  }

bool YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::hasAuxiliaryID(void) const
  {
    return flagHasAuxiliaryID;
  }

OInteger YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::getAuxiliaryID(void)
  {
    assert(flagHasAuxiliaryID);
    return storeAuxiliaryID;
  }

const OInteger YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::getAuxiliaryID(void) const
  {
    assert(flagHasAuxiliaryID);
    return storeAuxiliaryID;
  }

YelpLocalSearchConversationStateElementJSON::YelpLocalSearchConversationStateElementJSON(const YelpLocalSearchConversationStateElementJSON &)
  {
    assert(false);
  }

YelpLocalSearchConversationStateElementJSON &YelpLocalSearchConversationStateElementJSON::operator=(const YelpLocalSearchConversationStateElementJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *YelpLocalSearchConversationStateElementJSON::extraCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_CommandKind;
    generated_string_CommandKind = new JSONStringValue("LocalSearchCommand");
    return generated_string_CommandKind;
  }

JSONValue *YelpLocalSearchConversationStateElementJSON::extraLocalSearchCommandKindToJSON(void) const
  {
    JSONStringValue *generated_string_LocalSearchCommandKind;
    generated_string_LocalSearchCommandKind = new JSONStringValue("ShowList");
    return generated_string_LocalSearchCommandKind;
  }

JSONValue *YelpLocalSearchConversationStateElementJSON::extraLocalSearchCriteriaToJSON(void) const
  {
    JSONValueHandler handler_LocalSearchCriteria;
    storeLocalSearchCriteria->write_as_json(&handler_LocalSearchCriteria);
    handler_LocalSearchCriteria.result->add_reference();
    return handler_LocalSearchCriteria.result;
  }

JSONValue *YelpLocalSearchConversationStateElementJSON::extraResultIDsToJSON(void) const
  {
    JSONArrayValue *generated_array_1_ResultIDs = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeResultIDs.size(); ++num1)
      {
        JSONValueHandler handler_ResultIDs;
        storeResultIDs[num1]->write_as_json(&handler_ResultIDs);
        handler_ResultIDs.result->add_reference();
        generated_array_1_ResultIDs->appendComponent(handler_ResultIDs.result);
        handler_ResultIDs.result->remove_reference();
      }
    return generated_array_1_ResultIDs;
  }

void YelpLocalSearchConversationStateElementJSON::fromJSONCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CommandKind of YelpLocalSearchConversationStateElementJSON is not a string.");
    if (!(strcmp(json_string->getData(), "LocalSearchCommand") == 0))
        throw("The value for field CommandKind of YelpLocalSearchConversationStateElementJSON is not `LocalSearchCommand'.");
    setCommandKind();
  }

void YelpLocalSearchConversationStateElementJSON::fromJSONLocalSearchCommandKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field LocalSearchCommandKind of YelpLocalSearchConversationStateElementJSON is not a string.");
    if (!(strcmp(json_string->getData(), "ShowList") == 0))
        throw("The value for field LocalSearchCommandKind of YelpLocalSearchConversationStateElementJSON is not `ShowList'.");
    setLocalSearchCommandKind();
  }

void YelpLocalSearchConversationStateElementJSON::fromJSONLocalSearchCriteria(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    LocalSearchFilterSpecJSON *convert_classy = LocalSearchFilterSpecJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setLocalSearchCriteria(convert_classy);
    convert_classy->remove_reference();
  }

void YelpLocalSearchConversationStateElementJSON::fromJSONResultIDs(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field ResultIDs of YelpLocalSearchConversationStateElementJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeResultIDsJSON * > vector_ResultIDs1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeResultIDsJSON *convert_classy = TypeResultIDsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_ResultIDs1[num1] = convert_classy;
      }
    initResultIDs();
    for (size_t num2 = 0; num2 < vector_ResultIDs1.size(); ++num2)
        appendResultIDs(vector_ResultIDs1[num2]);
    for (size_t num1 = 0; num1 < vector_ResultIDs1.size(); ++num1)
      {
        vector_ResultIDs1[num1]->remove_reference();
      }
  }

YelpLocalSearchConversationStateElementJSON::YelpLocalSearchConversationStateElementJSON(void) :
        flagHasCommandKind(false),
        flagHasLocalSearchCommandKind(false),
        flagHasLocalSearchCriteria(false),
        flagHasResultIDs(false)
  {
  }

YelpLocalSearchConversationStateElementJSON::~YelpLocalSearchConversationStateElementJSON(void)
  {
    if (flagHasLocalSearchCriteria)
      {
        storeLocalSearchCriteria->remove_reference();
      }
    if (flagHasResultIDs)
      {
        for (size_t num4 = 0; num4 < storeResultIDs.size(); ++num4)
          {
            storeResultIDs[num4]->remove_reference();
          }
      }
  }

const char *YelpLocalSearchConversationStateElementJSON::getLocalSearchKind(void) const
  {
    return "YelpLocalSearch";
  }

bool YelpLocalSearchConversationStateElementJSON::hasCommandKind(void) const
  {
    return flagHasCommandKind;
  }

YelpLocalSearchConversationStateElementJSON::TypeCommandKind YelpLocalSearchConversationStateElementJSON::getCommandKind(void)
  {
    assert(flagHasCommandKind);
    return CommandKind_LocalSearchCommand;
  }

const YelpLocalSearchConversationStateElementJSON::TypeCommandKind YelpLocalSearchConversationStateElementJSON::getCommandKind(void) const
  {
    assert(flagHasCommandKind);
    return CommandKind_LocalSearchCommand;
  }

const char *YelpLocalSearchConversationStateElementJSON::getCommandKindAsChars(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

std::string YelpLocalSearchConversationStateElementJSON::getCommandKindAsString(void) const
  {
    return stringFromCommandKind(getCommandKind());
  }

bool YelpLocalSearchConversationStateElementJSON::hasLocalSearchCommandKind(void) const
  {
    return flagHasLocalSearchCommandKind;
  }

YelpLocalSearchConversationStateElementJSON::TypeLocalSearchCommandKind YelpLocalSearchConversationStateElementJSON::getLocalSearchCommandKind(void)
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const YelpLocalSearchConversationStateElementJSON::TypeLocalSearchCommandKind YelpLocalSearchConversationStateElementJSON::getLocalSearchCommandKind(void) const
  {
    assert(flagHasLocalSearchCommandKind);
    return LocalSearchCommandKind_ShowList;
  }

const char *YelpLocalSearchConversationStateElementJSON::getLocalSearchCommandKindAsChars(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

std::string YelpLocalSearchConversationStateElementJSON::getLocalSearchCommandKindAsString(void) const
  {
    return stringFromLocalSearchCommandKind(getLocalSearchCommandKind());
  }

bool YelpLocalSearchConversationStateElementJSON::hasLocalSearchCriteria(void) const
  {
    return flagHasLocalSearchCriteria;
  }

LocalSearchFilterSpecJSON * YelpLocalSearchConversationStateElementJSON::getLocalSearchCriteria(void)
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

const LocalSearchFilterSpecJSON * YelpLocalSearchConversationStateElementJSON::getLocalSearchCriteria(void) const
  {
    assert(flagHasLocalSearchCriteria);
    return storeLocalSearchCriteria;
  }

bool YelpLocalSearchConversationStateElementJSON::hasResultIDs(void) const
  {
    return flagHasResultIDs;
  }

size_t YelpLocalSearchConversationStateElementJSON::countOfResultIDs(void) const
  {
    assert(flagHasResultIDs);
    return storeResultIDs.size();
  }

YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON * YelpLocalSearchConversationStateElementJSON::elementOfResultIDs(size_t element_num)
  {
    assert(flagHasResultIDs);
    return storeResultIDs[element_num];
  }

const YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON * YelpLocalSearchConversationStateElementJSON::elementOfResultIDs(size_t element_num) const
  {
    assert(flagHasResultIDs);
    return storeResultIDs[element_num];
  }

std::vector< YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON * > YelpLocalSearchConversationStateElementJSON::getResultIDs(void)
  {
    assert(flagHasResultIDs);
    return storeResultIDs;
  }

const std::vector< YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON * > YelpLocalSearchConversationStateElementJSON::getResultIDs(void) const
  {
    assert(flagHasResultIDs);
    return storeResultIDs;
  }

char YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::Generator::lowerBoundAuxiliaryID[] = "0";
YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON *YelpLocalSearchConversationStateElementJSON::TypeResultIDsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeResultIDsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeResultIDsJSON>, TypeResultIDsJSON *, bool> generator("Type TypeResultIDs", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
YelpLocalSearchConversationStateElementJSON *YelpLocalSearchConversationStateElementJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    YelpLocalSearchConversationStateElementJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<YelpLocalSearchConversationStateElementJSON>, YelpLocalSearchConversationStateElementJSON *, bool> generator("Type YelpLocalSearchConversationStateElement", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
