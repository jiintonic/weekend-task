/* file "HomeAutomationActionResponseJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOMEAUTOMATIONACTIONRESPONSEJSON_H
#define HOMEAUTOMATIONACTIONRESPONSEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "ColorJSON.h"
#include "HomeAutomationTemperatureJSON.h"
#include "HomeAutomationTurboModeJSON.h"
#include "HomeAutomationTemperatureJSON.h"
#include "HomeAutomationMotionStatusJSON.h"
#include "HomeAutomationMovementStatusJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HomeAutomationActionResponseJSON : public ReferenceCounted
  {
  public:
    class TypeErrorJSON : public ReferenceCounted
      {
      private:
        bool flagHasErrorCode;
        std::string storeErrorCode;
        bool flagHasErrorString;
        std::string storeErrorString;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeErrorJSON(const TypeErrorJSON &);
        TypeErrorJSON & operator=(const TypeErrorJSON &other);

        void  fromJSONErrorCode(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONErrorString(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeErrorJSON(void);
        virtual ~TypeErrorJSON(void);
        bool  hasErrorCode(void) const;
        std::string  getErrorCode(void);
        const std::string  getErrorCode(void) const;
        bool  hasErrorString(void) const;
        std::string  getErrorString(void);
        const std::string  getErrorString(void) const;

        virtual size_t extraTypeErrorComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeErrorComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeErrorComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeErrorComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeErrorLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeErrorLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setErrorCode(std::string new_value)
          {
            flagHasErrorCode = true;
            storeErrorCode = new_value;
          }
        void unsetErrorCode(void)
          {
            flagHasErrorCode = false;
          }
        void setErrorString(std::string new_value)
          {
            flagHasErrorString = true;
            storeErrorString = new_value;
          }
        void unsetErrorString(void)
          {
            flagHasErrorString = false;
          }

        virtual void extraTypeErrorAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeErrorSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeErrorLookup(key);
            if (old_field == NULL)
              {
                extraTypeErrorAppendPair(key, new_component);
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
            if (flagHasErrorCode)
              {
                handler->start_pair("ErrorCode");
                handler->string_value(storeErrorCode);
              }
            if (flagHasErrorString)
              {
                handler->start_pair("ErrorString");
                handler->string_value(storeErrorString);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeErrorJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeErrorJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeErrorJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeErrorJSON>, TypeErrorJSON *, bool> generator("Type TypeError", ignore_extras);
                parse_json_value(text, "Text for TypeErrorJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeErrorJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeErrorJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeErrorJSON>, TypeErrorJSON *, bool> generator("Type TypeError", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorCode;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorString;
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
                TypeErrorJSON *result = new TypeErrorJSON();
                assert(result != NULL);
                RCHandle<TypeErrorJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeErrorAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeErrorJSON *result)
              {
                if (fieldGeneratorErrorCode.have_value)
                  {
                    result->setErrorCode(fieldGeneratorErrorCode.value);
                    fieldGeneratorErrorCode.have_value = false;
                  }
                if (fieldGeneratorErrorString.have_value)
                  {
                    result->setErrorString(fieldGeneratorErrorString.value);
                    fieldGeneratorErrorString.have_value = false;
                  }
              }
            virtual void handle_result(TypeErrorJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "Error", 5) == 0)
                  {
                    switch ((unsigned char)(field_name[5]))
                      {
                        case 'C':
                            if (strcmp(&(field_name[6]), "ode") == 0)
                                return &fieldGeneratorErrorCode;
                            break;
                        case 'S':
                            if (strcmp(&(field_name[6]), "tring") == 0)
                                return &fieldGeneratorErrorString;
                            break;
                        default:
                            break;
                      }
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorErrorCode("field \"ErrorCode\" of the TypeError class"), fieldGeneratorErrorString("field \"ErrorString\" of the TypeError class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeError class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorErrorCode.reset();
                fieldGeneratorErrorString.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };
    class TypeSensorReadingJSON : public ReferenceCounted
      {
      private:
        bool flagHasName;
        std::string storeName;
        bool flagHasLevel;
        double storeLevel;
        std::string textStoreLevel;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeSensorReadingJSON(const TypeSensorReadingJSON &);
        TypeSensorReadingJSON & operator=(const TypeSensorReadingJSON &other);

        void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLevel(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeSensorReadingJSON(void);
        virtual ~TypeSensorReadingJSON(void);
        bool  hasName(void) const;
        std::string  getName(void);
        const std::string  getName(void) const;
        bool  hasLevel(void) const;
        double  getLevel(void);
        const double  getLevel(void) const;
        std::string  getLevelAsText(void) const;

        virtual size_t extraTypeSensorReadingComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeSensorReadingComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeSensorReadingComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeSensorReadingComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeSensorReadingLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeSensorReadingLookup(const char *field_name) const
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }

        void setName(std::string new_value)
          {
            flagHasName = true;
            storeName = new_value;
          }
        void unsetName(void)
          {
            flagHasName = false;
          }
        void setLevel(double new_value)
          {
            flagHasLevel = true;
            storeLevel = new_value;
            textStoreLevel = "";
          }
        void setLevelText(std::string new_value)
          {
            flagHasLevel = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Level of TypeSensorReadingJSON is not a valid number.");
            textStoreLevel = new_value;
          }
        void unsetLevel(void)
          {
            flagHasLevel = false;
          }

        virtual void extraTypeSensorReadingAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeSensorReadingSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeSensorReadingLookup(key);
            if (old_field == NULL)
              {
                extraTypeSensorReadingAppendPair(key, new_component);
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
            if (flagHasName)
              {
                handler->start_pair("Name");
                handler->string_value(storeName);
              }
            if (flagHasLevel)
              {
                handler->start_pair("Level");
                if (textStoreLevel != "")
                    handler->number_value(textStoreLevel.c_str());
                else if (((double)(long int)storeLevel) == storeLevel)
                    handler->number_value((long int)storeLevel);
                else
                    handler->number_value(storeLevel);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeSensorReadingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeSensorReadingJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeSensorReadingJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSensorReadingJSON>, TypeSensorReadingJSON *, bool> generator("Type TypeSensorReading", ignore_extras);
                parse_json_value(text, "Text for TypeSensorReadingJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeSensorReadingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeSensorReadingJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeSensorReadingJSON>, TypeSensorReadingJSON *, bool> generator("Type TypeSensorReading", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLevel;
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
                TypeSensorReadingJSON *result = new TypeSensorReadingJSON();
                assert(result != NULL);
                RCHandle<TypeSensorReadingJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeSensorReadingAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeSensorReadingJSON *result)
              {
                if (fieldGeneratorName.have_value)
                  {
                    result->setName(fieldGeneratorName.value);
                    fieldGeneratorName.have_value = false;
                  }
                if (fieldGeneratorLevel.have_value)
                  {
                    result->setLevelText(fieldGeneratorLevel.value);
                    fieldGeneratorLevel.have_value = false;
                  }
              }
            virtual void handle_result(TypeSensorReadingJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "evel") == 0)
                            return &fieldGeneratorLevel;
                        break;
                    case 'N':
                        if (strcmp(&(field_name[1]), "ame") == 0)
                            return &fieldGeneratorName;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the TypeSensorReading class"), fieldGeneratorLevel("field \"Level\" of the TypeSensorReading class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeSensorReading class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorName.reset();
                fieldGeneratorLevel.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasError;
    TypeErrorJSON * storeError;
    bool flagHasAuto;
    bool storeAuto;
    bool flagHasSleep;
    bool storeSleep;
    bool flagHasWake;
    bool storeWake;
    bool flagHasTurnOn;
    bool storeTurnOn;
    bool flagHasTurnOff;
    bool storeTurnOff;
    bool flagHasSetBrightness;
    double storeSetBrightness;
    std::string textStoreSetBrightness;
    bool flagHasSetColor;
    ColorJSON * storeSetColor;
    bool flagHasHeat;
    bool storeHeat;
    bool flagHasCool;
    bool storeCool;
    bool flagHasDry;
    bool storeDry;
    bool flagHasWind;
    bool storeWind;
    bool flagHasSetTemperature;
    HomeAutomationTemperatureJSON * storeSetTemperature;
    bool flagHasSetWindSpeed;
    double storeSetWindSpeed;
    std::string textStoreSetWindSpeed;
    bool flagHasStartCleaning;
    bool storeStartCleaning;
    bool flagHasStopCleaning;
    bool storeStopCleaning;
    bool flagHasTurboControl;
    HomeAutomationTurboModeJSON * storeTurboControl;
    bool flagHasReady;
    bool storeReady;
    bool flagHasPause;
    bool storePause;
    bool flagHasCancel;
    bool storeCancel;
    bool flagHasCurrentTemperature;
    HomeAutomationTemperatureJSON * storeCurrentTemperature;
    bool flagHasLock;
    bool storeLock;
    bool flagHasUnlock;
    bool storeUnlock;
    bool flagHasOpen;
    bool storeOpen;
    bool flagHasClose;
    bool storeClose;
    bool flagHasAlarm;
    bool storeAlarm;
    bool flagHasTimeRemaining;
    double storeTimeRemaining;
    std::string textStoreTimeRemaining;
    bool flagHasStage;
    std::string storeStage;
    bool flagHasSensorReading;
    std::vector< TypeSensorReadingJSON * > storeSensorReading;
    bool flagHasMotionSensor;
    HomeAutomationMotionStatusJSON * storeMotionSensor;
    bool flagHasMovementSensor;
    HomeAutomationMovementStatusJSON * storeMovementSensor;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HomeAutomationActionResponseJSON(const HomeAutomationActionResponseJSON &);
    HomeAutomationActionResponseJSON & operator=(const HomeAutomationActionResponseJSON &other);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAuto(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSleep(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWake(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTurnOn(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTurnOff(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSetBrightness(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSetColor(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHeat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCool(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDry(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSetTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSetWindSpeed(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStartCleaning(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStopCleaning(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTurboControl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReady(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPause(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCancel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentTemperature(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLock(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnlock(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOpen(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONClose(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAlarm(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeRemaining(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSensorReading(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMotionSensor(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMovementSensor(JSONValue *json_value, bool ignore_extras = false);


  public:
    HomeAutomationActionResponseJSON(void);
    virtual ~HomeAutomationActionResponseJSON(void);
    bool  hasError(void) const;
    TypeErrorJSON *  getError(void);
    const TypeErrorJSON *  getError(void) const;
    bool  hasAuto(void) const;
    bool  getAuto(void);
    const bool  getAuto(void) const;
    bool  hasSleep(void) const;
    bool  getSleep(void);
    const bool  getSleep(void) const;
    bool  hasWake(void) const;
    bool  getWake(void);
    const bool  getWake(void) const;
    bool  hasTurnOn(void) const;
    bool  getTurnOn(void);
    const bool  getTurnOn(void) const;
    bool  hasTurnOff(void) const;
    bool  getTurnOff(void);
    const bool  getTurnOff(void) const;
    bool  hasSetBrightness(void) const;
    double  getSetBrightness(void);
    const double  getSetBrightness(void) const;
    std::string  getSetBrightnessAsText(void) const;
    bool  hasSetColor(void) const;
    ColorJSON *  getSetColor(void);
    const ColorJSON *  getSetColor(void) const;
    bool  hasHeat(void) const;
    bool  getHeat(void);
    const bool  getHeat(void) const;
    bool  hasCool(void) const;
    bool  getCool(void);
    const bool  getCool(void) const;
    bool  hasDry(void) const;
    bool  getDry(void);
    const bool  getDry(void) const;
    bool  hasWind(void) const;
    bool  getWind(void);
    const bool  getWind(void) const;
    bool  hasSetTemperature(void) const;
    HomeAutomationTemperatureJSON *  getSetTemperature(void);
    const HomeAutomationTemperatureJSON *  getSetTemperature(void) const;
    bool  hasSetWindSpeed(void) const;
    double  getSetWindSpeed(void);
    const double  getSetWindSpeed(void) const;
    std::string  getSetWindSpeedAsText(void) const;
    bool  hasStartCleaning(void) const;
    bool  getStartCleaning(void);
    const bool  getStartCleaning(void) const;
    bool  hasStopCleaning(void) const;
    bool  getStopCleaning(void);
    const bool  getStopCleaning(void) const;
    bool  hasTurboControl(void) const;
    HomeAutomationTurboModeJSON *  getTurboControl(void);
    const HomeAutomationTurboModeJSON *  getTurboControl(void) const;
    HomeAutomationTurboModeJSON::TypeValue  getTurboControlValue(void);
    const HomeAutomationTurboModeJSON::TypeValue  getTurboControlValue(void) const;
    const char * getTurboControlAsChars(void) const;
    std::string  getTurboControlAsString(void) const;
    bool  hasReady(void) const;
    bool  getReady(void);
    const bool  getReady(void) const;
    bool  hasPause(void) const;
    bool  getPause(void);
    const bool  getPause(void) const;
    bool  hasCancel(void) const;
    bool  getCancel(void);
    const bool  getCancel(void) const;
    bool  hasCurrentTemperature(void) const;
    HomeAutomationTemperatureJSON *  getCurrentTemperature(void);
    const HomeAutomationTemperatureJSON *  getCurrentTemperature(void) const;
    bool  hasLock(void) const;
    bool  getLock(void);
    const bool  getLock(void) const;
    bool  hasUnlock(void) const;
    bool  getUnlock(void);
    const bool  getUnlock(void) const;
    bool  hasOpen(void) const;
    bool  getOpen(void);
    const bool  getOpen(void) const;
    bool  hasClose(void) const;
    bool  getClose(void);
    const bool  getClose(void) const;
    bool  hasAlarm(void) const;
    bool  getAlarm(void);
    const bool  getAlarm(void) const;
    bool  hasTimeRemaining(void) const;
    double  getTimeRemaining(void);
    const double  getTimeRemaining(void) const;
    std::string  getTimeRemainingAsText(void) const;
    bool  hasStage(void) const;
    std::string  getStage(void);
    const std::string  getStage(void) const;
    bool  hasSensorReading(void) const;
    size_t  countOfSensorReading(void) const;
    TypeSensorReadingJSON *  elementOfSensorReading(size_t element_num);
    const TypeSensorReadingJSON *  elementOfSensorReading(size_t element_num) const;
    std::vector< TypeSensorReadingJSON * >  getSensorReading(void);
    const std::vector< TypeSensorReadingJSON * >  getSensorReading(void) const;
    bool  hasMotionSensor(void) const;
    HomeAutomationMotionStatusJSON *  getMotionSensor(void);
    const HomeAutomationMotionStatusJSON *  getMotionSensor(void) const;
    bool  hasMovementSensor(void) const;
    HomeAutomationMovementStatusJSON *  getMovementSensor(void);
    const HomeAutomationMovementStatusJSON *  getMovementSensor(void) const;

    virtual size_t extraHomeAutomationActionResponseComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHomeAutomationActionResponseComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHomeAutomationActionResponseComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHomeAutomationActionResponseComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHomeAutomationActionResponseLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHomeAutomationActionResponseLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setError(TypeErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = true;
        storeError = new_value;
      }
    void unsetError(void)
      {
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = false;
      }
    void setAuto(bool new_value)
      {
        flagHasAuto = true;
        storeAuto = new_value;
      }
    void unsetAuto(void)
      {
        flagHasAuto = false;
      }
    void setSleep(bool new_value)
      {
        flagHasSleep = true;
        storeSleep = new_value;
      }
    void unsetSleep(void)
      {
        flagHasSleep = false;
      }
    void setWake(bool new_value)
      {
        flagHasWake = true;
        storeWake = new_value;
      }
    void unsetWake(void)
      {
        flagHasWake = false;
      }
    void setTurnOn(bool new_value)
      {
        flagHasTurnOn = true;
        storeTurnOn = new_value;
      }
    void unsetTurnOn(void)
      {
        flagHasTurnOn = false;
      }
    void setTurnOff(bool new_value)
      {
        flagHasTurnOff = true;
        storeTurnOff = new_value;
      }
    void unsetTurnOff(void)
      {
        flagHasTurnOff = false;
      }
    void setSetBrightness(double new_value)
      {
        flagHasSetBrightness = true;
        if (new_value < 0)
            throw("The value for field SetBrightness of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field SetBrightness of HomeAutomationActionResponseJSON is greater than the upper bound (1) for that field.");
        storeSetBrightness = new_value;
        textStoreSetBrightness = "";
      }
    void setSetBrightnessText(std::string new_value)
      {
        flagHasSetBrightness = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field SetBrightness of HomeAutomationActionResponseJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field SetBrightness of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field SetBrightness of HomeAutomationActionResponseJSON is greater than the upper bound (1) for that field.");
        textStoreSetBrightness = new_value;
      }
    void unsetSetBrightness(void)
      {
        flagHasSetBrightness = false;
      }
    void setSetColor(ColorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSetColor)
          {
            storeSetColor->remove_reference();
          }
        flagHasSetColor = true;
        storeSetColor = new_value;
      }
    void unsetSetColor(void)
      {
        if (flagHasSetColor)
          {
            storeSetColor->remove_reference();
          }
        flagHasSetColor = false;
      }
    void setHeat(bool new_value)
      {
        flagHasHeat = true;
        storeHeat = new_value;
      }
    void unsetHeat(void)
      {
        flagHasHeat = false;
      }
    void setCool(bool new_value)
      {
        flagHasCool = true;
        storeCool = new_value;
      }
    void unsetCool(void)
      {
        flagHasCool = false;
      }
    void setDry(bool new_value)
      {
        flagHasDry = true;
        storeDry = new_value;
      }
    void unsetDry(void)
      {
        flagHasDry = false;
      }
    void setWind(bool new_value)
      {
        flagHasWind = true;
        storeWind = new_value;
      }
    void unsetWind(void)
      {
        flagHasWind = false;
      }
    void setSetTemperature(HomeAutomationTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasSetTemperature)
          {
            storeSetTemperature->remove_reference();
          }
        flagHasSetTemperature = true;
        storeSetTemperature = new_value;
      }
    void unsetSetTemperature(void)
      {
        if (flagHasSetTemperature)
          {
            storeSetTemperature->remove_reference();
          }
        flagHasSetTemperature = false;
      }
    void setSetWindSpeed(double new_value)
      {
        flagHasSetWindSpeed = true;
        if (new_value < 0)
            throw("The value for field SetWindSpeed of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        if (new_value > 1)
            throw("The value for field SetWindSpeed of HomeAutomationActionResponseJSON is greater than the upper bound (1) for that field.");
        storeSetWindSpeed = new_value;
        textStoreSetWindSpeed = "";
      }
    void setSetWindSpeedText(std::string new_value)
      {
        flagHasSetWindSpeed = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field SetWindSpeed of HomeAutomationActionResponseJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field SetWindSpeed of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "1", "", false, "1") > 0)
            throw("The value for field SetWindSpeed of HomeAutomationActionResponseJSON is greater than the upper bound (1) for that field.");
        textStoreSetWindSpeed = new_value;
      }
    void unsetSetWindSpeed(void)
      {
        flagHasSetWindSpeed = false;
      }
    void setStartCleaning(bool new_value)
      {
        flagHasStartCleaning = true;
        storeStartCleaning = new_value;
      }
    void unsetStartCleaning(void)
      {
        flagHasStartCleaning = false;
      }
    void setStopCleaning(bool new_value)
      {
        flagHasStopCleaning = true;
        storeStopCleaning = new_value;
      }
    void unsetStopCleaning(void)
      {
        flagHasStopCleaning = false;
      }
    void setTurboControl(HomeAutomationTurboModeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTurboControl)
          {
            storeTurboControl->remove_reference();
          }
        flagHasTurboControl = true;
        storeTurboControl = new_value;
      }
    void setTurboControl(HomeAutomationTurboModeJSON::TypeValue new_value)
      {
        setTurboControl(new HomeAutomationTurboModeJSON(new_value));
      }
    void setTurboControl(const char *chars)
      {
        HomeAutomationTurboModeJSON::TypeValueKnownValues known = HomeAutomationTurboModeJSON::stringToValue(chars);
        HomeAutomationTurboModeJSON::TypeValue new_value;
        if (known == HomeAutomationTurboModeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setTurboControl(new_value);
      }
    void setTurboControl(std::string the_string)
      {
        setTurboControl(the_string.c_str());
      }
    void unsetTurboControl(void)
      {
        if (flagHasTurboControl)
          {
            storeTurboControl->remove_reference();
          }
        flagHasTurboControl = false;
      }
    void setReady(bool new_value)
      {
        flagHasReady = true;
        storeReady = new_value;
      }
    void unsetReady(void)
      {
        flagHasReady = false;
      }
    void setPause(bool new_value)
      {
        flagHasPause = true;
        storePause = new_value;
      }
    void unsetPause(void)
      {
        flagHasPause = false;
      }
    void setCancel(bool new_value)
      {
        flagHasCancel = true;
        storeCancel = new_value;
      }
    void unsetCancel(void)
      {
        flagHasCancel = false;
      }
    void setCurrentTemperature(HomeAutomationTemperatureJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasCurrentTemperature)
          {
            storeCurrentTemperature->remove_reference();
          }
        flagHasCurrentTemperature = true;
        storeCurrentTemperature = new_value;
      }
    void unsetCurrentTemperature(void)
      {
        if (flagHasCurrentTemperature)
          {
            storeCurrentTemperature->remove_reference();
          }
        flagHasCurrentTemperature = false;
      }
    void setLock(bool new_value)
      {
        flagHasLock = true;
        storeLock = new_value;
      }
    void unsetLock(void)
      {
        flagHasLock = false;
      }
    void setUnlock(bool new_value)
      {
        flagHasUnlock = true;
        storeUnlock = new_value;
      }
    void unsetUnlock(void)
      {
        flagHasUnlock = false;
      }
    void setOpen(bool new_value)
      {
        flagHasOpen = true;
        storeOpen = new_value;
      }
    void unsetOpen(void)
      {
        flagHasOpen = false;
      }
    void setClose(bool new_value)
      {
        flagHasClose = true;
        storeClose = new_value;
      }
    void unsetClose(void)
      {
        flagHasClose = false;
      }
    void setAlarm(bool new_value)
      {
        flagHasAlarm = true;
        storeAlarm = new_value;
      }
    void unsetAlarm(void)
      {
        flagHasAlarm = false;
      }
    void setTimeRemaining(double new_value)
      {
        flagHasTimeRemaining = true;
        if (new_value < 0)
            throw("The value for field TimeRemaining of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        storeTimeRemaining = new_value;
        textStoreTimeRemaining = "";
      }
    void setTimeRemainingText(std::string new_value)
      {
        flagHasTimeRemaining = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field TimeRemaining of HomeAutomationActionResponseJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field TimeRemaining of HomeAutomationActionResponseJSON is less than the lower bound (0) for that field.");
        textStoreTimeRemaining = new_value;
      }
    void unsetTimeRemaining(void)
      {
        flagHasTimeRemaining = false;
      }
    void setStage(std::string new_value)
      {
        flagHasStage = true;
        storeStage = new_value;
      }
    void unsetStage(void)
      {
        flagHasStage = false;
      }
    void initSensorReading(void)
      {
        if (flagHasSensorReading)
          {
            for (size_t num2 = 0; num2 < storeSensorReading.size(); ++num2)
              {
                storeSensorReading[num2]->remove_reference();
              }
          }
        flagHasSensorReading = true;
        storeSensorReading.clear();
      }
    void appendSensorReading(TypeSensorReadingJSON * to_append)
      {
        if (!flagHasSensorReading)
          {
            flagHasSensorReading = true;
            storeSensorReading.clear();
          }
        assert(flagHasSensorReading);
        to_append->add_reference();
        storeSensorReading.push_back(to_append);
      }
    void unsetSensorReading(void)
      {
        if (flagHasSensorReading)
          {
            for (size_t num3 = 0; num3 < storeSensorReading.size(); ++num3)
              {
                storeSensorReading[num3]->remove_reference();
              }
          }
        flagHasSensorReading = false;
        storeSensorReading.clear();
      }
    void setMotionSensor(HomeAutomationMotionStatusJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMotionSensor)
          {
            storeMotionSensor->remove_reference();
          }
        flagHasMotionSensor = true;
        storeMotionSensor = new_value;
      }
    void unsetMotionSensor(void)
      {
        if (flagHasMotionSensor)
          {
            storeMotionSensor->remove_reference();
          }
        flagHasMotionSensor = false;
      }
    void setMovementSensor(HomeAutomationMovementStatusJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasMovementSensor)
          {
            storeMovementSensor->remove_reference();
          }
        flagHasMovementSensor = true;
        storeMovementSensor = new_value;
      }
    void unsetMovementSensor(void)
      {
        if (flagHasMovementSensor)
          {
            storeMovementSensor->remove_reference();
          }
        flagHasMovementSensor = false;
      }

    virtual void extraHomeAutomationActionResponseAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHomeAutomationActionResponseSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHomeAutomationActionResponseLookup(key);
        if (old_field == NULL)
          {
            extraHomeAutomationActionResponseAppendPair(key, new_component);
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
        if (flagHasError)
          {
            handler->start_pair("Error");
            storeError->write_as_json(handler);
          }
        if (flagHasAuto)
          {
            handler->start_pair("Auto");
            handler->boolean_value(storeAuto);
          }
        if (flagHasSleep)
          {
            handler->start_pair("Sleep");
            handler->boolean_value(storeSleep);
          }
        if (flagHasWake)
          {
            handler->start_pair("Wake");
            handler->boolean_value(storeWake);
          }
        if (flagHasTurnOn)
          {
            handler->start_pair("TurnOn");
            handler->boolean_value(storeTurnOn);
          }
        if (flagHasTurnOff)
          {
            handler->start_pair("TurnOff");
            handler->boolean_value(storeTurnOff);
          }
        if (flagHasSetBrightness)
          {
            handler->start_pair("SetBrightness");
            if (textStoreSetBrightness != "")
                handler->number_value(textStoreSetBrightness.c_str());
            else if (((double)(long int)storeSetBrightness) == storeSetBrightness)
                handler->number_value((long int)storeSetBrightness);
            else
                handler->number_value(storeSetBrightness);
          }
        if (flagHasSetColor)
          {
            handler->start_pair("SetColor");
            storeSetColor->write_as_json(handler);
          }
        if (flagHasHeat)
          {
            handler->start_pair("Heat");
            handler->boolean_value(storeHeat);
          }
        if (flagHasCool)
          {
            handler->start_pair("Cool");
            handler->boolean_value(storeCool);
          }
        if (flagHasDry)
          {
            handler->start_pair("Dry");
            handler->boolean_value(storeDry);
          }
        if (flagHasWind)
          {
            handler->start_pair("Wind");
            handler->boolean_value(storeWind);
          }
        if (flagHasSetTemperature)
          {
            handler->start_pair("SetTemperature");
            storeSetTemperature->write_as_json(handler);
          }
        if (flagHasSetWindSpeed)
          {
            handler->start_pair("SetWindSpeed");
            if (textStoreSetWindSpeed != "")
                handler->number_value(textStoreSetWindSpeed.c_str());
            else if (((double)(long int)storeSetWindSpeed) == storeSetWindSpeed)
                handler->number_value((long int)storeSetWindSpeed);
            else
                handler->number_value(storeSetWindSpeed);
          }
        if (flagHasStartCleaning)
          {
            handler->start_pair("StartCleaning");
            handler->boolean_value(storeStartCleaning);
          }
        if (flagHasStopCleaning)
          {
            handler->start_pair("StopCleaning");
            handler->boolean_value(storeStopCleaning);
          }
        if (flagHasTurboControl)
          {
            handler->start_pair("TurboControl");
            storeTurboControl->write_as_json(handler);
          }
        if (flagHasReady)
          {
            handler->start_pair("Ready");
            handler->boolean_value(storeReady);
          }
        if (flagHasPause)
          {
            handler->start_pair("Pause");
            handler->boolean_value(storePause);
          }
        if (flagHasCancel)
          {
            handler->start_pair("Cancel");
            handler->boolean_value(storeCancel);
          }
        if (flagHasCurrentTemperature)
          {
            handler->start_pair("CurrentTemperature");
            storeCurrentTemperature->write_as_json(handler);
          }
        if (flagHasLock)
          {
            handler->start_pair("Lock");
            handler->boolean_value(storeLock);
          }
        if (flagHasUnlock)
          {
            handler->start_pair("Unlock");
            handler->boolean_value(storeUnlock);
          }
        if (flagHasOpen)
          {
            handler->start_pair("Open");
            handler->boolean_value(storeOpen);
          }
        if (flagHasClose)
          {
            handler->start_pair("Close");
            handler->boolean_value(storeClose);
          }
        if (flagHasAlarm)
          {
            handler->start_pair("Alarm");
            handler->boolean_value(storeAlarm);
          }
        if (flagHasTimeRemaining)
          {
            handler->start_pair("TimeRemaining");
            if (textStoreTimeRemaining != "")
                handler->number_value(textStoreTimeRemaining.c_str());
            else if (((double)(long int)storeTimeRemaining) == storeTimeRemaining)
                handler->number_value((long int)storeTimeRemaining);
            else
                handler->number_value(storeTimeRemaining);
          }
        if (flagHasStage)
          {
            handler->start_pair("Stage");
            handler->string_value(storeStage);
          }
        if (flagHasSensorReading)
          {
            handler->start_pair("SensorReading");
            assert(storeSensorReading.size() >= 1);
            handler->start_array();
            for (size_t num1 = 0; num1 < storeSensorReading.size(); ++num1)
              {
                storeSensorReading[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasMotionSensor)
          {
            handler->start_pair("MotionSensor");
            storeMotionSensor->write_as_json(handler);
          }
        if (flagHasMovementSensor)
          {
            handler->start_pair("MovementSensor");
            storeMovementSensor->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HomeAutomationActionResponseJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HomeAutomationActionResponseJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HomeAutomationActionResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseJSON>, HomeAutomationActionResponseJSON *, bool> generator("Type HomeAutomationActionResponse", ignore_extras);
            parse_json_value(text, "Text for HomeAutomationActionResponseJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HomeAutomationActionResponseJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HomeAutomationActionResponseJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HomeAutomationActionResponseJSON>, HomeAutomationActionResponseJSON *, bool> generator("Type HomeAutomationActionResponse", ignore_extras);
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
        JSONHoldingGenerator<TypeErrorJSON::Generator, RCHandle<TypeErrorJSON>, TypeErrorJSON *, bool > fieldGeneratorError;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAuto;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorSleep;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWake;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTurnOn;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorTurnOff;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSetBrightness;
        JSONHoldingGenerator<ColorJSON::Generator, RCHandle<ColorJSON>, ColorJSON *, bool > fieldGeneratorSetColor;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHeat;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCool;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorDry;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorWind;
        JSONHoldingGenerator<HomeAutomationTemperatureJSON::Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool > fieldGeneratorSetTemperature;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSetWindSpeed;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStartCleaning;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorStopCleaning;
        JSONHoldingGenerator<HomeAutomationTurboModeJSON::Generator, RCHandle<HomeAutomationTurboModeJSON>, HomeAutomationTurboModeJSON *, bool > fieldGeneratorTurboControl;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorReady;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPause;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCancel;
        JSONHoldingGenerator<HomeAutomationTemperatureJSON::Generator, RCHandle<HomeAutomationTemperatureJSON>, HomeAutomationTemperatureJSON *, bool > fieldGeneratorCurrentTemperature;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorLock;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorUnlock;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorOpen;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorClose;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAlarm;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTimeRemaining;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStage;
        JSONHoldingArrayGenerator<TypeSensorReadingJSON::Generator, RCHandle<TypeSensorReadingJSON>, TypeSensorReadingJSON *, bool > fieldGeneratorSensorReading;
        JSONHoldingGenerator<HomeAutomationMotionStatusJSON::Generator, RCHandle<HomeAutomationMotionStatusJSON>, HomeAutomationMotionStatusJSON *, bool > fieldGeneratorMotionSensor;
        JSONHoldingGenerator<HomeAutomationMovementStatusJSON::Generator, RCHandle<HomeAutomationMovementStatusJSON>, HomeAutomationMovementStatusJSON *, bool > fieldGeneratorMovementSensor;
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
            HomeAutomationActionResponseJSON *result = new HomeAutomationActionResponseJSON();
            assert(result != NULL);
            RCHandle<HomeAutomationActionResponseJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHomeAutomationActionResponseAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HomeAutomationActionResponseJSON *result)
          {
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value.referenced());
                fieldGeneratorError.have_value = false;
              }
            if (fieldGeneratorAuto.have_value)
              {
                result->setAuto(fieldGeneratorAuto.value);
                fieldGeneratorAuto.have_value = false;
              }
            if (fieldGeneratorSleep.have_value)
              {
                result->setSleep(fieldGeneratorSleep.value);
                fieldGeneratorSleep.have_value = false;
              }
            if (fieldGeneratorWake.have_value)
              {
                result->setWake(fieldGeneratorWake.value);
                fieldGeneratorWake.have_value = false;
              }
            if (fieldGeneratorTurnOn.have_value)
              {
                result->setTurnOn(fieldGeneratorTurnOn.value);
                fieldGeneratorTurnOn.have_value = false;
              }
            if (fieldGeneratorTurnOff.have_value)
              {
                result->setTurnOff(fieldGeneratorTurnOff.value);
                fieldGeneratorTurnOff.have_value = false;
              }
            if (fieldGeneratorSetBrightness.have_value)
              {
                result->setSetBrightnessText(fieldGeneratorSetBrightness.value);
                fieldGeneratorSetBrightness.have_value = false;
              }
            if (fieldGeneratorSetColor.have_value)
              {
                result->setSetColor(fieldGeneratorSetColor.value.referenced());
                fieldGeneratorSetColor.have_value = false;
              }
            if (fieldGeneratorHeat.have_value)
              {
                result->setHeat(fieldGeneratorHeat.value);
                fieldGeneratorHeat.have_value = false;
              }
            if (fieldGeneratorCool.have_value)
              {
                result->setCool(fieldGeneratorCool.value);
                fieldGeneratorCool.have_value = false;
              }
            if (fieldGeneratorDry.have_value)
              {
                result->setDry(fieldGeneratorDry.value);
                fieldGeneratorDry.have_value = false;
              }
            if (fieldGeneratorWind.have_value)
              {
                result->setWind(fieldGeneratorWind.value);
                fieldGeneratorWind.have_value = false;
              }
            if (fieldGeneratorSetTemperature.have_value)
              {
                result->setSetTemperature(fieldGeneratorSetTemperature.value.referenced());
                fieldGeneratorSetTemperature.have_value = false;
              }
            if (fieldGeneratorSetWindSpeed.have_value)
              {
                result->setSetWindSpeedText(fieldGeneratorSetWindSpeed.value);
                fieldGeneratorSetWindSpeed.have_value = false;
              }
            if (fieldGeneratorStartCleaning.have_value)
              {
                result->setStartCleaning(fieldGeneratorStartCleaning.value);
                fieldGeneratorStartCleaning.have_value = false;
              }
            if (fieldGeneratorStopCleaning.have_value)
              {
                result->setStopCleaning(fieldGeneratorStopCleaning.value);
                fieldGeneratorStopCleaning.have_value = false;
              }
            if (fieldGeneratorTurboControl.have_value)
              {
                result->setTurboControl(fieldGeneratorTurboControl.value.referenced());
                fieldGeneratorTurboControl.have_value = false;
              }
            if (fieldGeneratorReady.have_value)
              {
                result->setReady(fieldGeneratorReady.value);
                fieldGeneratorReady.have_value = false;
              }
            if (fieldGeneratorPause.have_value)
              {
                result->setPause(fieldGeneratorPause.value);
                fieldGeneratorPause.have_value = false;
              }
            if (fieldGeneratorCancel.have_value)
              {
                result->setCancel(fieldGeneratorCancel.value);
                fieldGeneratorCancel.have_value = false;
              }
            if (fieldGeneratorCurrentTemperature.have_value)
              {
                result->setCurrentTemperature(fieldGeneratorCurrentTemperature.value.referenced());
                fieldGeneratorCurrentTemperature.have_value = false;
              }
            if (fieldGeneratorLock.have_value)
              {
                result->setLock(fieldGeneratorLock.value);
                fieldGeneratorLock.have_value = false;
              }
            if (fieldGeneratorUnlock.have_value)
              {
                result->setUnlock(fieldGeneratorUnlock.value);
                fieldGeneratorUnlock.have_value = false;
              }
            if (fieldGeneratorOpen.have_value)
              {
                result->setOpen(fieldGeneratorOpen.value);
                fieldGeneratorOpen.have_value = false;
              }
            if (fieldGeneratorClose.have_value)
              {
                result->setClose(fieldGeneratorClose.value);
                fieldGeneratorClose.have_value = false;
              }
            if (fieldGeneratorAlarm.have_value)
              {
                result->setAlarm(fieldGeneratorAlarm.value);
                fieldGeneratorAlarm.have_value = false;
              }
            if (fieldGeneratorTimeRemaining.have_value)
              {
                result->setTimeRemainingText(fieldGeneratorTimeRemaining.value);
                fieldGeneratorTimeRemaining.have_value = false;
              }
            if (fieldGeneratorStage.have_value)
              {
                result->setStage(fieldGeneratorStage.value);
                fieldGeneratorStage.have_value = false;
              }
            if (fieldGeneratorSensorReading.have_value)
              {
                result->initSensorReading();
                size_t count = fieldGeneratorSensorReading.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendSensorReading(fieldGeneratorSensorReading.value[num].referenced());
                  }
                fieldGeneratorSensorReading.value.clear();
                fieldGeneratorSensorReading.have_value = false;
              }
            if (fieldGeneratorMotionSensor.have_value)
              {
                result->setMotionSensor(fieldGeneratorMotionSensor.value.referenced());
                fieldGeneratorMotionSensor.have_value = false;
              }
            if (fieldGeneratorMovementSensor.have_value)
              {
                result->setMovementSensor(fieldGeneratorMovementSensor.value.referenced());
                fieldGeneratorMovementSensor.have_value = false;
              }
          }
        virtual void handle_result(HomeAutomationActionResponseJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'l':
                            if (strcmp(&(field_name[2]), "arm") == 0)
                                return &fieldGeneratorAlarm;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "to") == 0)
                                return &fieldGeneratorAuto;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ncel") == 0)
                                return &fieldGeneratorCancel;
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "ose") == 0)
                                return &fieldGeneratorClose;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ol") == 0)
                                return &fieldGeneratorCool;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrentTemperature") == 0)
                                return &fieldGeneratorCurrentTemperature;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "ry") == 0)
                        return &fieldGeneratorDry;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "eat") == 0)
                        return &fieldGeneratorHeat;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "ock") == 0)
                        return &fieldGeneratorLock;
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 't':
                                if (strcmp(&(field_name[3]), "ionSensor") == 0)
                                    return &fieldGeneratorMotionSensor;
                                break;
                            case 'v':
                                if (strcmp(&(field_name[3]), "ementSensor") == 0)
                                    return &fieldGeneratorMovementSensor;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "pen") == 0)
                        return &fieldGeneratorOpen;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "ause") == 0)
                        return &fieldGeneratorPause;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eady") == 0)
                        return &fieldGeneratorReady;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'n':
                                    if (strcmp(&(field_name[3]), "sorReading") == 0)
                                        return &fieldGeneratorSensorReading;
                                    break;
                                case 't':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'B':
                                            if (strcmp(&(field_name[4]), "rightness") == 0)
                                                return &fieldGeneratorSetBrightness;
                                            break;
                                        case 'C':
                                            if (strcmp(&(field_name[4]), "olor") == 0)
                                                return &fieldGeneratorSetColor;
                                            break;
                                        case 'T':
                                            if (strcmp(&(field_name[4]), "emperature") == 0)
                                                return &fieldGeneratorSetTemperature;
                                            break;
                                        case 'W':
                                            if (strcmp(&(field_name[4]), "indSpeed") == 0)
                                                return &fieldGeneratorSetWindSpeed;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'l':
                            if (strcmp(&(field_name[2]), "eep") == 0)
                                return &fieldGeneratorSleep;
                            break;
                        case 't':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'a':
                                    switch ((unsigned char)(field_name[3]))
                                      {
                                        case 'g':
                                            if (strcmp(&(field_name[4]), "e") == 0)
                                                return &fieldGeneratorStage;
                                            break;
                                        case 'r':
                                            if (strcmp(&(field_name[4]), "tCleaning") == 0)
                                                return &fieldGeneratorStartCleaning;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'o':
                                    if (strcmp(&(field_name[3]), "pCleaning") == 0)
                                        return &fieldGeneratorStopCleaning;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "meRemaining") == 0)
                                return &fieldGeneratorTimeRemaining;
                            break;
                        case 'u':
                            if (strncmp(&(field_name[2]), "r", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'b':
                                        if (strcmp(&(field_name[4]), "oControl") == 0)
                                            return &fieldGeneratorTurboControl;
                                        break;
                                    case 'n':
                                        if (strncmp(&(field_name[4]), "O", 1) == 0)
                                          {
                                            switch ((unsigned char)(field_name[5]))
                                              {
                                                case 'f':
                                                    if (strcmp(&(field_name[6]), "f") == 0)
                                                        return &fieldGeneratorTurnOff;
                                                    break;
                                                case 'n':
                                                    if (field_name[6] == 0)
                                                        return &fieldGeneratorTurnOn;
                                                    break;
                                                default:
                                                    break;
                                              }
                                          }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nlock") == 0)
                        return &fieldGeneratorUnlock;
                    break;
                case 'W':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ke") == 0)
                                return &fieldGeneratorWake;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nd") == 0)
                                return &fieldGeneratorWind;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorError("field \"Error\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorAuto("field \"Auto\" of the HomeAutomationActionResponse class"), fieldGeneratorSleep("field \"Sleep\" of the HomeAutomationActionResponse class"), fieldGeneratorWake("field \"Wake\" of the HomeAutomationActionResponse class"), fieldGeneratorTurnOn("field \"TurnOn\" of the HomeAutomationActionResponse class"), fieldGeneratorTurnOff("field \"TurnOff\" of the HomeAutomationActionResponse class"), fieldGeneratorSetBrightness("field \"SetBrightness\" of the HomeAutomationActionResponse class"), fieldGeneratorSetColor("field \"SetColor\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorHeat("field \"Heat\" of the HomeAutomationActionResponse class"), fieldGeneratorCool("field \"Cool\" of the HomeAutomationActionResponse class"), fieldGeneratorDry("field \"Dry\" of the HomeAutomationActionResponse class"), fieldGeneratorWind("field \"Wind\" of the HomeAutomationActionResponse class"), fieldGeneratorSetTemperature("field \"SetTemperature\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorSetWindSpeed("field \"SetWindSpeed\" of the HomeAutomationActionResponse class"), fieldGeneratorStartCleaning("field \"StartCleaning\" of the HomeAutomationActionResponse class"), fieldGeneratorStopCleaning("field \"StopCleaning\" of the HomeAutomationActionResponse class"), fieldGeneratorTurboControl("field \"TurboControl\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorReady("field \"Ready\" of the HomeAutomationActionResponse class"), fieldGeneratorPause("field \"Pause\" of the HomeAutomationActionResponse class"), fieldGeneratorCancel("field \"Cancel\" of the HomeAutomationActionResponse class"), fieldGeneratorCurrentTemperature("field \"CurrentTemperature\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorLock("field \"Lock\" of the HomeAutomationActionResponse class"), fieldGeneratorUnlock("field \"Unlock\" of the HomeAutomationActionResponse class"), fieldGeneratorOpen("field \"Open\" of the HomeAutomationActionResponse class"), fieldGeneratorClose("field \"Close\" of the HomeAutomationActionResponse class"), fieldGeneratorAlarm("field \"Alarm\" of the HomeAutomationActionResponse class"), fieldGeneratorTimeRemaining("field \"TimeRemaining\" of the HomeAutomationActionResponse class"), fieldGeneratorStage("field \"Stage\" of the HomeAutomationActionResponse class"), fieldGeneratorSensorReading("field \"SensorReading\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorMotionSensor("field \"MotionSensor\" of the HomeAutomationActionResponse class", ignore_extras), fieldGeneratorMovementSensor("field \"MovementSensor\" of the HomeAutomationActionResponse class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HomeAutomationActionResponse class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorError.reset();
            fieldGeneratorAuto.reset();
            fieldGeneratorSleep.reset();
            fieldGeneratorWake.reset();
            fieldGeneratorTurnOn.reset();
            fieldGeneratorTurnOff.reset();
            fieldGeneratorSetBrightness.reset();
            fieldGeneratorSetColor.reset();
            fieldGeneratorHeat.reset();
            fieldGeneratorCool.reset();
            fieldGeneratorDry.reset();
            fieldGeneratorWind.reset();
            fieldGeneratorSetTemperature.reset();
            fieldGeneratorSetWindSpeed.reset();
            fieldGeneratorStartCleaning.reset();
            fieldGeneratorStopCleaning.reset();
            fieldGeneratorTurboControl.reset();
            fieldGeneratorReady.reset();
            fieldGeneratorPause.reset();
            fieldGeneratorCancel.reset();
            fieldGeneratorCurrentTemperature.reset();
            fieldGeneratorLock.reset();
            fieldGeneratorUnlock.reset();
            fieldGeneratorOpen.reset();
            fieldGeneratorClose.reset();
            fieldGeneratorAlarm.reset();
            fieldGeneratorTimeRemaining.reset();
            fieldGeneratorStage.reset();
            fieldGeneratorSensorReading.reset();
            fieldGeneratorMotionSensor.reset();
            fieldGeneratorMovementSensor.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOMEAUTOMATIONACTIONRESPONSEJSON_H */
