/* file "ShowDirectionsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowDirectionsJSON.h"

#include "ShowDirectionsJSON.h"


ShowDirectionsJSON::TypeNativeDataJSON::TypeNavigationMethod ShowDirectionsJSON::TypeNativeDataJSON::stringToNavigationMethod(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'B':
            if (strcmp(&(chars[1]), "ike") == 0)
                return NavigationMethod_Bike;
            break;
        case 'D':
            if (strcmp(&(chars[1]), "rive") == 0)
                return NavigationMethod_Drive;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ransit") == 0)
                return NavigationMethod_Transit;
            break;
        case 'W':
            if (strcmp(&(chars[1]), "alk") == 0)
                return NavigationMethod_Walk;
            break;
        default:
            break;
      }
    throw("The value for field `NavigationMethod' is not one of the legal values.");
  }

const char *ShowDirectionsJSON::TypeNativeDataJSON::stringFromNavigationMethod(TypeNavigationMethod the_enum)
  {
    switch (the_enum)
      {
        case NavigationMethod_Walk:
            return "Walk";
        case NavigationMethod_Transit:
            return "Transit";
        case NavigationMethod_Bike:
            return "Bike";
        case NavigationMethod_Drive:
            return "Drive";
        default:
            assert(false);
            return NULL;
      }
  }

ShowDirectionsJSON::TypeNativeDataJSON::TypeCorrectionState ShowDirectionsJSON::TypeNativeDataJSON::stringToCorrectionState(const char *chars)
  {
    switch ((unsigned char)(chars[0]))
      {
        case 'F':
            if (strcmp(&(chars[1]), "ail") == 0)
                return CorrectionState_Fail;
            break;
        case 'N':
            if (strcmp(&(chars[1]), "one") == 0)
                return CorrectionState_None;
            break;
        case 'T':
            if (strcmp(&(chars[1]), "ryNewLocation") == 0)
                return CorrectionState_TryNewLocation;
            break;
        default:
            break;
      }
    throw("The value for field `CorrectionState' is not one of the legal values.");
  }

const char *ShowDirectionsJSON::TypeNativeDataJSON::stringFromCorrectionState(TypeCorrectionState the_enum)
  {
    switch (the_enum)
      {
        case CorrectionState_None:
            return "None";
        case CorrectionState_TryNewLocation:
            return "TryNewLocation";
        case CorrectionState_Fail:
            return "Fail";
        default:
            assert(false);
            return NULL;
      }
  }

ShowDirectionsJSON::TypeNativeDataJSON::TypeNativeDataJSON(const TypeNativeDataJSON &)
  {
    assert(false);
  }

ShowDirectionsJSON::TypeNativeDataJSON &ShowDirectionsJSON::TypeNativeDataJSON::operator=(const TypeNativeDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ImplicitStart of TypeNativeDataJSON is not true for false.");
          }
      }
    setImplicitStart(the_bool);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NavigationMethod of TypeNativeDataJSON is not a string.");
    TypeNavigationMethod the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'B':
            if (strcmp(&(json_string->getData()[1]), "ike") == 0)
                  {
                    the_enum = NavigationMethod_Bike;
                    goto enum_is_done;
                  }
            break;
        case 'D':
            if (strcmp(&(json_string->getData()[1]), "rive") == 0)
                  {
                    the_enum = NavigationMethod_Drive;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ransit") == 0)
                  {
                    the_enum = NavigationMethod_Transit;
                    goto enum_is_done;
                  }
            break;
        case 'W':
            if (strcmp(&(json_string->getData()[1]), "alk") == 0)
                  {
                    the_enum = NavigationMethod_Walk;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field NavigationMethod of TypeNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setNavigationMethod(the_enum);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONNavigate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Navigate of TypeNativeDataJSON is not true for false.");
          }
      }
    setNavigate(the_bool);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForDistance of TypeNativeDataJSON is not true for false.");
          }
      }
    setAsksForDistance(the_bool);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForTravelTime of TypeNativeDataJSON is not true for false.");
          }
      }
    setAsksForTravelTime(the_bool);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONDistance(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field Distance of TypeNativeDataJSON is not a number.");
          }
      }
    setDistanceText(the_rational_text);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfMeasureID of TypeNativeDataJSON is not a string.");
    setUnitOfMeasureID(std::string(json_string->getData()));
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONUnitOfLengthSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfLengthSingular of TypeNativeDataJSON is not a string.");
    setUnitOfLengthSingular(std::string(json_string->getData()));
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONUnitOfLengthPlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfLengthPlural of TypeNativeDataJSON is not a string.");
    setUnitOfLengthPlural(std::string(json_string->getData()));
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONTravelTime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONRationalValue *json_rational = json_value->rational_value();
    std::string the_rational_text;
    if (json_rational != NULL)
      {
        the_rational_text = json_rational->getText();
      }
    else
      {
        const JSONIntegerValue *json_integer = json_value->integer_value();
        if (json_integer != NULL)
          {
            the_rational_text = json_integer->getText();
          }
        else
          {
            throw("The value for field TravelTime of TypeNativeDataJSON is not a number.");
          }
      }
    setTravelTimeText(the_rational_text);
  }

void ShowDirectionsJSON::TypeNativeDataJSON::fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectionState of TypeNativeDataJSON is not a string.");
    TypeCorrectionState the_enum;
    switch ((unsigned char)(json_string->getData()[0]))
      {
        case 'F':
            if (strcmp(&(json_string->getData()[1]), "ail") == 0)
                  {
                    the_enum = CorrectionState_Fail;
                    goto enum_is_done;
                  }
            break;
        case 'N':
            if (strcmp(&(json_string->getData()[1]), "one") == 0)
                  {
                    the_enum = CorrectionState_None;
                    goto enum_is_done;
                  }
            break;
        case 'T':
            if (strcmp(&(json_string->getData()[1]), "ryNewLocation") == 0)
                  {
                    the_enum = CorrectionState_TryNewLocation;
                    goto enum_is_done;
                  }
            break;
        default:
            break;
      }
    throw("The value for field CorrectionState of TypeNativeDataJSON is not one of the legal strings.");
  enum_is_done:;
    setCorrectionState(the_enum);
  }

ShowDirectionsJSON::TypeNativeDataJSON::TypeNativeDataJSON(void) :
        flagHasStartMapLocationSpec(false),
        flagHasDestinationMapLocationSpec(false),
        flagHasImplicitStart(false),
        flagHasNavigationMethod(false),
        flagHasNavigate(false),
        flagHasAsksForDistance(false),
        flagHasAsksForTravelTime(false),
        flagHasDistance(false),
        flagHasUnitOfMeasureID(false),
        flagHasUnitOfLengthSingular(false),
        flagHasUnitOfLengthPlural(false),
        flagHasTravelTime(false),
        flagHasCorrectionState(false)
  {
  }

ShowDirectionsJSON::TypeNativeDataJSON::~TypeNativeDataJSON(void)
  {
    if (flagHasStartMapLocationSpec)
      {
        storeStartMapLocationSpec->remove_reference();
      }
    if (flagHasDestinationMapLocationSpec)
      {
        storeDestinationMapLocationSpec->remove_reference();
      }
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasStartMapLocationSpec(void) const
  {
    return flagHasStartMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsJSON::TypeNativeDataJSON::getStartMapLocationSpec(void)
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsJSON::TypeNativeDataJSON::getStartMapLocationSpec(void) const
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasDestinationMapLocationSpec(void) const
  {
    return flagHasDestinationMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsJSON::TypeNativeDataJSON::getDestinationMapLocationSpec(void)
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsJSON::TypeNativeDataJSON::getDestinationMapLocationSpec(void) const
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasImplicitStart(void) const
  {
    return flagHasImplicitStart;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::getImplicitStart(void)
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

const bool ShowDirectionsJSON::TypeNativeDataJSON::getImplicitStart(void) const
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasNavigationMethod(void) const
  {
    return flagHasNavigationMethod;
  }

ShowDirectionsJSON::TypeNativeDataJSON::TypeNavigationMethod ShowDirectionsJSON::TypeNativeDataJSON::getNavigationMethod(void)
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const ShowDirectionsJSON::TypeNativeDataJSON::TypeNavigationMethod ShowDirectionsJSON::TypeNativeDataJSON::getNavigationMethod(void) const
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const char *ShowDirectionsJSON::TypeNativeDataJSON::getNavigationMethodAsChars(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getNavigationMethodAsString(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasNavigate(void) const
  {
    return flagHasNavigate;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::getNavigate(void)
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

const bool ShowDirectionsJSON::TypeNativeDataJSON::getNavigate(void) const
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasAsksForDistance(void) const
  {
    return flagHasAsksForDistance;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::getAsksForDistance(void)
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

const bool ShowDirectionsJSON::TypeNativeDataJSON::getAsksForDistance(void) const
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasAsksForTravelTime(void) const
  {
    return flagHasAsksForTravelTime;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::getAsksForTravelTime(void)
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

const bool ShowDirectionsJSON::TypeNativeDataJSON::getAsksForTravelTime(void) const
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasDistance(void) const
  {
    return flagHasDistance;
  }

double ShowDirectionsJSON::TypeNativeDataJSON::getDistance(void)
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

const double ShowDirectionsJSON::TypeNativeDataJSON::getDistance(void) const
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getDistanceAsText(void) const
  {
    assert(flagHasDistance);
    if (textStoreDistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeDistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreDistance);
      }
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasUnitOfMeasureID(void) const
  {
    return flagHasUnitOfMeasureID;
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfMeasureID(void)
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

const std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfMeasureID(void) const
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasUnitOfLengthSingular(void) const
  {
    return flagHasUnitOfLengthSingular;
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfLengthSingular(void)
  {
    assert(flagHasUnitOfLengthSingular);
    return storeUnitOfLengthSingular;
  }

const std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfLengthSingular(void) const
  {
    assert(flagHasUnitOfLengthSingular);
    return storeUnitOfLengthSingular;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasUnitOfLengthPlural(void) const
  {
    return flagHasUnitOfLengthPlural;
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfLengthPlural(void)
  {
    assert(flagHasUnitOfLengthPlural);
    return storeUnitOfLengthPlural;
  }

const std::string ShowDirectionsJSON::TypeNativeDataJSON::getUnitOfLengthPlural(void) const
  {
    assert(flagHasUnitOfLengthPlural);
    return storeUnitOfLengthPlural;
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasTravelTime(void) const
  {
    return flagHasTravelTime;
  }

double ShowDirectionsJSON::TypeNativeDataJSON::getTravelTime(void)
  {
    assert(flagHasTravelTime);
    if (textStoreTravelTime != "")
      {
        return atof(textStoreTravelTime.c_str());
      }
    return storeTravelTime;
  }

const double ShowDirectionsJSON::TypeNativeDataJSON::getTravelTime(void) const
  {
    assert(flagHasTravelTime);
    if (textStoreTravelTime != "")
      {
        return atof(textStoreTravelTime.c_str());
      }
    return storeTravelTime;
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getTravelTimeAsText(void) const
  {
    assert(flagHasTravelTime);
    if (textStoreTravelTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storeTravelTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoreTravelTime);
      }
  }

bool ShowDirectionsJSON::TypeNativeDataJSON::hasCorrectionState(void) const
  {
    return flagHasCorrectionState;
  }

ShowDirectionsJSON::TypeNativeDataJSON::TypeCorrectionState ShowDirectionsJSON::TypeNativeDataJSON::getCorrectionState(void)
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const ShowDirectionsJSON::TypeNativeDataJSON::TypeCorrectionState ShowDirectionsJSON::TypeNativeDataJSON::getCorrectionState(void) const
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const char *ShowDirectionsJSON::TypeNativeDataJSON::getCorrectionStateAsChars(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

std::string ShowDirectionsJSON::TypeNativeDataJSON::getCorrectionStateAsString(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

ShowDirectionsJSON::ShowDirectionsJSON(const ShowDirectionsJSON &)
  {
    assert(false);
  }

ShowDirectionsJSON &ShowDirectionsJSON::operator=(const ShowDirectionsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowDirectionsJSON::extraNativeDataToJSON(void) const
  {
    JSONValueHandler handler_NativeData;
    storeNativeData->write_as_json(&handler_NativeData);
    handler_NativeData.result->add_reference();
    return handler_NativeData.result;
  }

JSONValue *ShowDirectionsJSON::extraIntermediateDestinationRequestedToJSON(void) const
  {
    JSONValue *generated_boolean_IntermediateDestinationRequested = (storeIntermediateDestinationRequested ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_IntermediateDestinationRequested;
  }

JSONValue *ShowDirectionsJSON::extraIntermediateDestinationPositionFromStartToJSON(void) const
  {
    JSONIntegerValue *generated_integer_IntermediateDestinationPositionFromStart = new JSONIntegerValue(storeIntermediateDestinationPositionFromStart.get_o_integer());
    return generated_integer_IntermediateDestinationPositionFromStart;
  }

JSONValue *ShowDirectionsJSON::extraIntermediateDestinationPositionFromEndToJSON(void) const
  {
    JSONIntegerValue *generated_integer_IntermediateDestinationPositionFromEnd = new JSONIntegerValue(storeIntermediateDestinationPositionFromEnd.get_o_integer());
    return generated_integer_IntermediateDestinationPositionFromEnd;
  }

void ShowDirectionsJSON::fromJSONNativeData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeNativeDataJSON *convert_classy = TypeNativeDataJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setNativeData(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsJSON::fromJSONIntermediateDestinationRequested(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field IntermediateDestinationRequested of ShowDirectionsJSON is not true for false.");
          }
      }
    setIntermediateDestinationRequested(the_bool);
  }

void ShowDirectionsJSON::fromJSONIntermediateDestinationPositionFromStart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IntermediateDestinationPositionFromStart of ShowDirectionsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IntermediateDestinationPositionFromStart of ShowDirectionsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIntermediateDestinationPositionFromStart(extracted_integer);
  }

void ShowDirectionsJSON::fromJSONIntermediateDestinationPositionFromEnd(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    OInteger extracted_integer;
    const JSONIntegerValue *json_integer = json_value->integer_value();
    if (json_integer == NULL)
      {
        const JSONRationalValue *json_rational = json_value->rational_value();
        if (json_rational == NULL)
          {
            throw("The value for field IntermediateDestinationPositionFromEnd of ShowDirectionsJSON is not a number.");
          }
        if (!(json_rational->isInteger()))
          {
            throw("The value for field IntermediateDestinationPositionFromEnd of ShowDirectionsJSON is not an integer.");
          }
        extracted_integer = OInteger(json_rational->getInteger())    ;
      }
    else
      {
        extracted_integer = OInteger(json_integer->getData())    ;
      }
    setIntermediateDestinationPositionFromEnd(extracted_integer);
  }

ShowDirectionsJSON::ShowDirectionsJSON(void) :
        flagHasNativeData(false),
        flagHasIntermediateDestinationRequested(false),
        flagHasIntermediateDestinationPositionFromStart(false),
        flagHasIntermediateDestinationPositionFromEnd(false)
  {
    storeIntermediateDestinationRequested = false;
    extraIndex = create_string_index();
  }

ShowDirectionsJSON::~ShowDirectionsJSON(void)
  {
    if (flagHasNativeData)
      {
        storeNativeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowDirectionsJSON::getMapCommandKind(void) const
  {
    return "ShowDirections";
  }

bool ShowDirectionsJSON::hasNativeData(void) const
  {
    return flagHasNativeData;
  }

ShowDirectionsJSON::TypeNativeDataJSON * ShowDirectionsJSON::getNativeData(void)
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

const ShowDirectionsJSON::TypeNativeDataJSON * ShowDirectionsJSON::getNativeData(void) const
  {
    assert(flagHasNativeData);
    return storeNativeData;
  }

bool ShowDirectionsJSON::hasIntermediateDestinationRequested(void) const
  {
    return flagHasIntermediateDestinationRequested;
  }

bool ShowDirectionsJSON::getIntermediateDestinationRequested(void)
  {
    return storeIntermediateDestinationRequested;
  }

const bool ShowDirectionsJSON::getIntermediateDestinationRequested(void) const
  {
    return storeIntermediateDestinationRequested;
  }

bool ShowDirectionsJSON::hasIntermediateDestinationPositionFromStart(void) const
  {
    return flagHasIntermediateDestinationPositionFromStart;
  }

OInteger ShowDirectionsJSON::getIntermediateDestinationPositionFromStart(void)
  {
    assert(flagHasIntermediateDestinationPositionFromStart);
    return storeIntermediateDestinationPositionFromStart;
  }

const OInteger ShowDirectionsJSON::getIntermediateDestinationPositionFromStart(void) const
  {
    assert(flagHasIntermediateDestinationPositionFromStart);
    return storeIntermediateDestinationPositionFromStart;
  }

bool ShowDirectionsJSON::hasIntermediateDestinationPositionFromEnd(void) const
  {
    return flagHasIntermediateDestinationPositionFromEnd;
  }

OInteger ShowDirectionsJSON::getIntermediateDestinationPositionFromEnd(void)
  {
    assert(flagHasIntermediateDestinationPositionFromEnd);
    return storeIntermediateDestinationPositionFromEnd;
  }

const OInteger ShowDirectionsJSON::getIntermediateDestinationPositionFromEnd(void) const
  {
    assert(flagHasIntermediateDestinationPositionFromEnd);
    return storeIntermediateDestinationPositionFromEnd;
  }

ShowDirectionsJSON::TypeNativeDataJSON *ShowDirectionsJSON::TypeNativeDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
char ShowDirectionsJSON::Generator::lowerBoundIntermediateDestinationPositionFromStart[] = "0";
char ShowDirectionsJSON::Generator::lowerBoundIntermediateDestinationPositionFromEnd[] = "0";
ShowDirectionsJSON *ShowDirectionsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowDirectionsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsJSON>, ShowDirectionsJSON *, bool> generator("Type ShowDirections", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
