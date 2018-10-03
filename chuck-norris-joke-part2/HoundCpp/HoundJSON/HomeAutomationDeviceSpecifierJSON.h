/* file "HomeAutomationDeviceSpecifierJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONDEVICESPECIFIERJSON_H
#define HOMEAUTOMATIONDEVICESPECIFIERJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "HomeAutomationSpecifierJSON.h"
#include "HomeAutomationGroupListJSON.h"
#include "HomeAutomationDeviceTypeJSON.h"
#include "HomeAutomationDeviceListJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationDeviceSpecifierJSON : public ReferenceCounted
  {
  private:
    bool flagHasSpecifier;
    HomeAutomationSpecifierJSON * storeSpecifier;
    bool flagHasGroups;
    HomeAutomationGroupListJSON * storeGroups;
    bool flagHasType;
    HomeAutomationDeviceTypeJSON * storeType;
    bool flagHasDevices;
    HomeAutomationDeviceListJSON * storeDevices;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationDeviceSpecifierJSON(const HomeAutomationDeviceSpecifierJSON &);
    HomeAutomationDeviceSpecifierJSON & operator=(const HomeAutomationDeviceSpecifierJSON &other);

    void  fromJSONSpecifier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGroups(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDevices(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationDeviceSpecifierJSON(void);
    virtual ~HomeAutomationDeviceSpecifierJSON(void);
    bool  hasSpecifier(void) const;
    HomeAutomationSpecifierJSON *  getSpecifier(void);
    const HomeAutomationSpecifierJSON *  getSpecifier(void) const;
    HomeAutomationSpecifierJSON::TypeValue  getSpecifierValue(void);
    const HomeAutomationSpecifierJSON::TypeValue  getSpecifierValue(void) const;
    const char * getSpecifierAsChars(void) const;
    std::string  getSpecifierAsString(void) const;
    bool  hasGroups(void) const;
    HomeAutomationGroupListJSON *  getGroups(void);
    const HomeAutomationGroupListJSON *  getGroups(void) const;
    bool  hasType(void) const;
    HomeAutomationDeviceTypeJSON *  getType(void);
    const HomeAutomationDeviceTypeJSON *  getType(void) const;
    HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void);
    const HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasDevices(void) const;
    HomeAutomationDeviceListJSON *  getDevices(void);
    const HomeAutomationDeviceListJSON *  getDevices(void) const;

    virtual size_t extraHomeAutomationDeviceSpecifierComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationDeviceSpecifierComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationDeviceSpecifierComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationDeviceSpecifierComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationDeviceSpecifierLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationDeviceSpecifierLookup(const char *field_name) const
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

    virtual void extraHomeAutomationDeviceSpecifierAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationDeviceSpecifierSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationDeviceSpecifierLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationDeviceSpecifierAppendPair(key, new_component);
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
        if (flagHasGroups)
          {
            handler->start_pair("Groups");
            storeGroups->write_as_json(handler);
          }
        if (flagHasType)
          {
            handler->start_pair("Type");
            storeType->write_as_json(handler);
          }
        assert(flagHasDevices);
        handler->start_pair("Devices");
        storeDevices->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasSpecifier()))
          {
            return "When parsing the object for %what%, the \"Specifier\" field was missing.";
          }
        if (!(hasDevices()))
          {
            return "When parsing the object for %what%, the \"Devices\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationDeviceSpecifierJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationDeviceSpecifierJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationDeviceSpecifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool> generator("Type HomeAutomationDeviceSpecifier", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationDeviceSpecifierJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationDeviceSpecifierJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationDeviceSpecifierJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceSpecifierJSON>, HomeAutomationDeviceSpecifierJSON *, bool> generator("Type HomeAutomationDeviceSpecifier", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationGroupListJSON::Generator, RCHandle<HomeAutomationGroupListJSON>, HomeAutomationGroupListJSON *, bool > fieldGeneratorGroups;
        JSONHoldingGenerator<HomeAutomationDeviceTypeJSON::Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool > fieldGeneratorType;
        JSONHoldingGenerator<HomeAutomationDeviceListJSON::Generator, RCHandle<HomeAutomationDeviceListJSON>, HomeAutomationDeviceListJSON *, bool > fieldGeneratorDevices;
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
            HomeAutomationDeviceSpecifierJSON *result = new HomeAutomationDeviceSpecifierJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationDeviceSpecifierJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationDeviceSpecifierAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationDeviceSpecifierJSON *result)
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
            if (fieldGeneratorGroups.have_value)
              {
                result->setGroups(fieldGeneratorGroups.value.referenced());
                fieldGeneratorGroups.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            if (fieldGeneratorDevices.have_value)
              {
                result->setDevices(fieldGeneratorDevices.value.referenced());
                fieldGeneratorDevices.have_value = false;
              }
            else if (!(result->hasDevices()))
              {
                error("When parsing the object for %what%, the \"Devices\" field was missing.");
              }
          }
        virtual void handle_result(HomeAutomationDeviceSpecifierJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "evices") == 0)
                        return &fieldGeneratorDevices;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "roups") == 0)
                        return &fieldGeneratorGroups;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pecifier") == 0)
                        return &fieldGeneratorSpecifier;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorSpecifier("field \"Specifier\" of the HomeAutomationDeviceSpecifier class", ignore_extras), fieldGeneratorGroups("field \"Groups\" of the HomeAutomationDeviceSpecifier class", ignore_extras), fieldGeneratorType("field \"Type\" of the HomeAutomationDeviceSpecifier class", ignore_extras), fieldGeneratorDevices("field \"Devices\" of the HomeAutomationDeviceSpecifier class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationDeviceSpecifier class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorSpecifier.reset();
            fieldGeneratorGroups.reset();
            fieldGeneratorType.reset();
            fieldGeneratorDevices.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONDEVICESPECIFIERJSON_H */
