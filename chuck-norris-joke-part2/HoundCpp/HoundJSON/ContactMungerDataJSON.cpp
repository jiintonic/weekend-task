/* file "ContactMungerDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "ContactMungerDataJSON.h"

#include "ContactMungerDataJSON.h"


ContactMungerDataJSON::TypeMetaJSON::TypeMetaJSON(const TypeMetaJSON &)
  {
    assert(false);
  }

ContactMungerDataJSON::TypeMetaJSON &ContactMungerDataJSON::TypeMetaJSON::operator=(const TypeMetaJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactMungerDataJSON::TypeMetaJSON::fromJSONRequestInfo(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    RequestInfoJSON *convert_classy = RequestInfoJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setRequestInfo(convert_classy);
    convert_classy->remove_reference();
  }

ContactMungerDataJSON::TypeMetaJSON::TypeMetaJSON(void) :
        flagHasRequestInfo(false)
  {
    extraIndex = create_string_index();
  }

ContactMungerDataJSON::TypeMetaJSON::~TypeMetaJSON(void)
  {
    if (flagHasRequestInfo)
      {
        storeRequestInfo->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactMungerDataJSON::TypeMetaJSON::hasRequestInfo(void) const
  {
    return flagHasRequestInfo;
  }

RequestInfoJSON * ContactMungerDataJSON::TypeMetaJSON::getRequestInfo(void)
  {
    assert(flagHasRequestInfo);
    return storeRequestInfo;
  }

const RequestInfoJSON * ContactMungerDataJSON::TypeMetaJSON::getRequestInfo(void) const
  {
    assert(flagHasRequestInfo);
    return storeRequestInfo;
  }

ContactMungerDataJSON::ContactMungerDataJSON(const ContactMungerDataJSON &)
  {
    assert(false);
  }

ContactMungerDataJSON &ContactMungerDataJSON::operator=(const ContactMungerDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void ContactMungerDataJSON::fromJSONMeta(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Meta of ContactMungerDataJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    if (count1 < 1)
        throw("The value for field Meta of ContactMungerDataJSON has too few elements.");
    std::vector< TypeMetaJSON * > vector_Meta1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        TypeMetaJSON *convert_classy = TypeMetaJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Meta1[num1] = convert_classy;
      }
    assert(vector_Meta1.size() >= 1);
    initMeta();
    for (size_t num2 = 0; num2 < vector_Meta1.size(); ++num2)
        appendMeta(vector_Meta1[num2]);
    for (size_t num1 = 0; num1 < vector_Meta1.size(); ++num1)
      {
        vector_Meta1[num1]->remove_reference();
      }
  }

void ContactMungerDataJSON::fromJSONData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    ContactListJSON *convert_classy = ContactListJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setData(convert_classy);
    convert_classy->remove_reference();
  }

ContactMungerDataJSON::ContactMungerDataJSON(void) :
        flagHasMeta(false),
        flagHasData(false)
  {
    extraIndex = create_string_index();
  }

ContactMungerDataJSON::~ContactMungerDataJSON(void)
  {
    if (flagHasMeta)
      {
        for (size_t num4 = 0; num4 < storeMeta.size(); ++num4)
          {
            storeMeta[num4]->remove_reference();
          }
      }
    if (flagHasData)
      {
        storeData->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool ContactMungerDataJSON::hasMeta(void) const
  {
    return flagHasMeta;
  }

size_t ContactMungerDataJSON::countOfMeta(void) const
  {
    assert(flagHasMeta);
    return storeMeta.size();
  }

ContactMungerDataJSON::TypeMetaJSON * ContactMungerDataJSON::elementOfMeta(size_t element_num)
  {
    assert(flagHasMeta);
    return storeMeta[element_num];
  }

const ContactMungerDataJSON::TypeMetaJSON * ContactMungerDataJSON::elementOfMeta(size_t element_num) const
  {
    assert(flagHasMeta);
    return storeMeta[element_num];
  }

std::vector< ContactMungerDataJSON::TypeMetaJSON * > ContactMungerDataJSON::getMeta(void)
  {
    assert(flagHasMeta);
    return storeMeta;
  }

const std::vector< ContactMungerDataJSON::TypeMetaJSON * > ContactMungerDataJSON::getMeta(void) const
  {
    assert(flagHasMeta);
    return storeMeta;
  }

bool ContactMungerDataJSON::hasData(void) const
  {
    return flagHasData;
  }

ContactListJSON * ContactMungerDataJSON::getData(void)
  {
    assert(flagHasData);
    return storeData;
  }

const ContactListJSON * ContactMungerDataJSON::getData(void) const
  {
    assert(flagHasData);
    return storeData;
  }

ContactMungerDataJSON::TypeMetaJSON *ContactMungerDataJSON::TypeMetaJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeMetaJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeMetaJSON>, TypeMetaJSON *, bool> generator("Type TypeMeta", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
ContactMungerDataJSON *ContactMungerDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    ContactMungerDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<ContactMungerDataJSON>, ContactMungerDataJSON *, bool> generator("Type ContactMungerData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
