/* file "SynchronizedUserDataJSON.cpp" */

/* Generated automatically by Classy JSON. */


#pragma implementation "SynchronizedUserDataJSON.h"

#include "SynchronizedUserDataJSON.h"


SynchronizedUserDataJSON::TypeContactsJSON::TypeContactsJSON(const TypeContactsJSON &)
  {
    assert(false);
  }

SynchronizedUserDataJSON::TypeContactsJSON &SynchronizedUserDataJSON::TypeContactsJSON::operator=(const TypeContactsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SynchronizedUserDataJSON::TypeContactsJSON::fromJSONData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Data of TypeContactsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OneContactJSON * > vector_Data1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneContactJSON *convert_classy = OneContactJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Data1[num1] = convert_classy;
      }
    initData();
    for (size_t num3 = 0; num3 < vector_Data1.size(); ++num3)
        appendData(vector_Data1[num3]);
    for (size_t num1 = 0; num1 < vector_Data1.size(); ++num1)
      {
        vector_Data1[num1]->remove_reference();
      }
  }

SynchronizedUserDataJSON::TypeContactsJSON::TypeContactsJSON(void) :
        flagHasData(false)
  {
    extraIndex = create_string_index();
  }

SynchronizedUserDataJSON::TypeContactsJSON::~TypeContactsJSON(void)
  {
    if (flagHasData)
      {
        for (size_t num7 = 0; num7 < storeData.size(); ++num7)
          {
            storeData[num7]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SynchronizedUserDataJSON::TypeContactsJSON::hasData(void) const
  {
    return flagHasData;
  }

size_t SynchronizedUserDataJSON::TypeContactsJSON::countOfData(void) const
  {
    assert(flagHasData);
    return storeData.size();
  }

OneContactJSON * SynchronizedUserDataJSON::TypeContactsJSON::elementOfData(size_t element_num)
  {
    assert(flagHasData);
    return storeData[element_num];
  }

const OneContactJSON * SynchronizedUserDataJSON::TypeContactsJSON::elementOfData(size_t element_num) const
  {
    assert(flagHasData);
    return storeData[element_num];
  }

std::vector< OneContactJSON * > SynchronizedUserDataJSON::TypeContactsJSON::getData(void)
  {
    assert(flagHasData);
    return storeData;
  }

const std::vector< OneContactJSON * > SynchronizedUserDataJSON::TypeContactsJSON::getData(void) const
  {
    assert(flagHasData);
    return storeData;
  }

SynchronizedUserDataJSON::TypeInstalledAppsJSON::TypeInstalledAppsJSON(const TypeInstalledAppsJSON &)
  {
    assert(false);
  }

SynchronizedUserDataJSON::TypeInstalledAppsJSON &SynchronizedUserDataJSON::TypeInstalledAppsJSON::operator=(const TypeInstalledAppsJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SynchronizedUserDataJSON::TypeInstalledAppsJSON::fromJSONData(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    JSONArrayValue *json_array1 = json_value->array_value();
    if (json_array1 == NULL)
        throw("The value for field Data of TypeInstalledAppsJSON is not an array.");
    size_t count1 = json_array1->componentCount();
    std::vector< OneInstalledAppJSON * > vector_Data1(count1);
    for (size_t num1 = 0; num1 < count1; ++num1)
      {
        OneInstalledAppJSON *convert_classy = OneInstalledAppJSON::from_json(json_array1->component(num1), ignore_extras);
        convert_classy->add_reference();
        vector_Data1[num1] = convert_classy;
      }
    initData();
    for (size_t num4 = 0; num4 < vector_Data1.size(); ++num4)
        appendData(vector_Data1[num4]);
    for (size_t num1 = 0; num1 < vector_Data1.size(); ++num1)
      {
        vector_Data1[num1]->remove_reference();
      }
  }

SynchronizedUserDataJSON::TypeInstalledAppsJSON::TypeInstalledAppsJSON(void) :
        flagHasData(false)
  {
    extraIndex = create_string_index();
  }

SynchronizedUserDataJSON::TypeInstalledAppsJSON::~TypeInstalledAppsJSON(void)
  {
    if (flagHasData)
      {
        for (size_t num10 = 0; num10 < storeData.size(); ++num10)
          {
            storeData[num10]->remove_reference();
          }
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SynchronizedUserDataJSON::TypeInstalledAppsJSON::hasData(void) const
  {
    return flagHasData;
  }

size_t SynchronizedUserDataJSON::TypeInstalledAppsJSON::countOfData(void) const
  {
    assert(flagHasData);
    return storeData.size();
  }

OneInstalledAppJSON * SynchronizedUserDataJSON::TypeInstalledAppsJSON::elementOfData(size_t element_num)
  {
    assert(flagHasData);
    return storeData[element_num];
  }

const OneInstalledAppJSON * SynchronizedUserDataJSON::TypeInstalledAppsJSON::elementOfData(size_t element_num) const
  {
    assert(flagHasData);
    return storeData[element_num];
  }

std::vector< OneInstalledAppJSON * > SynchronizedUserDataJSON::TypeInstalledAppsJSON::getData(void)
  {
    assert(flagHasData);
    return storeData;
  }

const std::vector< OneInstalledAppJSON * > SynchronizedUserDataJSON::TypeInstalledAppsJSON::getData(void) const
  {
    assert(flagHasData);
    return storeData;
  }

SynchronizedUserDataJSON::SynchronizedUserDataJSON(const SynchronizedUserDataJSON &)
  {
    assert(false);
  }

SynchronizedUserDataJSON &SynchronizedUserDataJSON::operator=(const SynchronizedUserDataJSON &other)
  {
    assert(false);
    throw "Illegal operator=() call.";
  }

void SynchronizedUserDataJSON::fromJSONContacts(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeContactsJSON *convert_classy = TypeContactsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setContacts(convert_classy);
    convert_classy->remove_reference();
  }

void SynchronizedUserDataJSON::fromJSONInstalledApps(JSONValue *json_value, bool ignore_extras)
  {
    assert(json_value != NULL);
    TypeInstalledAppsJSON *convert_classy = TypeInstalledAppsJSON::from_json(json_value, ignore_extras);
    convert_classy->add_reference();
    setInstalledApps(convert_classy);
    convert_classy->remove_reference();
  }

SynchronizedUserDataJSON::SynchronizedUserDataJSON(void) :
        flagHasContacts(false),
        flagHasInstalledApps(false)
  {
    extraIndex = create_string_index();
  }

SynchronizedUserDataJSON::~SynchronizedUserDataJSON(void)
  {
    if (flagHasContacts)
      {
        storeContacts->remove_reference();
      }
    if (flagHasInstalledApps)
      {
        storeInstalledApps->remove_reference();
      }
    size_t extra_count = extraValues.size();
    for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
        extraValues[extra_num]->remove_reference();
        destroy_string_index(extraIndex);
  }

bool SynchronizedUserDataJSON::hasContacts(void) const
  {
    return flagHasContacts;
  }

SynchronizedUserDataJSON::TypeContactsJSON * SynchronizedUserDataJSON::getContacts(void)
  {
    assert(flagHasContacts);
    return storeContacts;
  }

const SynchronizedUserDataJSON::TypeContactsJSON * SynchronizedUserDataJSON::getContacts(void) const
  {
    assert(flagHasContacts);
    return storeContacts;
  }

bool SynchronizedUserDataJSON::hasInstalledApps(void) const
  {
    return flagHasInstalledApps;
  }

SynchronizedUserDataJSON::TypeInstalledAppsJSON * SynchronizedUserDataJSON::getInstalledApps(void)
  {
    assert(flagHasInstalledApps);
    return storeInstalledApps;
  }

const SynchronizedUserDataJSON::TypeInstalledAppsJSON * SynchronizedUserDataJSON::getInstalledApps(void) const
  {
    assert(flagHasInstalledApps);
    return storeInstalledApps;
  }

SynchronizedUserDataJSON::TypeContactsJSON *SynchronizedUserDataJSON::TypeContactsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeContactsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeContactsJSON>, TypeContactsJSON *, bool> generator("Type TypeContacts", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SynchronizedUserDataJSON::TypeInstalledAppsJSON *SynchronizedUserDataJSON::TypeInstalledAppsJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    TypeInstalledAppsJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<TypeInstalledAppsJSON>, TypeInstalledAppsJSON *, bool> generator("Type TypeInstalledApps", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
SynchronizedUserDataJSON *SynchronizedUserDataJSON::from_json(JSONValue *json_value, bool ignore_extras)
  {
    SynchronizedUserDataJSON *result;
      {
        JSONHoldingGenerator<Generator, RCHandle<SynchronizedUserDataJSON>, SynchronizedUserDataJSON *, bool> generator("Type SynchronizedUserData", ignore_extras);
        json_value->write(&generator);
        assert(generator.have_value);
        result = generator.value.referenced();
        result->add_reference();
      };
    result->remove_reference_no_delete();
    return result;
  }
