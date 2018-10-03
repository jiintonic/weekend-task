/* file "HomeAutomationDeviceJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONDEVICEJSON_H
#define HOMEAUTOMATIONDEVICEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "HomeAutomationSolutionJSON.h"
#include "HomeAutomationDeviceTypeJSON.h"
#include "HomeAutomationOperationJSON.h"
#include "HomeAutomationPropertyJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationDeviceJSON : public ReferenceCounted
  {
  private:
    bool flagHasHomeAutomationSolution;
    HomeAutomationSolutionJSON * storeHomeAutomationSolution;
    bool flagHasName;
    std::string storeName;
    bool flagHasID;
    std::string storeID;
    bool flagHasType;
    HomeAutomationDeviceTypeJSON * storeType;
    bool flagHasCapabilities;
    std::vector< HomeAutomationOperationJSON * > storeCapabilities;
    bool flagHasProperties;
    std::vector< HomeAutomationPropertyJSON * > storeProperties;
    bool flagHasSolutionData;
    JSONValue * storeSolutionData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationDeviceJSON(const HomeAutomationDeviceJSON &);
    HomeAutomationDeviceJSON & operator=(const HomeAutomationDeviceJSON &other);

    void  fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCapabilities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProperties(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSolutionData(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationDeviceJSON(void);
    virtual ~HomeAutomationDeviceJSON(void);
    bool  hasHomeAutomationSolution(void) const;
    HomeAutomationSolutionJSON *  getHomeAutomationSolution(void);
    const HomeAutomationSolutionJSON *  getHomeAutomationSolution(void) const;
    HomeAutomationSolutionJSON::TypeValue  getHomeAutomationSolutionValue(void);
    const HomeAutomationSolutionJSON::TypeValue  getHomeAutomationSolutionValue(void) const;
    const char * getHomeAutomationSolutionAsChars(void) const;
    std::string  getHomeAutomationSolutionAsString(void) const;
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasID(void) const;
    std::string  getID(void);
    const std::string  getID(void) const;
    bool  hasType(void) const;
    HomeAutomationDeviceTypeJSON *  getType(void);
    const HomeAutomationDeviceTypeJSON *  getType(void) const;
    HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void);
    const HomeAutomationDeviceTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasCapabilities(void) const;
    size_t  countOfCapabilities(void) const;
    HomeAutomationOperationJSON *  elementOfCapabilities(size_t element_num);
    const HomeAutomationOperationJSON *  elementOfCapabilities(size_t element_num) const;
    std::vector< HomeAutomationOperationJSON * >  getCapabilities(void);
    const std::vector< HomeAutomationOperationJSON * >  getCapabilities(void) const;
    bool  hasProperties(void) const;
    size_t  countOfProperties(void) const;
    HomeAutomationPropertyJSON *  elementOfProperties(size_t element_num);
    const HomeAutomationPropertyJSON *  elementOfProperties(size_t element_num) const;
    std::vector< HomeAutomationPropertyJSON * >  getProperties(void);
    const std::vector< HomeAutomationPropertyJSON * >  getProperties(void) const;
    bool  hasSolutionData(void) const;
    JSONValue *  getSolutionData(void);
    const JSONValue *  getSolutionData(void) const;

    virtual size_t extraHomeAutomationDeviceComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationDeviceComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationDeviceComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationDeviceComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationDeviceLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationDeviceLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setHomeAutomationSolution(HomeAutomationSolutionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHomeAutomationSolution)
          {
            storeHomeAutomationSolution->remove_reference();
          }
        flagHasHomeAutomationSolution = true;
        storeHomeAutomationSolution = new_value;
      }
    void setHomeAutomationSolution(HomeAutomationSolutionJSON::TypeValue new_value)
      {
        setHomeAutomationSolution(new HomeAutomationSolutionJSON(new_value));
      }
    void setHomeAutomationSolution(const char *chars)
      {
        HomeAutomationSolutionJSON::TypeValueKnownValues known = HomeAutomationSolutionJSON::stringToValue(chars);
        HomeAutomationSolutionJSON::TypeValue new_value;
        if (known == HomeAutomationSolutionJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setHomeAutomationSolution(new_value);
      }
    void setHomeAutomationSolution(std::string the_string)
      {
        setHomeAutomationSolution(the_string.c_str());
      }
    void unsetHomeAutomationSolution(void)
      {
        if (flagHasHomeAutomationSolution)
          {
            storeHomeAutomationSolution->remove_reference();
          }
        flagHasHomeAutomationSolution = false;
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
    void setID(std::string new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
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
    void initCapabilities(void)
      {
        if (flagHasCapabilities)
          {
            for (size_t num3 = 0; num3 < storeCapabilities.size(); ++num3)
              {
                storeCapabilities[num3]->remove_reference();
              }
          }
        flagHasCapabilities = true;
        storeCapabilities.clear();
      }
    void appendCapabilities(HomeAutomationOperationJSON * to_append)
      {
        if (!flagHasCapabilities)
          {
            flagHasCapabilities = true;
            storeCapabilities.clear();
          }
        assert(flagHasCapabilities);
        to_append->add_reference();
        storeCapabilities.push_back(to_append);
      }
    void appendCapabilities(HomeAutomationOperationJSON::TypeValue new_value)
      {
        appendCapabilities(new HomeAutomationOperationJSON(new_value));
      }
    void appendCapabilities(const char *chars)
      {
        HomeAutomationOperationJSON::TypeValueKnownValues known = HomeAutomationOperationJSON::stringToValue(chars);
        HomeAutomationOperationJSON::TypeValue new_value;
        if (known == HomeAutomationOperationJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendCapabilities(new_value);
      }
    void appendCapabilities(std::string the_string)
      {
        appendCapabilities(the_string.c_str());
      }
    void unsetCapabilities(void)
      {
        if (flagHasCapabilities)
          {
            for (size_t num4 = 0; num4 < storeCapabilities.size(); ++num4)
              {
                storeCapabilities[num4]->remove_reference();
              }
          }
        flagHasCapabilities = false;
        storeCapabilities.clear();
      }
    void initProperties(void)
      {
        if (flagHasProperties)
          {
            for (size_t num5 = 0; num5 < storeProperties.size(); ++num5)
              {
                storeProperties[num5]->remove_reference();
              }
          }
        flagHasProperties = true;
        storeProperties.clear();
      }
    void appendProperties(HomeAutomationPropertyJSON * to_append)
      {
        if (!flagHasProperties)
          {
            flagHasProperties = true;
            storeProperties.clear();
          }
        assert(flagHasProperties);
        to_append->add_reference();
        storeProperties.push_back(to_append);
      }
    void appendProperties(HomeAutomationPropertyJSON::TypeValue new_value)
      {
        appendProperties(new HomeAutomationPropertyJSON(new_value));
      }
    void appendProperties(const char *chars)
      {
        HomeAutomationPropertyJSON::TypeValueKnownValues known = HomeAutomationPropertyJSON::stringToValue(chars);
        HomeAutomationPropertyJSON::TypeValue new_value;
        if (known == HomeAutomationPropertyJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        appendProperties(new_value);
      }
    void appendProperties(std::string the_string)
      {
        appendProperties(the_string.c_str());
      }
    void unsetProperties(void)
      {
        if (flagHasProperties)
          {
            for (size_t num6 = 0; num6 < storeProperties.size(); ++num6)
              {
                storeProperties[num6]->remove_reference();
              }
          }
        flagHasProperties = false;
        storeProperties.clear();
      }
    void setSolutionData(JSONValue * new_value)
      {
        new_value->add_reference();
        if (flagHasSolutionData)
          {
            storeSolutionData->remove_reference();
          }
        flagHasSolutionData = true;
        storeSolutionData = new_value;
      }
    void unsetSolutionData(void)
      {
        if (flagHasSolutionData)
          {
            storeSolutionData->remove_reference();
          }
        flagHasSolutionData = false;
      }

    virtual void extraHomeAutomationDeviceAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationDeviceSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationDeviceLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationDeviceAppendPair(key, new_component);
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
        if (flagHasHomeAutomationSolution)
          {
            handler->start_pair("HomeAutomationSolution");
            storeHomeAutomationSolution->write_as_json(handler);
          }
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        assert(flagHasID);
        handler->start_pair("ID");
        handler->string_value(storeID);
        if (flagHasType)
          {
            handler->start_pair("Type");
            storeType->write_as_json(handler);
          }
        assert(flagHasCapabilities);
        handler->start_pair("Capabilities");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeCapabilities.size(); ++num1)
          {
            storeCapabilities[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasProperties)
          {
            handler->start_pair("Properties");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeProperties.size(); ++num2)
              {
                storeProperties[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasSolutionData)
          {
            handler->start_pair("SolutionData");
            storeSolutionData->write(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasID()))
          {
            return "When parsing the object for %what%, the \"ID\" field was missing.";
          }
        if (!(hasCapabilities()))
          {
            return "When parsing the object for %what%, the \"Capabilities\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationDeviceJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationDeviceJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationDeviceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceJSON>, HomeAutomationDeviceJSON *, bool> generator("Type HomeAutomationDevice", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationDeviceJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationDeviceJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationDeviceJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationDeviceJSON>, HomeAutomationDeviceJSON *, bool> generator("Type HomeAutomationDevice", ignore_extras);
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
        JSONHoldingGenerator<HomeAutomationSolutionJSON::Generator, RCHandle<HomeAutomationSolutionJSON>, HomeAutomationSolutionJSON *, bool > fieldGeneratorHomeAutomationSolution;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorID;
        JSONHoldingGenerator<HomeAutomationDeviceTypeJSON::Generator, RCHandle<HomeAutomationDeviceTypeJSON>, HomeAutomationDeviceTypeJSON *, bool > fieldGeneratorType;
        JSONHoldingArrayGenerator<HomeAutomationOperationJSON::Generator, RCHandle<HomeAutomationOperationJSON>, HomeAutomationOperationJSON *, bool > fieldGeneratorCapabilities;
        JSONHoldingArrayGenerator<HomeAutomationPropertyJSON::Generator, RCHandle<HomeAutomationPropertyJSON>, HomeAutomationPropertyJSON *, bool > fieldGeneratorProperties;
        JSONHoldingGenerator<JSONValueHandler, RCHandle<JSONValue>, JSONValue * > fieldGeneratorSolutionData;
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
            HomeAutomationDeviceJSON *result = new HomeAutomationDeviceJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationDeviceJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationDeviceAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationDeviceJSON *result)
          {
            if (fieldGeneratorHomeAutomationSolution.have_value)
              {
                result->setHomeAutomationSolution(fieldGeneratorHomeAutomationSolution.value.referenced());
                fieldGeneratorHomeAutomationSolution.have_value = false;
              }
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            else if (!(result->hasName()))
              {
                error("When parsing the object for %what%, the \"Name\" field was missing.");
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            else if (!(result->hasID()))
              {
                error("When parsing the object for %what%, the \"ID\" field was missing.");
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            if (fieldGeneratorCapabilities.have_value)
              {
                result->initCapabilities();
                size_t count = fieldGeneratorCapabilities.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendCapabilities(fieldGeneratorCapabilities.value[num].referenced());
                  }
                fieldGeneratorCapabilities.value.clear();
                fieldGeneratorCapabilities.have_value = false;
              }
            else if (!(result->hasCapabilities()))
              {
                error("When parsing the object for %what%, the \"Capabilities\" field was missing.");
              }
            if (fieldGeneratorProperties.have_value)
              {
                result->initProperties();
                size_t count = fieldGeneratorProperties.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProperties(fieldGeneratorProperties.value[num].referenced());
                  }
                fieldGeneratorProperties.value.clear();
                fieldGeneratorProperties.have_value = false;
              }
            if (fieldGeneratorSolutionData.have_value)
              {
                result->setSolutionData(fieldGeneratorSolutionData.value.referenced());
                fieldGeneratorSolutionData.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationDeviceJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "apabilities") == 0)
                        return &fieldGeneratorCapabilities;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "omeAutomationSolution") == 0)
                        return &fieldGeneratorHomeAutomationSolution;
                    break;
                case 'I':
                    if (strcmp(&(field_name[1]), "D") == 0)
                        return &fieldGeneratorID;
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roperties") == 0)
                        return &fieldGeneratorProperties;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "olutionData") == 0)
                        return &fieldGeneratorSolutionData;
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
        Generator(bool ignore_extras = false) : fieldGeneratorHomeAutomationSolution("field \"HomeAutomationSolution\" of the HomeAutomationDevice class", ignore_extras), fieldGeneratorName("field \"Name\" of the HomeAutomationDevice class"), fieldGeneratorID("field \"ID\" of the HomeAutomationDevice class"), fieldGeneratorType("field \"Type\" of the HomeAutomationDevice class", ignore_extras), fieldGeneratorCapabilities("field \"Capabilities\" of the HomeAutomationDevice class", ignore_extras), fieldGeneratorProperties("field \"Properties\" of the HomeAutomationDevice class", ignore_extras), fieldGeneratorSolutionData("field \"SolutionData\" of the HomeAutomationDevice class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationDevice class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHomeAutomationSolution.reset();
            fieldGeneratorName.reset();
            fieldGeneratorID.reset();
            fieldGeneratorType.reset();
            fieldGeneratorCapabilities.reset();
            fieldGeneratorProperties.reset();
            fieldGeneratorSolutionData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONDEVICEJSON_H */
