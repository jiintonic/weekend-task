/* file "CarControlLightsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLLIGHTSCOMMANDJSON_H
#define CARCONTROLLIGHTSCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
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


class CarControlLightsCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_TurnOn,
        CommandType_TurnOff,
        CommandType_SetAuto,
        CommandType_Flash
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);
    enum TypeLightSelection
      {
        LightSelection_LowBeams,
        LightSelection_HighBeams,
        LightSelection_FogLights,
        LightSelection_LeftTurnSignal,
        LightSelection_RightTurnSignal,
        LightSelection_BothTurnSignals,
        LightSelection_HazardLights
      };

    static TypeLightSelection  stringToLightSelection(const char *chars);
    static const char * stringFromLightSelection(TypeLightSelection the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasLightSelection;
    TypeLightSelection storeLightSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlLightsCommandJSON(const CarControlLightsCommandJSON &);
    CarControlLightsCommandJSON & operator=(const CarControlLightsCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraLightSelectionToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLightSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlLightsCommandJSON(void);
    virtual ~CarControlLightsCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasLightSelection(void) const;
    TypeLightSelection  getLightSelection(void);
    const TypeLightSelection  getLightSelection(void) const;
    const char * getLightSelectionAsChars(void) const;
    std::string  getLightSelectionAsString(void) const;

    virtual size_t extraCarControlLightsCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlLightsCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlLightsCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlLightsCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlLightsCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlLightsCommandLookup(const char *field_name) const
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
        if (flagHasLightSelection)
            ++result;
        result += extraCarControlLightsCommandComponentCount();
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
        if (flagHasLightSelection)
          {
            if (remainder == 0)
                return "LightSelection";
            --remainder;
          }
        return extraCarControlLightsCommandComponentKey(remainder);
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
        if (flagHasLightSelection)
          {
            if (remainder == 0)
                return extraLightSelectionToJSON();
            --remainder;
          }
        return extraCarControlLightsCommandComponentValue(remainder);
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
        if (flagHasLightSelection)
          {
            if (remainder == 0)
                return extraLightSelectionToJSON();
            --remainder;
          }
        return extraCarControlLightsCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ightSelection") == 0)
                    return (flagHasLightSelection ? extraLightSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlLightsCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'L':
                if (strcmp(&(field_name[1]), "ightSelection") == 0)
                    return (flagHasLightSelection ? extraLightSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlLightsCommandLookup(field_name);
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
    void setLightSelection(TypeLightSelection new_value)
      {
        flagHasLightSelection = true;
        storeLightSelection = new_value;
      }
    void setLightSelection(const char *chars)
      {
        setLightSelection(stringToLightSelection(chars));
      }
    void setLightSelection(std::string the_string)
      {
        setLightSelection(stringToLightSelection(the_string.c_str()));
      }
    void unsetLightSelection(void)
      {
        flagHasLightSelection = false;
      }

    virtual void extraCarControlLightsCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlLightsCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlLightsCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlLightsCommandAppendPair(key, new_component);
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
            case 'L':
                if (strcmp(&(key[1]), "ightSelection") == 0)
                    {
                    fromJSONLightSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlLightsCommandAppendPair(key, new_component);
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
            case 'L':
                if (strcmp(&(key[1]), "ightSelection") == 0)
                    {
                    fromJSONLightSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlLightsCommandSetField(key, new_component);
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
            case CommandType_TurnOn:
                handler->string_value("TurnOn");
                break;
            case CommandType_TurnOff:
                handler->string_value("TurnOff");
                break;
            case CommandType_SetAuto:
                handler->string_value("SetAuto");
                break;
            case CommandType_Flash:
                handler->string_value("Flash");
                break;
            default:
                assert(false);
          }
        assert(flagHasLightSelection);
        handler->start_pair("LightSelection");
        switch (storeLightSelection)
          {
            case LightSelection_LowBeams:
                handler->string_value("LowBeams");
                break;
            case LightSelection_HighBeams:
                handler->string_value("HighBeams");
                break;
            case LightSelection_FogLights:
                handler->string_value("FogLights");
                break;
            case LightSelection_LeftTurnSignal:
                handler->string_value("LeftTurnSignal");
                break;
            case LightSelection_RightTurnSignal:
                handler->string_value("RightTurnSignal");
                break;
            case LightSelection_BothTurnSignals:
                handler->string_value("BothTurnSignals");
                break;
            case LightSelection_HazardLights:
                handler->string_value("HazardLights");
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
        if (!(hasLightSelection()))
          {
            return "When parsing the object for %what%, the \"LightSelection\" field was missing.";
          }
        return NULL;
      }

    static CarControlLightsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlLightsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlLightsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlLightsCommandJSON>, CarControlLightsCommandJSON *, bool> generator("Type CarControlLightsCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlLightsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlLightsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlLightsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlLightsCommandJSON>, CarControlLightsCommandJSON *, bool> generator("Type CarControlLightsCommand", ignore_extras);
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
    class FieldGeneratorLightSelection : public JSONStringGenerator
          {
          protected:
            FieldGeneratorLightSelection(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorLightSelection(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToLightSelection(result));
              }
            virtual void handle_result(TypeLightSelection result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorLightSelection, TypeLightSelection, TypeLightSelection > fieldGeneratorLightSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlLightCommand") == 0))
                throw("The key field has a value other than `CarControlLightCommand'.");
            CarControlLightsCommandJSON *result = new CarControlLightsCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlLightsCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlLightsCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlLightsCommandJSON *)new_result);
          }
        void finish(CarControlLightsCommandJSON *result)
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
            if (fieldGeneratorLightSelection.have_value)
              {
                result->setLightSelection(fieldGeneratorLightSelection.value);
                fieldGeneratorLightSelection.have_value = false;
              }
            else if (!(result->hasLightSelection()))
              {
                error("When parsing the object for %what%, the \"LightSelection\" field was missing.");
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlLightsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ightSelection") == 0)
                        return &fieldGeneratorLightSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlLightsCommand class"), fieldGeneratorLightSelection("field \"LightSelection\" of the CarControlLightsCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlLightsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorLightSelection.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLLIGHTSCOMMANDJSON_H */
