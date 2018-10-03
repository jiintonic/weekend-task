/* file "CarControlCameraCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CARCONTROLCAMERACOMMANDJSON_H
#define CARCONTROLCAMERACOMMANDJSON_H

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


class CarControlCameraCommandJSON : public CarControlCommandJSON
  {
  public:
    enum TypeCameraSelection
      {
        CameraSelection_Front,
        CameraSelection_Rear,
        CameraSelection_LeftSide,
        CameraSelection_RightSide
      };

    static TypeCameraSelection  stringToCameraSelection(const char *chars);
    static const char * stringFromCameraSelection(TypeCameraSelection the_enum);
    enum TypeCommandType
      {
        CommandType_Show,
        CommandType_TakePicture
      };

    static TypeCommandType  stringToCommandType(const char *chars);
    static const char * stringFromCommandType(TypeCommandType the_enum);

  private:
    bool flagHasCameraSelection;
    TypeCameraSelection storeCameraSelection;
    bool flagHasCommandType;
    TypeCommandType storeCommandType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    CarControlCameraCommandJSON(const CarControlCameraCommandJSON &);
    CarControlCameraCommandJSON & operator=(const CarControlCameraCommandJSON &other);

    JSONValue * extraCameraSelectionToJSON(void) const;
    JSONValue * extraCommandTypeToJSON(void) const;

    void  fromJSONCameraSelection(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCommandType(JSONValue *json_value, bool ignore_extras = false);


  public:
    CarControlCameraCommandJSON(void);
    virtual ~CarControlCameraCommandJSON(void);
    const char * getCarControlCommandKind(void) const;
    bool  hasCameraSelection(void) const;
    TypeCameraSelection  getCameraSelection(void);
    const TypeCameraSelection  getCameraSelection(void) const;
    const char * getCameraSelectionAsChars(void) const;
    std::string  getCameraSelectionAsString(void) const;
    bool  hasCommandType(void) const;
    TypeCommandType  getCommandType(void);
    const TypeCommandType  getCommandType(void) const;
    const char * getCommandTypeAsChars(void) const;
    std::string  getCommandTypeAsString(void) const;

    virtual size_t extraCarControlCameraCommandComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraCarControlCameraCommandComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraCarControlCameraCommandComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraCarControlCameraCommandComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraCarControlCameraCommandLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraCarControlCameraCommandLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraCarControlCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasCameraSelection)
            ++result;
        if (flagHasCommandType)
            ++result;
        result += extraCarControlCameraCommandComponentCount();
        return result;
      }
    const char *extraCarControlCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCameraSelection)
          {
            if (remainder == 0)
                return "CameraSelection";
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return "CommandType";
            --remainder;
          }
        return extraCarControlCameraCommandComponentKey(remainder);
      }
    JSONValue *extraCarControlCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasCameraSelection)
          {
            if (remainder == 0)
                return extraCameraSelectionToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraCarControlCameraCommandComponentValue(remainder);
      }
    const JSONValue *extraCarControlCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasCameraSelection)
          {
            if (remainder == 0)
                return extraCameraSelectionToJSON();
            --remainder;
          }
        if (flagHasCommandType)
          {
            if (remainder == 0)
                return extraCommandTypeToJSON();
            --remainder;
          }
        return extraCarControlCameraCommandComponentValue(remainder);
      }
    JSONValue *extraCarControlCommandLookup(const char *field_name)
      {
        if (strncmp(field_name, "C", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'a':
                    if (strcmp(&(field_name[2]), "meraSelection") == 0)
                        return (flagHasCameraSelection ? extraCameraSelectionToJSON() : NULL);
                    break;
                case 'o':
                    if (strcmp(&(field_name[2]), "mmandType") == 0)
                        return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraCarControlCameraCommandLookup(field_name);
      }
    const JSONValue *extraCarControlCommandLookup(const char *field_name) const
      {
        if (strncmp(field_name, "C", 1) == 0)
          {
            switch ((unsigned char)(field_name[1]))
              {
                case 'a':
                    if (strcmp(&(field_name[2]), "meraSelection") == 0)
                        return (flagHasCameraSelection ? extraCameraSelectionToJSON() : NULL);
                    break;
                case 'o':
                    if (strcmp(&(field_name[2]), "mmandType") == 0)
                        return (flagHasCommandType ? extraCommandTypeToJSON() : NULL);
                    break;
                default:
                    break;
              }
          }
        return extraCarControlCameraCommandLookup(field_name);
      }

    void setCameraSelection(TypeCameraSelection new_value)
      {
        flagHasCameraSelection = true;
        storeCameraSelection = new_value;
      }
    void setCameraSelection(const char *chars)
      {
        setCameraSelection(stringToCameraSelection(chars));
      }
    void setCameraSelection(std::string the_string)
      {
        setCameraSelection(stringToCameraSelection(the_string.c_str()));
      }
    void unsetCameraSelection(void)
      {
        flagHasCameraSelection = false;
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

    virtual void extraCarControlCameraCommandAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraCarControlCameraCommandSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraCarControlCameraCommandLookup(key);
        if (old_field == NULL)
          {
            extraCarControlCameraCommandAppendPair(key, new_component);
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
                case 'a':
                    if (strcmp(&(key[2]), "meraSelection") == 0)
                        {
                        fromJSONCameraSelection(new_component, false);
                        return;
                        }
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "mmandType") == 0)
                        {
                        fromJSONCommandType(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraCarControlCameraCommandAppendPair(key, new_component);
      }
    void extraCarControlCommandSetField(const char *key, JSONValue *new_component)
      {
        if (strncmp(key, "C", 1) == 0)
          {
            switch ((unsigned char)(key[1]))
              {
                case 'a':
                    if (strcmp(&(key[2]), "meraSelection") == 0)
                        {
                        fromJSONCameraSelection(new_component, false);
                        return;
                        }
                    break;
                case 'o':
                    if (strcmp(&(key[2]), "mmandType") == 0)
                        {
                        fromJSONCommandType(new_component, false);
                        return;
                        }
                    break;
                default:
                    break;
              }
          }
        extraCarControlCameraCommandSetField(key, new_component);
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
        assert(flagHasCameraSelection);
        handler->start_pair("CameraSelection");
        switch (storeCameraSelection)
          {
            case CameraSelection_Front:
                handler->string_value("Front");
                break;
            case CameraSelection_Rear:
                handler->string_value("Rear");
                break;
            case CameraSelection_LeftSide:
                handler->string_value("LeftSide");
                break;
            case CameraSelection_RightSide:
                handler->string_value("RightSide");
                break;
            default:
                assert(false);
          }
        assert(flagHasCommandType);
        handler->start_pair("CommandType");
        switch (storeCommandType)
          {
            case CommandType_Show:
                handler->string_value("Show");
                break;
            case CommandType_TakePicture:
                handler->string_value("TakePicture");
                break;
            default:
                assert(false);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasCameraSelection()))
          {
            return "When parsing the object for %what%, the \"CameraSelection\" field was missing.";
          }
        if (!(hasCommandType()))
          {
            return "When parsing the object for %what%, the \"CommandType\" field was missing.";
          }
        return NULL;
      }

    static CarControlCameraCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static CarControlCameraCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        CarControlCameraCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlCameraCommandJSON>, CarControlCameraCommandJSON *, bool> generator("Type CarControlCameraCommand", ignore_extras);
            parse_json_value(text, "Text for CarControlCameraCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static CarControlCameraCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        CarControlCameraCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<CarControlCameraCommandJSON>, CarControlCameraCommandJSON *, bool> generator("Type CarControlCameraCommand", ignore_extras);
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
    class FieldGeneratorCameraSelection : public JSONStringGenerator
          {
          protected:
            FieldGeneratorCameraSelection(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorCameraSelection(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToCameraSelection(result));
              }
            virtual void handle_result(TypeCameraSelection result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorCameraSelection, TypeCameraSelection, TypeCameraSelection > fieldGeneratorCameraSelection;
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
            if (!(strcmp(getCarControlCommandJSONKey().c_str(), "CarControlCameraCommand") == 0))
                throw("The key field has a value other than `CarControlCameraCommand'.");
            CarControlCameraCommandJSON *result = new CarControlCameraCommandJSON();
            assert(result != NULL);
            RCHandle<CarControlCameraCommandJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraCarControlCameraCommandAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(CarControlCommandJSON *new_result)
          {
            handle_result((CarControlCameraCommandJSON *)new_result);
          }
        void finish(CarControlCameraCommandJSON *result)
          {
            if (fieldGeneratorCameraSelection.have_value)
              {
                result->setCameraSelection(fieldGeneratorCameraSelection.value);
                fieldGeneratorCameraSelection.have_value = false;
              }
            else if (!(result->hasCameraSelection()))
              {
                error("When parsing the object for %what%, the \"CameraSelection\" field was missing.");
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
        virtual void handle_result(CarControlCameraCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "C", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'a':
                        if (strcmp(&(field_name[2]), "meraSelection") == 0)
                            return &fieldGeneratorCameraSelection;
                        break;
                    case 'o':
                        if (strcmp(&(field_name[2]), "mmandType") == 0)
                            return &fieldGeneratorCommandType;
                        break;
                    default:
                        break;
                  }
              }
            return CarControlCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CarControlCommandJSON::Generator(ignore_extras), fieldGeneratorCameraSelection("field \"CameraSelection\" of the CarControlCameraCommand class"), fieldGeneratorCommandType("field \"CommandType\" of the CarControlCameraCommand class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the CarControlCameraCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCameraSelection.reset();
            fieldGeneratorCommandType.reset();
            CarControlCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* CARCONTROLCAMERACOMMANDJSON_H */
