/* file "CarControlStatusCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLSTATUSCOMMANDJSON_H
#define CARCONTROLSTATUSCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlStatusCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeTireSelection
      {
        TireSelection_LeftFront,
        TireSelection_RightFront,
        TireSelection_BothFront,
        TireSelection_LeftRear,
        TireSelection_RightRear,
        TireSelection_BothRear,
        TireSelection_BothLeft,
        TireSelection_BothRight,
        TireSelection_All,
        TireSelection_None
      };

    static TypeTireSelection  stringToTireSelection(const char *chars);
    static const char * stringFromTireSelection(TypeTireSelection the_enum);
    enum TypeCommandType
      {
        CommandType_FuelInTankLeft,
        CommandType_DistanceBeforeOutOfFuel,
        CommandType_TirePressure,
        CommandType_CheckEngineLightMeaning,
        CommandType_EngineEfficiency,
        CommandType_CoolantTemperature,
        CommandType_BrakePadStatus,
        CommandType_MileageToNextService,
        CommandType_CurrentSpeed,
        CommandType_CurrentGear,
        CommandType_WhichSideFuelTank,
        CommandType_WiperFluidLeft,
        CommandType_AreSeatbeltsOn,
        CommandType_HowAmIDriving,
        CommandType_OilLevel,
        CommandType_BatteryVoltage,
        CommandType_AverageSpeed,
        CommandType_MileageToNextOilChange
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);
    enum TypeEfficiencyUnit
      {
        EfficiencyUnit_MPG,
        EfficiencyUnit_L_x2f_100Km,
        EfficiencyUnit_Km_x2f_L,
        EfficiencyUnit_None
      };

    static TypeEfficiencyUnit  stringToEfficiencyUnit(const char *chars);
    static const char * stringFromEfficiencyUnit(TypeEfficiencyUnit the_enum);

  private:
    bool flagHasTireSelection;
    TypeTireSelection storeTireSelection;
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasShowMe;
    bool storeShowMe;
    bool flagHasEfficiencyUnit;
    TypeEfficiencyUnit storeEfficiencyUnit;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlStatusCommandJSON(const CarControlStatusCommandJSON &);
    CarControlStatusCommandJSON & operator=(const CarControlStatusCommandJSON &other);

    JSONValue * extraTireSelectionToJSON(void) const;
    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraShowMeToJSON(void) const;
    JSONValue * extraEfficiencyUnitToJSON(void) const;

    void  fromJSONTireSelection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONShowMe(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONEfficiencyUnit(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlStatusCommandJSON(void);
    virtual ~CarControlStatusCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasTireSelection(void) const;
    TypeTireSelection  getTireSelection(void);
    const TypeTireSelection  getTireSelection(void) const;
    const char * getTireSelectionAsChars(void) const;
    std::string  getTireSelectionAsString(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasShowMe(void) const;
    bool  getShowMe(void);
    const bool  getShowMe(void) const;
    bool  hasEfficiencyUnit(void) const;
    TypeEfficiencyUnit  getEfficiencyUnit(void);
    const TypeEfficiencyUnit  getEfficiencyUnit(void) const;
    const char * getEfficiencyUnitAsChars(void) const;
    std::string  getEfficiencyUnitAsString(void) const;

    virtual size_t extraCarControlStatusCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlStatusCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlStatusCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlStatusCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlStatusCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlStatusCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCarControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasTireSelection)
            ++result;
        if (flagHasCommandType)
            ++result;
        if (flagHasShowMe)
            ++result;
        if (flagHasEfficiencyUnit)
            ++result;
        result += extraCarControlStatusCommandComponentCount();
        return result;
      }
    const char *extraCarControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTireSelection)
          {
            if (remainder == 0)
                return "TireSelection";
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        if (flagHasShowMe)
          {
            if (remainder == 0)
                return "ShowMe";
            --remainder;
          }
        if (flagHasEfficiencyUnit)
          {
            if (remainder == 0)
                return "EfficiencyUnit";
            --remainder;
          }
        return extraCarControlStatusCommandComponentKey(remainder);
      }
    JSONValue *extraCarControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasTireSelection)
          {
            if (remainder == 0)
                return extraTireSelectionToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasShowMe)
          {
            if (remainder == 0)
                return extraShowMeToJSON();
            --remainder;
          }
        if (flagHasEfficiencyUnit)
          {
            if (remainder == 0)
                return extraEfficiencyUnitToJSON();
            --remainder;
          }
        return extraCarControlStatusCommandComponentValue(remainder);
      }
    const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasTireSelection)
          {
            if (remainder == 0)
                return extraTireSelectionToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        if (flagHasShowMe)
          {
            if (remainder == 0)
                return extraShowMeToJSON();
            --remainder;
          }
        if (flagHasEfficiencyUnit)
          {
            if (remainder == 0)
                return extraEfficiencyUnitToJSON();
            --remainder;
          }
        return extraCarControlStatusCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "fficiencyUnit") == 0)
                    return (flagHasEfficiencyUnit ? extraEfficiencyUnitToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "howMe") == 0)
                    return (flagHasShowMe ? extraShowMeToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ireSelection") == 0)
                    return (flagHasTireSelection ? extraTireSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlStatusCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "fficiencyUnit") == 0)
                    return (flagHasEfficiencyUnit ? extraEfficiencyUnitToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "howMe") == 0)
                    return (flagHasShowMe ? extraShowMeToJSON() : NULL);
                break;
            case 'T':
                if (strcmp(&(field_name[1]), "ireSelection") == 0)
                    return (flagHasTireSelection ? extraTireSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlStatusCommandLookup(field_name);
      }

    void setTireSelection(TypeTireSelection new_value)
      {
        flagHasTireSelection = true;
        storeTireSelection = new_value;
      }
    void setTireSelection(const char *chars)
      {
        setTireSelection(stringToTireSelection(chars));
      }
    void setTireSelection(std::string the_string)
      {
        setTireSelection(stringToTireSelection(the_string.c_str()));
      }
    void unsetTireSelection(void)
      {
        flagHasTireSelection = false;
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
    void setShowMe(bool new_value)
      {
        flagHasShowMe = true;
        storeShowMe = new_value;
      }
    void unsetShowMe(void)
      {
        flagHasShowMe = false;
      }
    void setEfficiencyUnit(TypeEfficiencyUnit new_value)
      {
        flagHasEfficiencyUnit = true;
        storeEfficiencyUnit = new_value;
      }
    void setEfficiencyUnit(const char *chars)
      {
        setEfficiencyUnit(stringToEfficiencyUnit(chars));
      }
    void setEfficiencyUnit(std::string the_string)
      {
        setEfficiencyUnit(stringToEfficiencyUnit(the_string.c_str()));
      }
    void unsetEfficiencyUnit(void)
      {
        flagHasEfficiencyUnit = false;
      }

    virtual void extraCarControlStatusCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlStatusCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlStatusCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlStatusCommandAppendPair(key, new_component);
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
            case 'E':
                if (strcmp(&(key[1]), "fficiencyUnit") == 0)
                    {
                    fromJSONEfficiencyUnit(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "howMe") == 0)
                    {
                    fromJSONShowMe(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ireSelection") == 0)
                    {
                    fromJSONTireSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlStatusCommandAppendPair(key, new_component);
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
            case 'E':
                if (strcmp(&(key[1]), "fficiencyUnit") == 0)
                    {
                    fromJSONEfficiencyUnit(new_component, false);
                    return;
                    }
                break;
            case 'S':
                if (strcmp(&(key[1]), "howMe") == 0)
                    {
                    fromJSONShowMe(new_component, false);
                    return;
                    }
                break;
            case 'T':
                if (strcmp(&(key[1]), "ireSelection") == 0)
                    {
                    fromJSONTireSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlStatusCommandSetField(key, new_component);
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
        if (flagHasTireSelection)
          {
            handler->start_pair("TireSelection");
            switch (storeTireSelection)
              {
                case TireSelection_LeftFront:
                    handler->string_value("LeftFront");
                    break;
                case TireSelection_RightFront:
                    handler->string_value("RightFront");
                    break;
                case TireSelection_BothFront:
                    handler->string_value("BothFront");
                    break;
                case TireSelection_LeftRear:
                    handler->string_value("LeftRear");
                    break;
                case TireSelection_RightRear:
                    handler->string_value("RightRear");
                    break;
                case TireSelection_BothRear:
                    handler->string_value("BothRear");
                    break;
                case TireSelection_BothLeft:
                    handler->string_value("BothLeft");
                    break;
                case TireSelection_BothRight:
                    handler->string_value("BothRight");
                    break;
                case TireSelection_All:
                    handler->string_value("All");
                    break;
                case TireSelection_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_FuelInTankLeft:
                handler->string_value("FuelInTankLeft");
                break;
            case CommandType_DistanceBeforeOutOfFuel:
                handler->string_value("DistanceBeforeOutOfFuel");
                break;
            case CommandType_TirePressure:
                handler->string_value("TirePressure");
                break;
            case CommandType_CheckEngineLightMeaning:
                handler->string_value("CheckEngineLightMeaning");
                break;
            case CommandType_EngineEfficiency:
                handler->string_value("EngineEfficiency");
                break;
            case CommandType_CoolantTemperature:
                handler->string_value("CoolantTemperature");
                break;
            case CommandType_BrakePadStatus:
                handler->string_value("BrakePadStatus");
                break;
            case CommandType_MileageToNextService:
                handler->string_value("MileageToNextService");
                break;
            case CommandType_CurrentSpeed:
                handler->string_value("CurrentSpeed");
                break;
            case CommandType_CurrentGear:
                handler->string_value("CurrentGear");
                break;
            case CommandType_WhichSideFuelTank:
                handler->string_value("WhichSideFuelTank");
                break;
            case CommandType_WiperFluidLeft:
                handler->string_value("WiperFluidLeft");
                break;
            case CommandType_AreSeatbeltsOn:
                handler->string_value("AreSeatbeltsOn");
                break;
            case CommandType_HowAmIDriving:
                handler->string_value("HowAmIDriving");
                break;
            case CommandType_OilLevel:
                handler->string_value("OilLevel");
                break;
            case CommandType_BatteryVoltage:
                handler->string_value("BatteryVoltage");
                break;
            case CommandType_AverageSpeed:
                handler->string_value("AverageSpeed");
                break;
            case CommandType_MileageToNextOilChange:
                handler->string_value("MileageToNextOilChange");
                break;
            default:
                assert(false);
          }
        assert(flagHasShowMe);
        handler->start_pair("ShowMe");
        handler->boolean_value(storeShowMe);
        if (flagHasEfficiencyUnit)
          {
            handler->start_pair("EfficiencyUnit");
            switch (storeEfficiencyUnit)
              {
                case EfficiencyUnit_MPG:
                    handler->string_value("MPG");
                    break;
                case EfficiencyUnit_L_x2f_100Km:
                    handler->string_value("L/100Km");
                    break;
                case EfficiencyUnit_Km_x2f_L:
                    handler->string_value("Km/L");
                    break;
                case EfficiencyUnit_None:
                    handler->string_value("None");
                    break;
                default:
                    assert(false);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        if (!(hasShowMe()))
          {
            return "When parsing the object for %what%, the \"ShowMe\" field was missing.";
          }
        return NULL;
      }

    static CarControlStatusCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlStatusCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlStatusCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlStatusCommandJSON>, CarControlStatusCommandJSON *, bool> generator("Type CarControlStatusCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlStatusCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlStatusCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlStatusCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlStatusCommandJSON>, CarControlStatusCommandJSON *, bool> generator("Type CarControlStatusCommand", ignore_extras);
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
    class FieldGeneratorTireSelection : public JSONStringGenerator
          {
          protected:
            FieldGeneratorTireSelection(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorTireSelection(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToTireSelection(result));
              }
            virtual void handle_result(TypeTireSelection result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorTireSelection, TypeTireSelection, TypeTireSelection > fieldGeneratorTireSelection;
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorShowMe;
    class FieldGeneratorEfficiencyUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorEfficiencyUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorEfficiencyUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToEfficiencyUnit(result));
              }
            virtual void handle_result(TypeEfficiencyUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorEfficiencyUnit, TypeEfficiencyUnit, TypeEfficiencyUnit > fieldGeneratorEfficiencyUnit;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlStatusCommand") == 0))
                throw("The key field has a value other than `CarControlStatusCommand'.");
            CarControlStatusCommandJSON *result = new CarControlStatusCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlStatusCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlStatusCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlStatusCommandJSON *)new_result);
          }
        void finish(CarControlStatusCommandJSON *result)
          {
            if (fieldGeneratorTireSelection.have_value)
              {
                result->setTireSelection(fieldGeneratorTireSelection.value);
                fieldGeneratorTireSelection.have_value = false;
              }
            if (fieldGeneratorCommandType.have_value)
              {
                result->setCommandType(fieldGeneratorCommandType.value);
                fieldGeneratorCommandType.have_value = false;
              }
            else if (!(result->hasCommandType()))
              {
                error("When parsing the object for %what%, the \"CommandType\" field was missing.");
              }
            if (fieldGeneratorShowMe.have_value)
              {
                result->setShowMe(fieldGeneratorShowMe.value);
                fieldGeneratorShowMe.have_value = false;
              }
            else if (!(result->hasShowMe()))
              {
                error("When parsing the object for %what%, the \"ShowMe\" field was missing.");
              }
            if (fieldGeneratorEfficiencyUnit.have_value)
              {
                result->setEfficiencyUnit(fieldGeneratorEfficiencyUnit.value);
                fieldGeneratorEfficiencyUnit.have_value = false;
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlStatusCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "fficiencyUnit") == 0)
                        return &fieldGeneratorEfficiencyUnit;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "howMe") == 0)
                        return &fieldGeneratorShowMe;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ireSelection") == 0)
                        return &fieldGeneratorTireSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorTireSelection("field \"TireSelection\" of the CarControlStatusCommand class"), fieldGeneratorCommandType("field \"CommandType\" of the CarControlStatusCommand class"), fieldGeneratorShowMe("field \"ShowMe\" of the CarControlStatusCommand class"), fieldGeneratorEfficiencyUnit("field \"EfficiencyUnit\" of the CarControlStatusCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlStatusCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorTireSelection.reset();
            fieldGeneratorCommandType.reset();
            fieldGeneratorShowMe.reset();
            fieldGeneratorEfficiencyUnit.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLSTATUSCOMMANDJSON_H */
