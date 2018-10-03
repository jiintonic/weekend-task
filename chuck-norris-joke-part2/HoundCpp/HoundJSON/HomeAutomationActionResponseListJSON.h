/* file "HomeAutomationActionResponseListJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONACTIONRESPONSELISTJSON_H
#define HOMEAUTOMATIONACTIONRESPONSELISTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "HomeAutomationDeviceJSON.h"
#include "HomeAutomationActionResponseJSON.h"
#include "HomeAutomationGroupJSON.h"
#include "HomeAutomationActionResponseJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationActionResponseListJSON : public ReferenceCounted
  {
  public:
    class TypeDevicesJSON : public ReferenceCounted
      {
      private:
        bool flagHasDevice;
        HomeAutomationDeviceJSON * storeDevice;
        bool flagHasResponse;
        HomeAutomationActionResponseJSON * storeResponse;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeDevicesJSON(const TypeDevicesJSON &);
        TypeDevicesJSON & operator=(const TypeDevicesJSON &other);

        void  fromJSONDevice(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResponse(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeDevicesJSON(void);
        virtual ~TypeDevicesJSON(void);
        bool  hasDevice(void) const;
        HomeAutomationDeviceJSON *  getDevice(void);
        const HomeAutomationDeviceJSON *  getDevice(void) const;
        bool  hasResponse(void) const;
        HomeAutomationActionResponseJSON *  getResponse(void);
        const HomeAutomationActionResponseJSON *  getResponse(void) const;

        virtual size_t extraTypeDevicesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeDevicesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeDevicesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeDevicesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeDevicesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeDevicesLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setDevice(HomeAutomationDeviceJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasDevice)
              {
                storeDevice->remove_reference();
              }
            flagHasDevice = true;
            storeDevice = new_value;
          }
        void unsetDevice(void)
          {
            if (flagHasDevice)
              {
                storeDevice->remove_reference();
              }
            flagHasDevice = false;
          }
        void setResponse(HomeAutomationActionResponseJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasResponse)
              {
                storeResponse->remove_reference();
              }
            flagHasResponse = true;
            storeResponse = new_value;
          }
        void unsetResponse(void)
          {
            if (flagHasResponse)
              {
                storeResponse->remove_reference();
              }
            flagHasResponse = false;
          }

        virtual void extraTypeDevicesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeDevicesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeDevicesLookup(key);
            if (old_field == NULL)
              {
                extraTypeDevicesAppendPair(key, new_component);
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
            assert(flagHasDevice);
            handler->start_pair("Device");
            storeDevice->write_as_json(handler);
            if (flagHasResponse)
              {
                handler->start_pair("Response");
                storeResponse->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDevice()))
              {
                return "When parsing the object for %what%, the \"Device\" field was missing.";
              }
            return NULL;
          }

        static TypeDevicesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeDevicesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeDevicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDevicesJSON>, TypeDevicesJSON *, bool> generator("Type TypeDevices", ignore_extras);
                parse_json_value(text, "Text for TypeDevicesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeDevicesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeDevicesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeDevicesJSON>, TypeDevicesJSON *, bool> generator("Type TypeDevices", ignore_extras);
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
            JSONHoldingGenerator<HomeAutomationDeviceJSON::Generator, RCHandle<HomeAutomationDeviceJSON>, HomeAutomationDeviceJSON *, bool > fieldGeneratorDevice;
            JSONHoldingGenerator<HomeAutomationActionResponseJSON::Generator, RCHandle<HomeAutomationActionResponseJSON>, HomeAutomationActionResponseJSON *, bool > fieldGeneratorResponse;
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
                TypeDevicesJSON *result = new TypeDevicesJSON();
                assert(result != NULL);
                RCHandle<TypeDevicesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeDevicesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeDevicesJSON *result)
              {
                if (fieldGeneratorDevice.have_value)
                  {
                    result->setDevice(fieldGeneratorDevice.value.referenced());
                    fieldGeneratorDevice.have_value = false;
                  }
                else if (!(result->hasDevice()))
                  {
                    error("When parsing the object for %what%, the \"Device\" field was missing.");
                  }
                if (fieldGeneratorResponse.have_value)
                  {
                    result->setResponse(fieldGeneratorResponse.value.referenced());
                    fieldGeneratorResponse.have_value = false;
                  }
              }
            virtual void handle_result(TypeDevicesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'D':
                        if (strcmp(&(field_name[1]), "evice") == 0)
                            return &fieldGeneratorDevice;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "esponse") == 0)
                            return &fieldGeneratorResponse;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorDevice("field \"Device\" of the TypeDevices class", ignore_extras), fieldGeneratorResponse("field \"Response\" of the TypeDevices class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeDevices class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDevice.reset();
                fieldGeneratorResponse.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeGroupsJSON : public ReferenceCounted
      {
      private:
        bool flagHasGroup;
        HomeAutomationGroupJSON * storeGroup;
        bool flagHasResponse;
        HomeAutomationActionResponseJSON * storeResponse;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeGroupsJSON(const TypeGroupsJSON &);
        TypeGroupsJSON & operator=(const TypeGroupsJSON &other);

        void  fromJSONGroup(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResponse(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeGroupsJSON(void);
        virtual ~TypeGroupsJSON(void);
        bool  hasGroup(void) const;
        HomeAutomationGroupJSON *  getGroup(void);
        const HomeAutomationGroupJSON *  getGroup(void) const;
        bool  hasResponse(void) const;
        HomeAutomationActionResponseJSON *  getResponse(void);
        const HomeAutomationActionResponseJSON *  getResponse(void) const;

        virtual size_t extraTypeGroupsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeGroupsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeGroupsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeGroupsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeGroupsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeGroupsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setGroup(HomeAutomationGroupJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasGroup)
              {
                storeGroup->remove_reference();
              }
            flagHasGroup = true;
            storeGroup = new_value;
          }
        void unsetGroup(void)
          {
            if (flagHasGroup)
              {
                storeGroup->remove_reference();
              }
            flagHasGroup = false;
          }
        void setResponse(HomeAutomationActionResponseJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasResponse)
              {
                storeResponse->remove_reference();
              }
            flagHasResponse = true;
            storeResponse = new_value;
          }
        void unsetResponse(void)
          {
            if (flagHasResponse)
              {
                storeResponse->remove_reference();
              }
            flagHasResponse = false;
          }

        virtual void extraTypeGroupsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeGroupsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeGroupsLookup(key);
            if (old_field == NULL)
              {
                extraTypeGroupsAppendPair(key, new_component);
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
            assert(flagHasGroup);
            handler->start_pair("Group");
            storeGroup->write_as_json(handler);
            if (flagHasResponse)
              {
                handler->start_pair("Response");
                storeResponse->write_as_json(handler);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasGroup()))
              {
                return "When parsing the object for %what%, the \"Group\" field was missing.";
              }
            return NULL;
          }

        static TypeGroupsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeGroupsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeGroupsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeGroupsJSON>, TypeGroupsJSON *, bool> generator("Type TypeGroups", ignore_extras);
                parse_json_value(text, "Text for TypeGroupsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeGroupsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeGroupsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeGroupsJSON>, TypeGroupsJSON *, bool> generator("Type TypeGroups", ignore_extras);
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
            JSONHoldingGenerator<HomeAutomationGroupJSON::Generator, RCHandle<HomeAutomationGroupJSON>, HomeAutomationGroupJSON *, bool > fieldGeneratorGroup;
            JSONHoldingGenerator<HomeAutomationActionResponseJSON::Generator, RCHandle<HomeAutomationActionResponseJSON>, HomeAutomationActionResponseJSON *, bool > fieldGeneratorResponse;
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
                TypeGroupsJSON *result = new TypeGroupsJSON();
                assert(result != NULL);
                RCHandle<TypeGroupsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeGroupsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeGroupsJSON *result)
              {
                if (fieldGeneratorGroup.have_value)
                  {
                    result->setGroup(fieldGeneratorGroup.value.referenced());
                    fieldGeneratorGroup.have_value = false;
                  }
                else if (!(result->hasGroup()))
                  {
                    error("When parsing the object for %what%, the \"Group\" field was missing.");
                  }
                if (fieldGeneratorResponse.have_value)
                  {
                    result->setResponse(fieldGeneratorResponse.value.referenced());
                    fieldGeneratorResponse.have_value = false;
                  }
              }
            virtual void handle_result(TypeGroupsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'G':
                        if (strcmp(&(field_name[1]), "roup") == 0)
                            return &fieldGeneratorGroup;
                        break;
                    case 'R':
                        if (strcmp(&(field_name[1]), "esponse") == 0)
                            return &fieldGeneratorResponse;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorGroup("field \"Group\" of the TypeGroups class", ignore_extras), fieldGeneratorResponse("field \"Response\" of the TypeGroups class", ignore_extras), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeGroups class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorGroup.reset();
                fieldGeneratorResponse.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasDevices;
    std::vector< TypeDevicesJSON * > storeDevices;
    bool flagHasGroups;
    std::vector< TypeGroupsJSON * > storeGroups;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationActionResponseListJSON(const HomeAutomationActionResponseListJSON &);
    HomeAutomationActionResponseListJSON & operator=(const HomeAutomationActionResponseListJSON &other);

    void  fromJSONDevices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGroups(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationActionResponseListJSON(void);
    virtual ~HomeAutomationActionResponseListJSON(void);
    bool  hasDevices(void) const;
    size_t  countOfDevices(void) const;
    TypeDevicesJSON *  elementOfDevices(size_t element_num);
    const TypeDevicesJSON *  elementOfDevices(size_t element_num) const;
    std::vector< TypeDevicesJSON * >  getDevices(void);
    const std::vector< TypeDevicesJSON * >  getDevices(void) const;
    bool  hasGroups(void) const;
    size_t  countOfGroups(void) const;
    TypeGroupsJSON *  elementOfGroups(size_t element_num);
    const TypeGroupsJSON *  elementOfGroups(size_t element_num) const;
    std::vector< TypeGroupsJSON * >  getGroups(void);
    const std::vector< TypeGroupsJSON * >  getGroups(void) const;

    virtual size_t extraHomeAutomationActionResponseListComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationActionResponseListComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationActionResponseListComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationActionResponseListComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationActionResponseListLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationActionResponseListLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initDevices(void)
      {
        if (flagHasDevices)
          {
            for (size_t num3 = 0; num3 < storeDevices.size(); ++num3)
              {
                storeDevices[num3]->remove_reference();
              }
          }
        flagHasDevices = true;
        storeDevices.clear();
      }
    void appendDevices(TypeDevicesJSON * to_append)
      {
        if (!flagHasDevices)
          {
            flagHasDevices = true;
            storeDevices.clear();
          }
        assert(flagHasDevices);
        to_append->add_reference();
        storeDevices.push_back(to_append);
      }
    void unsetDevices(void)
      {
        if (flagHasDevices)
          {
            for (size_t num4 = 0; num4 < storeDevices.size(); ++num4)
              {
                storeDevices[num4]->remove_reference();
              }
          }
        flagHasDevices = false;
        storeDevices.clear();
      }
    void initGroups(void)
      {
        if (flagHasGroups)
          {
            for (size_t num5 = 0; num5 < storeGroups.size(); ++num5)
              {
                storeGroups[num5]->remove_reference();
              }
          }
        flagHasGroups = true;
        storeGroups.clear();
      }
    void appendGroups(TypeGroupsJSON * to_append)
      {
        if (!flagHasGroups)
          {
            flagHasGroups = true;
            storeGroups.clear();
          }
        assert(flagHasGroups);
        to_append->add_reference();
        storeGroups.push_back(to_append);
      }
    void unsetGroups(void)
      {
        if (flagHasGroups)
          {
            for (size_t num6 = 0; num6 < storeGroups.size(); ++num6)
              {
                storeGroups[num6]->remove_reference();
              }
          }
        flagHasGroups = false;
        storeGroups.clear();
      }

    virtual void extraHomeAutomationActionResponseListAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationActionResponseListSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationActionResponseListLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationActionResponseListAppendPair(key, new_component);
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
        if (flagHasDevices)
          {
            handler->start_pair("Devices");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeDevices.size(); ++num1)
              {
                storeDevices[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGroups)
          {
            handler->start_pair("Groups");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeGroups.size(); ++num2)
              {
                storeGroups[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationActionResponseListJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationActionResponseListJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationActionResponseListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseListJSON>, HomeAutomationActionResponseListJSON *, bool> generator("Type HomeAutomationActionResponseList", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationActionResponseListJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationActionResponseListJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationActionResponseListJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseListJSON>, HomeAutomationActionResponseListJSON *, bool> generator("Type HomeAutomationActionResponseList", ignore_extras);
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
        JSONHoldingArrayGenerator<TypeDevicesJSON::Generator, RCHandle<TypeDevicesJSON>, TypeDevicesJSON *, bool > fieldGeneratorDevices;
        JSONHoldingArrayGenerator<TypeGroupsJSON::Generator, RCHandle<TypeGroupsJSON>, TypeGroupsJSON *, bool > fieldGeneratorGroups;
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
            HomeAutomationActionResponseListJSON *result = new HomeAutomationActionResponseListJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationActionResponseListJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationActionResponseListAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationActionResponseListJSON *result)
          {
            if (fieldGeneratorDevices.have_value)
              {
                result->initDevices();
                size_t count = fieldGeneratorDevices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDevices(fieldGeneratorDevices.value[num].referenced());
                  }
                fieldGeneratorDevices.value.clear();
                fieldGeneratorDevices.have_value = false;
              }
            if (fieldGeneratorGroups.have_value)
              {
                result->initGroups();
                size_t count = fieldGeneratorGroups.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGroups(fieldGeneratorGroups.value[num].referenced());
                  }
                fieldGeneratorGroups.value.clear();
                fieldGeneratorGroups.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationActionResponseListJSON *new_result) = 0;
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
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDevices("field \"Devices\" of the HomeAutomationActionResponseList class", ignore_extras), fieldGeneratorGroups("field \"Groups\" of the HomeAutomationActionResponseList class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationActionResponseList class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDevices.reset();
            fieldGeneratorGroups.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONACTIONRESPONSELISTJSON_H */
