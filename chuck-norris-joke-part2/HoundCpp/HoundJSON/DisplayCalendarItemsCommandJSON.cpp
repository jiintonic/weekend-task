/* file "DisplayCalendarItemsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DisplayCalendarItemsCommandJSON.h"

#include "DisplayCalendarItemsCommandJSON.h"


DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

DisplayCalendarItemsCommandJSON::TypeNativeDataJSON &DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemType of TypeNativeDataJSON is not a string.");
    setItemType(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONExactTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactTitle of TypeNativeDataJSON is not a string.");
    setExactTitle(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTitle of TypeNativeDataJSON is not a string.");
    setPartialTitle(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONExactLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactLocation of TypeNativeDataJSON is not a string.");
    setExactLocation(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialLocation of TypeNativeDataJSON is not a string.");
    setPartialLocation(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONStartStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartStart(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONEndStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndStart(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONStartEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartEnd(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONEndEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndEnd(convert_classy);
    convert_classy->remove_reference();
  }

DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasItemType(false),
        flagHasExactTitle(false),
        flagHasPartialTitle(false),
        flagHasExactLocation(false),
        flagHasPartialLocation(false),
        flagHasStartStart(false),
        flagHasEndStart(false),
        flagHasStartEnd(false),
        flagHasEndEnd(false)
  {
    extraIndex = create_string_index();
  }

DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasStartStart)
      {
        storeStartStart->remove_reference();
      }
    if (flagHasEndStart)
      {
        storeEndStart->remove_reference();
      }
    if (flagHasStartEnd)
      {
        storeStartEnd->remove_reference();
      }
    if (flagHasEndEnd)
      {
        storeEndEnd->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasItemType(void) const
  {
    return flagHasItemType;
  }

std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getItemType(void)
  {
    assert(flagHasItemType);
    return storeItemType;
  }

const std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getItemType(void) const
  {
    assert(flagHasItemType);
    return storeItemType;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasExactTitle(void) const
  {
    return flagHasExactTitle;
  }

std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getExactTitle(void)
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

const std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getExactTitle(void) const
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasPartialTitle(void) const
  {
    return flagHasPartialTitle;
  }

std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialTitle(void)
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

const std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialTitle(void) const
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasExactLocation(void) const
  {
    return flagHasExactLocation;
  }

std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getExactLocation(void)
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

const std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getExactLocation(void) const
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasPartialLocation(void) const
  {
    return flagHasPartialLocation;
  }

std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialLocation(void)
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

const std::string DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialLocation(void) const
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasStartStart(void) const
  {
    return flagHasStartStart;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getStartStart(void)
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getStartStart(void) const
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasEndStart(void) const
  {
    return flagHasEndStart;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getEndStart(void)
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getEndStart(void) const
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasStartEnd(void) const
  {
    return flagHasStartEnd;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getStartEnd(void)
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getStartEnd(void) const
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

bool DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::hasEndEnd(void) const
  {
    return flagHasEndEnd;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getEndEnd(void)
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::getEndEnd(void) const
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

DisplayCalendarItemsCommandJSON::DisplayCalendarItemsCommandJSON(const DisplayCalendarItemsCommandJSON &)
  {
    assert(false);
  }

DisplayCalendarItemsCommandJSON &DisplayCalendarItemsCommandJSON::operator=(const DisplayCalendarItemsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraItemTypeToJSON(void) const
  {
    JSONStringValue *generated_string_ItemType = new JSONStringValue(storeItemType.c_str());
    return generated_string_ItemType;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraExactTitleToJSON(void) const
  {
    JSONStringValue *generated_string_ExactTitle = new JSONStringValue(storeExactTitle.c_str());
    return generated_string_ExactTitle;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraPartialTitleToJSON(void) const
  {
    JSONStringValue *generated_string_PartialTitle = new JSONStringValue(storePartialTitle.c_str());
    return generated_string_PartialTitle;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraExactLocationToJSON(void) const
  {
    JSONStringValue *generated_string_ExactLocation = new JSONStringValue(storeExactLocation.c_str());
    return generated_string_ExactLocation;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraPartialLocationToJSON(void) const
  {
    JSONStringValue *generated_string_PartialLocation = new JSONStringValue(storePartialLocation.c_str());
    return generated_string_PartialLocation;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraStartStartToJSON(void) const
  {
    JSONValueHandler handler_StartStart;
    storeStartStart->write_as_json(&handler_StartStart);
    handler_StartStart.result->add_reference();
    return handler_StartStart.result;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraEndStartToJSON(void) const
  {
    JSONValueHandler handler_EndStart;
    storeEndStart->write_as_json(&handler_EndStart);
    handler_EndStart.result->add_reference();
    return handler_EndStart.result;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraStartEndToJSON(void) const
  {
    JSONValueHandler handler_StartEnd;
    storeStartEnd->write_as_json(&handler_StartEnd);
    handler_StartEnd.result->add_reference();
    return handler_StartEnd.result;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraEndEndToJSON(void) const
  {
    JSONValueHandler handler_EndEnd;
    storeEndEnd->write_as_json(&handler_EndEnd);
    handler_EndEnd.result->add_reference();
    return handler_EndEnd.result;
  }

JSONValue *DisplayCalendarItemsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void DisplayCalendarItemsCommandJSON::fromJSONItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemType of DisplayCalendarItemsCommandJSON is not a string.");
    setItemType(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::fromJSONExactTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactTitle of DisplayCalendarItemsCommandJSON is not a string.");
    setExactTitle(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTitle of DisplayCalendarItemsCommandJSON is not a string.");
    setPartialTitle(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::fromJSONExactLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactLocation of DisplayCalendarItemsCommandJSON is not a string.");
    setExactLocation(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialLocation of DisplayCalendarItemsCommandJSON is not a string.");
    setPartialLocation(std::string(json_string->getData()));
  }

void DisplayCalendarItemsCommandJSON::fromJSONStartStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartStart(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::fromJSONEndStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndStart(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::fromJSONStartEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartEnd(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::fromJSONEndEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndEnd(convert_classy);
    convert_classy->remove_reference();
  }

void DisplayCalendarItemsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

DisplayCalendarItemsCommandJSON::DisplayCalendarItemsCommandJSON(void) :
        flagHasItemType(false),
        flagHasExactTitle(false),
        flagHasPartialTitle(false),
        flagHasExactLocation(false),
        flagHasPartialLocation(false),
        flagHasStartStart(false),
        flagHasEndStart(false),
        flagHasStartEnd(false),
        flagHasEndEnd(false),
        flagHasNativeData(false)
  {
    extraIndex = create_string_index();
  }

DisplayCalendarItemsCommandJSON::~DisplayCalendarItemsCommandJSON(void)
  {
    if (flagHasStartStart)
      {
        storeStartStart->remove_reference();
      }
    if (flagHasEndStart)
      {
        storeEndStart->remove_reference();
      }
    if (flagHasStartEnd)
      {
        storeStartEnd->remove_reference();
      }
    if (flagHasEndEnd)
      {
        storeEndEnd->remove_reference();
      }
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *DisplayCalendarItemsCommandJSON::getCalendarCommandKind(void) const
  {
    return "DisplayItems";
  }

bool DisplayCalendarItemsCommandJSON::hasItemType(void) const
  {
    return flagHasItemType;
  }

std::string DisplayCalendarItemsCommandJSON::getItemType(void)
  {
    assert(flagHasItemType);
    return storeItemType;
  }

const std::string DisplayCalendarItemsCommandJSON::getItemType(void) const
  {
    assert(flagHasItemType);
    return storeItemType;
  }

bool DisplayCalendarItemsCommandJSON::hasExactTitle(void) const
  {
    return flagHasExactTitle;
  }

std::string DisplayCalendarItemsCommandJSON::getExactTitle(void)
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

const std::string DisplayCalendarItemsCommandJSON::getExactTitle(void) const
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

bool DisplayCalendarItemsCommandJSON::hasPartialTitle(void) const
  {
    return flagHasPartialTitle;
  }

std::string DisplayCalendarItemsCommandJSON::getPartialTitle(void)
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

const std::string DisplayCalendarItemsCommandJSON::getPartialTitle(void) const
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

bool DisplayCalendarItemsCommandJSON::hasExactLocation(void) const
  {
    return flagHasExactLocation;
  }

std::string DisplayCalendarItemsCommandJSON::getExactLocation(void)
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

const std::string DisplayCalendarItemsCommandJSON::getExactLocation(void) const
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

bool DisplayCalendarItemsCommandJSON::hasPartialLocation(void) const
  {
    return flagHasPartialLocation;
  }

std::string DisplayCalendarItemsCommandJSON::getPartialLocation(void)
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

const std::string DisplayCalendarItemsCommandJSON::getPartialLocation(void) const
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

bool DisplayCalendarItemsCommandJSON::hasStartStart(void) const
  {
    return flagHasStartStart;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getStartStart(void)
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getStartStart(void) const
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

bool DisplayCalendarItemsCommandJSON::hasEndStart(void) const
  {
    return flagHasEndStart;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getEndStart(void)
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getEndStart(void) const
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

bool DisplayCalendarItemsCommandJSON::hasStartEnd(void) const
  {
    return flagHasStartEnd;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getStartEnd(void)
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getStartEnd(void) const
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

bool DisplayCalendarItemsCommandJSON::hasEndEnd(void) const
  {
    return flagHasEndEnd;
  }

DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getEndEnd(void)
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

const DateAndOrTimeJSON * DisplayCalendarItemsCommandJSON::getEndEnd(void) const
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

bool DisplayCalendarItemsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

DisplayCalendarItemsCommandJSON::TypeNativeDataJSON * DisplayCalendarItemsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const DisplayCalendarItemsCommandJSON::TypeNativeDataJSON * DisplayCalendarItemsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

DisplayCalendarItemsCommandJSON::TypeNativeDataJSON *DisplayCalendarItemsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
DisplayCalendarItemsCommandJSON *DisplayCalendarItemsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DisplayCalendarItemsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DisplayCalendarItemsCommandJSON>, DisplayCalendarItemsCommandJSON *, bool> generator("Type DisplayCalendarItemsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
