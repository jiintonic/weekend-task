/* file "HomeAutomationAmbiguityJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONAMBIGUITYJSON_H
#define HOMEAUTOMATIONAMBIGUITYJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "HomeAutomationGroupListJSON.h"
#include "HomeAutomationAmbiguityFlagsJSON.h"
#include "HomeAutomationDeviceListJSON.h"
#include "HomeAutomationAmbiguityFlagsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationAmbiguityJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasGroups;
    HomeAutomationGroupListJSON * storeGroups;
    bool flagHasGroupAmbiguityFlags;
    std::vector< HomeAutomationAmbiguityFlagsJSON * > storeGroupAmbiguityFlags;
    bool flagHasDevices;
    HomeAutomationDeviceListJSON * storeDevices;
    bool flagHasDeviceAmbiguityFlags;
    std::vector< HomeAutomationAmbiguityFlagsJSON * > storeDeviceAmbiguityFlags;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationAmbiguityJSON(const HomeAutomationAmbiguityJSON &);
    HomeAutomationAmbiguityJSON & operator=(const HomeAutomationAmbiguityJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGroups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGroupAmbiguityFlags(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDevices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDeviceAmbiguityFlags(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationAmbiguityJSON(void);
    virtual ~HomeAutomationAmbiguityJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasGroups(void) const;
    HomeAutomationGroupListJSON *  getGroups(void);
    const HomeAutomationGroupListJSON *  getGroups(void) const;
    bool  hasGroupAmbiguityFlags(void) const;
    size_t  countOfGroupAmbiguityFlags(void) const;
    HomeAutomationAmbiguityFlagsJSON *  elementOfGroupAmbiguityFlags(size_t element_num);
    const HomeAutomationAmbiguityFlagsJSON *  elementOfGroupAmbiguityFlags(size_t element_num) const;
    std::vector< HomeAutomationAmbiguityFlagsJSON * >  getGroupAmbiguityFlags(void);
    const std::vector< HomeAutomationAmbiguityFlagsJSON * >  getGroupAmbiguityFlags(void) const;
    bool  hasDevices(void) const;
    HomeAutomationDeviceListJSON *  getDevices(void);
    const HomeAutomationDeviceListJSON *  getDevices(void) const;
    bool  hasDeviceAmbiguityFlags(void) const;
    size_t  countOfDeviceAmbiguityFlags(void) const;
    HomeAutomationAmbiguityFlagsJSON *  elementOfDeviceAmbiguityFlags(size_t element_num);
    const HomeAutomationAmbiguityFlagsJSON *  elementOfDeviceAmbiguityFlags(size_t element_num) const;
    std::vector< HomeAutomationAmbiguityFlagsJSON * >  getDeviceAmbiguityFlags(void);
    const std::vector< HomeAutomationAmbiguityFlagsJSON * >  getDeviceAmbiguityFlags(void) const;

    virtual size_t extraHomeAutomationAmbiguityComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationAmbiguityComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationAmbiguityComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationAmbiguityComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationAmbiguityLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationAmbiguityLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setName(std::string new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setGroups(HomeAutomationGroupListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasGroups)
          {
            storeGroups->remove_reference();
          }
        flagHasGroups = true;
        storeGroups = new_value;
      }
    void unsetGroups(void)
      {
        if (flagHasGroups)
          {
            storeGroups->remove_reference();
          }
        flagHasGroups = false;
      }
    void initGroupAmbiguityFlags(void)
      {
        if (flagHasGroupAmbiguityFlags)
          {
            for (size_t num3 = 0; num3 < storeGroupAmbiguityFlags.size(); ++num3)
              {
                storeGroupAmbiguityFlags[num3]->remove_reference();
              }
          }
        flagHasGroupAmbiguityFlags = true;
        storeGroupAmbiguityFlags.clear();
      }
    void appendGroupAmbiguityFlags(HomeAutomationAmbiguityFlagsJSON * to_append)
      {
        if (!flagHasGroupAmbiguityFlags)
          {
            flagHasGroupAmbiguityFlags = true;
            storeGroupAmbiguityFlags.clear();
          }
        assert(flagHasGroupAmbiguityFlags);
        to_append->add_reference();
        storeGroupAmbiguityFlags.push_back(to_append);
      }
    void unsetGroupAmbiguityFlags(void)
      {
        if (flagHasGroupAmbiguityFlags)
          {
            for (size_t num4 = 0; num4 < storeGroupAmbiguityFlags.size(); ++num4)
              {
                storeGroupAmbiguityFlags[num4]->remove_reference();
              }
          }
        flagHasGroupAmbiguityFlags = false;
        storeGroupAmbiguityFlags.clear();
      }
    void setDevices(HomeAutomationDeviceListJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDevices)
          {
            storeDevices->remove_reference();
          }
        flagHasDevices = true;
        storeDevices = new_value;
      }
    void unsetDevices(void)
      {
        if (flagHasDevices)
          {
            storeDevices->remove_reference();
          }
        flagHasDevices = false;
      }
    void initDeviceAmbiguityFlags(void)
      {
        if (flagHasDeviceAmbiguityFlags)
          {
            for (size_t num5 = 0; num5 < storeDeviceAmbiguityFlags.size(); ++num5)
              {
                storeDeviceAmbiguityFlags[num5]->remove_reference();
              }
          }
        flagHasDeviceAmbiguityFlags = true;
        storeDeviceAmbiguityFlags.clear();
      }
    void appendDeviceAmbiguityFlags(HomeAutomationAmbiguityFlagsJSON * to_append)
      {
        if (!flagHasDeviceAmbiguityFlags)
          {
            flagHasDeviceAmbiguityFlags = true;
            storeDeviceAmbiguityFlags.clear();
          }
        assert(flagHasDeviceAmbiguityFlags);
        to_append->add_reference();
        storeDeviceAmbiguityFlags.push_back(to_append);
      }
    void unsetDeviceAmbiguityFlags(void)
      {
        if (flagHasDeviceAmbiguityFlags)
          {
            for (size_t num6 = 0; num6 < storeDeviceAmbiguityFlags.size(); ++num6)
              {
                storeDeviceAmbiguityFlags[num6]->remove_reference();
              }
          }
        flagHasDeviceAmbiguityFlags = false;
        storeDeviceAmbiguityFlags.clear();
      }

    virtual void extraHomeAutomationAmbiguityAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationAmbiguitySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationAmbiguityLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationAmbiguityAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasGroups)
          {
            handler->start_pair("Groups");
            storeGroups->write_as_json(handler);
          }
        if (flagHasGroupAmbiguityFlags)
          {
            handler->start_pair("GroupAmbiguityFlags");
            assert(storeGroupAmbiguityFlags.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGroupAmbiguityFlags.size(); ++num1)
              {
                storeGroupAmbiguityFlags[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasDevices)
          {
            handler->start_pair("Devices");
            storeDevices->write_as_json(handler);
          }
        if (flagHasDeviceAmbiguityFlags)
          {
            handler->start_pair("DeviceAmbiguityFlags");
            assert(storeDeviceAmbiguityFlags.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeDeviceAmbiguityFlags.size(); ++num2)
              {
                storeDeviceAmbiguityFlags[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationAmbiguityJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationAmbiguityJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationAmbiguityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityJSON>, HomeAutomationAmbiguityJSON *, bool> generator("Type HomeAutomationAmbiguity", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationAmbiguityJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationAmbiguityJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationAmbiguityJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityJSON>, HomeAutomationAmbiguityJSON *, bool> generator("Type HomeAutomationAmbiguity", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<HomeAutomationGroupListJSON::Generator, RCHandle<HomeAutomationGroupListJSON>, HomeAutomationGroupListJSON *, bool > fieldGeneratorGroups;
        JSONHoldingArrayGenerator<HomeAutomationAmbiguityFlagsJSON::Generator, RCHandle<HomeAutomationAmbiguityFlagsJSON>, HomeAutomationAmbiguityFlagsJSON *, bool > fieldGeneratorGroupAmbiguityFlags;
        JSONHoldingGenerator<HomeAutomationDeviceListJSON::Generator, RCHandle<HomeAutomationDeviceListJSON>, HomeAutomationDeviceListJSON *, bool > fieldGeneratorDevices;
        JSONHoldingArrayGenerator<HomeAutomationAmbiguityFlagsJSON::Generator, RCHandle<HomeAutomationAmbiguityFlagsJSON>, HomeAutomationAmbiguityFlagsJSON *, bool > fieldGeneratorDeviceAmbiguityFlags;
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
            HomeAutomationAmbiguityJSON *result = new HomeAutomationAmbiguityJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationAmbiguityJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationAmbiguityAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationAmbiguityJSON *result)
          {
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorGroups.have_value)
              {
                result->setGroups(fieldGeneratorGroups.value.referenced());
                fieldGeneratorGroups.have_value = false;
              }
            if (fieldGeneratorGroupAmbiguityFlags.have_value)
              {
                result->initGroupAmbiguityFlags();
                size_t count = fieldGeneratorGroupAmbiguityFlags.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGroupAmbiguityFlags(fieldGeneratorGroupAmbiguityFlags.value[num].referenced());
                  }
                fieldGeneratorGroupAmbiguityFlags.value.clear();
                fieldGeneratorGroupAmbiguityFlags.have_value = false;
              }
            if (fieldGeneratorDevices.have_value)
              {
                result->setDevices(fieldGeneratorDevices.value.referenced());
                fieldGeneratorDevices.have_value = false;
              }
            if (fieldGeneratorDeviceAmbiguityFlags.have_value)
              {
                result->initDeviceAmbiguityFlags();
                size_t count = fieldGeneratorDeviceAmbiguityFlags.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDeviceAmbiguityFlags(fieldGeneratorDeviceAmbiguityFlags.value[num].referenced());
                  }
                fieldGeneratorDeviceAmbiguityFlags.value.clear();
                fieldGeneratorDeviceAmbiguityFlags.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationAmbiguityJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "evice", 5) == 0)
                      {
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[7]), "mbiguityFlags") == 0)
                                    return &fieldGeneratorDeviceAmbiguityFlags;
                                break;
                            case 's':
                                if (field_name[7] == 0)
                                    return &fieldGeneratorDevices;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'G':
                    if (strncmp(&(field_name[1]), "roup", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "mbiguityFlags") == 0)
                                    return &fieldGeneratorGroupAmbiguityFlags;
                                break;
                            case 's':
                                if (field_name[6] == 0)
                                    return &fieldGeneratorGroups;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the HomeAutomationAmbiguity class"), fieldGeneratorGroups("field \"Groups\" of the HomeAutomationAmbiguity class", ignore_extras), fieldGeneratorGroupAmbiguityFlags("field \"GroupAmbiguityFlags\" of the HomeAutomationAmbiguity class", ignore_extras), fieldGeneratorDevices("field \"Devices\" of the HomeAutomationAmbiguity class", ignore_extras), fieldGeneratorDeviceAmbiguityFlags("field \"DeviceAmbiguityFlags\" of the HomeAutomationAmbiguity class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationAmbiguity class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorGroups.reset();
            fieldGeneratorGroupAmbiguityFlags.reset();
            fieldGeneratorDevices.reset();
            fieldGeneratorDeviceAmbiguityFlags.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONAMBIGUITYJSON_H */
