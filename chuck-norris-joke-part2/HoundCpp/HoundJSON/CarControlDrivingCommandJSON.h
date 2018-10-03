/* file "CarControlDrivingCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLDRIVINGCOMMANDJSON_H
#define CARCONTROLDRIVINGCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
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


class CarControlDrivingCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_CruiseControlOn,
        CommandType_CruiseControlOff,
        CommandType_FourWheelDriveOn,
        CommandType_FourWheelDriveOff,
        CommandType_AdaptiveCruiseControlOn,
        CommandType_AdaptiveCruiseControlOff,
        CommandType_TractionControlOn,
        CommandType_TractionControlOff,
        CommandType_LaneDepartureWarningOn,
        CommandType_LaneDepartureWarningOff,
        CommandType_AutomaticLaneKeepingOn,
        CommandType_AutomaticLaneKeepingOff,
        CommandType_ParkingAssistOn,
        CommandType_ParkingAssistOff,
        CommandType_CruiseControlSpeedUp,
        CommandType_CruiseControlSlowDown,
        CommandType_AutonomousParking,
        CommandType_AutopilotOn,
        CommandType_AutopilotOff
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCruiseSpeed;
    double storeCruiseSpeed;
    std::string textStoreCruiseSpeed;
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlDrivingCommandJSON(const CarControlDrivingCommandJSON &);
    CarControlDrivingCommandJSON & operator=(const CarControlDrivingCommandJSON &other);

    JSONValue * extraCruiseSpeedToJSON(void) const;
    JSONValue * extraCommandTypeToJSON(void) const;

    void  fromJSONCruiseSpeed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlDrivingCommandJSON(void);
    virtual ~CarControlDrivingCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCruiseSpeed(void) const;
    double  getCruiseSpeed(void);
    const double  getCruiseSpeed(void) const;
    std::string  getCruiseSpeedAsText(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;

    virtual size_t extraCarControlDrivingCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlDrivingCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlDrivingCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlDrivingCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlDrivingCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlDrivingCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCarControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCruiseSpeed)
            ++result;
        if (flagHasCommandType)
            ++result;
        result += extraCarControlDrivingCommandComponentCount();
        return result;
      }
    const char *extraCarControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCruiseSpeed)
          {
            if (remainder == 0)
                return "CruiseSpeed";
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        return extraCarControlDrivingCommandComponentKey(remainder);
      }
    JSONValue *extraCarControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCruiseSpeed)
          {
            if (remainder == 0)
                return extraCruiseSpeedToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraCarControlDrivingCommandComponentValue(remainder);
      }
    const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCruiseSpeed)
          {
            if (remainder == 0)
                return extraCruiseSpeedToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraCarControlDrivingCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "C", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'o':
                    if (strcmp(&(field_name[2]), "mmandType") == 0)
                        return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                    break;
                case 'r':
                    if (strcmp(&(field_name[2]), "uiseSpeed") == 0)
                        return (flagHasCruiseSpeed ? extraCruiseSpeedToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraCarControlDrivingCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "C", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'o':
                    if (strcmp(&(field_name[2]), "mmandType") == 0)
                        return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                    break;
                case 'r':
                    if (strcmp(&(field_name[2]), "uiseSpeed") == 0)
                        return (flagHasCruiseSpeed ? extraCruiseSpeedToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraCarControlDrivingCommandLookup(field_name);
      }

    void setCruiseSpeed(double new_value)
      {
        flagHasCruiseSpeed = true;
        storeCruiseSpeed = new_value;
        textStoreCruiseSpeed = "";
      }
    void setCruiseSpeedText(std::string new_value)
      {
        flagHasCruiseSpeed = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field CruiseSpeed of CarControlDrivingCommandJSON is not a valid number.");
        textStoreCruiseSpeed = new_value;
      }
    void unsetCruiseSpeed(void)
      {
        flagHasCruiseSpeed = false;
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

    virtual void extraCarControlDrivingCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlDrivingCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlDrivingCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlDrivingCommandAppendPair(key, new_component);
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
        if (strncmp(key, "C", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'o':
                    if (strcmp(&(key[2]), "mmandType") == 0)
                        {
                        fromJSONCommandType(new_component, false);
                        return;
                        }
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "uiseSpeed") == 0)
                        {
                        fromJSONCruiseSpeed(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraCarControlDrivingCommandAppendPair(key, new_component);
      }
    void extraCarControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "C", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'o':
                    if (strcmp(&(key[2]), "mmandType") == 0)
                        {
                        fromJSONCommandType(new_component, false);
                        return;
                        }
                    break;
                case 'r':
                    if (strcmp(&(key[2]), "uiseSpeed") == 0)
                        {
                        fromJSONCruiseSpeed(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraCarControlDrivingCommandSetField(key, new_component);
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
        if (flagHasCruiseSpeed)
          {
            handler->start_pair("CruiseSpeed");
            if (textStoreCruiseSpeed != "")
                handler->number_value(textStoreCruiseSpeed.c_str());
            else if (((double)(long int)storeCruiseSpeed) == storeCruiseSpeed)
                handler->number_value((long int)storeCruiseSpeed);
            else
                handler->number_value(storeCruiseSpeed);
          }
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_CruiseControlOn:
                handler->string_value("CruiseControlOn");
                break;
            case CommandType_CruiseControlOff:
                handler->string_value("CruiseControlOff");
                break;
            case CommandType_FourWheelDriveOn:
                handler->string_value("FourWheelDriveOn");
                break;
            case CommandType_FourWheelDriveOff:
                handler->string_value("FourWheelDriveOff");
                break;
            case CommandType_AdaptiveCruiseControlOn:
                handler->string_value("AdaptiveCruiseControlOn");
                break;
            case CommandType_AdaptiveCruiseControlOff:
                handler->string_value("AdaptiveCruiseControlOff");
                break;
            case CommandType_TractionControlOn:
                handler->string_value("TractionControlOn");
                break;
            case CommandType_TractionControlOff:
                handler->string_value("TractionControlOff");
                break;
            case CommandType_LaneDepartureWarningOn:
                handler->string_value("LaneDepartureWarningOn");
                break;
            case CommandType_LaneDepartureWarningOff:
                handler->string_value("LaneDepartureWarningOff");
                break;
            case CommandType_AutomaticLaneKeepingOn:
                handler->string_value("AutomaticLaneKeepingOn");
                break;
            case CommandType_AutomaticLaneKeepingOff:
                handler->string_value("AutomaticLaneKeepingOff");
                break;
            case CommandType_ParkingAssistOn:
                handler->string_value("ParkingAssistOn");
                break;
            case CommandType_ParkingAssistOff:
                handler->string_value("ParkingAssistOff");
                break;
            case CommandType_CruiseControlSpeedUp:
                handler->string_value("CruiseControlSpeedUp");
                break;
            case CommandType_CruiseControlSlowDown:
                handler->string_value("CruiseControlSlowDown");
                break;
            case CommandType_AutonomousParking:
                handler->string_value("AutonomousParking");
                break;
            case CommandType_AutopilotOn:
                handler->string_value("AutopilotOn");
                break;
            case CommandType_AutopilotOff:
                handler->string_value("AutopilotOff");
                break;
            default:
                assert(false);
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

    static CarControlDrivingCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlDrivingCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlDrivingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlDrivingCommandJSON>, CarControlDrivingCommandJSON *, bool> generator("Type CarControlDrivingCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlDrivingCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlDrivingCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlDrivingCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlDrivingCommandJSON>, CarControlDrivingCommandJSON *, bool> generator("Type CarControlDrivingCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorCruiseSpeed;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlDrivingCommand") == 0))
                throw("The key field has a value other than `CarControlDrivingCommand'.");
            CarControlDrivingCommandJSON *result = new CarControlDrivingCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlDrivingCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlDrivingCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlDrivingCommandJSON *)new_result);
          }
        void finish(CarControlDrivingCommandJSON *result)
          {
            if (fieldGeneratorCruiseSpeed.have_value)
              {
                result->setCruiseSpeedText(fieldGeneratorCruiseSpeed.value);
                fieldGeneratorCruiseSpeed.have_value = false;
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
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlDrivingCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "C", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'o':
                        if (strcmp(&(field_name[2]), "mmandType") == 0)
                            return &fieldGeneratorCommandType;
                        break;
                    case 'r':
                        if (strcmp(&(field_name[2]), "uiseSpeed") == 0)
                            return &fieldGeneratorCruiseSpeed;
                        break;
                    default:
                        break;
                  }
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCruiseSpeed("field \"CruiseSpeed\" of the CarControlDrivingCommand class"), fieldGeneratorCommandType("field \"CommandType\" of the CarControlDrivingCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlDrivingCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCruiseSpeed.reset();
            fieldGeneratorCommandType.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLDRIVINGCOMMANDJSON_H */
