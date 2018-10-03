/* file "HomeAutomationAmbiguityFlagsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONAMBIGUITYFLAGSJSON_H
#define HOMEAUTOMATIONAMBIGUITYFLAGSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationAmbiguityFlagsJSON : public ReferenceCounted
  {
  private:
    bool flagHasHomeAutomationSolution;
    bool storeHomeAutomationSolution;
    bool flagHasName;
    bool storeName;
    bool flagHasID;
    bool storeID;
    bool flagHasType;
    bool storeType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationAmbiguityFlagsJSON(const HomeAutomationAmbiguityFlagsJSON &);
    HomeAutomationAmbiguityFlagsJSON & operator=(const HomeAutomationAmbiguityFlagsJSON &other);

    void  fromJSONHomeAutomationSolution(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationAmbiguityFlagsJSON(void);
    virtual ~HomeAutomationAmbiguityFlagsJSON(void);
    bool  hasHomeAutomationSolution(void) const;
    bool  getHomeAutomationSolution(void);
    const bool  getHomeAutomationSolution(void) const;
    bool  hasName(void) const;
    bool  getName(void);
    const bool  getName(void) const;
    bool  hasID(void) const;
    bool  getID(void);
    const bool  getID(void) const;
    bool  hasType(void) const;
    bool  getType(void);
    const bool  getType(void) const;

    virtual size_t extraHomeAutomationAmbiguityFlagsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationAmbiguityFlagsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationAmbiguityFlagsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationAmbiguityFlagsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationAmbiguityFlagsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationAmbiguityFlagsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setHomeAutomationSolution(bool new_value)
      {
        flagHasHomeAutomationSolution = true;
        storeHomeAutomationSolution = new_value;
      }
    void unsetHomeAutomationSolution(void)
      {
        flagHasHomeAutomationSolution = false;
      }
    void setName(bool new_value)
      {
        flagHasName = true;
        storeName = new_value;
      }
    void unsetName(void)
      {
        flagHasName = false;
      }
    void setID(bool new_value)
      {
        flagHasID = true;
        storeID = new_value;
      }
    void unsetID(void)
      {
        flagHasID = false;
      }
    void setType(bool new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void unsetType(void)
      {
        flagHasType = false;
      }

    virtual void extraHomeAutomationAmbiguityFlagsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationAmbiguityFlagsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationAmbiguityFlagsLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationAmbiguityFlagsAppendPair(key, new_component);
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
            handler->boolean_value(storeHomeAutomationSolution);
          }
        if (flagHasName)
          {
            handler->start_pair("Name");
            handler->boolean_value(storeName);
          }
        if (flagHasID)
          {
            handler->start_pair("ID");
            handler->boolean_value(storeID);
          }
        if (flagHasType)
          {
            handler->start_pair("Type");
            handler->boolean_value(storeType);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationAmbiguityFlagsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationAmbiguityFlagsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationAmbiguityFlagsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityFlagsJSON>, HomeAutomationAmbiguityFlagsJSON *, bool> generator("Type HomeAutomationAmbiguityFlags", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationAmbiguityFlagsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationAmbiguityFlagsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationAmbiguityFlagsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationAmbiguityFlagsJSON>, HomeAutomationAmbiguityFlagsJSON *, bool> generator("Type HomeAutomationAmbiguityFlags", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHomeAutomationSolution;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorName;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorID;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorType;
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
            HomeAutomationAmbiguityFlagsJSON *result = new HomeAutomationAmbiguityFlagsJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationAmbiguityFlagsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationAmbiguityFlagsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationAmbiguityFlagsJSON *result)
          {
            if (fieldGeneratorHomeAutomationSolution.have_value)
              {
                result->setHomeAutomationSolution(fieldGeneratorHomeAutomationSolution.value);
                fieldGeneratorHomeAutomationSolution.have_value = false;
              }
            if (fieldGeneratorName.have_value)
              {
                result->setName(fieldGeneratorName.value);
                fieldGeneratorName.have_value = false;
              }
            if (fieldGeneratorID.have_value)
              {
                result->setID(fieldGeneratorID.value);
                fieldGeneratorID.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationAmbiguityFlagsJSON *new_result) = 0;
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
        Generator(bool ignore_extras = false) : fieldGeneratorHomeAutomationSolution("field \"HomeAutomationSolution\" of the HomeAutomationAmbiguityFlags class"), fieldGeneratorName("field \"Name\" of the HomeAutomationAmbiguityFlags class"), fieldGeneratorID("field \"ID\" of the HomeAutomationAmbiguityFlags class"), fieldGeneratorType("field \"Type\" of the HomeAutomationAmbiguityFlags class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationAmbiguityFlags class");
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
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONAMBIGUITYFLAGSJSON_H */
