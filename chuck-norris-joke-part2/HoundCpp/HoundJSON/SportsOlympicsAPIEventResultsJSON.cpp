/* file "SportsOlympicsAPIEventResultsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SportsOlympicsAPIEventResultsJSON.h"

#include "SportsOlympicsAPIEventResultsJSON.h"


SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::TypesportJSON(const TypesportJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::operator=(const TypesportJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypesportJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypesportJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::TypesportJSON(void) :
        flagHasid(false),
        flagHasname(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::~TypesportJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::TypecategoryJSON(const TypecategoryJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::operator=(const TypecategoryJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypecategoryJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypecategoryJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::TypecategoryJSON(void) :
        flagHasid(false),
        flagHasname(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::~TypecategoryJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypetournamentJSON(const TypetournamentJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::operator=(const TypetournamentJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::fromJSONsport(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypesportJSON *convert_classy = TypesportJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setsport(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::fromJSONcategory(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypecategoryJSON *convert_classy = TypecategoryJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setcategory(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypetournamentJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypetournamentJSON(void) :
        flagHassport(false),
        flagHascategory(false),
        flagHasid(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::~TypetournamentJSON(void)
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

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::hassport(void) const
  {
    return flagHassport;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getsport(void)
  {
    assert(flagHassport);
    return storesport;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getsport(void) const
  {
    assert(flagHassport);
    return storesport;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::hascategory(void) const
  {
    return flagHascategory;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getcategory(void)
  {
    assert(flagHascategory);
    return storecategory;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getcategory(void) const
  {
    assert(flagHascategory);
    return storecategory;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::Typesport_eventJSON(const Typesport_eventJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::operator=(const Typesport_eventJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of Typesport_eventJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of Typesport_eventJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::fromJSONscheduled(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field scheduled of Typesport_eventJSON is not a string.");
    setscheduled(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::fromJSONtournament(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypetournamentJSON *convert_classy = TypetournamentJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    settournament(convert_classy);
    convert_classy->remove_reference();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::Typesport_eventJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHasscheduled(false),
        flagHastournament(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::~Typesport_eventJSON(void)
  {
    if (flagHastournament)
      {
        storetournament->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::hasscheduled(void) const
  {
    return flagHasscheduled;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getscheduled(void)
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::getscheduled(void) const
  {
    assert(flagHasscheduled);
    return storescheduled;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::hastournament(void) const
  {
    return flagHastournament;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::gettournament(void)
  {
    assert(flagHastournament);
    return storetournament;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::gettournament(void) const
  {
    assert(flagHastournament);
    return storetournament;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::TypeathleteJSON(const TypeathleteJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::operator=(const TypeathleteJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypeathleteJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypeathleteJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::fromJSONnationality(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field nationality of TypeathleteJSON is not a string.");
    setnationality(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::fromJSONioc_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ioc_code of TypeathleteJSON is not a string.");
    setioc_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::fromJSONgender(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field gender of TypeathleteJSON is not a string.");
    setgender(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::TypeathleteJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHasnationality(false),
        flagHasioc_code(false),
        flagHasgender(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::~TypeathleteJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::hasnationality(void) const
  {
    return flagHasnationality;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getnationality(void)
  {
    assert(flagHasnationality);
    return storenationality;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getnationality(void) const
  {
    assert(flagHasnationality);
    return storenationality;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::hasioc_code(void) const
  {
    return flagHasioc_code;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getioc_code(void)
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getioc_code(void) const
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::hasgender(void) const
  {
    return flagHasgender;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getgender(void)
  {
    assert(flagHasgender);
    return storegender;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::getgender(void) const
  {
    assert(flagHasgender);
    return storegender;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::TypeathletesJSON(const TypeathletesJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::operator=(const TypeathletesJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypeathletesJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypeathletesJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::fromJSONnationality(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field nationality of TypeathletesJSON is not a string.");
    setnationality(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::fromJSONioc_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ioc_code of TypeathletesJSON is not a string.");
    setioc_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::fromJSONgender(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field gender of TypeathletesJSON is not a string.");
    setgender(std::string(json_string->getData()));
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::TypeathletesJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHasnationality(false),
        flagHasioc_code(false),
        flagHasgender(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::~TypeathletesJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::hasnationality(void) const
  {
    return flagHasnationality;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getnationality(void)
  {
    assert(flagHasnationality);
    return storenationality;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getnationality(void) const
  {
    assert(flagHasnationality);
    return storenationality;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::hasioc_code(void) const
  {
    return flagHasioc_code;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getioc_code(void)
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getioc_code(void) const
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::hasgender(void) const
  {
    return flagHasgender;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getgender(void)
  {
    assert(flagHasgender);
    return storegender;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::getgender(void) const
  {
    assert(flagHasgender);
    return storegender;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypecompetitorJSON(const TypecompetitorJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::operator=(const TypecompetitorJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONid(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field id of TypecompetitorJSON is not a string.");
    setid(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONname(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field name of TypecompetitorJSON is not a string.");
    setname(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONcountry_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field country_code of TypecompetitorJSON is not a string.");
    setcountry_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONioc_code(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field ioc_code of TypecompetitorJSON is not a string.");
    setioc_code(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONathlete(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeathleteJSON *convert_classy = TypeathleteJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setathlete(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::fromJSONathletes(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field athletes of TypecompetitorJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TypeathletesJSON * > vector_athletes1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeathletesJSON *convert_classy = TypeathletesJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_athletes1[num1] = convert_classy;
      }
    initathletes();
    for (size_t num4 = 0; num4 < vector_athletes1.size(); ++num4)
        appendathletes(vector_athletes1[num4]);
    for (size_t num1 = 0; num1 < vector_athletes1.size(); ++num1)
      {
        vector_athletes1[num1]->remove_reference();
      }
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypecompetitorJSON(void) :
        flagHasid(false),
        flagHasname(false),
        flagHascountry_code(false),
        flagHasioc_code(false),
        flagHasathlete(false),
        flagHasathletes(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::~TypecompetitorJSON(void)
  {
    if (flagHasathlete)
      {
        storeathlete->remove_reference();
      }
    if (flagHasathletes)
      {
        for (size_t num13 = 0; num13 < storeathletes.size(); ++num13)
          {
            storeathletes[num13]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hasid(void) const
  {
    return flagHasid;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getid(void)
  {
    assert(flagHasid);
    return storeid;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getid(void) const
  {
    assert(flagHasid);
    return storeid;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hasname(void) const
  {
    return flagHasname;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getname(void)
  {
    assert(flagHasname);
    return storename;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getname(void) const
  {
    assert(flagHasname);
    return storename;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hascountry_code(void) const
  {
    return flagHascountry_code;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getcountry_code(void)
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getcountry_code(void) const
  {
    assert(flagHascountry_code);
    return storecountry_code;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hasioc_code(void) const
  {
    return flagHasioc_code;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getioc_code(void)
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getioc_code(void) const
  {
    assert(flagHasioc_code);
    return storeioc_code;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hasathlete(void) const
  {
    return flagHasathlete;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getathlete(void)
  {
    assert(flagHasathlete);
    return storeathlete;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getathlete(void) const
  {
    assert(flagHasathlete);
    return storeathlete;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::hasathletes(void) const
  {
    return flagHasathletes;
  }

size_t SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::countOfathletes(void) const
  {
    assert(flagHasathletes);
    return storeathletes.size();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::elementOfathletes(size_t element_num)
  {
    assert(flagHasathletes);
    return storeathletes[element_num];
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::elementOfathletes(size_t element_num) const
  {
    assert(flagHasathletes);
    return storeathletes[element_num];
  }

std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON * > SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getathletes(void)
  {
    assert(flagHasathletes);
    return storeathletes;
  }

const std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON * > SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::getathletes(void) const
  {
    assert(flagHasathletes);
    return storeathletes;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TyperesultsJSON(const TyperesultsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::operator=(const TyperesultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONcompetitor(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypecompetitorJSON *convert_classy = TypecompetitorJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setcompetitor(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONposition(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field position of TyperesultsJSON is not a string.");
    setposition(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONtime(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field time of TyperesultsJSON is not a string.");
    settime(std::string(json_string->getData()));
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONgold(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field gold of TyperesultsJSON is not true for false.");
          }
      }
    setgold(the_bool);
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONsilver(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field silver of TyperesultsJSON is not true for false.");
          }
      }
    setsilver(the_bool);
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::fromJSONbronze(JSONValue *json_value, bool ignore_extras)
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
            throw("The value for field bronze of TyperesultsJSON is not true for false.");
          }
      }
    setbronze(the_bool);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TyperesultsJSON(void) :
        flagHascompetitor(false),
        flagHasposition(false),
        flagHastime(false),
        flagHasgold(false),
        flagHassilver(false),
        flagHasbronze(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::~TyperesultsJSON(void)
  {
    if (flagHascompetitor)
      {
        storecompetitor->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hascompetitor(void) const
  {
    return flagHascompetitor;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getcompetitor(void)
  {
    assert(flagHascompetitor);
    return storecompetitor;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getcompetitor(void) const
  {
    assert(flagHascompetitor);
    return storecompetitor;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hasposition(void) const
  {
    return flagHasposition;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getposition(void)
  {
    assert(flagHasposition);
    return storeposition;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getposition(void) const
  {
    assert(flagHasposition);
    return storeposition;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hastime(void) const
  {
    return flagHastime;
  }

std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::gettime(void)
  {
    assert(flagHastime);
    return storetime;
  }

const std::string SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::gettime(void) const
  {
    assert(flagHastime);
    return storetime;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hasgold(void) const
  {
    return flagHasgold;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getgold(void)
  {
    assert(flagHasgold);
    return storegold;
  }

const bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getgold(void) const
  {
    assert(flagHasgold);
    return storegold;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hassilver(void) const
  {
    return flagHassilver;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getsilver(void)
  {
    assert(flagHassilver);
    return storesilver;
  }

const bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getsilver(void) const
  {
    assert(flagHassilver);
    return storesilver;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::hasbronze(void) const
  {
    return flagHasbronze;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getbronze(void)
  {
    assert(flagHasbronze);
    return storebronze;
  }

const bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::getbronze(void) const
  {
    assert(flagHasbronze);
    return storebronze;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_event_resultsJSON(const Typesport_event_resultsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON &SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::operator=(const Typesport_event_resultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::fromJSONsport_event(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    Typesport_eventJSON *convert_classy = Typesport_eventJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setsport_event(convert_classy);
    convert_classy->remove_reference();
  }

void SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::fromJSONresults(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field results of Typesport_event_resultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< TyperesultsJSON * > vector_results1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TyperesultsJSON *convert_classy = TyperesultsJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_results1[num1] = convert_classy;
      }
    initresults();
    for (size_t num5 = 0; num5 < vector_results1.size(); ++num5)
        appendresults(vector_results1[num5]);
    for (size_t num1 = 0; num1 < vector_results1.size(); ++num1)
      {
        vector_results1[num1]->remove_reference();
      }
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_event_resultsJSON(void) :
        flagHassport_event(false),
        flagHasresults(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::~Typesport_event_resultsJSON(void)
  {
    if (flagHassport_event)
      {
        storesport_event->remove_reference();
      }
    if (flagHasresults)
      {
        for (size_t num16 = 0; num16 < storeresults.size(); ++num16)
          {
            storeresults[num16]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::hassport_event(void) const
  {
    return flagHassport_event;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::getsport_event(void)
  {
    assert(flagHassport_event);
    return storesport_event;
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::getsport_event(void) const
  {
    assert(flagHassport_event);
    return storesport_event;
  }

bool SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::hasresults(void) const
  {
    return flagHasresults;
  }

size_t SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::countOfresults(void) const
  {
    assert(flagHasresults);
    return storeresults.size();
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::elementOfresults(size_t element_num)
  {
    assert(flagHasresults);
    return storeresults[element_num];
  }

const SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON * SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::elementOfresults(size_t element_num) const
  {
    assert(flagHasresults);
    return storeresults[element_num];
  }

std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON * > SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::getresults(void)
  {
    assert(flagHasresults);
    return storeresults;
  }

const std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON * > SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::getresults(void) const
  {
    assert(flagHasresults);
    return storeresults;
  }

SportsOlympicsAPIEventResultsJSON::SportsOlympicsAPIEventResultsJSON(const SportsOlympicsAPIEventResultsJSON &)
  {
    assert(false);
  }

SportsOlympicsAPIEventResultsJSON &SportsOlympicsAPIEventResultsJSON::operator=(const SportsOlympicsAPIEventResultsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SportsOlympicsAPIEventResultsJSON::fromJSONsport_event_results(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field sport_event_results of SportsOlympicsAPIEventResultsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::vector< Typesport_event_resultsJSON * > > vector_sport_event_results1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        JSONArrayValue *json_array2 = json_array1->component(num1)->array_value();
        if (json_array2 == NULL)
            throw("The value for an element of field sport_event_results of SportsOlympicsAPIEventResultsJSON is not an array.");
        size_t count2 = json_array2->componentCount();
        std::vector< Typesport_event_resultsJSON * > vector_sport_event_results2(count2);
        for (size_t num2 = 0; num2 < count2; ++num2)
          {
            Typesport_event_resultsJSON *convert_classy = Typesport_event_resultsJSON::from_json(json_array2->component(num2), ignore_extras);
            convert_classy->add_reference();
            vector_sport_event_results2[num2] = convert_classy;
          }
        vector_sport_event_results1[num1] = vector_sport_event_results2;
      }
    initsport_event_results();
    for (size_t num6 = 0; num6 < vector_sport_event_results1.size(); ++num6)
        appendsport_event_results(vector_sport_event_results1[num6]);
    for (size_t num1 = 0; num1 < vector_sport_event_results1.size(); ++num1)
      {
        for (size_t num2 = 0; num2 < vector_sport_event_results1[num1].size(); ++num2)
          {
            vector_sport_event_results1[num1][num2]->remove_reference();
          }
      }
  }

SportsOlympicsAPIEventResultsJSON::SportsOlympicsAPIEventResultsJSON(void) :
        flagHassport_event_results(false)
  {
    extraIndex = create_string_index();
  }

SportsOlympicsAPIEventResultsJSON::~SportsOlympicsAPIEventResultsJSON(void)
  {
    if (flagHassport_event_results)
      {
        for (size_t num19 = 0; num19 < storesport_event_results.size(); ++num19)
          {
            for (size_t num20 = 0; num20 < storesport_event_results[num19].size(); ++num20)
              {
                storesport_event_results[num19][num20]->remove_reference();
              }
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SportsOlympicsAPIEventResultsJSON::hassport_event_results(void) const
  {
    return flagHassport_event_results;
  }

size_t SportsOlympicsAPIEventResultsJSON::countOfsport_event_results(void) const
  {
    assert(flagHassport_event_results);
    return storesport_event_results.size();
  }

std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON * > SportsOlympicsAPIEventResultsJSON::elementOfsport_event_results(size_t element_num)
  {
    assert(flagHassport_event_results);
    return storesport_event_results[element_num];
  }

const std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON * > SportsOlympicsAPIEventResultsJSON::elementOfsport_event_results(size_t element_num) const
  {
    assert(flagHassport_event_results);
    return storesport_event_results[element_num];
  }

std::vector< std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON * > > SportsOlympicsAPIEventResultsJSON::getsport_event_results(void)
  {
    assert(flagHassport_event_results);
    return storesport_event_results;
  }

const std::vector< std::vector< SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON * > > SportsOlympicsAPIEventResultsJSON::getsport_event_results(void) const
  {
    assert(flagHassport_event_results);
    return storesport_event_results;
  }

SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypesportJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::TypecategoryJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::TypetournamentJSON::from_json(JSONValue *json_value, bool ignore_extras)
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
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::Typesport_eventJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typesport_eventJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typesport_eventJSON>, Typesport_eventJSON *, bool> generator("Type Typesport_event", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathleteJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeathleteJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeathleteJSON>, TypeathleteJSON *, bool> generator("Type Typeathlete", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::TypeathletesJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeathletesJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeathletesJSON>, TypeathletesJSON *, bool> generator("Type Typeathletes", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::TypecompetitorJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypecompetitorJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypecompetitorJSON>, TypecompetitorJSON *, bool> generator("Type Typecompetitor", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::TyperesultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TyperesultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TyperesultsJSON>, TyperesultsJSON *, bool> generator("Type Typeresults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON *SportsOlympicsAPIEventResultsJSON::Typesport_event_resultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    Typesport_event_resultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<Typesport_event_resultsJSON>, Typesport_event_resultsJSON *, bool> generator("Type Typesport_event_results", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SportsOlympicsAPIEventResultsJSON *SportsOlympicsAPIEventResultsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SportsOlympicsAPIEventResultsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsAPIEventResultsJSON>, SportsOlympicsAPIEventResultsJSON *, bool> generator("Type SportsOlympicsAPIEventResults", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
