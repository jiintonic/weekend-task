/* file "CarControlWindowCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLWINDOWCOMMANDJSON_H
#define CARCONTROLWINDOWCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include "CarWindowSelectionEnumJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlWindowCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_OpenWindow,
        CommandType_CloseWindow,
        CommandType_WipersAutomatic,
        CommandType_WipersLowSpeed,
        CommandType_WipersHighSpeed,
        CommandType_WipersOff,
        CommandType_Defog,
        CommandType_DefogOff
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasMovementAmount;
    double storeMovementAmount;
    std::string textStoreMovementAmount;
    bool flagHasWindowSelection;
    std::vector< CarWindowSelectionEnumJSON * > storeWindowSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlWindowCommandJSON(const CarControlWindowCommandJSON &);
    CarControlWindowCommandJSON & operator=(const CarControlWindowCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraMovementAmountToJSON(void) const;
    JSONValue * extraWindowSelectionToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMovementAmount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWindowSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlWindowCommandJSON(void);
    virtual ~CarControlWindowCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasMovementAmount(void) const;
    double  getMovementAmount(void);
    const double  getMovementAmount(void) const;
    std::string  getMovementAmountAsText(void) const;
    bool  hasWindowSelection(void) const;
    size_t  countOfWindowSelection(void) const;
    CarWindowSelectionEnumJSON *  elementOfWindowSelection(size_t element_num);
    const CarWindowSelectionEnumJSON *  elementOfWindowSelection(size_t element_num) const;
    std::vector< CarWindowSelectionEnumJSON * >  getWindowSelection(void);
    const std::vector< CarWindowSelectionEnumJSON * >  getWindowSelection(void) const;

    virtual size_t extraCarControlWindowCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlWindowCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlWindowCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlWindowCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlWindowCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlWindowCommandLookup(const char *field_name) const
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
        if (flagHasMovementAmount)
            ++result;
        if (flagHasWindowSelection)
            ++result;
        result += extraCarControlWindowCommandComponentCount();
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
        if (flagHasMovementAmount)
          {
            if (remainder == 0)
                return "MovementAmount";
            --remainder;
          }
        if (flagHasWindowSelection)
          {
            if (remainder == 0)
                return "WindowSelection";
            --remainder;
          }
        return extraCarControlWindowCommandComponentKey(remainder);
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
        if (flagHasMovementAmount)
          {
            if (remainder == 0)
                return extraMovementAmountToJSON();
            --remainder;
          }
        if (flagHasWindowSelection)
          {
            if (remainder == 0)
                return extraWindowSelectionToJSON();
            --remainder;
          }
        return extraCarControlWindowCommandComponentValue(remainder);
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
        if (flagHasMovementAmount)
          {
            if (remainder == 0)
                return extraMovementAmountToJSON();
            --remainder;
          }
        if (flagHasWindowSelection)
          {
            if (remainder == 0)
                return extraWindowSelectionToJSON();
            --remainder;
          }
        return extraCarControlWindowCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ovementAmount") == 0)
                    return (flagHasMovementAmount ? extraMovementAmountToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "indowSelection") == 0)
                    return (flagHasWindowSelection ? extraWindowSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlWindowCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'M':
                if (strcmp(&(field_name[1]), "ovementAmount") == 0)
                    return (flagHasMovementAmount ? extraMovementAmountToJSON() : NULL);
                break;
            case 'W':
                if (strcmp(&(field_name[1]), "indowSelection") == 0)
                    return (flagHasWindowSelection ? extraWindowSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlWindowCommandLookup(field_name);
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
    void setMovementAmount(double new_value)
      {
        flagHasMovementAmount = true;
        if (new_value < 0)
            throw("The value for field MovementAmount of CarControlWindowCommandJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field MovementAmount of CarControlWindowCommandJSON is greater than the upper bound (1) for that field.");
        storeMovementAmount = new_value;
        textStoreMovementAmount = "";
      }
    void setMovementAmountText(std::string new_value)
      {
        flagHasMovementAmount = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MovementAmount of CarControlWindowCommandJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field MovementAmount of CarControlWindowCommandJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field MovementAmount of CarControlWindowCommandJSON is greater than the upper bound (1) for that field.");
        textStoreMovementAmount = new_value;
      }
    void unsetMovementAmount(void)
      {
        flagHasMovementAmount = false;
      }
    void initWindowSelection(void)
      {
        if (flagHasWindowSelection)
          {
            for (size_t num2 = 0; num2 < storeWindowSelection.size(); ++num2)
              {
                storeWindowSelection[num2]->remove_reference();
              }
          }
        flagHasWindowSelection = true;
        storeWindowSelection.clear();
      }
    void appendWindowSelection(CarWindowSelectionEnumJSON * to_append)
      {
        if (!flagHasWindowSelection)
          {
            flagHasWindowSelection = true;
            storeWindowSelection.clear();
          }
        assert(flagHasWindowSelection);
        to_append->add_reference();
        storeWindowSelection.push_back(to_append);
      }
    void appendWindowSelection(CarWindowSelectionEnumJSON::TypeValue new_value)
      {
        appendWindowSelection(new CarWindowSelectionEnumJSON(new_value));
      }
    void appendWindowSelection(const char *chars)
      {
        appendWindowSelection(new CarWindowSelectionEnumJSON(chars));
      }
    void appendWindowSelection(std::string the_string)
      {
        appendWindowSelection(new CarWindowSelectionEnumJSON(the_string));
      }
    void unsetWindowSelection(void)
      {
        if (flagHasWindowSelection)
          {
            for (size_t num3 = 0; num3 < storeWindowSelection.size(); ++num3)
              {
                storeWindowSelection[num3]->remove_reference();
              }
          }
        flagHasWindowSelection = false;
        storeWindowSelection.clear();
      }

    virtual void extraCarControlWindowCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlWindowCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlWindowCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlWindowCommandAppendPair(key, new_component);
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
            case 'M':
                if (strcmp(&(key[1]), "ovementAmount") == 0)
                    {
                    fromJSONMovementAmount(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "indowSelection") == 0)
                    {
                    fromJSONWindowSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlWindowCommandAppendPair(key, new_component);
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
            case 'M':
                if (strcmp(&(key[1]), "ovementAmount") == 0)
                    {
                    fromJSONMovementAmount(new_component, false);
                    return;
                    }
                break;
            case 'W':
                if (strcmp(&(key[1]), "indowSelection") == 0)
                    {
                    fromJSONWindowSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlWindowCommandSetField(key, new_component);
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
            case CommandType_OpenWindow:
                handler->string_value("OpenWindow");
                break;
            case CommandType_CloseWindow:
                handler->string_value("CloseWindow");
                break;
            case CommandType_WipersAutomatic:
                handler->string_value("WipersAutomatic");
                break;
            case CommandType_WipersLowSpeed:
                handler->string_value("WipersLowSpeed");
                break;
            case CommandType_WipersHighSpeed:
                handler->string_value("WipersHighSpeed");
                break;
            case CommandType_WipersOff:
                handler->string_value("WipersOff");
                break;
            case CommandType_Defog:
                handler->string_value("Defog");
                break;
            case CommandType_DefogOff:
                handler->string_value("DefogOff");
                break;
            default:
                assert(false);
          }
        if (flagHasMovementAmount)
          {
            handler->start_pair("MovementAmount");
            if (textStoreMovementAmount != "")
                handler->number_value(textStoreMovementAmount.c_str());
            else if (((double)(long int)storeMovementAmount) == storeMovementAmount)
                handler->number_value((long int)storeMovementAmount);
            else
                handler->number_value(storeMovementAmount);
          }
        assert(flagHasWindowSelection);
        handler->start_pair("WindowSelection");
        assert(storeWindowSelection.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeWindowSelection.size(); ++num1)
          {
            storeWindowSelection[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        if (!(hasWindowSelection()))
          {
            return "When parsing the object for %what%, the \"WindowSelection\" field was missing.";
          }
        return NULL;
      }

    static CarControlWindowCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlWindowCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlWindowCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlWindowCommandJSON>, CarControlWindowCommandJSON *, bool> generator("Type CarControlWindowCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlWindowCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlWindowCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlWindowCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlWindowCommandJSON>, CarControlWindowCommandJSON *, bool> generator("Type CarControlWindowCommand", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMovementAmount;
        JSONHoldingArrayGenerator<CarWindowSelectionEnumJSON::Generator, RCHandle<CarWindowSelectionEnumJSON>, CarWindowSelectionEnumJSON *, bool > fieldGeneratorWindowSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlWindowCommand") == 0))
                throw("The key field has a value other than `CarControlWindowCommand'.");
            CarControlWindowCommandJSON *result = new CarControlWindowCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlWindowCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlWindowCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlWindowCommandJSON *)new_result);
          }
        void finish(CarControlWindowCommandJSON *result)
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
            if (fieldGeneratorMovementAmount.have_value)
              {
                result->setMovementAmountText(fieldGeneratorMovementAmount.value);
                fieldGeneratorMovementAmount.have_value = false;
              }
            if (fieldGeneratorWindowSelection.have_value)
              {
                result->initWindowSelection();
                size_t count = fieldGeneratorWindowSelection.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendWindowSelection(fieldGeneratorWindowSelection.value[num].referenced());
                  }
                fieldGeneratorWindowSelection.value.clear();
                fieldGeneratorWindowSelection.have_value = false;
              }
            else if (!(result->hasWindowSelection()))
              {
                error("When parsing the object for %what%, the \"WindowSelection\" field was missing.");
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlWindowCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "ovementAmount") == 0)
                        return &fieldGeneratorMovementAmount;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "indowSelection") == 0)
                        return &fieldGeneratorWindowSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlWindowCommand class"), fieldGeneratorMovementAmount("field \"MovementAmount\" of the CarControlWindowCommand class"), fieldGeneratorWindowSelection("field \"WindowSelection\" of the CarControlWindowCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlWindowCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorMovementAmount.reset();
            fieldGeneratorWindowSelection.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLWINDOWCOMMANDJSON_H */
