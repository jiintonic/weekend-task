/* file "HereAPIRoutingJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "HereAPIRoutingJSON.h"

#include "HereAPIRoutingJSON.h"


HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::TypesummaryJSON(const TypesummaryJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::operator=(const TypesummaryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::fromJSONdistance(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field distance of TypesummaryJSON is not a number.");
          }
      }
    setdistanceText(the_rational_text);
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::fromJSONtravelTime(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field travelTime of TypesummaryJSON is not a number.");
          }
      }
    settravelTimeText(the_rational_text);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::TypesummaryJSON(void) :
        flagHasdistance(false),
        flagHastravelTime(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::~TypesummaryJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::hasdistance(void) const
  {
    return flagHasdistance;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::getdistance(void)
  {
    assert(flagHasdistance);
    if (textStoredistance != "")
      {
        return atof(textStoredistance.c_str());
      }
    return storedistance;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::getdistance(void) const
  {
    assert(flagHasdistance);
    if (textStoredistance != "")
      {
        return atof(textStoredistance.c_str());
      }
    return storedistance;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::getdistanceAsText(void) const
  {
    assert(flagHasdistance);
    if (textStoredistance == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storedistance);
        return &(buffer[0]);
      }
    else
      {
        return (textStoredistance);
      }
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::hastravelTime(void) const
  {
    return flagHastravelTime;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::gettravelTime(void)
  {
    assert(flagHastravelTime);
    if (textStoretravelTime != "")
      {
        return atof(textStoretravelTime.c_str());
      }
    return storetravelTime;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::gettravelTime(void) const
  {
    assert(flagHastravelTime);
    if (textStoretravelTime != "")
      {
        return atof(textStoretravelTime.c_str());
      }
    return storetravelTime;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::gettravelTimeAsText(void) const
  {
    assert(flagHastravelTime);
    if (textStoretravelTime == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storetravelTime);
        return &(buffer[0]);
      }
    else
      {
        return (textStoretravelTime);
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::TypemappedPositionJSON(const TypemappedPositionJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::operator=(const TypemappedPositionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of TypemappedPositionJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of TypemappedPositionJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::TypemappedPositionJSON(void) :
        flagHaslatitude(false),
        flagHaslongitude(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::~TypemappedPositionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlatitudeAsText(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelatitude);
      }
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::getlongitudeAsText(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelongitude);
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypestartJSON(const TypestartJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::operator=(const TypestartJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::fromJSONmappedPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypemappedPositionJSON *convert_classy = TypemappedPositionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setmappedPosition(convert_classy);
    convert_classy->remove_reference();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypestartJSON(void) :
        flagHasmappedPosition(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::~TypestartJSON(void)
  {
    if (flagHasmappedPosition)
      {
        storemappedPosition->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::hasmappedPosition(void) const
  {
    return flagHasmappedPosition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::getmappedPosition(void)
  {
    assert(flagHasmappedPosition);
    return storemappedPosition;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::getmappedPosition(void) const
  {
    assert(flagHasmappedPosition);
    return storemappedPosition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::TypemappedPositionJSON(const TypemappedPositionJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::operator=(const TypemappedPositionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of TypemappedPositionJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of TypemappedPositionJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::TypemappedPositionJSON(void) :
        flagHaslatitude(false),
        flagHaslongitude(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::~TypemappedPositionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlatitudeAsText(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelatitude);
      }
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::getlongitudeAsText(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelongitude);
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypeendJSON(const TypeendJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::operator=(const TypeendJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::fromJSONmappedPosition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypemappedPositionJSON *convert_classy = TypemappedPositionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setmappedPosition(convert_classy);
    convert_classy->remove_reference();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypeendJSON(void) :
        flagHasmappedPosition(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::~TypeendJSON(void)
  {
    if (flagHasmappedPosition)
      {
        storemappedPosition->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::hasmappedPosition(void) const
  {
    return flagHasmappedPosition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::getmappedPosition(void)
  {
    assert(flagHasmappedPosition);
    return storemappedPosition;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::getmappedPosition(void) const
  {
    assert(flagHasmappedPosition);
    return storemappedPosition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::TypepositionJSON(const TypepositionJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::operator=(const TypepositionJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::fromJSONlatitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field latitude of TypepositionJSON is not a number.");
          }
      }
    setlatitudeText(the_rational_text);
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::fromJSONlongitude(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field longitude of TypepositionJSON is not a number.");
          }
      }
    setlongitudeText(the_rational_text);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::TypepositionJSON(void) :
        flagHaslatitude(false),
        flagHaslongitude(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::~TypepositionJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::haslatitude(void) const
  {
    return flagHaslatitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlatitude(void)
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlatitude(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude != "")
      {
        return atof(textStorelatitude.c_str());
      }
    return storelatitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlatitudeAsText(void) const
  {
    assert(flagHaslatitude);
    if (textStorelatitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelatitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelatitude);
      }
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::haslongitude(void) const
  {
    return flagHaslongitude;
  }

double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlongitude(void)
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

const double HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlongitude(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude != "")
      {
        return atof(textStorelongitude.c_str());
      }
    return storelongitude;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::getlongitudeAsText(void) const
  {
    assert(flagHaslongitude);
    if (textStorelongitude == "")
      {
        char buffer[100];
        sprintf(&(buffer[0]), "%g", storelongitude);
        return &(buffer[0]);
      }
    else
      {
        return (textStorelongitude);
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypemaneuverJSON(const TypemaneuverJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::operator=(const TypemaneuverJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::fromJSONinstruction(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field instruction of TypemaneuverJSON is not a string.");
    setinstruction(std::string(json_string->getData()));
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::fromJSONposition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypepositionJSON *convert_classy = TypepositionJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setposition(convert_classy);
    convert_classy->remove_reference();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypemaneuverJSON(void) :
        flagHasinstruction(false),
        flagHasposition(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::~TypemaneuverJSON(void)
  {
    if (flagHasposition)
      {
        storeposition->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::hasinstruction(void) const
  {
    return flagHasinstruction;
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::getinstruction(void)
  {
    assert(flagHasinstruction);
    return storeinstruction;
  }

const std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::getinstruction(void) const
  {
    assert(flagHasinstruction);
    return storeinstruction;
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::hasposition(void) const
  {
    return flagHasposition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::getposition(void)
  {
    assert(flagHasposition);
    return storeposition;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::getposition(void) const
  {
    assert(flagHasposition);
    return storeposition;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypelegJSON(const TypelegJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::operator=(const TypelegJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::fromJSONstart(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypestartJSON *convert_classy = TypestartJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setstart(convert_classy);
    convert_classy->remove_reference();
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::fromJSONend(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeendJSON *convert_classy = TypeendJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setend(convert_classy);
    convert_classy->remove_reference();
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::fromJSONmaneuver(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field maneuver of TypelegJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field maneuver of TypelegJSON has too few elements.");
    std::vector< TypemaneuverJSON * > vector_maneuver1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypemaneuverJSON *convert_classy = TypemaneuverJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_maneuver1[num1] = convert_classy;
      }
    assert(vector_maneuver1.size() >= 1);
    initmaneuver();
    for (size_t num5 = 0; num5 < vector_maneuver1.size(); ++num5)
        appendmaneuver(vector_maneuver1[num5]);
    for (size_t num1 = 0; num1 < vector_maneuver1.size(); ++num1)
      {
        vector_maneuver1[num1]->remove_reference();
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypelegJSON(void) :
        flagHasstart(false),
        flagHasend(false),
        flagHasmaneuver(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::~TypelegJSON(void)
  {
    if (flagHasstart)
      {
        storestart->remove_reference();
      }
    if (flagHasend)
      {
        storeend->remove_reference();
      }
    if (flagHasmaneuver)
      {
        for (size_t num10 = 0; num10 < storemaneuver.size(); ++num10)
          {
            storemaneuver[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::hasstart(void) const
  {
    return flagHasstart;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getstart(void)
  {
    assert(flagHasstart);
    return storestart;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getstart(void) const
  {
    assert(flagHasstart);
    return storestart;
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::hasend(void) const
  {
    return flagHasend;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getend(void)
  {
    assert(flagHasend);
    return storeend;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getend(void) const
  {
    assert(flagHasend);
    return storeend;
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::hasmaneuver(void) const
  {
    return flagHasmaneuver;
  }

size_t HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::countOfmaneuver(void) const
  {
    assert(flagHasmaneuver);
    return storemaneuver.size();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::elementOfmaneuver(size_t element_num)
  {
    assert(flagHasmaneuver);
    return storemaneuver[element_num];
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::elementOfmaneuver(size_t element_num) const
  {
    assert(flagHasmaneuver);
    return storemaneuver[element_num];
  }

std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON * > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getmaneuver(void)
  {
    assert(flagHasmaneuver);
    return storemaneuver;
  }

const std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON * > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::getmaneuver(void) const
  {
    assert(flagHasmaneuver);
    return storemaneuver;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TyperouteJSON(const TyperouteJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON &HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::operator=(const TyperouteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::fromJSONsummary(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypesummaryJSON *convert_classy = TypesummaryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setsummary(convert_classy);
    convert_classy->remove_reference();
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::fromJSONshape(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field shape of TyperouteJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field shape of TyperouteJSON has too few elements.");
    std::vector< std::string > vector_shape1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field shape of TyperouteJSON is not a string.");
        vector_shape1[num1] = std::string(json_string->getData());
      }
    assert(vector_shape1.size() >= 2);
    initshape();
    for (size_t num6 = 0; num6 < vector_shape1.size(); ++num6)
        appendshape(vector_shape1[num6]);
    for (size_t num1 = 0; num1 < vector_shape1.size(); ++num1)
      {
      }
  }

void HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::fromJSONleg(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field leg of TyperouteJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 2)
        throw("The value for field leg of TyperouteJSON has too few elements.");
    std::vector< TypelegJSON * > vector_leg1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypelegJSON *convert_classy = TypelegJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_leg1[num1] = convert_classy;
      }
    assert(vector_leg1.size() >= 2);
    initleg();
    for (size_t num7 = 0; num7 < vector_leg1.size(); ++num7)
        appendleg(vector_leg1[num7]);
    for (size_t num1 = 0; num1 < vector_leg1.size(); ++num1)
      {
        vector_leg1[num1]->remove_reference();
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TyperouteJSON(void) :
        flagHassummary(false),
        flagHasshape(false),
        flagHasleg(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::~TyperouteJSON(void)
  {
    if (flagHassummary)
      {
        storesummary->remove_reference();
      }
    if (flagHasleg)
      {
        for (size_t num13 = 0; num13 < storeleg.size(); ++num13)
          {
            storeleg[num13]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::hassummary(void) const
  {
    return flagHassummary;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getsummary(void)
  {
    assert(flagHassummary);
    return storesummary;
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getsummary(void) const
  {
    assert(flagHassummary);
    return storesummary;
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::hasshape(void) const
  {
    return flagHasshape;
  }

size_t HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::countOfshape(void) const
  {
    assert(flagHasshape);
    return storeshape.size();
  }

std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::elementOfshape(size_t element_num)
  {
    assert(flagHasshape);
    return storeshape[element_num];
  }

const std::string HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::elementOfshape(size_t element_num) const
  {
    assert(flagHasshape);
    return storeshape[element_num];
  }

std::vector< std::string > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getshape(void)
  {
    assert(flagHasshape);
    return storeshape;
  }

const std::vector< std::string > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getshape(void) const
  {
    assert(flagHasshape);
    return storeshape;
  }

bool HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::hasleg(void) const
  {
    return flagHasleg;
  }

size_t HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::countOfleg(void) const
  {
    assert(flagHasleg);
    return storeleg.size();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::elementOfleg(size_t element_num)
  {
    assert(flagHasleg);
    return storeleg[element_num];
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON * HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::elementOfleg(size_t element_num) const
  {
    assert(flagHasleg);
    return storeleg[element_num];
  }

std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON * > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getleg(void)
  {
    assert(flagHasleg);
    return storeleg;
  }

const std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON * > HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::getleg(void) const
  {
    assert(flagHasleg);
    return storeleg;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperesponseJSON(const TyperesponseJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON::TyperesponseJSON &HereAPIRoutingJSON::TyperesponseJSON::operator=(const TyperesponseJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::TyperesponseJSON::fromJSONroute(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field route of TyperesponseJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field route of TyperesponseJSON has too few elements.");
    std::vector< TyperouteJSON * > vector_route1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TyperouteJSON *convert_classy = TyperouteJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_route1[num1] = convert_classy;
      }
    assert(vector_route1.size() >= 1);
    initroute();
    for (size_t num8 = 0; num8 < vector_route1.size(); ++num8)
        appendroute(vector_route1[num8]);
    for (size_t num1 = 0; num1 < vector_route1.size(); ++num1)
      {
        vector_route1[num1]->remove_reference();
      }
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperesponseJSON(void) :
        flagHasroute(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::TyperesponseJSON::~TyperesponseJSON(void)
  {
    if (flagHasroute)
      {
        for (size_t num16 = 0; num16 < storeroute.size(); ++num16)
          {
            storeroute[num16]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::TyperesponseJSON::hasroute(void) const
  {
    return flagHasroute;
  }

size_t HereAPIRoutingJSON::TyperesponseJSON::countOfroute(void) const
  {
    assert(flagHasroute);
    return storeroute.size();
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON * HereAPIRoutingJSON::TyperesponseJSON::elementOfroute(size_t element_num)
  {
    assert(flagHasroute);
    return storeroute[element_num];
  }

const HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON * HereAPIRoutingJSON::TyperesponseJSON::elementOfroute(size_t element_num) const
  {
    assert(flagHasroute);
    return storeroute[element_num];
  }

std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON * > HereAPIRoutingJSON::TyperesponseJSON::getroute(void)
  {
    assert(flagHasroute);
    return storeroute;
  }

const std::vector< HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON * > HereAPIRoutingJSON::TyperesponseJSON::getroute(void) const
  {
    assert(flagHasroute);
    return storeroute;
  }

HereAPIRoutingJSON::HereAPIRoutingJSON(const HereAPIRoutingJSON &)
  {
    assert(false);
  }

HereAPIRoutingJSON &HereAPIRoutingJSON::operator=(const HereAPIRoutingJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void HereAPIRoutingJSON::fromJSONresponse(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TyperesponseJSON *convert_classy = TyperesponseJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setresponse(convert_classy);
    convert_classy->remove_reference();
  }

HereAPIRoutingJSON::HereAPIRoutingJSON(void) :
        flagHasresponse(false)
  {
    extraIndex = create_string_index();
  }

HereAPIRoutingJSON::~HereAPIRoutingJSON(void)
  {
    if (flagHasresponse)
      {
        storeresponse->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool HereAPIRoutingJSON::hasresponse(void) const
  {
    return flagHasresponse;
  }

HereAPIRoutingJSON::TyperesponseJSON * HereAPIRoutingJSON::getresponse(void)
  {
    assert(flagHasresponse);
    return storeresponse;
  }

const HereAPIRoutingJSON::TyperesponseJSON * HereAPIRoutingJSON::getresponse(void) const
  {
    assert(flagHasresponse);
    return storeresponse;
  }

HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypesummaryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypesummaryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypesummaryJSON>, TypesummaryJSON *, bool> generator("Type Typesummary", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::TypemappedPositionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypemappedPositionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypestartJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypestartJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypestartJSON>, TypestartJSON *, bool> generator("Type Typestart", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::TypemappedPositionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypemappedPositionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypemappedPositionJSON>, TypemappedPositionJSON *, bool> generator("Type TypemappedPosition", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypeendJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeendJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeendJSON>, TypeendJSON *, bool> generator("Type Typeend", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::TypepositionJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypepositionJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypepositionJSON>, TypepositionJSON *, bool> generator("Type Typeposition", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::TypemaneuverJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypemaneuverJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypemaneuverJSON>, TypemaneuverJSON *, bool> generator("Type Typemaneuver", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::TypelegJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypelegJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypelegJSON>, TypelegJSON *, bool> generator("Type Typeleg", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON *HereAPIRoutingJSON::TyperesponseJSON::TyperouteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TyperouteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TyperouteJSON>, TyperouteJSON *, bool> generator("Type Typeroute", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON::TyperesponseJSON *HereAPIRoutingJSON::TyperesponseJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TyperesponseJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TyperesponseJSON>, TyperesponseJSON *, bool> generator("Type Typeresponse", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
HereAPIRoutingJSON *HereAPIRoutingJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    HereAPIRoutingJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<HereAPIRoutingJSON>, HereAPIRoutingJSON *, bool> generator("Type HereAPIRouting", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
