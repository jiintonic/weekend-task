/* file "CarControlMirrorCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLMIRRORCOMMANDJSON_H
#define CARCONTROLMIRRORCOMMANDJSON_H

#pragma interface

#include "CarControlCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "CarMirrorSelectionEnumJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class CarControlMirrorCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCommandType
      {
        CommandType_RotateUp,
        CommandType_RotateDown,
        CommandType_RotateIn,
        CommandType_RotateOut,
        CommandType_Defrost,
        CommandType_RotateToDefault,
        CommandType_SaveDefaultRotation
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    bool flagHasMirrorSelection;
    CarMirrorSelectionEnumJSON * storeMirrorSelection;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlMirrorCommandJSON(const CarControlMirrorCommandJSON &);
    CarControlMirrorCommandJSON & operator=(const CarControlMirrorCommandJSON &other);

    JSONValue * extraCommandTypeToJSON(void) const;
    JSONValue * extraMirrorSelectionToJSON(void) const;

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMirrorSelection(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlMirrorCommandJSON(void);
    virtual ~CarControlMirrorCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;
    bool  hasMirrorSelection(void) const;
    CarMirrorSelectionEnumJSON *  getMirrorSelection(void);
    const CarMirrorSelectionEnumJSON *  getMirrorSelection(void) const;
    CarMirrorSelectionEnumJSON::TypeValue  getMirrorSelectionValue(void);
    const CarMirrorSelectionEnumJSON::TypeValue  getMirrorSelectionValue(void) const;
    const char * getMirrorSelectionAsChars(void) const;
    std::string  getMirrorSelectionAsString(void) const;

    virtual size_t extraCarControlMirrorCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlMirrorCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlMirrorCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlMirrorCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlMirrorCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlMirrorCommandLookup(const char *field_name) const
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
        if (flagHasMirrorSelection)
            ++result;
        result += extraCarControlMirrorCommandComponentCount();
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
        if (flagHasMirrorSelection)
          {
            if (remainder == 0)
                return "MirrorSelection";
            --remainder;
          }
        return extraCarControlMirrorCommandComponentKey(remainder);
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
        if (flagHasMirrorSelection)
          {
            if (remainder == 0)
                return extraMirrorSelectionToJSON();
            --remainder;
          }
        return extraCarControlMirrorCommandComponentValue(remainder);
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
        if (flagHasMirrorSelection)
          {
            if (remainder == 0)
                return extraMirrorSelectionToJSON();
            --remainder;
          }
        return extraCarControlMirrorCommandComponentValue(remainder);
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
                if (strcmp(&(field_name[1]), "irrorSelection") == 0)
                    return (flagHasMirrorSelection ? extraMirrorSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlMirrorCommandLookup(field_name);
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
                if (strcmp(&(field_name[1]), "irrorSelection") == 0)
                    return (flagHasMirrorSelection ? extraMirrorSelectionToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraCarControlMirrorCommandLookup(field_name);
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
    void setMirrorSelection(CarMirrorSelectionEnumJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMirrorSelection)
          {
            storeMirrorSelection->remove_reference();
          }
        flagHasMirrorSelection = true;
        storeMirrorSelection = new_value;
      }
    void setMirrorSelection(CarMirrorSelectionEnumJSON::TypeValue new_value)
      {
        setMirrorSelection(new CarMirrorSelectionEnumJSON(new_value));
      }
    void setMirrorSelection(const char *chars)
      {
        setMirrorSelection(new CarMirrorSelectionEnumJSON(chars));
      }
    void setMirrorSelection(std::string the_string)
      {
        setMirrorSelection(new CarMirrorSelectionEnumJSON(the_string));
      }
    void unsetMirrorSelection(void)
      {
        if (flagHasMirrorSelection)
          {
            storeMirrorSelection->remove_reference();
          }
        flagHasMirrorSelection = false;
      }

    virtual void extraCarControlMirrorCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlMirrorCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlMirrorCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlMirrorCommandAppendPair(key, new_component);
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
                if (strcmp(&(key[1]), "irrorSelection") == 0)
                    {
                    fromJSONMirrorSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlMirrorCommandAppendPair(key, new_component);
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
                if (strcmp(&(key[1]), "irrorSelection") == 0)
                    {
                    fromJSONMirrorSelection(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraCarControlMirrorCommandSetField(key, new_component);
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
            case CommandType_RotateUp:
                handler->string_value("RotateUp");
                break;
            case CommandType_RotateDown:
                handler->string_value("RotateDown");
                break;
            case CommandType_RotateIn:
                handler->string_value("RotateIn");
                break;
            case CommandType_RotateOut:
                handler->string_value("RotateOut");
                break;
            case CommandType_Defrost:
                handler->string_value("Defrost");
                break;
            case CommandType_RotateToDefault:
                handler->string_value("RotateToDefault");
                break;
            case CommandType_SaveDefaultRotation:
                handler->string_value("SaveDefaultRotation");
                break;
            default:
                assert(false);
          }
        assert(flagHasMirrorSelection);
        handler->start_pair("MirrorSelection");
        storeMirrorSelection->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        if (!(hasMirrorSelection()))
          {
            return "When parsing the object for %what%, the \"MirrorSelection\" field was missing.";
          }
        return NULL;
      }

    static CarControlMirrorCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlMirrorCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlMirrorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlMirrorCommandJSON>, CarControlMirrorCommandJSON *, bool> generator("Type CarControlMirrorCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlMirrorCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlMirrorCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlMirrorCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlMirrorCommandJSON>, CarControlMirrorCommandJSON *, bool> generator("Type CarControlMirrorCommand", ignore_extras);
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
        JSONHoldingGenerator<CarMirrorSelectionEnumJSON::Generator, RCHandle<CarMirrorSelectionEnumJSON>, CarMirrorSelectionEnumJSON *, bool > fieldGeneratorMirrorSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlMirrorCommand") == 0))
                throw("The key field has a value other than `CarControlMirrorCommand'.");
            CarControlMirrorCommandJSON *result = new CarControlMirrorCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlMirrorCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlMirrorCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlMirrorCommandJSON *)new_result);
          }
        void finish(CarControlMirrorCommandJSON *result)
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
            if (fieldGeneratorMirrorSelection.have_value)
              {
                result->setMirrorSelection(fieldGeneratorMirrorSelection.value.referenced());
                fieldGeneratorMirrorSelection.have_value = false;
              }
            else if (!(result->hasMirrorSelection()))
              {
                error("When parsing the object for %what%, the \"MirrorSelection\" field was missing.");
              }
            CarControlCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(CarControlMirrorCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandType") == 0)
                        return &fieldGeneratorCommandType;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "irrorSelection") == 0)
                        return &fieldGeneratorMirrorSelection;
                    break;
                default:
                    break;
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCommandType("field \"CommandType\" of the CarControlMirrorCommand class"), fieldGeneratorMirrorSelection("field \"MirrorSelection\" of the CarControlMirrorCommand class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlMirrorCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCommandType.reset();
            fieldGeneratorMirrorSelection.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLMIRRORCOMMANDJSON_H */
