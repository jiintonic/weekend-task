/* file "ShowDirectionsQueryStateJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ShowDirectionsQueryStateJSON.h"

#include "ShowDirectionsQueryStateJSON.h"


ShowDirectionsQueryStateJSON::TypeNavigationMethod ShowDirectionsQueryStateJSON::stringToNavigationMethod(const char *chars)
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

const char *ShowDirectionsQueryStateJSON::stringFromNavigationMethod(TypeNavigationMethod the_enum)
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

ShowDirectionsQueryStateJSON::TypeCorrectionState ShowDirectionsQueryStateJSON::stringToCorrectionState(const char *chars)
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

const char *ShowDirectionsQueryStateJSON::stringFromCorrectionState(TypeCorrectionState the_enum)
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

ShowDirectionsQueryStateJSON::ShowDirectionsQueryStateJSON(const ShowDirectionsQueryStateJSON &)
  {
    assert(false);
  }

ShowDirectionsQueryStateJSON &ShowDirectionsQueryStateJSON::operator=(const ShowDirectionsQueryStateJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ShowDirectionsQueryStateJSON::fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setStartMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsQueryStateJSON::fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    MapLocationJSON *convert_classy = MapLocationJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setDestinationMapLocationSpec(convert_classy);
    convert_classy->remove_reference();
  }

void ShowDirectionsQueryStateJSON::fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field ImplicitStart of ShowDirectionsQueryStateJSON is not true for false.");
          }
      }
    setImplicitStart(the_bool);
  }

void ShowDirectionsQueryStateJSON::fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field NavigationMethod of ShowDirectionsQueryStateJSON is not a string.");
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
    throw("The value for field NavigationMethod of ShowDirectionsQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setNavigationMethod(the_enum);
  }

void ShowDirectionsQueryStateJSON::fromJSONNavigate(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field Navigate of ShowDirectionsQueryStateJSON is not true for false.");
          }
      }
    setNavigate(the_bool);
  }

void ShowDirectionsQueryStateJSON::fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForDistance of ShowDirectionsQueryStateJSON is not true for false.");
          }
      }
    setAsksForDistance(the_bool);
  }

void ShowDirectionsQueryStateJSON::fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field AsksForTravelTime of ShowDirectionsQueryStateJSON is not true for false.");
          }
      }
    setAsksForTravelTime(the_bool);
  }

void ShowDirectionsQueryStateJSON::fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field UnitOfMeasureID of ShowDirectionsQueryStateJSON is not a string.");
    setUnitOfMeasureID(std::string(json_string->getData()));
  }

void ShowDirectionsQueryStateJSON::fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field CorrectionState of ShowDirectionsQueryStateJSON is not a string.");
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
    throw("The value for field CorrectionState of ShowDirectionsQueryStateJSON is not one of the legal strings.");
  enum_is_done:;
    setCorrectionState(the_enum);
  }

ShowDirectionsQueryStateJSON::ShowDirectionsQueryStateJSON(void) :
        flagHasStartMapLocationSpec(false),
        flagHasDestinationMapLocationSpec(false),
        flagHasImplicitStart(false),
        flagHasNavigationMethod(false),
        flagHasNavigate(false),
        flagHasAsksForDistance(false),
        flagHasAsksForTravelTime(false),
        flagHasUnitOfMeasureID(false),
        flagHasCorrectionState(false)
  {
    extraIndex = create_string_index();
  }

ShowDirectionsQueryStateJSON::~ShowDirectionsQueryStateJSON(void)
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

bool ShowDirectionsQueryStateJSON::hasStartMapLocationSpec(void) const
  {
    return flagHasStartMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsQueryStateJSON::getStartMapLocationSpec(void)
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsQueryStateJSON::getStartMapLocationSpec(void) const
  {
    assert(flagHasStartMapLocationSpec);
    return storeStartMapLocationSpec;
  }

bool ShowDirectionsQueryStateJSON::hasDestinationMapLocationSpec(void) const
  {
    return flagHasDestinationMapLocationSpec;
  }

MapLocationJSON * ShowDirectionsQueryStateJSON::getDestinationMapLocationSpec(void)
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

const MapLocationJSON * ShowDirectionsQueryStateJSON::getDestinationMapLocationSpec(void) const
  {
    assert(flagHasDestinationMapLocationSpec);
    return storeDestinationMapLocationSpec;
  }

bool ShowDirectionsQueryStateJSON::hasImplicitStart(void) const
  {
    return flagHasImplicitStart;
  }

bool ShowDirectionsQueryStateJSON::getImplicitStart(void)
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

const bool ShowDirectionsQueryStateJSON::getImplicitStart(void) const
  {
    assert(flagHasImplicitStart);
    return storeImplicitStart;
  }

bool ShowDirectionsQueryStateJSON::hasNavigationMethod(void) const
  {
    return flagHasNavigationMethod;
  }

ShowDirectionsQueryStateJSON::TypeNavigationMethod ShowDirectionsQueryStateJSON::getNavigationMethod(void)
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const ShowDirectionsQueryStateJSON::TypeNavigationMethod ShowDirectionsQueryStateJSON::getNavigationMethod(void) const
  {
    assert(flagHasNavigationMethod);
    return storeNavigationMethod;
  }

const char *ShowDirectionsQueryStateJSON::getNavigationMethodAsChars(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

std::string ShowDirectionsQueryStateJSON::getNavigationMethodAsString(void) const
  {
    return stringFromNavigationMethod(getNavigationMethod());
  }

bool ShowDirectionsQueryStateJSON::hasNavigate(void) const
  {
    return flagHasNavigate;
  }

bool ShowDirectionsQueryStateJSON::getNavigate(void)
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

const bool ShowDirectionsQueryStateJSON::getNavigate(void) const
  {
    assert(flagHasNavigate);
    return storeNavigate;
  }

bool ShowDirectionsQueryStateJSON::hasAsksForDistance(void) const
  {
    return flagHasAsksForDistance;
  }

bool ShowDirectionsQueryStateJSON::getAsksForDistance(void)
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

const bool ShowDirectionsQueryStateJSON::getAsksForDistance(void) const
  {
    assert(flagHasAsksForDistance);
    return storeAsksForDistance;
  }

bool ShowDirectionsQueryStateJSON::hasAsksForTravelTime(void) const
  {
    return flagHasAsksForTravelTime;
  }

bool ShowDirectionsQueryStateJSON::getAsksForTravelTime(void)
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

const bool ShowDirectionsQueryStateJSON::getAsksForTravelTime(void) const
  {
    assert(flagHasAsksForTravelTime);
    return storeAsksForTravelTime;
  }

bool ShowDirectionsQueryStateJSON::hasUnitOfMeasureID(void) const
  {
    return flagHasUnitOfMeasureID;
  }

std::string ShowDirectionsQueryStateJSON::getUnitOfMeasureID(void)
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

const std::string ShowDirectionsQueryStateJSON::getUnitOfMeasureID(void) const
  {
    assert(flagHasUnitOfMeasureID);
    return storeUnitOfMeasureID;
  }

bool ShowDirectionsQueryStateJSON::hasCorrectionState(void) const
  {
    return flagHasCorrectionState;
  }

ShowDirectionsQueryStateJSON::TypeCorrectionState ShowDirectionsQueryStateJSON::getCorrectionState(void)
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const ShowDirectionsQueryStateJSON::TypeCorrectionState ShowDirectionsQueryStateJSON::getCorrectionState(void) const
  {
    assert(flagHasCorrectionState);
    return storeCorrectionState;
  }

const char *ShowDirectionsQueryStateJSON::getCorrectionStateAsChars(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

std::string ShowDirectionsQueryStateJSON::getCorrectionStateAsString(void) const
  {
    return stringFromCorrectionState(getCorrectionState());
  }

ShowDirectionsQueryStateJSON *ShowDirectionsQueryStateJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ShowDirectionsQueryStateJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsQueryStateJSON>, ShowDirectionsQueryStateJSON *, bool> generator("Type ShowDirectionsQueryState", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
