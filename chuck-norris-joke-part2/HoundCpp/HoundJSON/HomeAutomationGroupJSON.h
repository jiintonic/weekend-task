/* file "HomeAutomationGroupJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONGROUPJSON_H
#define HOMEAUTOMATIONGROUPJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "HomeAutomationSolutionJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationGroupJSON : public ReferenceCounted
  {
  private:
    bool flagHasHomeAutomationSolution;
    HomeAutomationSolutionJSON * storeHomeAutomationSolution;
    bool flagHasName;
    std::string storeName;
    bool flagHasID;
    std::string storeID;
    bool flagHasSolutionData;
    JSONValue * storeSolutionData;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationGroupJSON(const HomeAutomationGroupJSON &);
    HomeAutomationGroupJSON & operator=(const HomeAutomationGroupJSON &other);

    void  fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSolutionData(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationGroupJSON(void);
    virtual ~HomeAutomationGroupJSON(void);
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
    bool  hasSolutionData(void) const;
    JSONValue *  getSolutionData(void);
    const JSONValue *  getSolutionData(void) const;

    virtual size_t extraHomeAutomationGroupComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationGroupComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationGroupComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationGroupComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationGroupLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationGroupLookup(const char *field_name) const
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

    virtual void extraHomeAutomationGroupAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationGroupSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationGroupLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationGroupAppendPair(key, new_component);
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
        return NULL;
      }

    static HomeAutomationGroupJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationGroupJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationGroupJSON>, HomeAutomationGroupJSON *, bool> generator("Type HomeAutomationGroup", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationGroupJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationGroupJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationGroupJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationGroupJSON>, HomeAutomationGroupJSON *, bool> generator("Type HomeAutomationGroup", ignore_extras);
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
            HomeAutomationGroupJSON *result = new HomeAutomationGroupJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationGroupJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationGroupAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationGroupJSON *result)
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
            if (fieldGeneratorSolutionData.have_value)
              {
                result->setSolutionData(fieldGeneratorSolutionData.value.referenced());
                fieldGeneratorSolutionData.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationGroupJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
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
                case 'S':
                    if (strcmp(&(field_name[1]), "olutionData") == 0)
                        return &fieldGeneratorSolutionData;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorHomeAutomationSolution("field \"HomeAutomationSolution\" of the HomeAutomationGroup class", ignore_extras), fieldGeneratorName("field \"Name\" of the HomeAutomationGroup class"), fieldGeneratorID("field \"ID\" of the HomeAutomationGroup class"), fieldGeneratorSolutionData("field \"SolutionData\" of the HomeAutomationGroup class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationGroup class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHomeAutomationSolution.reset();
            fieldGeneratorName.reset();
            fieldGeneratorID.reset();
            fieldGeneratorSolutionData.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONGROUPJSON_H */
