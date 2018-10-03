/* file "CarControlSeatHeaterCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLSEATHEATERCOMMANDJSON_H
#define CARCONTROLSEATHEATERCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "CarSeatSelectionEnumJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlSeatHeaterCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_TurnOff,
        CommandType_TurnOn,
        CommandType_SetLow,
        CommandType_SetMedium,
        CommandType_SetHigh,
        CommandType_SetLower,
        CommandType_SetHigher
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasSeatSelection;
    std::vector< CarSeatSelectionEnumJSON * > storeSeatSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlSeatHeaterCommandJSON(const CarControlSeatHeaterCommandJSON &);
    CarControlSeatHeaterCommandJSON & operator=(const CarControlSeatHeaterCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraSeatSelectionToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSeatSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlSeatHeaterCommandJSON(void);
    virtual ~CarControlSeatHeaterCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasSeatSelection(void) const;
    size_t  countOfSeatSelection(void) const;
    CarSeatSelectionEnumJSON *  elementOfSeatSelection(size_t element_num);
    const CarSeatSelectionEnumJSON *  elementOfSeatSelection(size_t element_num) const;
    std::vector< CarSeatSelectionEnumJSON * >  getSeatSelection(void);
    const std::vector< CarSeatSelectionEnumJSON * >  getSeatSelection(void) const;

    virtual size_t extraCarControlSeatHeaterCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlSeatHeaterCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlSeatHeaterCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlSeatHeaterCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlSeatHeaterCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlSeatHeaterCommandLookup(const char *field_name) const
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
        if (flagHasSeatSelection)
            ++result;
        result += extraCarControlSeatHeaterCommandComponentCount();
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
        if (flagHasSeatSelection)
          {
            if (remainder == 0)
                return "SeatSelection";
            --remainder;
          }
        return extraCarControlSeatHeaterCommandComponentKey(remainder);
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
        if (flagHasSeatSelection)
          {
            if (remainder == 0)
                return extraSeatSelectionToJSON();
            --remainder;
          }
        return extraCarControlSeatHeaterCommandComponentValue(remainder);
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
        if (flagHasSeatSelection)
          {
            if (remainder == 0)
                return extraSeatSelectionToJSON();
            --remainder;
          }
        return extraCarControlSeatHeaterCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "eatSelection") == 0)
                    return (flagHasSeatSelection ? extraSeatSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlSeatHeaterCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "ommandType") == 0)
                    return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                break;
            case 'S':
                if (strcmp(&(field_name[1]), "eatSelection") == 0)
                    return (flagHasSeatSelection ? extraSeatSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlSeatHeaterCommandLookup(field_name);
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
    void initSeatSelection(void)
      {
        if (flagHasSeatSelection)
          {
            for (size_t num2 = 0; num2 < storeSeatSelection.size(); ++num2)
              {
                storeSeatSelection[num2]->remove_reference();
              }
          }
        flagHasSeatSelection = true;
        storeSeatSelection.clear();
      }
    void appendSeatSelection(CarSeatSelectionEnumJSON * to_append)
      {
        if (!flagHasSeatSelection)
          {
            flagHasSeatSelection = true;
            storeSeatSelection.clear();
          }
        assert(flagHasSeatSelection);
        to_append->add_reference();
        storeSeatSelection.push_back(to_append);
      }
    void appendSeatSelection(CarSeatSelectionEnumJSON::TypeValue new_value)
      {
        appendSeatSelection(new CarSeatSelectionEnumJSON(new_value));
      }
    void appendSeatSelection(const char *chars)
      {
        appendSeatSelection(new CarSeatSelectionEnumJSON(chars));
      }
    void appendSeatSelection(std::string the_string)
      {
        appendSeatSelection(new CarSeatSelectionEnumJSON(the_string));
      }
    void unsetSeatSelection(void)
      {
        if (flagHasSeatSelection)
          {
            for (size_t num3 = 0; num3 < storeSeatSelection.size(); ++num3)
              {
                storeSeatSelection[num3]->remove_reference();
              }
          }
        flagHasSeatSelection = false;
        storeSeatSelection.clear();
      }

    virtual void extraCarControlSeatHeaterCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlSeatHeaterCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlSeatHeaterCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlSeatHeaterCommandAppendPair(key, new_component);
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
            case 'S':
                if (strcmp(&(key[1]), "eatSelection") == 0)
                    {
                    fromJSONSeatSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlSeatHeaterCommandAppendPair(key, new_component);
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
            case 'S':
                if (strcmp(&(key[1]), "eatSelection") == 0)
                    {
                    fromJSONSeatSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlSeatHeaterCommandSetField(key, new_component);
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
            case CommandType_TurnOff:
                handler->string_value("TurnOff");
                break;
            case CommandType_TurnOn:
                handler->string_value("TurnOn");
                break;
            case CommandType_SetLow:
                handler->string_value("SetLow");
                break;
            case CommandType_SetMedium:
                handler->string_value("SetMedium");
                break;
            case CommandType_SetHigh:
                handler->string_value("SetHigh");
                break;
            case CommandType_SetLower:
                handler->string_value("SetLower");
                break;
            case CommandType_SetHigher:
                handler->string_value("SetHigher");
                break;
            default:
                assert(false);
          }
        assert(flagHasSeatSelection);
        handler->start_pair("SeatSelection");
        assert(storeSeatSelection.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeSeatSelection.size(); ++num1)
          {
            storeSeatSelection[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        if (!(hasSeatSelection()))
          {
            return "When parsing the object for %what%, the \"SeatSelection\" field was missing.";
          }
        return NULL;
      }

    static CarControlSeatHeaterCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlSeatHeaterCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlSeatHeaterCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlSeatHeaterCommandJSON>, CarControlSeatHeaterCommandJSON *, bool> generator("Type CarControlSeatHeaterCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlSeatHeaterCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlSeatHeaterCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlSeatHeaterCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlSeatHeaterCommandJSON>, CarControlSeatHeaterCommandJSON *, bool> generator("Type CarControlSeatHeaterCommand", ignore_extras);
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
        JSONHoldingArrayGenerator<CarSeatSelectionEnumJSON::Generator, RCHandle<CarSeatSelectionEnumJSON>, CarSeatSelectionEnumJSON *, bool > fieldGeneratorSeatSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlSeatHeaterCommand") == 0))
                throw("The key field has a value other than `CarControlSeatHeaterCommand'.");
            CarControlSeatHeaterCommandJSON *result = new CarControlSeatHeaterCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlSeatHeaterCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlSeatHeaterCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlSeatHeaterCommandJSON *)new_result);
          }
        void finish(CarControlSeatHeaterCommandJSON *result)
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
            if (fieldGeneratorSeatSelection.have_value)
              {
                result->initSeatSelection();
                size_t count = fieldGeneratorSeatSelection.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSeatSelection(fieldGeneratorSeatSelection.value[num].referenced());
                  }
                fieldGeneratorSeatSelection.value.clear();
                fieldGeneratorSeatSelection.have_value = false;
              }
            else if (!(result->hasSeatSelection()))
              {
                error("When parsing the object for %what%, the \"SeatSelection\" field was missing.");
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlSeatHeaterCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "eatSelection") == 0)
                        return &fieldGeneratorSeatSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlSeatHeaterCommand class"), fieldGeneratorSeatSelection("field \"SeatSelection\" of the CarControlSeatHeaterCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlSeatHeaterCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorSeatSelection.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLSEATHEATERCOMMANDJSON_H */
