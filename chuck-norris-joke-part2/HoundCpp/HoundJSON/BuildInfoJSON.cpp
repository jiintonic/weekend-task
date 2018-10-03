/* file "BuildInfoJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "BuildInfoJSON.h"

#include "BuildInfoJSON.h"


BuildInfoJSON::BuildInfoJSON(const BuildInfoJSON &)
  {
    assert(false);
  }

BuildInfoJSON &BuildInfoJSON::operator=(const BuildInfoJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void BuildInfoJSON::fromJSONUser(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field User of BuildInfoJSON is not a string.");
    setUser(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONDate(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Date of BuildInfoJSON is not a string.");
    setDate(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONMachine(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Machine of BuildInfoJSON is not a string.");
    setMachine(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONSVNRevision(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SVNRevision of BuildInfoJSON is not a string.");
    setSVNRevision(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONSVNBranch(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field SVNBranch of BuildInfoJSON is not a string.");
    setSVNBranch(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONBuildNumber(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field BuildNumber of BuildInfoJSON is not a string.");
    setBuildNumber(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONKind(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Kind of BuildInfoJSON is not a string.");
    setKind(std::string(json_string->getData()));
  }

void BuildInfoJSON::fromJSONVariant(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    const JSONStringValue *json_string = json_value->string_value();
    if (json_string == NULL)
        throw("The value for field Variant of BuildInfoJSON is not a string.");
    setVariant(std::string(json_string->getData()));
  }

BuildInfoJSON::BuildInfoJSON(void) :
        flagHasUser(false),
        flagHasDate(false),
        flagHasMachine(false),
        flagHasSVNRevision(false),
        flagHasSVNBranch(false),
        flagHasBuildNumber(false),
        flagHasKind(false),
        flagHasVariant(false)
  {
    extraIndex = create_string_index();
  }

BuildInfoJSON::~BuildInfoJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool BuildInfoJSON::hasUser(void) const
  {
    return flagHasUser;
  }

std::string BuildInfoJSON::getUser(void)
  {
    assert(flagHasUser);
    return storeUser;
  }

const std::string BuildInfoJSON::getUser(void) const
  {
    assert(flagHasUser);
    return storeUser;
  }

bool BuildInfoJSON::hasDate(void) const
  {
    return flagHasDate;
  }

std::string BuildInfoJSON::getDate(void)
  {
    assert(flagHasDate);
    return storeDate;
  }

const std::string BuildInfoJSON::getDate(void) const
  {
    assert(flagHasDate);
    return storeDate;
  }

bool BuildInfoJSON::hasMachine(void) const
  {
    return flagHasMachine;
  }

std::string BuildInfoJSON::getMachine(void)
  {
    assert(flagHasMachine);
    return storeMachine;
  }

const std::string BuildInfoJSON::getMachine(void) const
  {
    assert(flagHasMachine);
    return storeMachine;
  }

bool BuildInfoJSON::hasSVNRevision(void) const
  {
    return flagHasSVNRevision;
  }

std::string BuildInfoJSON::getSVNRevision(void)
  {
    assert(flagHasSVNRevision);
    return storeSVNRevision;
  }

const std::string BuildInfoJSON::getSVNRevision(void) const
  {
    assert(flagHasSVNRevision);
    return storeSVNRevision;
  }

bool BuildInfoJSON::hasSVNBranch(void) const
  {
    return flagHasSVNBranch;
  }

std::string BuildInfoJSON::getSVNBranch(void)
  {
    assert(flagHasSVNBranch);
    return storeSVNBranch;
  }

const std::string BuildInfoJSON::getSVNBranch(void) const
  {
    assert(flagHasSVNBranch);
    return storeSVNBranch;
  }

bool BuildInfoJSON::hasBuildNumber(void) const
  {
    return flagHasBuildNumber;
  }

std::string BuildInfoJSON::getBuildNumber(void)
  {
    assert(flagHasBuildNumber);
    return storeBuildNumber;
  }

const std::string BuildInfoJSON::getBuildNumber(void) const
  {
    assert(flagHasBuildNumber);
    return storeBuildNumber;
  }

bool BuildInfoJSON::hasKind(void) const
  {
    return flagHasKind;
  }

std::string BuildInfoJSON::getKind(void)
  {
    assert(flagHasKind);
    return storeKind;
  }

const std::string BuildInfoJSON::getKind(void) const
  {
    assert(flagHasKind);
    return storeKind;
  }

bool BuildInfoJSON::hasVariant(void) const
  {
    return flagHasVariant;
  }

std::string BuildInfoJSON::getVariant(void)
  {
    assert(flagHasVariant);
    return storeVariant;
  }

const std::string BuildInfoJSON::getVariant(void) const
  {
    assert(flagHasVariant);
    return storeVariant;
  }

BuildInfoJSON *BuildInfoJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    BuildInfoJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<BuildInfoJSON>, BuildInfoJSON *, bool> generator("Type BuildInfo", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
