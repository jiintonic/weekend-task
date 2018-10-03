/* file "WikipediaCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "WikipediaCommandJSON.h"

#include "WikipediaCommandJSON.h"


WikipediaCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

WikipediaCommandJSON::TypeNativeDataJSON &WikipediaCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Title of TypeNativeDataJSON is not a string.");
    setTitle(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONRequestedTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field RequestedTitle of TypeNativeDataJSON is not a string.");
    setRequestedTitle(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONShouldIndicateRedirect(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ShouldIndicateRedirect of TypeNativeDataJSON is not true for false.");
          }
      }
    setShouldIndicateRedirect(the_bool);
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONWrittenSummaryShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenSummaryShort of TypeNativeDataJSON is not a string.");
    setWrittenSummaryShort(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONWrittenSummaryLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WrittenSummaryLong of TypeNativeDataJSON is not a string.");
    setWrittenSummaryLong(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONImage(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Image of TypeNativeDataJSON is not a string.");
    setImage(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONURI(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field URI of TypeNativeDataJSON is not a string.");
    setURI(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONSpokenSummaryShort(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSummaryShort of TypeNativeDataJSON is not a string.");
    setSpokenSummaryShort(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONSpokenSummaryLong(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SpokenSummaryLong of TypeNativeDataJSON is not a string.");
    setSpokenSummaryLong(std::string(json_string->getData()));
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONOriginalID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field OriginalID of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field OriginalID of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setOriginalID(extracted_integer);
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONResolvedID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field ResolvedID of TypeNativeDataJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field ResolvedID of TypeNativeDataJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setResolvedID(extracted_integer);
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONWebCommandEnabled(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field WebCommandEnabled of TypeNativeDataJSON is not true for false.");
          }
      }
    setWebCommandEnabled(the_bool);
  }

void WikipediaCommandJSON::TypeNativeDataJSON::fromJSONWikipediaAttribution(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field WikipediaAttribution of TypeNativeDataJSON is not a string.");
    setWikipediaAttribution(std::string(json_string->getData()));
  }

WikipediaCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasTitle(false),
        flagHasRequestedTitle(false),
        flagHasShouldIndicateRedirect(false),
        flagHasWrittenSummaryShort(false),
        flagHasWrittenSummaryLong(false),
        flagHasImage(false),
        flagHasURI(false),
        flagHasSpokenSummaryShort(false),
        flagHasSpokenSummaryLong(false),
        flagHasOriginalID(false),
        flagHasResolvedID(false),
        flagHasWebCommandEnabled(false),
        flagHasWikipediaAttribution(false)
  {
    extraIndex = create_string_index();
  }

WikipediaCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasTitle(void) const
  {
    return flagHasTitle;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getTitle(void)
  {
    assert(flagHasTitle);
    return storeTitle;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getTitle(void) const
  {
    assert(flagHasTitle);
    return storeTitle;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasRequestedTitle(void) const
  {
    return flagHasRequestedTitle;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getRequestedTitle(void)
  {
    assert(flagHasRequestedTitle);
    return storeRequestedTitle;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getRequestedTitle(void) const
  {
    assert(flagHasRequestedTitle);
    return storeRequestedTitle;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasShouldIndicateRedirect(void) const
  {
    return flagHasShouldIndicateRedirect;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::getShouldIndicateRedirect(void)
  {
    assert(flagHasShouldIndicateRedirect);
    return storeShouldIndicateRedirect;
  }

const bool WikipediaCommandJSON::TypeNativeDataJSON::getShouldIndicateRedirect(void) const
  {
    assert(flagHasShouldIndicateRedirect);
    return storeShouldIndicateRedirect;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasWrittenSummaryShort(void) const
  {
    return flagHasWrittenSummaryShort;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getWrittenSummaryShort(void)
  {
    assert(flagHasWrittenSummaryShort);
    return storeWrittenSummaryShort;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getWrittenSummaryShort(void) const
  {
    assert(flagHasWrittenSummaryShort);
    return storeWrittenSummaryShort;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasWrittenSummaryLong(void) const
  {
    return flagHasWrittenSummaryLong;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getWrittenSummaryLong(void)
  {
    assert(flagHasWrittenSummaryLong);
    return storeWrittenSummaryLong;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getWrittenSummaryLong(void) const
  {
    assert(flagHasWrittenSummaryLong);
    return storeWrittenSummaryLong;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasImage(void) const
  {
    return flagHasImage;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getImage(void)
  {
    assert(flagHasImage);
    return storeImage;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getImage(void) const
  {
    assert(flagHasImage);
    return storeImage;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasURI(void) const
  {
    return flagHasURI;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getURI(void)
  {
    assert(flagHasURI);
    return storeURI;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getURI(void) const
  {
    assert(flagHasURI);
    return storeURI;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasSpokenSummaryShort(void) const
  {
    return flagHasSpokenSummaryShort;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getSpokenSummaryShort(void)
  {
    assert(flagHasSpokenSummaryShort);
    return storeSpokenSummaryShort;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getSpokenSummaryShort(void) const
  {
    assert(flagHasSpokenSummaryShort);
    return storeSpokenSummaryShort;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasSpokenSummaryLong(void) const
  {
    return flagHasSpokenSummaryLong;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getSpokenSummaryLong(void)
  {
    assert(flagHasSpokenSummaryLong);
    return storeSpokenSummaryLong;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getSpokenSummaryLong(void) const
  {
    assert(flagHasSpokenSummaryLong);
    return storeSpokenSummaryLong;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasOriginalID(void) const
  {
    return flagHasOriginalID;
  }

OInteger WikipediaCommandJSON::TypeNativeDataJSON::getOriginalID(void)
  {
    assert(flagHasOriginalID);
    return storeOriginalID;
  }

const OInteger WikipediaCommandJSON::TypeNativeDataJSON::getOriginalID(void) const
  {
    assert(flagHasOriginalID);
    return storeOriginalID;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasResolvedID(void) const
  {
    return flagHasResolvedID;
  }

OInteger WikipediaCommandJSON::TypeNativeDataJSON::getResolvedID(void)
  {
    assert(flagHasResolvedID);
    return storeResolvedID;
  }

const OInteger WikipediaCommandJSON::TypeNativeDataJSON::getResolvedID(void) const
  {
    assert(flagHasResolvedID);
    return storeResolvedID;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasWebCommandEnabled(void) const
  {
    return flagHasWebCommandEnabled;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void)
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

const bool WikipediaCommandJSON::TypeNativeDataJSON::getWebCommandEnabled(void) const
  {
    assert(flagHasWebCommandEnabled);
    return storeWebCommandEnabled;
  }

bool WikipediaCommandJSON::TypeNativeDataJSON::hasWikipediaAttribution(void) const
  {
    return flagHasWikipediaAttribution;
  }

std::string WikipediaCommandJSON::TypeNativeDataJSON::getWikipediaAttribution(void)
  {
    assert(flagHasWikipediaAttribution);
    return storeWikipediaAttribution;
  }

const std::string WikipediaCommandJSON::TypeNativeDataJSON::getWikipediaAttribution(void) const
  {
    assert(flagHasWikipediaAttribution);
    return storeWikipediaAttribution;
  }

WikipediaCommandJSON::WikipediaCommandJSON(const WikipediaCommandJSON &)
  {
    assert(false);
  }

WikipediaCommandJSON &WikipediaCommandJSON::operator=(const WikipediaCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *WikipediaCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONArrayValue *generated_array_1_NativeData = new JSONArrayValue();
    for (size_t num1 = 0; num1 < storeNativeData.size(); ++num1)
      {
        JSONValueHandler handler_NativeData;
        storeNativeData[num1]->write_as_json(&handler_NativeData);
        handler_NativeData.result->add_reference();
        generated_array_1_NativeData->appendComponent(handler_NativeData.result);
        handler_NativeData.result->remove_reference();
      }
    return generated_array_1_NativeData;
  }

void WikipediaCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field NativeData of WikipediaCommandJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field NativeData of WikipediaCommandJSON has too few elements.");
    std::vector< TypeNativeDataJSON * > vector_NativeData1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_NativeData1[num1] = convert_classy;
      }
    assert(vector_NativeData1.size() >= 1);
    initNativeData();
    for (size_t num2 = 0; num2 < vector_NativeData1.size(); ++num2)
        appendNativeData(vector_NativeData1[num2]);
    for (size_t num1 = 0; num1 < vector_NativeData1.size(); ++num1)
      {
        vector_NativeData1[num1]->remove_reference();
      }
  }

WikipediaCommandJSON::WikipediaCommandJSON(void) :
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

WikipediaCommandJSON::~WikipediaCommandJSON(void)
  {
    if (flagHasNativeData)
      {
        for (size_t num4 = 0; num4 < storeNativeData.size(); ++num4)
          {
            storeNativeData[num4]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *WikipediaCommandJSON::getCommandKind(void) const
  {
    return "WikipediaCommand";
  }

bool WikipediaCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

size_t WikipediaCommandJSON::countOfNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData.size();
  }

WikipediaCommandJSON::TypeNativeDataJSON * WikipediaCommandJSON::elementOfNativeData(size_t element_num)
  {
    assert(flagHasNativeData);
    return storeNativeData[element_num];
  }

const WikipediaCommandJSON::TypeNativeDataJSON * WikipediaCommandJSON::elementOfNativeData(size_t element_num) const
  {
    assert(flagHasNativeData);
    return storeNativeData[element_num];
  }

std::vector< WikipediaCommandJSON::TypeNativeDataJSON * > WikipediaCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const std::vector< WikipediaCommandJSON::TypeNativeDataJSON * > WikipediaCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

WikipediaCommandJSON::TypeNativeDataJSON *WikipediaCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
WikipediaCommandJSON *WikipediaCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    WikipediaCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<WikipediaCommandJSON>, WikipediaCommandJSON *, bool> generator("Type WikipediaCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
