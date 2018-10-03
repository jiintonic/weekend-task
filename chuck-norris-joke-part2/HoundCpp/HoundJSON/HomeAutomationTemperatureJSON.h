/* file "HomeAutomationTemperatureJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONTEMPERATUREJSON_H
#define HOMEAUTOMATIONTEMPERATUREJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationTemperatureJSON : public ReferenceCounted
  {
  public:
    enum TypeUnit
      {
        Unit_Default,
        Unit_Fahrenheit,
        Unit_Celsius,
        Unit_Kelvin
      };

    static TypeUnit  stringToUnit(const char *chars);
    static const char * stringFromUnit(TypeUnit the_enum);

  private:
    bool flagHasTemperature;
    double storeTemperature;
    std::string textStoreTemperature;
    bool flagHasUnit;
    TypeUnit storeUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationTemperatureJSON(const HomeAutomationTemperatureJSON &);
    HomeAutomationTemperatureJSON & operator=(const HomeAutomationTemperatureJSON &other);

    void  fromJSONTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationTemperatureJSON(void);
    virtual ~HomeAutomationTemperatureJSON(void);
    bool  hasTemperature(void) const;
    double  getTemperature(void);
    const double  getTemperature(void) const;
    std::string  getTemperatureAsText(void) const;
    bool  hasUnit(void) const;
    TypeUnit  getUnit(void);
    const TypeUnit  getUnit(void) const;
    const char * getUnitAsChars(void) const;
    std::string  getUnitAsString(void) const;

    virtual size_t extraHomeAutomationTemperatureComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationTemperatureComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationTemperatureComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationTemperatureComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationTemperatureLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationTemperatureLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setTemperature(double new_value)
      {
        flagHasTemperature = true;
        storeTemperature = new_value;
        textStoreTemperature = "";
      }
    void setTemperatureText(std::string new_value)
      {
        flagHasTemperature = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Temperature of HomeAutomationTemperatureJSON is not a valid number.");
        textStoreTemperature = new_value;
      }
    void unsetTemperature(void)
      {
        flagHasTemperature = false;
      }
    void setUnit(TypeUnit new_value)
      {
        flagHasUnit = true;
        storeUnit = new_value;
      }
    void setUnit(const char *chars)
      {
        setUnit(stringToUnit(chars));
      }
    void setUnit(std::string the_string)
      {
        setUnit(stringToUnit(the_string.c_str()));
      }
    void unsetUnit(void)
      {
        flagHasUnit = false;
      }

    virtual void extraHomeAutomationTemperatureAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationTemperatureSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationTemperatureLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationTemperatureAppendPair(key, new_component);
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
        assert(flagHasTemperature);
        handler->start_pair("Temperature");
        if (textStoreTemperature != "")
            handler->number_value(textStoreTemperature.c_str());
        else if (((double)(long int)storeTemperature) == storeTemperature)
            handler->number_value((long int)storeTemperature);
        else
            handler->number_value(storeTemperature);
        assert(flagHasUnit);
        handler->start_pair("Unit");
        switch (storeUnit)
          {
            case Unit_Default:
                handler->string_value("Default");
                break;
            case Unit_Fahrenheit:
                handler->string_value("Fahrenheit");
                break;
            case Unit_Celsius:
                handler->string_value("Celsius");
                break;
            case Unit_Kelvin:
                handler->string_value("Kelvin");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTemperature()))
          {
            return "When parsing the object for %what%, the \"Temperature\" field was missing.";
          }
        if (!(hasUnit()))
          {
            return "When parsing the object for %what%, the \"Unit\" field was missing.";
          }
        return NULL;
      }

    static HomeAutomationTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationTemperatureJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool> generator("Type HomeAutomationTemperature", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationTemperatureJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationTemperatureJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool> generator("Type HomeAutomationTemperature", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTemperature;
    class FieldGeneratorUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToUnit(result));
              }
            virtual void handle_result(TypeUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorUnit, TypeUnit, TypeUnit > fieldGeneratorUnit;
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
            HomeAutomationTemperatureJSON *result = new HomeAutomationTemperatureJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationTemperatureJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationTemperatureJSON *result)
          {
            if (fieldGeneratorTemperature.have_value)
              {
                result->setTemperatureText(fieldGeneratorTemperature.value);
                fieldGeneratorTemperature.have_value = false;
              }
            else if (!(result->hasTemperature()))
              {
                error("When parsing the object for %what%, the \"Temperature\" field was missing.");
              }
            if (fieldGeneratorUnit.have_value)
              {
                result->setUnit(fieldGeneratorUnit.value);
                fieldGeneratorUnit.have_value = false;
              }
            else if (!(result->hasUnit()))
              {
                error("When parsing the object for %what%, the \"Unit\" field was missing.");
              }
          }
        virtual void handle_result(HomeAutomationTemperatureJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'T':
                    if (strcmp(&(field_name[1]), "emperature") == 0)
                        return &fieldGeneratorTemperature;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nit") == 0)
                        return &fieldGeneratorUnit;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorTemperature("field \"Temperature\" of the HomeAutomationTemperature class"), fieldGeneratorUnit("field \"Unit\" of the HomeAutomationTemperature class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationTemperature class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTemperature.reset();
            fieldGeneratorUnit.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONTEMPERATUREJSON_H */
