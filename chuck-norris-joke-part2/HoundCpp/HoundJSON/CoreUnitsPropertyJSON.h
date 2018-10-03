/* file "CoreUnitsPropertyJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef COREUNITSPROPERTYJSON_H
#define COREUNITSPROPERTYJSON_H

#pragma interface

#include "PropertyJSON.h"
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


class CoreUnitsPropertyJSON : public PropertyJSON
  {
  public:
    enum TypeTagKnownValues
      {
        Tag_distance,
        Tag_position,
        Tag_area,
        Tag_volume,
        Tag_duration,
        Tag_time,
        Tag_angle,
        Tag_solid_angle,
        Tag_orientation,
        Tag_mass,
        Tag_weight,
        Tag_energy,
        Tag_power,
        Tag_electric_charge,
        Tag_electric_potential_difference,
        Tag_capacitance,
        Tag_electric_resistance,
        Tag_electric_conductance,
        Tag_inductance,
        Tag_magnetic_flux,
        Tag_magnetic_flux_density,
        Tag_current,
        Tag_temperature,
        Tag_count,
        Tag_luminosity,
        Tag_luminous_flux,
        Tag_illuminance,
        Tag_frequency,
        Tag_force,
        Tag_pressure,
        Tag_absorbed_dose,
        Tag_catalytic_activity,
        Tag_width,
        Tag_height,
        Tag_depth,
        Tag__none
      };
    struct TypeTag
      {
        bool in_known_list;
        std::string string_value;
        TypeTagKnownValues list_value;

        TypeTag(void);
        TypeTag(const TypeTag &other);
        TypeTag(TypeTagKnownValues other);
        bool  operator==(const TypeTag &other) const;
        bool  operator!=(const TypeTag &other) const;
        bool  operator<(const TypeTag &other) const;
        bool  operator>(const TypeTag &other) const;
        bool  operator>=(const TypeTag &other) const;
        bool  operator<=(const TypeTag &other) const;

      };

    static TypeTagKnownValues  stringToTag(const char *chars);
    static const char * stringFromTag(TypeTagKnownValues the_enum);

  private:
    bool flagHasTag;
    TypeTag storeTag;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CoreUnitsPropertyJSON(const CoreUnitsPropertyJSON &);
    CoreUnitsPropertyJSON & operator=(const CoreUnitsPropertyJSON &other);

    JSONValue * extraTagToJSON(void) const;

    void  fromJSONTag(JSONValue *json_value, bool ignore_extras = false);


  public:
    CoreUnitsPropertyJSON(void);
    virtual ~CoreUnitsPropertyJSON(void);
    const char * getPropertyKind(void) const;
    bool  hasTag(void) const;
    TypeTag  getTag(void);
    const TypeTag  getTag(void) const;
    const char * getTagAsChars(void) const;
    std::string  getTagAsString(void) const;

    virtual size_t extraCoreUnitsPropertyComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCoreUnitsPropertyComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCoreUnitsPropertyComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCoreUnitsPropertyComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCoreUnitsPropertyLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCoreUnitsPropertyLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraPropertyComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTag)
            ++result;
        result += extraCoreUnitsPropertyComponentCount();
        return result;
      }
    const char *extraPropertyComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return "Tag";
            --remainder;
          }
        return extraCoreUnitsPropertyComponentKey(remainder);
      }
    JSONValue *extraPropertyComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return extraTagToJSON();
            --remainder;
          }
        return extraCoreUnitsPropertyComponentValue(remainder);
      }
    const JSONValue *extraPropertyComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTag)
          {
            if (remainder == 0)
                return extraTagToJSON();
            --remainder;
          }
        return extraCoreUnitsPropertyComponentValue(remainder);
      }
    JSONValue *extraPropertyLookup(const char *field_name)
      {
        if (strcmp(field_name, "Tag") == 0)
            return (flagHasTag ? extraTagToJSON() : NULL);
        return extraCoreUnitsPropertyLookup(field_name);
      }
    const JSONValue *extraPropertyLookup(const char *field_name) const
      {
        if (strcmp(field_name, "Tag") == 0)
            return (flagHasTag ? extraTagToJSON() : NULL);
        return extraCoreUnitsPropertyLookup(field_name);
      }

    void setTag(TypeTag new_value)
      {
        flagHasTag = true;
        storeTag = new_value;
      }
    void setTag(const char *chars)
      {
        TypeTagKnownValues known = stringToTag(chars);
        TypeTag new_value;
        if (known == Tag__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTag(new_value);
      }
    void setTag(std::string the_string)
      {
        setTag(the_string.c_str());
      }
    void setTag(TypeTagKnownValues new_value)
      {
        TypeTag new_full_value;
        assert(new_value != Tag__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setTag(new_full_value);
      }
    void unsetTag(void)
      {
        flagHasTag = false;
      }

    virtual void extraCoreUnitsPropertyAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCoreUnitsPropertySetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCoreUnitsPropertyLookup(key);
        if (old_field == NULL)
          {
            extraCoreUnitsPropertyAppendPair(key, new_component);
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
    void extraPropertyAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Tag") == 0)
            {
            fromJSONTag(new_component, false);
            return;
            }
        extraCoreUnitsPropertyAppendPair(key, new_component);
      }
    void extraPropertySetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "Tag") == 0)
            {
            fromJSONTag(new_component, false);
            return;
            }
        extraCoreUnitsPropertySetField(key, new_component);
      }

    virtual void write_as_json(JSONHandler *handler) const
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
        PropertyJSON::write_fields_as_json(handler);
        assert(flagHasTag);
        handler->start_pair("Tag");
        if (storeTag.in_known_list)
          {
            switch (storeTag.list_value)
              {
                case Tag_distance:
                    handler->string_value("distance");
                    break;
                case Tag_position:
                    handler->string_value("position");
                    break;
                case Tag_area:
                    handler->string_value("area");
                    break;
                case Tag_volume:
                    handler->string_value("volume");
                    break;
                case Tag_duration:
                    handler->string_value("duration");
                    break;
                case Tag_time:
                    handler->string_value("time");
                    break;
                case Tag_angle:
                    handler->string_value("angle");
                    break;
                case Tag_solid_angle:
                    handler->string_value("solid_angle");
                    break;
                case Tag_orientation:
                    handler->string_value("orientation");
                    break;
                case Tag_mass:
                    handler->string_value("mass");
                    break;
                case Tag_weight:
                    handler->string_value("weight");
                    break;
                case Tag_energy:
                    handler->string_value("energy");
                    break;
                case Tag_power:
                    handler->string_value("power");
                    break;
                case Tag_electric_charge:
                    handler->string_value("electric_charge");
                    break;
                case Tag_electric_potential_difference:
                    handler->string_value("electric_potential_difference");
                    break;
                case Tag_capacitance:
                    handler->string_value("capacitance");
                    break;
                case Tag_electric_resistance:
                    handler->string_value("electric_resistance");
                    break;
                case Tag_electric_conductance:
                    handler->string_value("electric_conductance");
                    break;
                case Tag_inductance:
                    handler->string_value("inductance");
                    break;
                case Tag_magnetic_flux:
                    handler->string_value("magnetic_flux");
                    break;
                case Tag_magnetic_flux_density:
                    handler->string_value("magnetic_flux_density");
                    break;
                case Tag_current:
                    handler->string_value("current");
                    break;
                case Tag_temperature:
                    handler->string_value("temperature");
                    break;
                case Tag_count:
                    handler->string_value("count");
                    break;
                case Tag_luminosity:
                    handler->string_value("luminosity");
                    break;
                case Tag_luminous_flux:
                    handler->string_value("luminous_flux");
                    break;
                case Tag_illuminance:
                    handler->string_value("illuminance");
                    break;
                case Tag_frequency:
                    handler->string_value("frequency");
                    break;
                case Tag_force:
                    handler->string_value("force");
                    break;
                case Tag_pressure:
                    handler->string_value("pressure");
                    break;
                case Tag_absorbed_dose:
                    handler->string_value("absorbed_dose");
                    break;
                case Tag_catalytic_activity:
                    handler->string_value("catalytic_activity");
                    break;
                case Tag_width:
                    handler->string_value("width");
                    break;
                case Tag_height:
                    handler->string_value("height");
                    break;
                case Tag_depth:
                    handler->string_value("depth");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeTag.string_value);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasTag()))
          {
            return "When parsing the object for %what%, the \"Tag\" field was missing.";
          }
        return NULL;
      }

    static CoreUnitsPropertyJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CoreUnitsPropertyJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CoreUnitsPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CoreUnitsPropertyJSON>, CoreUnitsPropertyJSON *, bool> generator("Type CoreUnitsProperty", ignore_extras);
            parse_json_value(text, "Text for CoreUnitsPropertyJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CoreUnitsPropertyJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CoreUnitsPropertyJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CoreUnitsPropertyJSON>, CoreUnitsPropertyJSON *, bool> generator("Type CoreUnitsProperty", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public PropertyJSON::Generator
      {
      private:
    class FieldGeneratorTag : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTag(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTag(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeTagKnownValues known = stringToTag(result);
                TypeTag new_value;
                if (known == Tag__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeTag result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTag, TypeTag, TypeTag > fieldGeneratorTag;
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
            if (!(strcmp(getPropertyJSONKey().c_str(), "Core") == 0))
                throw("The key field has a value other than `Core'.");
            CoreUnitsPropertyJSON *result = new CoreUnitsPropertyJSON();
            assert(result != NULL);
            RCHandle<CoreUnitsPropertyJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCoreUnitsPropertyAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(PropertyJSON *new_result)
          {
            handle_result((CoreUnitsPropertyJSON *)new_result);
          }
        void finish(CoreUnitsPropertyJSON *result)
          {
            if (fieldGeneratorTag.have_value)
              {
                result->setTag(fieldGeneratorTag.value);
                fieldGeneratorTag.have_value = false;
              }
            else if (!(result->hasTag()))
              {
                error("When parsing the object for %what%, the \"Tag\" field was missing.");
              }
            PropertyJSON::Generator::finish(result);
          }
        virtual void handle_result(CoreUnitsPropertyJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Tag") == 0)
                return &fieldGeneratorTag;
            return PropertyJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : PropertyJSON::Generator(ignore_extras), fieldGeneratorTag("field \"Tag\" of the CoreUnitsProperty class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CoreUnitsProperty class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTag.reset();
            PropertyJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* COREUNITSPROPERTYJSON_H */
