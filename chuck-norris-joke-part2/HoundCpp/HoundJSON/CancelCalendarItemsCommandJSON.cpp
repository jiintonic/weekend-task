/* file "CancelCalendarItemsCommandJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "CancelCalendarItemsCommandJSON.h"

#include "CancelCalendarItemsCommandJSON.h"


CancelCalendarItemsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

CancelCalendarItemsCommandJSON::TypeNativeDataJSON &CancelCalendarItemsCommandJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemType of TypeNativeDataJSON is not a string.");
    setItemType(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONExactTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactTitle of TypeNativeDataJSON is not a string.");
    setExactTitle(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTitle of TypeNativeDataJSON is not a string.");
    setPartialTitle(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONExactLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactLocation of TypeNativeDataJSON is not a string.");
    setExactLocation(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialLocation of TypeNativeDataJSON is not a string.");
    setPartialLocation(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONStartStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartStart(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONEndStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndStart(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONStartEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::TypeNativeDataJSON::fromJSONEndEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndEnd(convert_classy);
    convert_classy->remove_reference();
  }

CancelCalendarItemsCommandJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
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

CancelCalendarItemsCommandJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
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

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasItemType(void) const
  {
    return flagHasItemType;
  }

std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getItemType(void)
  {
    assert(flagHasItemType);
    return storeItemType;
  }

const std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getItemType(void) const
  {
    assert(flagHasItemType);
    return storeItemType;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasExactTitle(void) const
  {
    return flagHasExactTitle;
  }

std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getExactTitle(void)
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

const std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getExactTitle(void) const
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasPartialTitle(void) const
  {
    return flagHasPartialTitle;
  }

std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialTitle(void)
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

const std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialTitle(void) const
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasExactLocation(void) const
  {
    return flagHasExactLocation;
  }

std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getExactLocation(void)
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

const std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getExactLocation(void) const
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasPartialLocation(void) const
  {
    return flagHasPartialLocation;
  }

std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialLocation(void)
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

const std::string CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getPartialLocation(void) const
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasStartStart(void) const
  {
    return flagHasStartStart;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getStartStart(void)
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getStartStart(void) const
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasEndStart(void) const
  {
    return flagHasEndStart;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getEndStart(void)
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getEndStart(void) const
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasStartEnd(void) const
  {
    return flagHasStartEnd;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getStartEnd(void)
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getStartEnd(void) const
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

bool CancelCalendarItemsCommandJSON::TypeNativeDataJSON::hasEndEnd(void) const
  {
    return flagHasEndEnd;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getEndEnd(void)
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::TypeNativeDataJSON::getEndEnd(void) const
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

CancelCalendarItemsCommandJSON::CancelCalendarItemsCommandJSON(const CancelCalendarItemsCommandJSON &)
  {
    assert(false);
  }

CancelCalendarItemsCommandJSON &CancelCalendarItemsCommandJSON::operator=(const CancelCalendarItemsCommandJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *CancelCalendarItemsCommandJSON::extraItemTypeToJSON(void) const
  {
    JSONStringValue *generated_string_ItemType = new JSONStringValue(storeItemType.c_str());
    return generated_string_ItemType;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraExactTitleToJSON(void) const
  {
    JSONStringValue *generated_string_ExactTitle = new JSONStringValue(storeExactTitle.c_str());
    return generated_string_ExactTitle;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraPartialTitleToJSON(void) const
  {
    JSONStringValue *generated_string_PartialTitle = new JSONStringValue(storePartialTitle.c_str());
    return generated_string_PartialTitle;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraExactLocationToJSON(void) const
  {
    JSONStringValue *generated_string_ExactLocation = new JSONStringValue(storeExactLocation.c_str());
    return generated_string_ExactLocation;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraPartialLocationToJSON(void) const
  {
    JSONStringValue *generated_string_PartialLocation = new JSONStringValue(storePartialLocation.c_str());
    return generated_string_PartialLocation;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraStartStartToJSON(void) const
  {
    JSONValueHandler handler_StartStart;
    storeStartStart->write_as_json(&handler_StartStart);
    handler_StartStart.result->add_reference();
    return handler_StartStart.result;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraEndStartToJSON(void) const
  {
    JSONValueHandler handler_EndStart;
    storeEndStart->write_as_json(&handler_EndStart);
    handler_EndStart.result->add_reference();
    return handler_EndStart.result;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraStartEndToJSON(void) const
  {
    JSONValueHandler handler_StartEnd;
    storeStartEnd->write_as_json(&handler_StartEnd);
    handler_StartEnd.result->add_reference();
    return handler_StartEnd.result;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraEndEndToJSON(void) const
  {
    JSONValueHandler handler_EndEnd;
    storeEndEnd->write_as_json(&handler_EndEnd);
    handler_EndEnd.result->add_reference();
    return handler_EndEnd.result;
  }

JSONValue *CancelCalendarItemsCommandJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

void CancelCalendarItemsCommandJSON::fromJSONItemType(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ItemType of CancelCalendarItemsCommandJSON is not a string.");
    setItemType(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::fromJSONExactTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactTitle of CancelCalendarItemsCommandJSON is not a string.");
    setExactTitle(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::fromJSONPartialTitle(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialTitle of CancelCalendarItemsCommandJSON is not a string.");
    setPartialTitle(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::fromJSONExactLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ExactLocation of CancelCalendarItemsCommandJSON is not a string.");
    setExactLocation(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::fromJSONPartialLocation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field PartialLocation of CancelCalendarItemsCommandJSON is not a string.");
    setPartialLocation(std::string(json_string->getData()));
  }

void CancelCalendarItemsCommandJSON::fromJSONStartStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartStart(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::fromJSONEndStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndStart(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::fromJSONStartEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::fromJSONEndEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    DateAndOrTimeJSON *convert_classy = DateAndOrTimeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setEndEnd(convert_classy);
    convert_classy->remove_reference();
  }

void CancelCalendarItemsCommandJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

CancelCalendarItemsCommandJSON::CancelCalendarItemsCommandJSON(void) :
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

CancelCalendarItemsCommandJSON::~CancelCalendarItemsCommandJSON(void)
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

const char *CancelCalendarItemsCommandJSON::getCalendarCommandKind(void) const
  {
    return "CancelItems";
  }

bool CancelCalendarItemsCommandJSON::hasItemType(void) const
  {
    return flagHasItemType;
  }

std::string CancelCalendarItemsCommandJSON::getItemType(void)
  {
    assert(flagHasItemType);
    return storeItemType;
  }

const std::string CancelCalendarItemsCommandJSON::getItemType(void) const
  {
    assert(flagHasItemType);
    return storeItemType;
  }

bool CancelCalendarItemsCommandJSON::hasExactTitle(void) const
  {
    return flagHasExactTitle;
  }

std::string CancelCalendarItemsCommandJSON::getExactTitle(void)
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

const std::string CancelCalendarItemsCommandJSON::getExactTitle(void) const
  {
    assert(flagHasExactTitle);
    return storeExactTitle;
  }

bool CancelCalendarItemsCommandJSON::hasPartialTitle(void) const
  {
    return flagHasPartialTitle;
  }

std::string CancelCalendarItemsCommandJSON::getPartialTitle(void)
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

const std::string CancelCalendarItemsCommandJSON::getPartialTitle(void) const
  {
    assert(flagHasPartialTitle);
    return storePartialTitle;
  }

bool CancelCalendarItemsCommandJSON::hasExactLocation(void) const
  {
    return flagHasExactLocation;
  }

std::string CancelCalendarItemsCommandJSON::getExactLocation(void)
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

const std::string CancelCalendarItemsCommandJSON::getExactLocation(void) const
  {
    assert(flagHasExactLocation);
    return storeExactLocation;
  }

bool CancelCalendarItemsCommandJSON::hasPartialLocation(void) const
  {
    return flagHasPartialLocation;
  }

std::string CancelCalendarItemsCommandJSON::getPartialLocation(void)
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

const std::string CancelCalendarItemsCommandJSON::getPartialLocation(void) const
  {
    assert(flagHasPartialLocation);
    return storePartialLocation;
  }

bool CancelCalendarItemsCommandJSON::hasStartStart(void) const
  {
    return flagHasStartStart;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getStartStart(void)
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getStartStart(void) const
  {
    assert(flagHasStartStart);
    return storeStartStart;
  }

bool CancelCalendarItemsCommandJSON::hasEndStart(void) const
  {
    return flagHasEndStart;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getEndStart(void)
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getEndStart(void) const
  {
    assert(flagHasEndStart);
    return storeEndStart;
  }

bool CancelCalendarItemsCommandJSON::hasStartEnd(void) const
  {
    return flagHasStartEnd;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getStartEnd(void)
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getStartEnd(void) const
  {
    assert(flagHasStartEnd);
    return storeStartEnd;
  }

bool CancelCalendarItemsCommandJSON::hasEndEnd(void) const
  {
    return flagHasEndEnd;
  }

DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getEndEnd(void)
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

const DateAndOrTimeJSON * CancelCalendarItemsCommandJSON::getEndEnd(void) const
  {
    assert(flagHasEndEnd);
    return storeEndEnd;
  }

bool CancelCalendarItemsCommandJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

CancelCalendarItemsCommandJSON::TypeNativeDataJSON * CancelCalendarItemsCommandJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const CancelCalendarItemsCommandJSON::TypeNativeDataJSON * CancelCalendarItemsCommandJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

CancelCalendarItemsCommandJSON::TypeNativeDataJSON *CancelCalendarItemsCommandJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
CancelCalendarItemsCommandJSON *CancelCalendarItemsCommandJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    CancelCalendarItemsCommandJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<CancelCalendarItemsCommandJSON>, CancelCalendarItemsCommandJSON *, bool> generator("Type CancelCalendarItemsCommand", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
