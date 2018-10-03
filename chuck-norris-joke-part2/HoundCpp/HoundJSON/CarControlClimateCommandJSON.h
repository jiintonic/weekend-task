/* file "CarControlClimateCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLCLIMATECOMMANDJSON_H
#define CARCONTROLCLIMATECOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlClimateCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_TurnAirConditioningOn,
        CommandType_TurnAirConditioningOff,
        CommandType_MaxAirConditioning,
        CommandType_TurnHeatingOn,
        CommandType_TurnHeatingOff,
        CommandType_AdjustTemperature,
        CommandType_RecirculateOn,
        CommandType_RecirculateOff,
        CommandType_AdjustVents,
        CommandType_AdjustFan,
        CommandType_SyncTemperatureZones,
        CommandType_SetClimateControlToAuto,
        CommandType_SetClimateControlToManual,
        CommandType_ShowClimateControlScreen
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);
    enum TypeFanSpeed
      {
        FanSpeed_Off,
        FanSpeed_Lowest,
        FanSpeed_Lower,
        FanSpeed_Low,
        FanSpeed_Medium,
        FanSpeed_High,
        FanSpeed_Higher,
        FanSpeed_Highest,
        FanSpeed_On,
        FanSpeed_Auto,
        FanSpeed_NoChange,
        FanSpeed_SetTo
      };

    static TypeFanSpeed  stringToFanSpeed(const char *chars);
    static const char * stringFromFanSpeed(TypeFanSpeed the_enum);
    class TypeVentsJSON : public ReferenceCounted
      {
      public:
        enum TypeVentAction
          {
            VentAction_Open,
            VentAction_Close,
            VentAction_SetTo,
            VentAction_None
          };

        static TypeVentAction  stringToVentAction(const char *chars);
        static const char * stringFromVentAction(TypeVentAction the_enum);
        enum TypeVentSelection
          {
            VentSelection_DriverDashboardVent,
            VentSelection_PassengerDashboardVent,
            VentSelection_DriverFootwellVent,
            VentSelection_PassengerFootwellVent,
            VentSelection_DriverBothVents,
            VentSelection_PassengerBothVents,
            VentSelection_BothFootwellVents,
            VentSelection_BothDashboardVents,
            VentSelection_AllVents
          };

        static TypeVentSelection  stringToVentSelection(const char *chars);
        static const char * stringFromVentSelection(TypeVentSelection the_enum);

      private:
        bool flagHasVentAction;
        TypeVentAction storeVentAction;
        bool flagHasVentSelection;
        TypeVentSelection storeVentSelection;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeVentsJSON(const TypeVentsJSON &);
        TypeVentsJSON & operator=(const TypeVentsJSON &other);

        void  fromJSONVentAction(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONVentSelection(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeVentsJSON(void);
        virtual ~TypeVentsJSON(void);
        bool  hasVentAction(void) const;
        TypeVentAction  getVentAction(void);
        const TypeVentAction  getVentAction(void) const;
        const char * getVentActionAsChars(void) const;
        std::string  getVentActionAsString(void) const;
        bool  hasVentSelection(void) const;
        TypeVentSelection  getVentSelection(void);
        const TypeVentSelection  getVentSelection(void) const;
        const char * getVentSelectionAsChars(void) const;
        std::string  getVentSelectionAsString(void) const;

        virtual size_t extraTypeVentsComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeVentsComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeVentsComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeVentsComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeVentsLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeVentsLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setVentAction(TypeVentAction new_value)
          {
            flagHasVentAction = true;
            storeVentAction = new_value;
          }
        void setVentAction(const char *chars)
          {
            setVentAction(stringToVentAction(chars));
          }
        void setVentAction(std::string the_string)
          {
            setVentAction(stringToVentAction(the_string.c_str()));
          }
        void unsetVentAction(void)
          {
            flagHasVentAction = false;
          }
        void setVentSelection(TypeVentSelection new_value)
          {
            flagHasVentSelection = true;
            storeVentSelection = new_value;
          }
        void setVentSelection(const char *chars)
          {
            setVentSelection(stringToVentSelection(chars));
          }
        void setVentSelection(std::string the_string)
          {
            setVentSelection(stringToVentSelection(the_string.c_str()));
          }
        void unsetVentSelection(void)
          {
            flagHasVentSelection = false;
          }

        virtual void extraTypeVentsAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeVentsSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeVentsLookup(key);
            if (old_field == NULL)
              {
                extraTypeVentsAppendPair(key, new_component);
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
            assert(flagHasVentAction);
            handler->start_pair("VentAction");
            switch (storeVentAction)
              {
                case VentAction_Open:
                    handler->string_value("Open");
                    break;
                case VentAction_Close:
                    handler->string_value("Close");
                    break;
                case VentAction_SetTo:
                    handler->string_value("SetTo");
                    break;
                case VentAction_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasVentSelection);
            handler->start_pair("VentSelection");
            switch (storeVentSelection)
              {
                case VentSelection_DriverDashboardVent:
                    handler->string_value("DriverDashboardVent");
                    break;
                case VentSelection_PassengerDashboardVent:
                    handler->string_value("PassengerDashboardVent");
                    break;
                case VentSelection_DriverFootwellVent:
                    handler->string_value("DriverFootwellVent");
                    break;
                case VentSelection_PassengerFootwellVent:
                    handler->string_value("PassengerFootwellVent");
                    break;
                case VentSelection_DriverBothVents:
                    handler->string_value("DriverBothVents");
                    break;
                case VentSelection_PassengerBothVents:
                    handler->string_value("PassengerBothVents");
                    break;
                case VentSelection_BothFootwellVents:
                    handler->string_value("BothFootwellVents");
                    break;
                case VentSelection_BothDashboardVents:
                    handler->string_value("BothDashboardVents");
                    break;
                case VentSelection_AllVents:
                    handler->string_value("AllVents");
                    break;
                default:
                    assert(false);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasVentAction()))
              {
                return "When parsing the object for %what%, the \"VentAction\" field was missing.";
              }
            if (!(hasVentSelection()))
              {
                return "When parsing the object for %what%, the \"VentSelection\" field was missing.";
              }
            return NULL;
          }

        static TypeVentsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeVentsJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeVentsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeVentsJSON>, TypeVentsJSON *, bool> generator("Type TypeVents", ignore_extras);
                parse_json_value(text, "Text for TypeVentsJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeVentsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeVentsJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeVentsJSON>, TypeVentsJSON *, bool> generator("Type TypeVents", ignore_extras);
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
        class FieldGeneratorVentAction : public JSONStringGenerator
              {
              protected:
                FieldGeneratorVentAction(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorVentAction(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToVentAction(result));
                  }
                virtual void handle_result(TypeVentAction result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorVentAction, TypeVentAction, TypeVentAction > fieldGeneratorVentAction;
        class FieldGeneratorVentSelection : public JSONStringGenerator
              {
              protected:
                FieldGeneratorVentSelection(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorVentSelection(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToVentSelection(result));
                  }
                virtual void handle_result(TypeVentSelection result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorVentSelection, TypeVentSelection, TypeVentSelection > fieldGeneratorVentSelection;
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
                TypeVentsJSON *result = new TypeVentsJSON();
                assert(result != NULL);
                RCHandle<TypeVentsJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeVentsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeVentsJSON *result)
              {
                if (fieldGeneratorVentAction.have_value)
                  {
                    result->setVentAction(fieldGeneratorVentAction.value);
                    fieldGeneratorVentAction.have_value = false;
                  }
                else if (!(result->hasVentAction()))
                  {
                    error("When parsing the object for %what%, the \"VentAction\" field was missing.");
                  }
                if (fieldGeneratorVentSelection.have_value)
                  {
                    result->setVentSelection(fieldGeneratorVentSelection.value);
                    fieldGeneratorVentSelection.have_value = false;
                  }
                else if (!(result->hasVentSelection()))
                  {
                    error("When parsing the object for %what%, the \"VentSelection\" field was missing.");
                  }
              }
            virtual void handle_result(TypeVentsJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Vent", 4) == 0)
                  {
                    switch ((unsigned char)(field_name[4]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[5]), "ction") == 0)
                                return &fieldGeneratorVentAction;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[5]), "election") == 0)
                                return &fieldGeneratorVentSelection;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorVentAction("field \"VentAction\" of the TypeVents class"), fieldGeneratorVentSelection("field \"VentSelection\" of the TypeVents class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeVents class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorVentAction.reset();
                fieldGeneratorVentSelection.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeTemperatureJSON : public ReferenceCounted
      {
      public:
        enum TypeUnit
          {
            Unit_F,
            Unit_C,
            Unit_degrees
          };

        static TypeUnit  stringToUnit(const char *chars);
        static const char * stringFromUnit(TypeUnit the_enum);
        enum TypeZone
          {
            Zone_Unspecified,
            Zone_Driver,
            Zone_Passenger,
            Zone_BackSeat
          };

        static TypeZone  stringToZone(const char *chars);
        static const char * stringFromZone(TypeZone the_enum);

      private:
        bool flagHasValue;
        double storeValue;
        std::string textStoreValue;
        bool flagHasIsRelative;
        bool storeIsRelative;
        bool flagHasAmbiguousValue;
        double storeAmbiguousValue;
        std::string textStoreAmbiguousValue;
        bool flagHasUnit;
        TypeUnit storeUnit;
        bool flagHasZone;
        TypeZone storeZone;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeTemperatureJSON(const TypeTemperatureJSON &);
        TypeTemperatureJSON & operator=(const TypeTemperatureJSON &other);

        void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONIsRelative(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmbiguousValue(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnit(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONZone(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeTemperatureJSON(void);
        virtual ~TypeTemperatureJSON(void);
        bool  hasValue(void) const;
        double  getValue(void);
        const double  getValue(void) const;
        std::string  getValueAsText(void) const;
        bool  hasIsRelative(void) const;
        bool  getIsRelative(void);
        const bool  getIsRelative(void) const;
        bool  hasAmbiguousValue(void) const;
        double  getAmbiguousValue(void);
        const double  getAmbiguousValue(void) const;
        std::string  getAmbiguousValueAsText(void) const;
        bool  hasUnit(void) const;
        TypeUnit  getUnit(void);
        const TypeUnit  getUnit(void) const;
        const char * getUnitAsChars(void) const;
        std::string  getUnitAsString(void) const;
        bool  hasZone(void) const;
        TypeZone  getZone(void);
        const TypeZone  getZone(void) const;
        const char * getZoneAsChars(void) const;
        std::string  getZoneAsString(void) const;

        virtual size_t extraTypeTemperatureComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeTemperatureComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeTemperatureComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeTemperatureComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeTemperatureLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeTemperatureLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setValue(double new_value)
          {
            flagHasValue = true;
            storeValue = new_value;
            textStoreValue = "";
          }
        void setValueText(std::string new_value)
          {
            flagHasValue = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Value of TypeTemperatureJSON is not a valid number.");
            textStoreValue = new_value;
          }
        void unsetValue(void)
          {
            flagHasValue = false;
          }
        void setIsRelative(bool new_value)
          {
            flagHasIsRelative = true;
            storeIsRelative = new_value;
          }
        void unsetIsRelative(void)
          {
            flagHasIsRelative = false;
          }
        void setAmbiguousValue(double new_value)
          {
            flagHasAmbiguousValue = true;
            storeAmbiguousValue = new_value;
            textStoreAmbiguousValue = "";
          }
        void setAmbiguousValueText(std::string new_value)
          {
            flagHasAmbiguousValue = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field AmbiguousValue of TypeTemperatureJSON is not a valid number.");
            textStoreAmbiguousValue = new_value;
          }
        void unsetAmbiguousValue(void)
          {
            flagHasAmbiguousValue = false;
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
        void setZone(TypeZone new_value)
          {
            flagHasZone = true;
            storeZone = new_value;
          }
        void setZone(const char *chars)
          {
            setZone(stringToZone(chars));
          }
        void setZone(std::string the_string)
          {
            setZone(stringToZone(the_string.c_str()));
          }
        void unsetZone(void)
          {
            flagHasZone = false;
          }

        virtual void extraTypeTemperatureAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeTemperatureSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeTemperatureLookup(key);
            if (old_field == NULL)
              {
                extraTypeTemperatureAppendPair(key, new_component);
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
            assert(flagHasValue);
            handler->start_pair("Value");
            if (textStoreValue != "")
                handler->number_value(textStoreValue.c_str());
            else if (((double)(long int)storeValue) == storeValue)
                handler->number_value((long int)storeValue);
            else
                handler->number_value(storeValue);
            assert(flagHasIsRelative);
            handler->start_pair("IsRelative");
            handler->boolean_value(storeIsRelative);
            if (flagHasAmbiguousValue)
              {
                handler->start_pair("AmbiguousValue");
                if (textStoreAmbiguousValue != "")
                    handler->number_value(textStoreAmbiguousValue.c_str());
                else if (((double)(long int)storeAmbiguousValue) == storeAmbiguousValue)
                    handler->number_value((long int)storeAmbiguousValue);
                else
                    handler->number_value(storeAmbiguousValue);
              }
            assert(flagHasUnit);
            handler->start_pair("Unit");
            switch (storeUnit)
              {
                case Unit_F:
                    handler->string_value("F");
                    break;
                case Unit_C:
                    handler->string_value("C");
                    break;
                case Unit_degrees:
                    handler->string_value("degrees");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasZone);
            handler->start_pair("Zone");
            switch (storeZone)
              {
                case Zone_Unspecified:
                    handler->string_value("Unspecified");
                    break;
                case Zone_Driver:
                    handler->string_value("Driver");
                    break;
                case Zone_Passenger:
                    handler->string_value("Passenger");
                    break;
                case Zone_BackSeat:
                    handler->string_value("BackSeat");
                    break;
                default:
                    assert(false);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasValue()))
              {
                return "When parsing the object for %what%, the \"Value\" field was missing.";
              }
            if (!(hasIsRelative()))
              {
                return "When parsing the object for %what%, the \"IsRelative\" field was missing.";
              }
            if (!(hasUnit()))
              {
                return "When parsing the object for %what%, the \"Unit\" field was missing.";
              }
            if (!(hasZone()))
              {
                return "When parsing the object for %what%, the \"Zone\" field was missing.";
              }
            return NULL;
          }

        static TypeTemperatureJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeTemperatureJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
                parse_json_value(text, "Text for TypeTemperatureJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeTemperatureJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeTemperatureJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool> generator("Type TypeTemperature", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValue;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsRelative;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorAmbiguousValue;
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
        class FieldGeneratorZone : public JSONStringGenerator
              {
              protected:
                FieldGeneratorZone(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorZone(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToZone(result));
                  }
                virtual void handle_result(TypeZone result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorZone, TypeZone, TypeZone > fieldGeneratorZone;
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
                TypeTemperatureJSON *result = new TypeTemperatureJSON();
                assert(result != NULL);
                RCHandle<TypeTemperatureJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeTemperatureAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeTemperatureJSON *result)
              {
                if (fieldGeneratorValue.have_value)
                  {
                    result->setValueText(fieldGeneratorValue.value);
                    fieldGeneratorValue.have_value = false;
                  }
                else if (!(result->hasValue()))
                  {
                    error("When parsing the object for %what%, the \"Value\" field was missing.");
                  }
                if (fieldGeneratorIsRelative.have_value)
                  {
                    result->setIsRelative(fieldGeneratorIsRelative.value);
                    fieldGeneratorIsRelative.have_value = false;
                  }
                else if (!(result->hasIsRelative()))
                  {
                    error("When parsing the object for %what%, the \"IsRelative\" field was missing.");
                  }
                if (fieldGeneratorAmbiguousValue.have_value)
                  {
                    result->setAmbiguousValueText(fieldGeneratorAmbiguousValue.value);
                    fieldGeneratorAmbiguousValue.have_value = false;
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
                if (fieldGeneratorZone.have_value)
                  {
                    result->setZone(fieldGeneratorZone.value);
                    fieldGeneratorZone.have_value = false;
                  }
                else if (!(result->hasZone()))
                  {
                    error("When parsing the object for %what%, the \"Zone\" field was missing.");
                  }
              }
            virtual void handle_result(TypeTemperatureJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "mbiguousValue") == 0)
                            return &fieldGeneratorAmbiguousValue;
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "sRelative") == 0)
                            return &fieldGeneratorIsRelative;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "nit") == 0)
                            return &fieldGeneratorUnit;
                        break;
                    case 'V':
                        if (strcmp(&(field_name[1]), "alue") == 0)
                            return &fieldGeneratorValue;
                        break;
                    case 'Z':
                        if (strcmp(&(field_name[1]), "one") == 0)
                            return &fieldGeneratorZone;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorValue("field \"Value\" of the TypeTemperature class"), fieldGeneratorIsRelative("field \"IsRelative\" of the TypeTemperature class"), fieldGeneratorAmbiguousValue("field \"AmbiguousValue\" of the TypeTemperature class"), fieldGeneratorUnit("field \"Unit\" of the TypeTemperature class"), fieldGeneratorZone("field \"Zone\" of the TypeTemperature class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeTemperature class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorValue.reset();
                fieldGeneratorIsRelative.reset();
                fieldGeneratorAmbiguousValue.reset();
                fieldGeneratorUnit.reset();
                fieldGeneratorZone.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasFanSpeed;
    TypeFanSpeed storeFanSpeed;
    bool flagHasFanSpeedNumber;
    double storeFanSpeedNumber;
    std::string textStoreFanSpeedNumber;
    bool flagHasVents;
    TypeVentsJSON * storeVents;
    bool flagHasTemperature;
    std::vector< TypeTemperatureJSON * > storeTemperature;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlClimateCommandJSON(const CarControlClimateCommandJSON &);
    CarControlClimateCommandJSON & operator=(const CarControlClimateCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraFanSpeedToJSON(void) const;
    JSONValue * extraFanSpeedNumberToJSON(void) const;
    JSONValue * extraVentsToJSON(void) const;
    JSONValue * extraTemperatureToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFanSpeed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFanSpeedNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVents(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTemperature(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlClimateCommandJSON(void);
    virtual ~CarControlClimateCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasFanSpeed(void) const;
    TypeFanSpeed  getFanSpeed(void);
    const TypeFanSpeed  getFanSpeed(void) const;
    const char * getFanSpeedAsChars(void) const;
    std::string  getFanSpeedAsString(void) const;
    bool  hasFanSpeedNumber(void) const;
    double  getFanSpeedNumber(void);
    const double  getFanSpeedNumber(void) const;
    std::string  getFanSpeedNumberAsText(void) const;
    bool  hasVents(void) const;
    TypeVentsJSON *  getVents(void);
    const TypeVentsJSON *  getVents(void) const;
    bool  hasTemperature(void) const;
    size_t  countOfTemperature(void) const;
    TypeTemperatureJSON *  elementOfTemperature(size_t element_num);
    const TypeTemperatureJSON *  elementOfTemperature(size_t element_num) const;
    std::vector< TypeTemperatureJSON * >  getTemperature(void);
    const std::vector< TypeTemperatureJSON * >  getTemperature(void) const;

    virtual size_t extraCarControlClimateCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlClimateCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlClimateCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlClimateCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlClimateCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlClimateCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCarControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCommandType)
            ++result;
        if (flagHasFanSpeed)
            ++result;
        if (flagHasFanSpeedNumber)
            ++result;
        if (flagHasVents)
            ++result;
        if (flagHasTemperature)
            ++result;
        result += extraCarControlClimateCommandComponentCount();
        return result;
      }
    const char *extraCarControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        if (flagHasFanSpeed)
          {
            if (remainder == 0)
                return "FanSpeed";
            --remainder;
          }
        if (flagHasFanSpeedNumber)
          {
            if (remainder == 0)
                return "FanSpeedNumber";
            --remainder;
          }
        if (flagHasVents)
          {
            if (remainder == 0)
                return "Vents";
            --remainder;
          }
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return "Temperature";
            --remainder;
          }
        return extraCarControlClimateCommandComponentKey(remainder);
      }
    JSONValue *extraCarControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasFanSpeed)
          {
            if (remainder == 0)
                return extraFanSpeedToJSON();
            --remainder;
          }
        if (flagHasFanSpeedNumber)
          {
            if (remainder == 0)
                return extraFanSpeedNumberToJSON();
            --remainder;
          }
        if (flagHasVents)
          {
            if (remainder == 0)
                return extraVentsToJSON();
            --remainder;
          }
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return extraTemperatureToJSON();
            --remainder;
          }
        return extraCarControlClimateCommandComponentValue(remainder);
      }
    const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasFanSpeed)
          {
            if (remainder == 0)
                return extraFanSpeedToJSON();
            --remainder;
          }
        if (flagHasFanSpeedNumber)
          {
            if (remainder == 0)
                return extraFanSpeedNumberToJSON();
            --remainder;
          }
        if (flagHasVents)
          {
            if (remainder == 0)
                return extraVentsToJSON();
            --remainder;
          }
        if (flagHasTemperature)
          {
            if (remainder == 0)
                return extraTemperatureToJSON();
            --remainder;
          }
        return extraCarControlClimateCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "anSpeed", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 0:
                            return (flagHasFanSpeed ? extraFanSpeedToJSON() : NULL);
                        case 'N':
                            if (strcmp(&(field_name[9]), "umber") == 0)
                                return (flagHasFanSpeedNumber ? extraFanSpeedNumberToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "emperature") == 0)
                    return (flagHasTemperature ? extraTemperatureToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ents") == 0)
                    return (flagHasVents ? extraVentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlClimateCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'F':
                if (strncmp(&(field_name[1]), "anSpeed", 7) == 0)
                  {
                    switch ((unsigned char)(field_name[8]))
                      {
                        case 0:
                            return (flagHasFanSpeed ? extraFanSpeedToJSON() : NULL);
                        case 'N':
                            if (strcmp(&(field_name[9]), "umber") == 0)
                                return (flagHasFanSpeedNumber ? extraFanSpeedNumberToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "emperature") == 0)
                    return (flagHasTemperature ? extraTemperatureToJSON() : NULL);
                break;
            case 'V':
                if (strcmp(&(field_name[1]), "ents") == 0)
                    return (flagHasVents ? extraVentsToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlClimateCommandLookup(field_name);
      }

    void setCommandType(TypeCommandType new_value)
      {
        flagHasCommandType = true;
        storeCommandType = new_value;
      }
    void setCommandType(const char *chars)
      {
        setCommandType(stringToCommandType(chars));
      }
    void setCommandType(std::string the_string)
      {
        setCommandType(stringToCommandType(the_string.c_str()));
      }
    void unsetCommandType(void)
      {
        flagHasCommandType = false;
      }
    void setFanSpeed(TypeFanSpeed new_value)
      {
        flagHasFanSpeed = true;
        storeFanSpeed = new_value;
      }
    void setFanSpeed(const char *chars)
      {
        setFanSpeed(stringToFanSpeed(chars));
      }
    void setFanSpeed(std::string the_string)
      {
        setFanSpeed(stringToFanSpeed(the_string.c_str()));
      }
    void unsetFanSpeed(void)
      {
        flagHasFanSpeed = false;
      }
    void setFanSpeedNumber(double new_value)
      {
        flagHasFanSpeedNumber = true;
        storeFanSpeedNumber = new_value;
        textStoreFanSpeedNumber = "";
      }
    void setFanSpeedNumberText(std::string new_value)
      {
        flagHasFanSpeedNumber = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field FanSpeedNumber of CarControlClimateCommandJSON is not a valid number.");
        textStoreFanSpeedNumber = new_value;
      }
    void unsetFanSpeedNumber(void)
      {
        flagHasFanSpeedNumber = false;
      }
    void setVents(TypeVentsJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVents)
          {
            storeVents->remove_reference();
          }
        flagHasVents = true;
        storeVents = new_value;
      }
    void unsetVents(void)
      {
        if (flagHasVents)
          {
            storeVents->remove_reference();
          }
        flagHasVents = false;
      }
    void initTemperature(void)
      {
        if (flagHasTemperature)
          {
            for (size_t num2 = 0; num2 < storeTemperature.size(); ++num2)
              {
                storeTemperature[num2]->remove_reference();
              }
          }
        flagHasTemperature = true;
        storeTemperature.clear();
      }
    void appendTemperature(TypeTemperatureJSON * to_append)
      {
        if (!flagHasTemperature)
          {
            flagHasTemperature = true;
            storeTemperature.clear();
          }
        assert(flagHasTemperature);
        to_append->add_reference();
        storeTemperature.push_back(to_append);
      }
    void unsetTemperature(void)
      {
        if (flagHasTemperature)
          {
            for (size_t num3 = 0; num3 < storeTemperature.size(); ++num3)
              {
                storeTemperature[num3]->remove_reference();
              }
          }
        flagHasTemperature = false;
        storeTemperature.clear();
      }

    virtual void extraCarControlClimateCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlClimateCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlClimateCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlClimateCommandAppendPair(key, new_component);
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
    void extraCarControlCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "anSpeed", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 0:
                            {
                            fromJSONFanSpeed(new_component, false);
                            return;
                            }
                        case 'N':
                            if (strcmp(&(key[9]), "umber") == 0)
                                {
                                fromJSONFanSpeedNumber(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "emperature") == 0)
                    {
                    fromJSONTemperature(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ents") == 0)
                    {
                    fromJSONVents(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlClimateCommandAppendPair(key, new_component);
      }
    void extraCarControlCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "ommandType") == 0)
                    {
                    fromJSONCommandType(new_component, false);
                    return;
                    }
                break;
            case 'F':
                if (strncmp(&(key[1]), "anSpeed", 7) == 0)
                  {
                    switch ((unsigned char)(key[8]))
                      {
                        case 0:
                            {
                            fromJSONFanSpeed(new_component, false);
                            return;
                            }
                        case 'N':
                            if (strcmp(&(key[9]), "umber") == 0)
                                {
                                fromJSONFanSpeedNumber(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'T':
                if (strcmp(&(key[1]), "emperature") == 0)
                    {
                    fromJSONTemperature(new_component, false);
                    return;
                    }
                break;
            case 'V':
                if (strcmp(&(key[1]), "ents") == 0)
                    {
                    fromJSONVents(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlClimateCommandSetField(key, new_component);
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
        CarControlCommandJSON::write_fields_as_json(handler);
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_TurnAirConditioningOn:
                handler->string_value("TurnAirConditioningOn");
                break;
            case CommandType_TurnAirConditioningOff:
                handler->string_value("TurnAirConditioningOff");
                break;
            case CommandType_MaxAirConditioning:
                handler->string_value("MaxAirConditioning");
                break;
            case CommandType_TurnHeatingOn:
                handler->string_value("TurnHeatingOn");
                break;
            case CommandType_TurnHeatingOff:
                handler->string_value("TurnHeatingOff");
                break;
            case CommandType_AdjustTemperature:
                handler->string_value("AdjustTemperature");
                break;
            case CommandType_RecirculateOn:
                handler->string_value("RecirculateOn");
                break;
            case CommandType_RecirculateOff:
                handler->string_value("RecirculateOff");
                break;
            case CommandType_AdjustVents:
                handler->string_value("AdjustVents");
                break;
            case CommandType_AdjustFan:
                handler->string_value("AdjustFan");
                break;
            case CommandType_SyncTemperatureZones:
                handler->string_value("SyncTemperatureZones");
                break;
            case CommandType_SetClimateControlToAuto:
                handler->string_value("SetClimateControlToAuto");
                break;
            case CommandType_SetClimateControlToManual:
                handler->string_value("SetClimateControlToManual");
                break;
            case CommandType_ShowClimateControlScreen:
                handler->string_value("ShowClimateControlScreen");
                break;
            default:
                assert(false);
          }
        if (flagHasFanSpeed)
          {
            handler->start_pair("FanSpeed");
            switch (storeFanSpeed)
              {
                case FanSpeed_Off:
                    handler->string_value("Off");
                    break;
                case FanSpeed_Lowest:
                    handler->string_value("Lowest");
                    break;
                case FanSpeed_Lower:
                    handler->string_value("Lower");
                    break;
                case FanSpeed_Low:
                    handler->string_value("Low");
                    break;
                case FanSpeed_Medium:
                    handler->string_value("Medium");
                    break;
                case FanSpeed_High:
                    handler->string_value("High");
                    break;
                case FanSpeed_Higher:
                    handler->string_value("Higher");
                    break;
                case FanSpeed_Highest:
                    handler->string_value("Highest");
                    break;
                case FanSpeed_On:
                    handler->string_value("On");
                    break;
                case FanSpeed_Auto:
                    handler->string_value("Auto");
                    break;
                case FanSpeed_NoChange:
                    handler->string_value("NoChange");
                    break;
                case FanSpeed_SetTo:
                    handler->string_value("SetTo");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasFanSpeedNumber)
          {
            handler->start_pair("FanSpeedNumber");
            if (textStoreFanSpeedNumber != "")
                handler->number_value(textStoreFanSpeedNumber.c_str());
            else if (((double)(long int)storeFanSpeedNumber) == storeFanSpeedNumber)
                handler->number_value((long int)storeFanSpeedNumber);
            else
                handler->number_value(storeFanSpeedNumber);
          }
        if (flagHasVents)
          {
            handler->start_pair("Vents");
            storeVents->write_as_json(handler);
          }
        if (flagHasTemperature)
          {
            handler->start_pair("Temperature");
            assert(storeTemperature.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeTemperature.size(); ++num1)
              {
                storeTemperature[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        return NULL;
      }

    static CarControlClimateCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlClimateCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlClimateCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlClimateCommandJSON>, CarControlClimateCommandJSON *, bool> generator("Type CarControlClimateCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlClimateCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlClimateCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlClimateCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlClimateCommandJSON>, CarControlClimateCommandJSON *, bool> generator("Type CarControlClimateCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CarControlCommandJSON::Generator
      {
      private:
    class FieldGeneratorCommandType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCommandType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCommandType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCommandType(result));
              }
            virtual void handle_result(TypeCommandType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCommandType, TypeCommandType, TypeCommandType > fieldGeneratorCommandType;
    class FieldGeneratorFanSpeed : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFanSpeed(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFanSpeed(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToFanSpeed(result));
              }
            virtual void handle_result(TypeFanSpeed result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFanSpeed, TypeFanSpeed, TypeFanSpeed > fieldGeneratorFanSpeed;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorFanSpeedNumber;
        JSONHoldingGenerator<TypeVentsJSON::Generator, RCHandle<TypeVentsJSON>, TypeVentsJSON *, bool > fieldGeneratorVents;
        JSONHoldingArrayGenerator<TypeTemperatureJSON::Generator, RCHandle<TypeTemperatureJSON>, TypeTemperatureJSON *, bool > fieldGeneratorTemperature;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlClimateCommand") == 0))
                throw("The key field has a value other than `CarControlClimateCommand'.");
            CarControlClimateCommandJSON *result = new CarControlClimateCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlClimateCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlClimateCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlClimateCommandJSON *)new_result);
          }
        void finish(CarControlClimateCommandJSON *result)
          {
            if (fieldGeneratorCommandType.have_value)
              {
                result->setCommandType(fieldGeneratorCommandType.value);
                fieldGeneratorCommandType.have_value = false;
              }
            else if (!(result->hasCommandType()))
              {
                error("When parsing the object for %what%, the \"CommandType\" field was missing.");
              }
            if (fieldGeneratorFanSpeed.have_value)
              {
                result->setFanSpeed(fieldGeneratorFanSpeed.value);
                fieldGeneratorFanSpeed.have_value = false;
              }
            if (fieldGeneratorFanSpeedNumber.have_value)
              {
                result->setFanSpeedNumberText(fieldGeneratorFanSpeedNumber.value);
                fieldGeneratorFanSpeedNumber.have_value = false;
              }
            if (fieldGeneratorVents.have_value)
              {
                result->setVents(fieldGeneratorVents.value.referenced());
                fieldGeneratorVents.have_value = false;
              }
            if (fieldGeneratorTemperature.have_value)
              {
                result->initTemperature();
                size_t count = fieldGeneratorTemperature.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendTemperature(fieldGeneratorTemperature.value[num].referenced());
                  }
                fieldGeneratorTemperature.value.clear();
                fieldGeneratorTemperature.have_value = false;
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlClimateCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "anSpeed", 7) == 0)
                      {
                        switch ((unsigned char)(field_name[8]))
                          {
                            case 0:
                                return &fieldGeneratorFanSpeed;
                            case 'N':
                                if (strcmp(&(field_name[9]), "umber") == 0)
                                    return &fieldGeneratorFanSpeedNumber;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "emperature") == 0)
                        return &fieldGeneratorTemperature;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ents") == 0)
                        return &fieldGeneratorVents;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlClimateCommand class"), fieldGeneratorFanSpeed("field \"FanSpeed\" of the CarControlClimateCommand class"), fieldGeneratorFanSpeedNumber("field \"FanSpeedNumber\" of the CarControlClimateCommand class"), fieldGeneratorVents("field \"Vents\" of the CarControlClimateCommand class", ignore_extras), fieldGeneratorTemperature("field \"Temperature\" of the CarControlClimateCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlClimateCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorFanSpeed.reset();
            fieldGeneratorFanSpeedNumber.reset();
            fieldGeneratorVents.reset();
            fieldGeneratorTemperature.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLCLIMATECOMMANDJSON_H */
