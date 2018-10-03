/* file "CarControlDoorCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLDOORCOMMANDJSON_H
#define CARCONTROLDOORCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlDoorCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_OpenDoor,
        CommandType_CloseDoor,
        CommandType_LockDoor,
        CommandType_UnlockDoor
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);
    enum TypeDoorSelection
      {
        DoorSelection_FrontLeft,
        DoorSelection_FrontRight,
        DoorSelection_FrontDriver,
        DoorSelection_FrontPassenger,
        DoorSelection_FrontBoth,
        DoorSelection_RearLeft,
        DoorSelection_RearRight,
        DoorSelection_RearDriver,
        DoorSelection_RearPassenger,
        DoorSelection_RearBoth,
        DoorSelection_MiddleLeft,
        DoorSelection_MiddleRight,
        DoorSelection_MiddleDriver,
        DoorSelection_MiddlePassenger,
        DoorSelection_MiddleBoth,
        DoorSelection_LeftAll,
        DoorSelection_RightAll,
        DoorSelection_DriverAll,
        DoorSelection_PassengerAll,
        DoorSelection_All,
        DoorSelection_Rear,
        DoorSelection_Trunk,
        DoorSelection_Hood,
        DoorSelection_AllExceptDriver
      };

    static TypeDoorSelection  stringToDoorSelection(const char *chars);
    static const char * stringFromDoorSelection(TypeDoorSelection the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasDoorSelection;
    std::vector< TypeDoorSelection > storeDoorSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlDoorCommandJSON(const CarControlDoorCommandJSON &);
    CarControlDoorCommandJSON & operator=(const CarControlDoorCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraDoorSelectionToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDoorSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlDoorCommandJSON(void);
    virtual ~CarControlDoorCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasDoorSelection(void) const;
    size_t  countOfDoorSelection(void) const;
    TypeDoorSelection  elementOfDoorSelection(size_t element_num);
    const TypeDoorSelection  elementOfDoorSelection(size_t element_num) const;
    std::vector< TypeDoorSelection >  getDoorSelection(void);
    const std::vector< TypeDoorSelection >  getDoorSelection(void) const;

    virtual size_t extraCarControlDoorCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlDoorCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlDoorCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlDoorCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlDoorCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlDoorCommandLookup(const char *field_name) const
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
        if (flagHasDoorSelection)
            ++result;
        result += extraCarControlDoorCommandComponentCount();
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
        if (flagHasDoorSelection)
          {
            if (remainder == 0)
                return "DoorSelection";
            --remainder;
          }
        return extraCarControlDoorCommandComponentKey(remainder);
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
        if (flagHasDoorSelection)
          {
            if (remainder == 0)
                return extraDoorSelectionToJSON();
            --remainder;
          }
        return extraCarControlDoorCommandComponentValue(remainder);
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
        if (flagHasDoorSelection)
          {
            if (remainder == 0)
                return extraDoorSelectionToJSON();
            --remainder;
          }
        return extraCarControlDoorCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "oorSelection") == 0)
                    return (flagHasDoorSelection ? extraDoorSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlDoorCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'D':
                if (strcmp(&(field_name[1]), "oorSelection") == 0)
                    return (flagHasDoorSelection ? extraDoorSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlDoorCommandLookup(field_name);
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
    void initDoorSelection(void)
      {
        flagHasDoorSelection = true;
        storeDoorSelection.clear();
      }
    void appendDoorSelection(TypeDoorSelection to_append)
      {
        if (!flagHasDoorSelection)
          {
            flagHasDoorSelection = true;
            storeDoorSelection.clear();
          }
        assert(flagHasDoorSelection);
        storeDoorSelection.push_back(to_append);
      }
    void appendDoorSelection(const char *chars)
      {
        appendDoorSelection(stringToDoorSelection(chars));
      }
    void appendDoorSelection(std::string the_string)
      {
        appendDoorSelection(stringToDoorSelection(the_string.c_str()));
      }
    void unsetDoorSelection(void)
      {
        flagHasDoorSelection = false;
        storeDoorSelection.clear();
      }

    virtual void extraCarControlDoorCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlDoorCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlDoorCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlDoorCommandAppendPair(key, new_component);
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
            case 'D':
                if (strcmp(&(key[1]), "oorSelection") == 0)
                    {
                    fromJSONDoorSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlDoorCommandAppendPair(key, new_component);
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
            case 'D':
                if (strcmp(&(key[1]), "oorSelection") == 0)
                    {
                    fromJSONDoorSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlDoorCommandSetField(key, new_component);
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
            case CommandType_OpenDoor:
                handler->string_value("OpenDoor");
                break;
            case CommandType_CloseDoor:
                handler->string_value("CloseDoor");
                break;
            case CommandType_LockDoor:
                handler->string_value("LockDoor");
                break;
            case CommandType_UnlockDoor:
                handler->string_value("UnlockDoor");
                break;
            default:
                assert(false);
          }
        assert(flagHasDoorSelection);
        handler->start_pair("DoorSelection");
        assert(storeDoorSelection.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeDoorSelection.size(); ++num1)
          {
            switch (storeDoorSelection[num1])
              {
                case DoorSelection_FrontLeft:
                    handler->string_value("FrontLeft");
                    break;
                case DoorSelection_FrontRight:
                    handler->string_value("FrontRight");
                    break;
                case DoorSelection_FrontDriver:
                    handler->string_value("FrontDriver");
                    break;
                case DoorSelection_FrontPassenger:
                    handler->string_value("FrontPassenger");
                    break;
                case DoorSelection_FrontBoth:
                    handler->string_value("FrontBoth");
                    break;
                case DoorSelection_RearLeft:
                    handler->string_value("RearLeft");
                    break;
                case DoorSelection_RearRight:
                    handler->string_value("RearRight");
                    break;
                case DoorSelection_RearDriver:
                    handler->string_value("RearDriver");
                    break;
                case DoorSelection_RearPassenger:
                    handler->string_value("RearPassenger");
                    break;
                case DoorSelection_RearBoth:
                    handler->string_value("RearBoth");
                    break;
                case DoorSelection_MiddleLeft:
                    handler->string_value("MiddleLeft");
                    break;
                case DoorSelection_MiddleRight:
                    handler->string_value("MiddleRight");
                    break;
                case DoorSelection_MiddleDriver:
                    handler->string_value("MiddleDriver");
                    break;
                case DoorSelection_MiddlePassenger:
                    handler->string_value("MiddlePassenger");
                    break;
                case DoorSelection_MiddleBoth:
                    handler->string_value("MiddleBoth");
                    break;
                case DoorSelection_LeftAll:
                    handler->string_value("LeftAll");
                    break;
                case DoorSelection_RightAll:
                    handler->string_value("RightAll");
                    break;
                case DoorSelection_DriverAll:
                    handler->string_value("DriverAll");
                    break;
                case DoorSelection_PassengerAll:
                    handler->string_value("PassengerAll");
                    break;
                case DoorSelection_All:
                    handler->string_value("All");
                    break;
                case DoorSelection_Rear:
                    handler->string_value("Rear");
                    break;
                case DoorSelection_Trunk:
                    handler->string_value("Trunk");
                    break;
                case DoorSelection_Hood:
                    handler->string_value("Hood");
                    break;
                case DoorSelection_AllExceptDriver:
                    handler->string_value("AllExceptDriver");
                    break;
                default:
                    assert(false);
              }
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        if (!(hasDoorSelection()))
          {
            return "When parsing the object for %what%, the \"DoorSelection\" field was missing.";
          }
        return NULL;
      }

    static CarControlDoorCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlDoorCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlDoorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlDoorCommandJSON>, CarControlDoorCommandJSON *, bool> generator("Type CarControlDoorCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlDoorCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlDoorCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlDoorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlDoorCommandJSON>, CarControlDoorCommandJSON *, bool> generator("Type CarControlDoorCommand", ignore_extras);
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
    class FieldGeneratorDoorSelection : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDoorSelection(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDoorSelection(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDoorSelection(result));
              }
            virtual void handle_result(TypeDoorSelection result) = 0;
          };
        JSONHoldingArrayGenerator<FieldGeneratorDoorSelection, TypeDoorSelection, TypeDoorSelection > fieldGeneratorDoorSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlDoorCommand") == 0))
                throw("The key field has a value other than `CarControlDoorCommand'.");
            CarControlDoorCommandJSON *result = new CarControlDoorCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlDoorCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlDoorCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlDoorCommandJSON *)new_result);
          }
        void finish(CarControlDoorCommandJSON *result)
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
            if (fieldGeneratorDoorSelection.have_value)
              {
                result->initDoorSelection();
                size_t count = fieldGeneratorDoorSelection.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendDoorSelection(fieldGeneratorDoorSelection.value[num]);
                  }
                fieldGeneratorDoorSelection.value.clear();
                fieldGeneratorDoorSelection.have_value = false;
              }
            else if (!(result->hasDoorSelection()))
              {
                error("When parsing the object for %what%, the \"DoorSelection\" field was missing.");
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlDoorCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "oorSelection") == 0)
                        return &fieldGeneratorDoorSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlDoorCommand class"), fieldGeneratorDoorSelection("field \"DoorSelection\" of the CarControlDoorCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlDoorCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorDoorSelection.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLDOORCOMMANDJSON_H */
