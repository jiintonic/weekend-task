/* file "ShowDirectionsInformationNuggetJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowDirectionsInformationNuggetJSON.h"

#include "ShowDirectionsInformationNuggetJSON.h"


ShowDirectionsInformationNuggetJSON::TypeNavigationMethod ShowDirectionsInformationNuggetJSON::stringToNavigationMethod(const char *chars)
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

const char *ShowDirectionsInformationNuggetJSON::stringFromNavigationMethod(TypeNavigationMethod the_enum)
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

ShowDirectionsInformationNuggetJSON::TypeCorrectionState ShowDirectionsInformationNuggetJSON::stringToCorrectionState(const char *chars)
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

const char *ShowDirectionsInformationNuggetJSON::stringFromCorrectionState(TypeCorrectionState the_enum)
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

ShowDirectionsInformationNuggetJSON::ShowDirectionsInformationNuggetJSON(const ShowDirectionsInformationNuggetJSON &)
  {
    assert(false);
  }

ShowDirectionsInformationNuggetJSON &ShowDirectionsInformationNuggetJSON::operator=(const ShowDirectionsInformationNuggetJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraStartMapLocationSpecToJSON(void) const
  {
    JSONValueHandler handler_StartMapLocationSpec;
    storeStartMapLocationSpec->write_as_json(&handler_StartMapLocationSpec);
    handler_StartMapLocationSpec.result->add_reference();
    return handler_StartMapLocationSpec.result;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraDestinationMapLocationSpecToJSON(void) const
  {
    JSONValueHandler handler_DestinationMapLocationSpec;
    storeDestinationMapLocationSpec->write_as_json(&handler_DestinationMapLocationSpec);
    handler_DestinationMapLocationSpec.result->add_reference();
    return handler_DestinationMapLocationSpec.result;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraImplicitStartToJSON(void) const
  {
    JSONValue *generated_boolean_ImplicitStart = (storeImplicitStart ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_ImplicitStart;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraNavigationMethodToJSON(void) const
  {
    JSONStringValue *generated_string_NavigationMethod;
    switch (storeNavigationMethod)
      {
        case NavigationMethod_Walk:
            generated_string_NavigationMethod = new JSONStringValue("Walk");
            break;
        case NavigationMethod_Transit:
            generated_string_NavigationMethod = new JSONStringValue("Transit");
            break;
        case NavigationMethod_Bike:
            generated_string_NavigationMethod = new JSONStringValue("Bike");
            break;
        case NavigationMethod_Drive:
            generated_string_NavigationMethod = new JSONStringValue("Drive");
            break;
        default:
            assert(false);
            generated_string_NavigationMethod = NULL;
      }
    return generated_string_NavigationMethod;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraNavigateToJSON(void) const
  {
    JSONValue *generated_boolean_Navigate = (storeNavigate ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_Navigate;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraAsksForDistanceToJSON(void) const
  {
    JSONValue *generated_boolean_AsksForDistance = (storeAsksForDistance ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_AsksForDistance;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraAsksForTravelTimeToJSON(void) const
  {
    JSONValue *generated_boolean_AsksForTravelTime = (storeAsksForTravelTime ? (JSONValue *)new JSONTrueValue() : (JSONValue *)new JSONFalseValue());
    return generated_boolean_AsksForTravelTime;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraDistanceToJSON(void) const
  {
    JSONValue *generated_rational_Distance;
    if (((double)(long int)storeDistance) == storeDistance)
        generated_rational_Distance = new JSONIntegerValue((long int)(storeDistance));
    else
        generated_rational_Distance = new JSONRationalValue(storeDistance, DBL_DIG);
    return generated_rational_Distance;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraUnitOfMeasureIDToJSON(void) const
  {
    JSONStringValue *generated_string_UnitOfMeasureID = new JSONStringValue(storeUnitOfMeasureID.c_str());
    return generated_string_UnitOfMeasureID;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraUnitOfLengthSingularToJSON(void) const
  {
    JSONStringValue *generated_string_UnitOfLengthSingular = new JSONStringValue(storeUnitOfLengthSingular.c_str());
    return generated_string_UnitOfLengthSingular;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraUnitOfLengthPluralToJSON(void) const
  {
    JSONStringValue *generated_string_UnitOfLengthPlural = new JSONStringValue(storeUnitOfLengthPlural.c_str());
    return generated_string_UnitOfLengthPlural;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraTravelTimeToJSON(void) const
  {
    JSONValue *generated_rational_TravelTime;
    if (((double)(long int)storeTravelTime) == storeTravelTime)
        generated_rational_TravelTime = new JSONIntegerValue((long int)(storeTravelTime));
    else
        generated_rational_TravelTime = new JSONRationalValue(storeTravelTime, DBL_DIG);
    return generated_rational_TravelTime;
  }

JSONValue *ShowDirectionsInformationNuggetJSON::extraCorrectionStateToJSON(void) const
  {
    JSONStringValue *generated_string_CorrectionState;
    switch (storeCorrectionState)
      {
        case CorrectionState_None:
            generated_string_CorrectionState = new JSONStringValue("None");
            break;
        case CorrectionState_TryNewLocation:
            generated_string_CorrectionState = new JSONStringValue("TryNewLocation");
            break;
        case CorrectionState_Fail:
            generated_string_CorrectionState = new JSONStringValue("Fail");
            break;
        default:
            assert(false);
            generated_string_CorrectionState = NULL;
      }
    return generated_string_CorrectionState;
  }

void ShowDirectionsInformationNuggetJSON::fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsInformationNuggetJSON::fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsInformationNuggetJSON::fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ImplicitStart of ShowDirectionsInformationNuggetJSON is not true for false.");
          }
      }
    setImplicitStart(the_bool);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NavigationMethod of ShowDirectionsInformationNuggetJSON is not a string.");
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
    throw("The value for field NavigationMethod of ShowDirectionsInformationNuggetJSON is not one of the legal strings.");
  enum_is_done:;
    setNavigationMethod(the_enum);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONNavigate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Navigate of ShowDirectionsInformationNuggetJSON is not true for false.");
          }
      }
    setNavigate(the_bool);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForDistance of ShowDirectionsInformationNuggetJSON is not true for false.");
          }
      }
    setAsksForDistance(the_bool);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForTravelTime of ShowDirectionsInformationNuggetJSON is not true for false.");
          }
      }
    setAsksForTravelTime(the_bool);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Distance of ShowDirectionsInformationNuggetJSON is not a number.");
          }
      }
    setDistanceText(the_rational_text);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfMeasureID of ShowDirectionsInformationNuggetJSON is not a string.");
    setUnitOfMeasureID(std::string(json_string->getData()));
  }

void ShowDirectionsInformationNuggetJSON::fromJSONUnitOfLengthSingular(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfLengthSingular of ShowDirectionsInformationNuggetJSON is not a string.");
    setUnitOfLengthSingular(std::string(json_string->getData()));
  }

void ShowDirectionsInformationNuggetJSON::fromJSONUnitOfLengthPlural(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfLengthPlural of ShowDirectionsInformationNuggetJSON is not a string.");
    setUnitOfLengthPlural(std::string(json_string->getData()));
  }

void ShowDirectionsInformationNuggetJSON::fromJSONTravelTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field TravelTime of ShowDirectionsInformationNuggetJSON is not a number.");
          }
      }
    setTravelTimeText(the_rational_text);
  }

void ShowDirectionsInformationNuggetJSON::fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectionState of ShowDirectionsInformationNuggetJSON is not a string.");
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
    throw("The value for field CorrectionState of ShowDirectionsInformationNuggetJSON is not one of the legal strings.");
  enum_is_done:;
    setCorrectionState(the_enum);
  }

ShowDirectionsInformationNuggetJSON::ShowDirectionsInformationNuggetJSON(void) :
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
    extraIndex = create_string_index();
  }

ShowDirectionsInformationNuggetJSON::~ShowDirectionsInformationNuggetJSON(void)
  {
    if (flagHasStartMapLocationSpec)
      {
        storeStartMapLocationSpec->remove_reference();
      }
    if (flagHasDestinationMapLocationSpec)
      {
        storeDestinationMapLocationSpec->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

const char *ShowDirectionsInformationNuggetJSON::getMapNuggetKind(void) const
  {
    return "ShowDirections";
  }

bool ShowDirectionsInformationNuggetJSON::hasStartMapLocationSpec(void) const
  {
    return flagHasStartMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsInformationNuggetJSON::getStartMapLocationSpec(void)
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsInformationNuggetJSON::getStartMapLocationSpec(void) const
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

bool ShowDirectionsInformationNuggetJSON::hasDestinationMapLocationSpec(void) const
  {
    return flagHasDestinationMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsInformationNuggetJSON::getDestinationMapLocationSpec(void)
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsInformationNuggetJSON::getDestinationMapLocationSpec(void) const
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

bool ShowDirectionsInformationNuggetJSON::hasImplicitStart(void) const
  {
    return flagHasImplicitStart;
  }

bool ShowDirectionsInformationNuggetJSON::getImplicitStart(void)
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

const bool ShowDirectionsInformationNuggetJSON::getImplicitStart(void) const
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

bool ShowDirectionsInformationNuggetJSON::hasNavigationMethod(void) const
  {
    return flagHasNavigationMethod;
  }

ShowDirectionsInformationNuggetJSON::TypeNavigationMethod ShowDirectionsInformationNuggetJSON::getNavigationMethod(void)
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const ShowDirectionsInformationNuggetJSON::TypeNavigationMethod ShowDirectionsInformationNuggetJSON::getNavigationMethod(void) const
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const char *ShowDirectionsInformationNuggetJSON::getNavigationMethodAsChars(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

std::string ShowDirectionsInformationNuggetJSON::getNavigationMethodAsString(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

bool ShowDirectionsInformationNuggetJSON::hasNavigate(void) const
  {
    return flagHasNavigate;
  }

bool ShowDirectionsInformationNuggetJSON::getNavigate(void)
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

const bool ShowDirectionsInformationNuggetJSON::getNavigate(void) const
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

bool ShowDirectionsInformationNuggetJSON::hasAsksForDistance(void) const
  {
    return flagHasAsksForDistance;
  }

bool ShowDirectionsInformationNuggetJSON::getAsksForDistance(void)
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

const bool ShowDirectionsInformationNuggetJSON::getAsksForDistance(void) const
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

bool ShowDirectionsInformationNuggetJSON::hasAsksForTravelTime(void) const
  {
    return flagHasAsksForTravelTime;
  }

bool ShowDirectionsInformationNuggetJSON::getAsksForTravelTime(void)
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

const bool ShowDirectionsInformationNuggetJSON::getAsksForTravelTime(void) const
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

bool ShowDirectionsInformationNuggetJSON::hasDistance(void) const
  {
    return flagHasDistance;
  }

double ShowDirectionsInformationNuggetJSON::getDistance(void)
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

const double ShowDirectionsInformationNuggetJSON::getDistance(void) const
  {
    assert(flagHasDistance);
    if (textStoreDistance != "")
      {
        return atof(textStoreDistance.c_str());
      }
    return storeDistance;
  }

std::string ShowDirectionsInformationNuggetJSON::getDistanceAsText(void) const
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

bool ShowDirectionsInformationNuggetJSON::hasUnitOfMeasureID(void) const
  {
    return flagHasUnitOfMeasureID;
  }

std::string ShowDirectionsInformationNuggetJSON::getUnitOfMeasureID(void)
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

const std::string ShowDirectionsInformationNuggetJSON::getUnitOfMeasureID(void) const
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

bool ShowDirectionsInformationNuggetJSON::hasUnitOfLengthSingular(void) const
  {
    return flagHasUnitOfLengthSingular;
  }

std::string ShowDirectionsInformationNuggetJSON::getUnitOfLengthSingular(void)
  {
    assert(flagHasUnitOfLengthSingular);
    return storeUnitOfLengthSingular;
  }

const std::string ShowDirectionsInformationNuggetJSON::getUnitOfLengthSingular(void) const
  {
    assert(flagHasUnitOfLengthSingular);
    return storeUnitOfLengthSingular;
  }

bool ShowDirectionsInformationNuggetJSON::hasUnitOfLengthPlural(void) const
  {
    return flagHasUnitOfLengthPlural;
  }

std::string ShowDirectionsInformationNuggetJSON::getUnitOfLengthPlural(void)
  {
    assert(flagHasUnitOfLengthPlural);
    return storeUnitOfLengthPlural;
  }

const std::string ShowDirectionsInformationNuggetJSON::getUnitOfLengthPlural(void) const
  {
    assert(flagHasUnitOfLengthPlural);
    return storeUnitOfLengthPlural;
  }

bool ShowDirectionsInformationNuggetJSON::hasTravelTime(void) const
  {
    return flagHasTravelTime;
  }

double ShowDirectionsInformationNuggetJSON::getTravelTime(void)
  {
    assert(flagHasTravelTime);
    if (textStoreTravelTime != "")
      {
        return atof(textStoreTravelTime.c_str());
      }
    return storeTravelTime;
  }

const double ShowDirectionsInformationNuggetJSON::getTravelTime(void) const
  {
    assert(flagHasTravelTime);
    if (textStoreTravelTime != "")
      {
        return atof(textStoreTravelTime.c_str());
      }
    return storeTravelTime;
  }

std::string ShowDirectionsInformationNuggetJSON::getTravelTimeAsText(void) const
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

bool ShowDirectionsInformationNuggetJSON::hasCorrectionState(void) const
  {
    return flagHasCorrectionState;
  }

ShowDirectionsInformationNuggetJSON::TypeCorrectionState ShowDirectionsInformationNuggetJSON::getCorrectionState(void)
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const ShowDirectionsInformationNuggetJSON::TypeCorrectionState ShowDirectionsInformationNuggetJSON::getCorrectionState(void) const
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const char *ShowDirectionsInformationNuggetJSON::getCorrectionStateAsChars(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

std::string ShowDirectionsInformationNuggetJSON::getCorrectionStateAsString(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

ShowDirectionsInformationNuggetJSON *ShowDirectionsInformationNuggetJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowDirectionsInformationNuggetJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsInformationNuggetJSON>, ShowDirectionsInformationNuggetJSON *, bool> generator("Type ShowDirectionsInformationNugget", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
