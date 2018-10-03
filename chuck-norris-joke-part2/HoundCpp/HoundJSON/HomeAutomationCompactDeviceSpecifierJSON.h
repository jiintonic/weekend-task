/* file "HomeAutomationCompactDeviceSpecifierJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONCOMPACTDEVICESPECIFIERJSON_H
#define HOMEAUTOMATIONCOMPACTDEVICESPECIFIERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "HomeAutomationSpecifierJSON.h"
#include "HomeAutomationGroupParsingItemJSON.h"
#include "HomeAutomationDeviceParsingItemJSON.h"
#include "HomeAutomationGroupParsingItemJSON.h"
#include "HomeAutomationDeviceParsingItemJSON.h"
#include "HomeAutomationDeviceTypeJSON.h"
#include "HomeAutomationQueryHintJSON.h"
#include "HomeAutomationGroupListJSON.h"
#include "HomeAutomationDeviceListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationCompactDeviceSpecifierJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpecifier;
    HomeAutomationSpecifierJSON * storeSpecifier;
    bool flagHasGroupItems;
    std::vector< HomeAutomationGroupParsingItemJSON * > storeGroupItems;
    bool flagHasDeviceItems;
    std::vector< HomeAutomationDeviceParsingItemJSON * > storeDeviceItems;
    bool flagHasExcludedGroupItems;
    std::vector< HomeAutomationGroupParsingItemJSON * > storeExcludedGroupItems;
    bool flagHasExcludedDeviceItems;
    std::vector< HomeAutomationDeviceParsingItemJSON * > storeExcludedDeviceItems;
    bool flagHasType;
    HomeAutomationDeviceTypeJSON * storeType;
    bool flagHasHint;
    HomeAutomationQueryHintJSON * storeHint;
    bool flagHasUnambiguousGroups;
    HomeAutomationGroupListJSON * storeUnambiguousGroups;
    bool flagHasUnambiguousDevices;
    HomeAutomationDeviceListJSON * storeUnambiguousDevices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationCompactDeviceSpecifierJSON(const HomeAutomationCompactDeviceSpecifierJSON &);
    HomeAutomationCompactDeviceSpecifierJSON & operator=(const HomeAutomationCompactDeviceSpecifierJSON &other);

    void  fromJSONSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGroupItems(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviceItems(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExcludedGroupItems(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONExcludedDeviceItems(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHint(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnambiguousGroups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnambiguousDevices(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationCompactDeviceSpecifierJSON(void);
    virtual ~HomeAutomationCompactDeviceSpecifierJSON(void);
    bool  hasSpecifier(void) const;
    HomeAutomationSpecifierJSON *  getSpecifier(void);
    const HomeAutomationSpecifierJSON *  getSpecifier(void) const;
    HomeAutomationSpecifierJSON::TypeValue  getSpecifierValue(void);
    const HomeAutomationSpecifierJSON::TypeValue  getSpecifierValue(void) const;
    const char * getSpecifierAsChars(void) const;
    std::string  getSpecifierAsString(void) const;
    bool  hasGroupItems(void) const;
    size_t  countOfGroupItems(void) const;
    HomeAutomationGroupParsingItemJSON *  elementOfGroupItems(size_t element_num);
    const HomeAutomationGroupParsingItemJSON *  elementOfGroupItems(size_t element_num) const;
    std::vector< HomeAutomationGroupParsingItemJSON * >  getGroupItems(void);
    const std::vector< HomeAutomationGroupParsingItemJSON * >  getGroupItems(void) const;
    bool  hasDeviceItems(void) const;
    size_t  countOfDeviceItems(void) const;
    HomeAutomationDeviceParsingItemJSON *  elementOfDeviceItems(size_t element_num);
    const HomeAutomationDeviceParsingItemJSON *  elementOfDeviceItems(size_t element_num) const;
    std::vector< HomeAutomationDeviceParsingItemJSON * >  getDeviceItems(void);
    const std::vector< HomeAutomationDeviceParsingItemJSON * >  getDeviceItems(void) const;
    bool  hasExcludedGroupItems(void) const;
    size_t  countOfExcludedGroupItems(void) const;
    HomeAutomationGroupParsingItemJSON *  elementOfExcludedGroupItems(size_t element_num);
    const HomeAutomationGroupParsingItemJSON *  elementOfExcludedGroupItems(size_t element_num) const;
    std::vector< HomeAutomationGroupParsingItemJSON * >  getExcludedGroupItems(void);
    const std::vector< HomeAutomationGroupParsingItemJSON * >  getExcludedGroupItems(void) const;
    bool  hasExcludedDeviceItems(void) const;
    size_t  countOfExcludedDeviceItems(void) const;
    HomeAutomationDeviceParsingItemJSON *  elementOfExcludedDeviceItems(size_t element_num);
    const HomeAutomationDeviceParsingItemJSON *  elementOfExcludedDeviceItems(size_t element_num) const;
    std::vector< HomeAutomationDeviceParsingItemJSON * >  getExcludedDeviceItems(void);
    const std::vector< HomeAutomationDeviceParsingItemJSON * >  getExcludedDeviceItems(void) const;
    bool  hasType(void) const;
    HomeAutomationDeviceTypeJSON *  getType(void);
    const HomeAutomationDeviceTypeJSON *  getType(void) const;
    HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void);
    const HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasHint(void) const;
    HomeAutomationQueryHintJSON *  getHint(void);
    const HomeAutomationQueryHintJSON *  getHint(void) const;
    bool  hasUnambiguousGroups(void) const;
    HomeAutomationGroupListJSON *  getUnambiguousGroups(void);
    const HomeAutomationGroupListJSON *  getUnambiguousGroups(void) const;
    bool  hasUnambiguousDevices(void) const;
    HomeAutomationDeviceListJSON *  getUnambiguousDevices(void);
    const HomeAutomationDeviceListJSON *  getUnambiguousDevices(void) const;

    virtual size_t extraHomeAutomationCompactDeviceSpecifierComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationCompactDeviceSpecifierComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationCompactDeviceSpecifierComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationCompactDeviceSpecifierComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationCompactDeviceSpecifierLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationCompactDeviceSpecifierLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setSpecifier(HomeAutomationSpecifierJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSpecifier)
          {
            storeSpecifier->remove_reference();
          }
        flagHasSpecifier = true;
        storeSpecifier = new_value;
      }
    void setSpecifier(HomeAutomationSpecifierJSON::TypeValue new_value)
      {
        setSpecifier(new HomeAutomationSpecifierJSON(new_value));
      }
    void setSpecifier(const char *chars)
      {
        HomeAutomationSpecifierJSON::TypeValueKnownValues known = HomeAutomationSpecifierJSON::stringToValue(chars);
        HomeAutomationSpecifierJSON::TypeValue new_value;
        if (known == HomeAutomationSpecifierJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setSpecifier(new_value);
      }
    void setSpecifier(std::string the_string)
      {
        setSpecifier(the_string.c_str());
      }
    void unsetSpecifier(void)
      {
        if (flagHasSpecifier)
          {
            storeSpecifier->remove_reference();
          }
        flagHasSpecifier = false;
      }
    void initGroupItems(void)
      {
        if (flagHasGroupItems)
          {
            for (size_t num5 = 0; num5 < storeGroupItems.size(); ++num5)
              {
                storeGroupItems[num5]->remove_reference();
              }
          }
        flagHasGroupItems = true;
        storeGroupItems.clear();
      }
    void appendGroupItems(HomeAutomationGroupParsingItemJSON * to_append)
      {
        if (!flagHasGroupItems)
          {
            flagHasGroupItems = true;
            storeGroupItems.clear();
          }
        assert(flagHasGroupItems);
        to_append->add_reference();
        storeGroupItems.push_back(to_append);
      }
    void unsetGroupItems(void)
      {
        if (flagHasGroupItems)
          {
            for (size_t num6 = 0; num6 < storeGroupItems.size(); ++num6)
              {
                storeGroupItems[num6]->remove_reference();
              }
          }
        flagHasGroupItems = false;
        storeGroupItems.clear();
      }
    void initDeviceItems(void)
      {
        if (flagHasDeviceItems)
          {
            for (size_t num7 = 0; num7 < storeDeviceItems.size(); ++num7)
              {
                storeDeviceItems[num7]->remove_reference();
              }
          }
        flagHasDeviceItems = true;
        storeDeviceItems.clear();
      }
    void appendDeviceItems(HomeAutomationDeviceParsingItemJSON * to_append)
      {
        if (!flagHasDeviceItems)
          {
            flagHasDeviceItems = true;
            storeDeviceItems.clear();
          }
        assert(flagHasDeviceItems);
        to_append->add_reference();
        storeDeviceItems.push_back(to_append);
      }
    void unsetDeviceItems(void)
      {
        if (flagHasDeviceItems)
          {
            for (size_t num8 = 0; num8 < storeDeviceItems.size(); ++num8)
              {
                storeDeviceItems[num8]->remove_reference();
              }
          }
        flagHasDeviceItems = false;
        storeDeviceItems.clear();
      }
    void initExcludedGroupItems(void)
      {
        if (flagHasExcludedGroupItems)
          {
            for (size_t num9 = 0; num9 < storeExcludedGroupItems.size(); ++num9)
              {
                storeExcludedGroupItems[num9]->remove_reference();
              }
          }
        flagHasExcludedGroupItems = true;
        storeExcludedGroupItems.clear();
      }
    void appendExcludedGroupItems(HomeAutomationGroupParsingItemJSON * to_append)
      {
        if (!flagHasExcludedGroupItems)
          {
            flagHasExcludedGroupItems = true;
            storeExcludedGroupItems.clear();
          }
        assert(flagHasExcludedGroupItems);
        to_append->add_reference();
        storeExcludedGroupItems.push_back(to_append);
      }
    void unsetExcludedGroupItems(void)
      {
        if (flagHasExcludedGroupItems)
          {
            for (size_t num10 = 0; num10 < storeExcludedGroupItems.size(); ++num10)
              {
                storeExcludedGroupItems[num10]->remove_reference();
              }
          }
        flagHasExcludedGroupItems = false;
        storeExcludedGroupItems.clear();
      }
    void initExcludedDeviceItems(void)
      {
        if (flagHasExcludedDeviceItems)
          {
            for (size_t num11 = 0; num11 < storeExcludedDeviceItems.size(); ++num11)
              {
                storeExcludedDeviceItems[num11]->remove_reference();
              }
          }
        flagHasExcludedDeviceItems = true;
        storeExcludedDeviceItems.clear();
      }
    void appendExcludedDeviceItems(HomeAutomationDeviceParsingItemJSON * to_append)
      {
        if (!flagHasExcludedDeviceItems)
          {
            flagHasExcludedDeviceItems = true;
            storeExcludedDeviceItems.clear();
          }
        assert(flagHasExcludedDeviceItems);
        to_append->add_reference();
        storeExcludedDeviceItems.push_back(to_append);
      }
    void unsetExcludedDeviceItems(void)
      {
        if (flagHasExcludedDeviceItems)
          {
            for (size_t num12 = 0; num12 < storeExcludedDeviceItems.size(); ++num12)
              {
                storeExcludedDeviceItems[num12]->remove_reference();
              }
          }
        flagHasExcludedDeviceItems = false;
        storeExcludedDeviceItems.clear();
      }
    void setType(HomeAutomationDeviceTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(HomeAutomationDeviceTypeJSON::TypeValue new_value)
      {
        setType(new HomeAutomationDeviceTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        HomeAutomationDeviceTypeJSON::TypeValueKnownValues known = HomeAutomationDeviceTypeJSON::stringToValue(chars);
        HomeAutomationDeviceTypeJSON::TypeValue new_value;
        if (known == HomeAutomationDeviceTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void unsetType(void)
      {
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = false;
      }
    void setHint(HomeAutomationQueryHintJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHint)
          {
            storeHint->remove_reference();
          }
        flagHasHint = true;
        storeHint = new_value;
      }
    void unsetHint(void)
      {
        if (flagHasHint)
          {
            storeHint->remove_reference();
          }
        flagHasHint = false;
      }
    void setUnambiguousGroups(HomeAutomationGroupListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnambiguousGroups)
          {
            storeUnambiguousGroups->remove_reference();
          }
        flagHasUnambiguousGroups = true;
        storeUnambiguousGroups = new_value;
      }
    void unsetUnambiguousGroups(void)
      {
        if (flagHasUnambiguousGroups)
          {
            storeUnambiguousGroups->remove_reference();
          }
        flagHasUnambiguousGroups = false;
      }
    void setUnambiguousDevices(HomeAutomationDeviceListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasUnambiguousDevices)
          {
            storeUnambiguousDevices->remove_reference();
          }
        flagHasUnambiguousDevices = true;
        storeUnambiguousDevices = new_value;
      }
    void unsetUnambiguousDevices(void)
      {
        if (flagHasUnambiguousDevices)
          {
            storeUnambiguousDevices->remove_reference();
          }
        flagHasUnambiguousDevices = false;
      }

    virtual void extraHomeAutomationCompactDeviceSpecifierAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationCompactDeviceSpecifierSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationCompactDeviceSpecifierLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationCompactDeviceSpecifierAppendPair(key, new_component);
          }
        else
          {
            size_t count = extraKeys.size();
            assert(count == extraValues.size());
            for (size_t num = 0; num < count; ++num)
              {
                if (strcmp(extraKeys[num].c_str(),  key) == 0)
                  {
                    extraValues[num] = new_component;
                    break;
                  }
              }
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
            old_field->remove_reference();
            old_field->remove_reference();
          }
      }

    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        size_t extra_count = extraKeys.size();
        assert(extra_count == extraValues.size());
        for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
          {
            handler->start_pair(extraKeys[extra_num].c_str());
            extraValues[extra_num]->write(handler);
          }
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasSpecifier);
        handler->start_pair("Specifier");
        storeSpecifier->write_as_json(handler);
        if (flagHasGroupItems)
          {
            handler->start_pair("GroupItems");
            assert(storeGroupItems.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGroupItems.size(); ++num1)
              {
                storeGroupItems[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDeviceItems)
          {
            handler->start_pair("DeviceItems");
            assert(storeDeviceItems.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDeviceItems.size(); ++num2)
              {
                storeDeviceItems[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasExcludedGroupItems)
          {
            handler->start_pair("ExcludedGroupItems");
            assert(storeExcludedGroupItems.size() >= 1);
            handler->start_array();
            for (size_t num3 = 0; num3 < storeExcludedGroupItems.size(); ++num3)
              {
                storeExcludedGroupItems[num3]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasExcludedDeviceItems)
          {
            handler->start_pair("ExcludedDeviceItems");
            assert(storeExcludedDeviceItems.size() >= 1);
            handler->start_array();
            for (size_t num4 = 0; num4 < storeExcludedDeviceItems.size(); ++num4)
              {
                storeExcludedDeviceItems[num4]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasType)
          {
            handler->start_pair("Type");
            storeType->write_as_json(handler);
          }
        if (flagHasHint)
          {
            handler->start_pair("Hint");
            storeHint->write_as_json(handler);
          }
        if (flagHasUnambiguousGroups)
          {
            handler->start_pair("UnambiguousGroups");
            storeUnambiguousGroups->write_as_json(handler);
          }
        if (flagHasUnambiguousDevices)
          {
            handler->start_pair("UnambiguousDevices");
            storeUnambiguousDevices->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpecifier()))
          {
            return "When parsing the object for %what%, the \"Specifier\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationCompactDeviceSpecifierJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationCompactDeviceSpecifierJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationCompactDeviceSpecifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCompactDeviceSpecifierJSON>, HomeAutomationCompactDeviceSpecifierJSON *, bool> generator("Type HomeAutomationCompactDeviceSpecifier", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationCompactDeviceSpecifierJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationCompactDeviceSpecifierJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationCompactDeviceSpecifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationCompactDeviceSpecifierJSON>, HomeAutomationCompactDeviceSpecifierJSON *, bool> generator("Type HomeAutomationCompactDeviceSpecifier", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public JSONObjectGenerator
      {
      private:
        JSONHoldingGenerator<HomeAutomationSpecifierJSON::Generator, RCHandle<HomeAutomationSpecifierJSON>, HomeAutomationSpecifierJSON *, bool > fieldGeneratorSpecifier;
        JSONHoldingArrayGenerator<HomeAutomationGroupParsingItemJSON::Generator, RCHandle<HomeAutomationGroupParsingItemJSON>, HomeAutomationGroupParsingItemJSON *, bool > fieldGeneratorGroupItems;
        JSONHoldingArrayGenerator<HomeAutomationDeviceParsingItemJSON::Generator, RCHandle<HomeAutomationDeviceParsingItemJSON>, HomeAutomationDeviceParsingItemJSON *, bool > fieldGeneratorDeviceItems;
        JSONHoldingArrayGenerator<HomeAutomationGroupParsingItemJSON::Generator, RCHandle<HomeAutomationGroupParsingItemJSON>, HomeAutomationGroupParsingItemJSON *, bool > fieldGeneratorExcludedGroupItems;
        JSONHoldingArrayGenerator<HomeAutomationDeviceParsingItemJSON::Generator, RCHandle<HomeAutomationDeviceParsingItemJSON>, HomeAutomationDeviceParsingItemJSON *, bool > fieldGeneratorExcludedDeviceItems;
        JSONHoldingGenerator<HomeAutomationDeviceTypeJSON::Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool > fieldGeneratorType;
        JSONHoldingGenerator<HomeAutomationQueryHintJSON::Generator, RCHandle<HomeAutomationQueryHintJSON>, HomeAutomationQueryHintJSON *, bool > fieldGeneratorHint;
        JSONHoldingGenerator<HomeAutomationGroupListJSON::Generator, RCHandle<HomeAutomationGroupListJSON>, HomeAutomationGroupListJSON *, bool > fieldGeneratorUnambiguousGroups;
        JSONHoldingGenerator<HomeAutomationDeviceListJSON::Generator, RCHandle<HomeAutomationDeviceListJSON>, HomeAutomationDeviceListJSON *, bool > fieldGeneratorUnambiguousDevices;
        class UnknownFieldGenerator : public JSONValueHandler
          {
          public:
            bool ignore;
            std::vector<std::string> field_names;
            std::vector<RCHandle<JSONValue> > field_values;
            string_index *index;
            UnknownFieldGenerator(bool init_ignore) : ignore(init_ignore)
              {
            index = create_string_index();
              }
            ~UnknownFieldGenerator(void)
              {
                destroy_string_index(index);
              }


          protected:
            void new_value(JSONValue *item)
              {
                if (ignore)
                    return;
                assert(field_names.size() == (field_values.size() + 1));
                enter_into_string_index(index, field_names[field_values.size()].c_str(), item);
                field_values.push_back(item);
              }

          public:
            void reset()
              {
                field_names.clear();
                field_values.clear();
                destroy_string_index(index);
            index = create_string_index();
              }
          };
        UnknownFieldGenerator unknownFieldGenerator;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            assert(unknownFieldGenerator.field_names.size() ==
                   unknownFieldGenerator.field_values.size());
            if (unknownFieldGenerator.ignore)
              {
                assert(unknownFieldGenerator.field_names.size() == 0);
              }
            else
              {
                unknownFieldGenerator.field_names.push_back(field_name);
              }
            return &unknownFieldGenerator;
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            HomeAutomationCompactDeviceSpecifierJSON *result = new HomeAutomationCompactDeviceSpecifierJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationCompactDeviceSpecifierJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationCompactDeviceSpecifierAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationCompactDeviceSpecifierJSON *result)
          {
            if (fieldGeneratorSpecifier.have_value)
              {
                result->setSpecifier(fieldGeneratorSpecifier.value.referenced());
                fieldGeneratorSpecifier.have_value = false;
              }
            else if (!(result->hasSpecifier()))
              {
                error("When parsing the object for %what%, the \"Specifier\" field was missing.");
              }
            if (fieldGeneratorGroupItems.have_value)
              {
                result->initGroupItems();
                size_t count = fieldGeneratorGroupItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGroupItems(fieldGeneratorGroupItems.value[num].referenced());
                  }
                fieldGeneratorGroupItems.value.clear();
                fieldGeneratorGroupItems.have_value = false;
              }
            if (fieldGeneratorDeviceItems.have_value)
              {
                result->initDeviceItems();
                size_t count = fieldGeneratorDeviceItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDeviceItems(fieldGeneratorDeviceItems.value[num].referenced());
                  }
                fieldGeneratorDeviceItems.value.clear();
                fieldGeneratorDeviceItems.have_value = false;
              }
            if (fieldGeneratorExcludedGroupItems.have_value)
              {
                result->initExcludedGroupItems();
                size_t count = fieldGeneratorExcludedGroupItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendExcludedGroupItems(fieldGeneratorExcludedGroupItems.value[num].referenced());
                  }
                fieldGeneratorExcludedGroupItems.value.clear();
                fieldGeneratorExcludedGroupItems.have_value = false;
              }
            if (fieldGeneratorExcludedDeviceItems.have_value)
              {
                result->initExcludedDeviceItems();
                size_t count = fieldGeneratorExcludedDeviceItems.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendExcludedDeviceItems(fieldGeneratorExcludedDeviceItems.value[num].referenced());
                  }
                fieldGeneratorExcludedDeviceItems.value.clear();
                fieldGeneratorExcludedDeviceItems.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            if (fieldGeneratorHint.have_value)
              {
                result->setHint(fieldGeneratorHint.value.referenced());
                fieldGeneratorHint.have_value = false;
              }
            if (fieldGeneratorUnambiguousGroups.have_value)
              {
                result->setUnambiguousGroups(fieldGeneratorUnambiguousGroups.value.referenced());
                fieldGeneratorUnambiguousGroups.have_value = false;
              }
            if (fieldGeneratorUnambiguousDevices.have_value)
              {
                result->setUnambiguousDevices(fieldGeneratorUnambiguousDevices.value.referenced());
                fieldGeneratorUnambiguousDevices.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationCompactDeviceSpecifierJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "eviceItems") == 0)
                        return &fieldGeneratorDeviceItems;
                    break;
                case 'E':
                    if (strncmp(&(field_name[1]), "xcluded", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[9]), "eviceItems") == 0)
                                    return &fieldGeneratorExcludedDeviceItems;
                                break;
                            case 'G':
                                if (strcmp(&(field_name[9]), "roupItems") == 0)
                                    return &fieldGeneratorExcludedGroupItems;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "roupItems") == 0)
                        return &fieldGeneratorGroupItems;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "int") == 0)
                        return &fieldGeneratorHint;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pecifier") == 0)
                        return &fieldGeneratorSpecifier;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                case 'U':
                    if (strncmp(&(field_name[1]), "nambiguous", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[11]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[12]), "evices") == 0)
                                    return &fieldGeneratorUnambiguousDevices;
                                break;
                            case 'G':
                                if (strcmp(&(field_name[12]), "roups") == 0)
                                    return &fieldGeneratorUnambiguousGroups;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpecifier("field \"Specifier\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorGroupItems("field \"GroupItems\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorDeviceItems("field \"DeviceItems\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorExcludedGroupItems("field \"ExcludedGroupItems\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorExcludedDeviceItems("field \"ExcludedDeviceItems\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorType("field \"Type\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorHint("field \"Hint\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorUnambiguousGroups("field \"UnambiguousGroups\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), fieldGeneratorUnambiguousDevices("field \"UnambiguousDevices\" of the HomeAutomationCompactDeviceSpecifier class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationCompactDeviceSpecifier class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpecifier.reset();
            fieldGeneratorGroupItems.reset();
            fieldGeneratorDeviceItems.reset();
            fieldGeneratorExcludedGroupItems.reset();
            fieldGeneratorExcludedDeviceItems.reset();
            fieldGeneratorType.reset();
            fieldGeneratorHint.reset();
            fieldGeneratorUnambiguousGroups.reset();
            fieldGeneratorUnambiguousDevices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONCOMPACTDEVICESPECIFIERJSON_H */
