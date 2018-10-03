/* file "SportsOlympicsAPIEventScheduleJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsAPIEventScheduleJSON.h"

#include "SportsOlympicsAPIEventScheduleJSON.h"


SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::TypesportJSON(const TypesportJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::operator=(const TypesportJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypesportJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypesportJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::TypesportJSON(void) :
        flagHasid(false),
        flagHasname(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::~TypesportJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::TypecategoryJSON(const TypecategoryJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::operator=(const TypecategoryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypecategoryJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypecategoryJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::TypecategoryJSON(void) :
        flagHasid(false),
        flagHasname(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::~TypecategoryJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypetournamentJSON(const TypetournamentJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::operator=(const TypetournamentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::fromJSONsport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypesportJSON *convert_classy = TypesportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setsport(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::fromJSONcategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypecategoryJSON *convert_classy = TypecategoryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setcategory(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypetournamentJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypetournamentJSON(void) :
        flagHassport(false),
        flagHascategory(false),
        flagHasid(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::~TypetournamentJSON(void)
  {
    if (flagHassport)
      {
        storesport->remove_reference();
      }
    if (flagHascategory)
      {
        storecategory->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::hassport(void) const
  {
    return flagHassport;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getsport(void)
  {
    assert(flagHassport);
    return storesport;
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getsport(void) const
  {
    assert(flagHassport);
    return storesport;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::hascategory(void) const
  {
    return flagHascategory;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getcategory(void)
  {
    assert(flagHascategory);
    return storecategory;
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getcategory(void) const
  {
    assert(flagHascategory);
    return storecategory;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::TypestagesJSON(const TypestagesJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::operator=(const TypestagesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypestagesJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypestagesJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::fromJSONscheduled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field scheduled of TypestagesJSON is not a string.");
    setscheduled(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::TypestagesJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHasscheduled(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::~TypestagesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::hasscheduled(void) const
  {
    return flagHasscheduled;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getscheduled(void)
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::getscheduled(void) const
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::TypecompetitorsJSON(const TypecompetitorsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::operator=(const TypecompetitorsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypecompetitorsJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypecompetitorsJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONcountry(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field country of TypecompetitorsJSON is not a string.");
    setcountry(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONcountry_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field country_code of TypecompetitorsJSON is not a string.");
    setcountry_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONioc_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ioc_code of TypecompetitorsJSON is not a string.");
    setioc_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONabbreviation(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field abbreviation of TypecompetitorsJSON is not a string.");
    setabbreviation(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::fromJSONqualifier(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field qualifier of TypecompetitorsJSON is not a string.");
    setqualifier(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::TypecompetitorsJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHascountry(false),
        flagHascountry_code(false),
        flagHasioc_code(false),
        flagHasabbreviation(false),
        flagHasqualifier(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::~TypecompetitorsJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hascountry(void) const
  {
    return flagHascountry;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getcountry(void)
  {
    assert(flagHascountry);
    return storecountry;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getcountry(void) const
  {
    assert(flagHascountry);
    return storecountry;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hascountry_code(void) const
  {
    return flagHascountry_code;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getcountry_code(void)
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getcountry_code(void) const
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hasioc_code(void) const
  {
    return flagHasioc_code;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getioc_code(void)
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getioc_code(void) const
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hasabbreviation(void) const
  {
    return flagHasabbreviation;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getabbreviation(void)
  {
    assert(flagHasabbreviation);
    return storeabbreviation;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getabbreviation(void) const
  {
    assert(flagHasabbreviation);
    return storeabbreviation;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::hasqualifier(void) const
  {
    return flagHasqualifier;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getqualifier(void)
  {
    assert(flagHasqualifier);
    return storequalifier;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::getqualifier(void) const
  {
    assert(flagHasqualifier);
    return storequalifier;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::Typesport_eventsJSON(const Typesport_eventsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON &SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::operator=(const Typesport_eventsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of Typesport_eventsJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of Typesport_eventsJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONscheduled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field scheduled of Typesport_eventsJSON is not a string.");
    setscheduled(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONstart_time_tbd(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field start_time_tbd of Typesport_eventsJSON is not true for false.");
          }
      }
    setstart_time_tbd(the_bool);
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONstatus(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field status of Typesport_eventsJSON is not a string.");
    setstatus(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONtournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypetournamentJSON *convert_classy = TypetournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    settournament(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONstages(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field stages of Typesport_eventsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypestagesJSON * > vector_stages1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypestagesJSON *convert_classy = TypestagesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_stages1[num1] = convert_classy;
      }
    initstages();
    for (size_t num4 = 0; num4 < vector_stages1.size(); ++num4)
        appendstages(vector_stages1[num4]);
    for (size_t num1 = 0; num1 < vector_stages1.size(); ++num1)
      {
        vector_stages1[num1]->remove_reference();
      }
  }

void SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::fromJSONcompetitors(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field competitors of Typesport_eventsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypecompetitorsJSON * > vector_competitors1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypecompetitorsJSON *convert_classy = TypecompetitorsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_competitors1[num1] = convert_classy;
      }
    initcompetitors();
    for (size_t num5 = 0; num5 < vector_competitors1.size(); ++num5)
        appendcompetitors(vector_competitors1[num5]);
    for (size_t num1 = 0; num1 < vector_competitors1.size(); ++num1)
      {
        vector_competitors1[num1]->remove_reference();
      }
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::Typesport_eventsJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHasscheduled(false),
        flagHasstart_time_tbd(false),
        flagHasstatus(false),
        flagHastournament(false),
        flagHasstages(false),
        flagHascompetitors(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::~Typesport_eventsJSON(void)
  {
    if (flagHastournament)
      {
        storetournament->remove_reference();
      }
    if (flagHasstages)
      {
        for (size_t num10 = 0; num10 < storestages.size(); ++num10)
          {
            storestages[num10]->remove_reference();
          }
      }
    if (flagHascompetitors)
      {
        for (size_t num11 = 0; num11 < storecompetitors.size(); ++num11)
          {
            storecompetitors[num11]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasscheduled(void) const
  {
    return flagHasscheduled;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getscheduled(void)
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getscheduled(void) const
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasstart_time_tbd(void) const
  {
    return flagHasstart_time_tbd;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstart_time_tbd(void)
  {
    assert(flagHasstart_time_tbd);
    return storestart_time_tbd;
  }

const bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstart_time_tbd(void) const
  {
    assert(flagHasstart_time_tbd);
    return storestart_time_tbd;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasstatus(void) const
  {
    return flagHasstatus;
  }

std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstatus(void)
  {
    assert(flagHasstatus);
    return storestatus;
  }

const std::string SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstatus(void) const
  {
    assert(flagHasstatus);
    return storestatus;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hastournament(void) const
  {
    return flagHastournament;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::gettournament(void)
  {
    assert(flagHastournament);
    return storetournament;
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::gettournament(void) const
  {
    assert(flagHastournament);
    return storetournament;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hasstages(void) const
  {
    return flagHasstages;
  }

size_t SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::countOfstages(void) const
  {
    assert(flagHasstages);
    return storestages.size();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::elementOfstages(size_t element_num)
  {
    assert(flagHasstages);
    return storestages[element_num];
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::elementOfstages(size_t element_num) const
  {
    assert(flagHasstages);
    return storestages[element_num];
  }

std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON * > SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstages(void)
  {
    assert(flagHasstages);
    return storestages;
  }

const std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON * > SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getstages(void) const
  {
    assert(flagHasstages);
    return storestages;
  }

bool SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::hascompetitors(void) const
  {
    return flagHascompetitors;
  }

size_t SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::countOfcompetitors(void) const
  {
    assert(flagHascompetitors);
    return storecompetitors.size();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::elementOfcompetitors(size_t element_num)
  {
    assert(flagHascompetitors);
    return storecompetitors[element_num];
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON * SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::elementOfcompetitors(size_t element_num) const
  {
    assert(flagHascompetitors);
    return storecompetitors[element_num];
  }

std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON * > SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getcompetitors(void)
  {
    assert(flagHascompetitors);
    return storecompetitors;
  }

const std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON * > SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::getcompetitors(void) const
  {
    assert(flagHascompetitors);
    return storecompetitors;
  }

SportsOlympicsAPIEventScheduleJSON::SportsOlympicsAPIEventScheduleJSON(const SportsOlympicsAPIEventScheduleJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventScheduleJSON &SportsOlympicsAPIEventScheduleJSON::operator=(const SportsOlympicsAPIEventScheduleJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventScheduleJSON::fromJSONsport_events(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field sport_events of SportsOlympicsAPIEventScheduleJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< Typesport_eventsJSON * > vector_sport_events1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        Typesport_eventsJSON *convert_classy = Typesport_eventsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_sport_events1[num1] = convert_classy;
      }
    initsport_events();
    for (size_t num6 = 0; num6 < vector_sport_events1.size(); ++num6)
        appendsport_events(vector_sport_events1[num6]);
    for (size_t num1 = 0; num1 < vector_sport_events1.size(); ++num1)
      {
        vector_sport_events1[num1]->remove_reference();
      }
  }

SportsOlympicsAPIEventScheduleJSON::SportsOlympicsAPIEventScheduleJSON(void) :
        flagHassport_events(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventScheduleJSON::~SportsOlympicsAPIEventScheduleJSON(void)
  {
    if (flagHassport_events)
      {
        for (size_t num16 = 0; num16 < storesport_events.size(); ++num16)
          {
            storesport_events[num16]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventScheduleJSON::hassport_events(void) const
  {
    return flagHassport_events;
  }

size_t SportsOlympicsAPIEventScheduleJSON::countOfsport_events(void) const
  {
    assert(flagHassport_events);
    return storesport_events.size();
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON * SportsOlympicsAPIEventScheduleJSON::elementOfsport_events(size_t element_num)
  {
    assert(flagHassport_events);
    return storesport_events[element_num];
  }

const SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON * SportsOlympicsAPIEventScheduleJSON::elementOfsport_events(size_t element_num) const
  {
    assert(flagHassport_events);
    return storesport_events[element_num];
  }

std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON * > SportsOlympicsAPIEventScheduleJSON::getsport_events(void)
  {
    assert(flagHassport_events);
    return storesport_events;
  }

const std::vector< SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON * > SportsOlympicsAPIEventScheduleJSON::getsport_events(void) const
  {
    assert(flagHassport_events);
    return storesport_events;
  }

SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypesportJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypesportJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypesportJSON>, TypesportJSON *, bool> generator("Type Typesport", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::TypecategoryJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypecategoryJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypecategoryJSON>, TypecategoryJSON *, bool> generator("Type Typecategory", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypetournamentJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypetournamentJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypetournamentJSON>, TypetournamentJSON *, bool> generator("Type Typetournament", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypestagesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypestagesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypestagesJSON>, TypestagesJSON *, bool> generator("Type Typestages", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::TypecompetitorsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypecompetitorsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypecompetitorsJSON>, TypecompetitorsJSON *, bool> generator("Type Typecompetitors", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON *SportsOlympicsAPIEventScheduleJSON::Typesport_eventsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typesport_eventsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typesport_eventsJSON>, Typesport_eventsJSON *, bool> generator("Type Typesport_events", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventScheduleJSON *SportsOlympicsAPIEventScheduleJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsAPIEventScheduleJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventScheduleJSON>, SportsOlympicsAPIEventScheduleJSON *, bool> generator("Type SportsOlympicsAPIEventSchedule", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
