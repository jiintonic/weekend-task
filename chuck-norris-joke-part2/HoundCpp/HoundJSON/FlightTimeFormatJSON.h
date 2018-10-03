/* file "FlightTimeFormatJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTTIMEFORMATJSON_H
#define FLIGHTTIMEFORMATJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class FlightTimeFormatJSON : public ReferenceCounted
  {
  public:
    enum TypeFormat
      {
        Format_DateTime,
        Format_TimeTill,
        Format_HowLateEarly
      };

    static TypeFormat  stringToFormat(const char *chars);
    static const char * stringFromFormat(TypeFormat the_enum);
    enum TypeUnit
      {
        Unit_None,
        Unit_Week,
        Unit_Hour,
        Unit_Minute,
        Unit_Second
      };

    static TypeUnit  stringToUnit(const char *chars);
    static const char * stringFromUnit(TypeUnit the_enum);

  private:
    bool flagHasFormat;
    TypeFormat storeFormat;
    bool flagHasUnit;
    TypeUnit storeUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightTimeFormatJSON(const FlightTimeFormatJSON &);
    FlightTimeFormatJSON & operator=(const FlightTimeFormatJSON &other);

    void  fromJSONFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightTimeFormatJSON(void);
    virtual ~FlightTimeFormatJSON(void);
    bool  hasFormat(void) const;
    TypeFormat  getFormat(void);
    const TypeFormat  getFormat(void) const;
    const char * getFormatAsChars(void) const;
    std::string  getFormatAsString(void) const;
    bool  hasUnit(void) const;
    TypeUnit  getUnit(void);
    const TypeUnit  getUnit(void) const;
    const char * getUnitAsChars(void) const;
    std::string  getUnitAsString(void) const;

    virtual size_t extraFlightTimeFormatComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightTimeFormatComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightTimeFormatComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightTimeFormatComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightTimeFormatLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightTimeFormatLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFormat(TypeFormat new_value)
      {
        flagHasFormat = true;
        storeFormat = new_value;
      }
    void setFormat(const char *chars)
      {
        setFormat(stringToFormat(chars));
      }
    void setFormat(std::string the_string)
      {
        setFormat(stringToFormat(the_string.c_str()));
      }
    void unsetFormat(void)
      {
        flagHasFormat = false;
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

    virtual void extraFlightTimeFormatAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightTimeFormatSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightTimeFormatLookup(key);
        if (old_field == NULL)
          {
            extraFlightTimeFormatAppendPair(key, new_component);
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
        assert(flagHasFormat);
        handler->start_pair("Format");
        switch (storeFormat)
          {
            case Format_DateTime:
                handler->string_value("DateTime");
                break;
            case Format_TimeTill:
                handler->string_value("TimeTill");
                break;
            case Format_HowLateEarly:
                handler->string_value("HowLateEarly");
                break;
            default:
                assert(false);
          }
        if (flagHasUnit)
          {
            handler->start_pair("Unit");
            switch (storeUnit)
              {
                case Unit_None:
                    handler->string_value("None");
                    break;
                case Unit_Week:
                    handler->string_value("Week");
                    break;
                case Unit_Hour:
                    handler->string_value("Hour");
                    break;
                case Unit_Minute:
                    handler->string_value("Minute");
                    break;
                case Unit_Second:
                    handler->string_value("Second");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFormat()))
          {
            return "When parsing the object for %what%, the \"Format\" field was missing.";
          }
        return NULL;
      }

    static FlightTimeFormatJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightTimeFormatJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightTimeFormatJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTimeFormatJSON>, FlightTimeFormatJSON *, bool> generator("Type FlightTimeFormat", ignore_extras);
            parse_json_value(text, "Text for FlightTimeFormatJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightTimeFormatJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightTimeFormatJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightTimeFormatJSON>, FlightTimeFormatJSON *, bool> generator("Type FlightTimeFormat", ignore_extras);
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
    class FieldGeneratorFormat : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFormat(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFormat(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFormat(result));
              }
            virtual void handle_result(TypeFormat result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFormat, TypeFormat, TypeFormat > fieldGeneratorFormat;
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
            FlightTimeFormatJSON *result = new FlightTimeFormatJSON();
            assert(result != NULL);
            RCHandle<FlightTimeFormatJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightTimeFormatAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightTimeFormatJSON *result)
          {
            if (fieldGeneratorFormat.have_value)
              {
                result->setFormat(fieldGeneratorFormat.value);
                fieldGeneratorFormat.have_value = false;
              }
            else if (!(result->hasFormat()))
              {
                error("When parsing the object for %what%, the \"Format\" field was missing.");
              }
            if (fieldGeneratorUnit.have_value)
              {
                result->setUnit(fieldGeneratorUnit.value);
                fieldGeneratorUnit.have_value = false;
              }
          }
        virtual void handle_result(FlightTimeFormatJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "ormat") == 0)
                        return &fieldGeneratorFormat;
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
        Generator(bool ignore_extras = false) : fieldGeneratorFormat("field \"Format\" of the FlightTimeFormat class"), fieldGeneratorUnit("field \"Unit\" of the FlightTimeFormat class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightTimeFormat class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFormat.reset();
            fieldGeneratorUnit.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTTIMEFORMATJSON_H */
