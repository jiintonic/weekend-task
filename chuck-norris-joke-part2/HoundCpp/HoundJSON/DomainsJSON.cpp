/* file "DomainsJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "DomainsJSON.h"

#include "DomainsJSON.h"


DomainsJSON::TypeOnlyJSON::TypeOnlyJSON(const TypeOnlyJSON &)
  {
    assert(false);
  }

DomainsJSON::TypeOnlyJSON &DomainsJSON::TypeOnlyJSON::operator=(const TypeOnlyJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DomainsJSON::TypeOnlyJSON::fromJSONDomainNames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DomainNames of TypeOnlyJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DomainNames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DomainNames of TypeOnlyJSON is not a string.");
        vector_DomainNames1[num1] = std::string(json_string->getData());
      }
    initDomainNames();
    for (size_t num3 = 0; num3 < vector_DomainNames1.size(); ++num3)
        appendDomainNames(vector_DomainNames1[num3]);
    for (size_t num1 = 0; num1 < vector_DomainNames1.size(); ++num1)
      {
      }
  }

DomainsJSON::TypeOnlyJSON::TypeOnlyJSON(void) :
        flagHasDomainNames(false)
  {
    extraIndex = create_string_index();
  }

DomainsJSON::TypeOnlyJSON::~TypeOnlyJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DomainsJSON::TypeOnlyJSON::hasDomainNames(void) const
  {
    return flagHasDomainNames;
  }

size_t DomainsJSON::TypeOnlyJSON::countOfDomainNames(void) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames.size();
  }

std::string DomainsJSON::TypeOnlyJSON::elementOfDomainNames(size_t element_num)
  {
    assert(flagHasDomainNames);
    return storeDomainNames[element_num];
  }

const std::string DomainsJSON::TypeOnlyJSON::elementOfDomainNames(size_t element_num) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames[element_num];
  }

std::vector< std::string > DomainsJSON::TypeOnlyJSON::getDomainNames(void)
  {
    assert(flagHasDomainNames);
    return storeDomainNames;
  }

const std::vector< std::string > DomainsJSON::TypeOnlyJSON::getDomainNames(void) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames;
  }

DomainsJSON::TypeExcludeJSON::TypeExcludeJSON(const TypeExcludeJSON &)
  {
    assert(false);
  }

DomainsJSON::TypeExcludeJSON &DomainsJSON::TypeExcludeJSON::operator=(const TypeExcludeJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DomainsJSON::TypeExcludeJSON::fromJSONDomainNames(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field DomainNames of TypeExcludeJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< std::string > vector_DomainNames1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        const JSONStringValue *json_string = json_array1->component(num1)->string_value();
        if (json_string == NULL)
            throw("The value for an element of field DomainNames of TypeExcludeJSON is not a string.");
        vector_DomainNames1[num1] = std::string(json_string->getData());
      }
    initDomainNames();
    for (size_t num4 = 0; num4 < vector_DomainNames1.size(); ++num4)
        appendDomainNames(vector_DomainNames1[num4]);
    for (size_t num1 = 0; num1 < vector_DomainNames1.size(); ++num1)
      {
      }
  }

DomainsJSON::TypeExcludeJSON::TypeExcludeJSON(void) :
        flagHasDomainNames(false)
  {
    extraIndex = create_string_index();
  }

DomainsJSON::TypeExcludeJSON::~TypeExcludeJSON(void)
  {
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DomainsJSON::TypeExcludeJSON::hasDomainNames(void) const
  {
    return flagHasDomainNames;
  }

size_t DomainsJSON::TypeExcludeJSON::countOfDomainNames(void) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames.size();
  }

std::string DomainsJSON::TypeExcludeJSON::elementOfDomainNames(size_t element_num)
  {
    assert(flagHasDomainNames);
    return storeDomainNames[element_num];
  }

const std::string DomainsJSON::TypeExcludeJSON::elementOfDomainNames(size_t element_num) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames[element_num];
  }

std::vector< std::string > DomainsJSON::TypeExcludeJSON::getDomainNames(void)
  {
    assert(flagHasDomainNames);
    return storeDomainNames;
  }

const std::vector< std::string > DomainsJSON::TypeExcludeJSON::getDomainNames(void) const
  {
    assert(flagHasDomainNames);
    return storeDomainNames;
  }

DomainsJSON::DomainsJSON(const DomainsJSON &)
  {
    assert(false);
  }

DomainsJSON &DomainsJSON::operator=(const DomainsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void DomainsJSON::fromJSONOnly(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeOnlyJSON *convert_classy = TypeOnlyJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setOnly(convert_classy);
    convert_classy->remove_reference();
  }

void DomainsJSON::fromJSONExclude(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeExcludeJSON *convert_classy = TypeExcludeJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setExclude(convert_classy);
    convert_classy->remove_reference();
  }

DomainsJSON::DomainsJSON(void) :
        flagHasOnly(false),
        flagHasExclude(false)
  {
    extraIndex = create_string_index();
  }

DomainsJSON::~DomainsJSON(void)
  {
    if (flagHasOnly)
      {
        storeOnly->remove_reference();
      }
    if (flagHasExclude)
      {
        storeExclude->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool DomainsJSON::hasOnly(void) const
  {
    return flagHasOnly;
  }

DomainsJSON::TypeOnlyJSON * DomainsJSON::getOnly(void)
  {
    assert(flagHasOnly);
    return storeOnly;
  }

const DomainsJSON::TypeOnlyJSON * DomainsJSON::getOnly(void) const
  {
    assert(flagHasOnly);
    return storeOnly;
  }

bool DomainsJSON::hasExclude(void) const
  {
    return flagHasExclude;
  }

DomainsJSON::TypeExcludeJSON * DomainsJSON::getExclude(void)
  {
    assert(flagHasExclude);
    return storeExclude;
  }

const DomainsJSON::TypeExcludeJSON * DomainsJSON::getExclude(void) const
  {
    assert(flagHasExclude);
    return storeExclude;
  }

DomainsJSON::TypeOnlyJSON *DomainsJSON::TypeOnlyJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeOnlyJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeOnlyJSON>, TypeOnlyJSON *, bool> generator("Type TypeOnly", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DomainsJSON::TypeExcludeJSON *DomainsJSON::TypeExcludeJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeExcludeJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeExcludeJSON>, TypeExcludeJSON *, bool> generator("Type TypeExclude", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
DomainsJSON *DomainsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    DomainsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<DomainsJSON>, DomainsJSON *, bool> generator("Type Domains", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
