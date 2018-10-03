/* file "WikipediaConversationStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WikipediaConversationStateJSON.h"

#include "WikipediaConversationStateJSON.h"


WikipediaConversationStateJSON::TypeEntriesJSON::TypeEntriesJSON(const TypeEntriesJSON &)
  {
    assert(false);
  }

WikipediaConversationStateJSON::TypeEntriesJSON &WikipediaConversationStateJSON::TypeEntriesJSON::operator=(const TypeEntriesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WikipediaConversationStateJSON::TypeEntriesJSON::fromJSONURI(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URI of TypeEntriesJSON is not a string.");
    setURI(std::string(json_string->getData()));
  }

void WikipediaConversationStateJSON::TypeEntriesJSON::fromJSONOriginalID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OriginalID of TypeEntriesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OriginalID of TypeEntriesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOriginalID(extracted_integer);
  }

void WikipediaConversationStateJSON::TypeEntriesJSON::fromJSONResolvedID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResolvedID of TypeEntriesJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResolvedID of TypeEntriesJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setResolvedID(extracted_integer);
  }

WikipediaConversationStateJSON::TypeEntriesJSON::TypeEntriesJSON(void) :
        flagHasURI(false),
        flagHasOriginalID(false),
        flagHasResolvedID(false)
  {
    extraIndex = create_string_index();
  }

WikipediaConversationStateJSON::TypeEntriesJSON::~TypeEntriesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WikipediaConversationStateJSON::TypeEntriesJSON::hasURI(void) const
  {
    return flagHasURI;
  }

std::string WikipediaConversationStateJSON::TypeEntriesJSON::getURI(void)
  {
    assert(flagHasURI);
    return storeURI;
  }

const std::string WikipediaConversationStateJSON::TypeEntriesJSON::getURI(void) const
  {
    assert(flagHasURI);
    return storeURI;
  }

bool WikipediaConversationStateJSON::TypeEntriesJSON::hasOriginalID(void) const
  {
    return flagHasOriginalID;
  }

OInteger WikipediaConversationStateJSON::TypeEntriesJSON::getOriginalID(void)
  {
    assert(flagHasOriginalID);
    return storeOriginalID;
  }

const OInteger WikipediaConversationStateJSON::TypeEntriesJSON::getOriginalID(void) const
  {
    assert(flagHasOriginalID);
    return storeOriginalID;
  }

bool WikipediaConversationStateJSON::TypeEntriesJSON::hasResolvedID(void) const
  {
    return flagHasResolvedID;
  }

OInteger WikipediaConversationStateJSON::TypeEntriesJSON::getResolvedID(void)
  {
    assert(flagHasResolvedID);
    return storeResolvedID;
  }

const OInteger WikipediaConversationStateJSON::TypeEntriesJSON::getResolvedID(void) const
  {
    assert(flagHasResolvedID);
    return storeResolvedID;
  }

WikipediaConversationStateJSON::WikipediaConversationStateJSON(const WikipediaConversationStateJSON &)
  {
    assert(false);
  }

WikipediaConversationStateJSON &WikipediaConversationStateJSON::operator=(const WikipediaConversationStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WikipediaConversationStateJSON::fromJSONShortResponseOnly(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ShortResponseOnly of WikipediaConversationStateJSON is not true for false.");
          }
      }
    setShortResponseOnly(the_bool);
  }

void WikipediaConversationStateJSON::fromJSONEntries(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Entries of WikipediaConversationStateJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Entries of WikipediaConversationStateJSON has too few elements.");
    std::vector< TypeEntriesJSON * > vector_Entries1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeEntriesJSON *convert_classy = TypeEntriesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Entries1[num1] = convert_classy;
      }
    assert(vector_Entries1.size() >= 1);
    initEntries();
    for (size_t num2 = 0; num2 < vector_Entries1.size(); ++num2)
        appendEntries(vector_Entries1[num2]);
    for (size_t num1 = 0; num1 < vector_Entries1.size(); ++num1)
      {
        vector_Entries1[num1]->remove_reference();
      }
  }

WikipediaConversationStateJSON::WikipediaConversationStateJSON(void) :
        flagHasShortResponseOnly(false),
        flagHasEntries(false)
  {
    extraIndex = create_string_index();
  }

WikipediaConversationStateJSON::~WikipediaConversationStateJSON(void)
  {
    if (flagHasEntries)
      {
        for (size_t num4 = 0; num4 < storeEntries.size(); ++num4)
          {
            storeEntries[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WikipediaConversationStateJSON::hasShortResponseOnly(void) const
  {
    return flagHasShortResponseOnly;
  }

bool WikipediaConversationStateJSON::getShortResponseOnly(void)
  {
    assert(flagHasShortResponseOnly);
    return storeShortResponseOnly;
  }

const bool WikipediaConversationStateJSON::getShortResponseOnly(void) const
  {
    assert(flagHasShortResponseOnly);
    return storeShortResponseOnly;
  }

bool WikipediaConversationStateJSON::hasEntries(void) const
  {
    return flagHasEntries;
  }

size_t WikipediaConversationStateJSON::countOfEntries(void) const
  {
    assert(flagHasEntries);
    return storeEntries.size();
  }

WikipediaConversationStateJSON::TypeEntriesJSON * WikipediaConversationStateJSON::elementOfEntries(size_t element_num)
  {
    assert(flagHasEntries);
    return storeEntries[element_num];
  }

const WikipediaConversationStateJSON::TypeEntriesJSON * WikipediaConversationStateJSON::elementOfEntries(size_t element_num) const
  {
    assert(flagHasEntries);
    return storeEntries[element_num];
  }

std::vector< WikipediaConversationStateJSON::TypeEntriesJSON * > WikipediaConversationStateJSON::getEntries(void)
  {
    assert(flagHasEntries);
    return storeEntries;
  }

const std::vector< WikipediaConversationStateJSON::TypeEntriesJSON * > WikipediaConversationStateJSON::getEntries(void) const
  {
    assert(flagHasEntries);
    return storeEntries;
  }

WikipediaConversationStateJSON::TypeEntriesJSON *WikipediaConversationStateJSON::TypeEntriesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeEntriesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeEntriesJSON>, TypeEntriesJSON *, bool> generator("Type TypeEntries", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
WikipediaConversationStateJSON *WikipediaConversationStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WikipediaConversationStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WikipediaConversationStateJSON>, WikipediaConversationStateJSON *, bool> generator("Type WikipediaConversationState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
