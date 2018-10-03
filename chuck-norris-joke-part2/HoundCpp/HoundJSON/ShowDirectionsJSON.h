/* file "ShowDirectionsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWDIRECTIONSJSON_H
#define SHOWDIRECTIONSJSON_H

#pragma interface

#include "MapCommandJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "OInteger.h"
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ShowDirectionsJSON : public MapCommandJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      public:
        enum TypeNavigationMethod
          {
            NavigationMethod_Walk,
            NavigationMethod_Transit,
            NavigationMethod_Bike,
            NavigationMethod_Drive
          };

        static TypeNavigationMethod  stringToNavigationMethod(const char *chars);
        static const char * stringFromNavigationMethod(TypeNavigationMethod the_enum);
        enum TypeCorrectionState
          {
            CorrectionState_None,
            CorrectionState_TryNewLocation,
            CorrectionState_Fail
          };

        static TypeCorrectionState  stringToCorrectionState(const char *chars);
        static const char * stringFromCorrectionState(TypeCorrectionState the_enum);

      private:
        bool flagHasStartMapLocationSpec;
        MapLocationJSON * storeStartMapLocationSpec;
        bool flagHasDestinationMapLocationSpec;
        MapLocationJSON * storeDestinationMapLocationSpec;
        bool flagHasImplicitStart;
        bool storeImplicitStart;
        bool flagHasNavigationMethod;
        TypeNavigationMethod storeNavigationMethod;
        bool flagHasNavigate;
        bool storeNavigate;
        bool flagHasAsksForDistance;
        bool storeAsksForDistance;
        bool flagHasAsksForTravelTime;
        bool storeAsksForTravelTime;
        bool flagHasDistance;
        double storeDistance;
        std::string textStoreDistance;
        bool flagHasUnitOfMeasureID;
        std::string storeUnitOfMeasureID;
        bool flagHasUnitOfLengthSingular;
        std::string storeUnitOfLengthSingular;
        bool flagHasUnitOfLengthPlural;
        std::string storeUnitOfLengthPlural;
        bool flagHasTravelTime;
        double storeTravelTime;
        std::string textStoreTravelTime;
        bool flagHasCorrectionState;
        TypeCorrectionState storeCorrectionState;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONNavigate(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDistance(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnitOfLengthSingular(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONUnitOfLengthPlural(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONTravelTime(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasStartMapLocationSpec(void) const;
        MapLocationJSON *  getStartMapLocationSpec(void);
        const MapLocationJSON *  getStartMapLocationSpec(void) const;
        bool  hasDestinationMapLocationSpec(void) const;
        MapLocationJSON *  getDestinationMapLocationSpec(void);
        const MapLocationJSON *  getDestinationMapLocationSpec(void) const;
        bool  hasImplicitStart(void) const;
        bool  getImplicitStart(void);
        const bool  getImplicitStart(void) const;
        bool  hasNavigationMethod(void) const;
        TypeNavigationMethod  getNavigationMethod(void);
        const TypeNavigationMethod  getNavigationMethod(void) const;
        const char * getNavigationMethodAsChars(void) const;
        std::string  getNavigationMethodAsString(void) const;
        bool  hasNavigate(void) const;
        bool  getNavigate(void);
        const bool  getNavigate(void) const;
        bool  hasAsksForDistance(void) const;
        bool  getAsksForDistance(void);
        const bool  getAsksForDistance(void) const;
        bool  hasAsksForTravelTime(void) const;
        bool  getAsksForTravelTime(void);
        const bool  getAsksForTravelTime(void) const;
        bool  hasDistance(void) const;
        double  getDistance(void);
        const double  getDistance(void) const;
        std::string  getDistanceAsText(void) const;
        bool  hasUnitOfMeasureID(void) const;
        std::string  getUnitOfMeasureID(void);
        const std::string  getUnitOfMeasureID(void) const;
        bool  hasUnitOfLengthSingular(void) const;
        std::string  getUnitOfLengthSingular(void);
        const std::string  getUnitOfLengthSingular(void) const;
        bool  hasUnitOfLengthPlural(void) const;
        std::string  getUnitOfLengthPlural(void);
        const std::string  getUnitOfLengthPlural(void) const;
        bool  hasTravelTime(void) const;
        double  getTravelTime(void);
        const double  getTravelTime(void) const;
        std::string  getTravelTimeAsText(void) const;
        bool  hasCorrectionState(void) const;
        TypeCorrectionState  getCorrectionState(void);
        const TypeCorrectionState  getCorrectionState(void) const;
        const char * getCorrectionStateAsChars(void) const;
        std::string  getCorrectionStateAsString(void) const;


        void setStartMapLocationSpec(MapLocationJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasStartMapLocationSpec)
              {
                storeStartMapLocationSpec->remove_reference();
              }
            flagHasStartMapLocationSpec = true;
            storeStartMapLocationSpec = new_value;
          }
        void unsetStartMapLocationSpec(void)
          {
            if (flagHasStartMapLocationSpec)
              {
                storeStartMapLocationSpec->remove_reference();
              }
            flagHasStartMapLocationSpec = false;
          }
        void setDestinationMapLocationSpec(MapLocationJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasDestinationMapLocationSpec)
              {
                storeDestinationMapLocationSpec->remove_reference();
              }
            flagHasDestinationMapLocationSpec = true;
            storeDestinationMapLocationSpec = new_value;
          }
        void unsetDestinationMapLocationSpec(void)
          {
            if (flagHasDestinationMapLocationSpec)
              {
                storeDestinationMapLocationSpec->remove_reference();
              }
            flagHasDestinationMapLocationSpec = false;
          }
        void setImplicitStart(bool new_value)
          {
            flagHasImplicitStart = true;
            storeImplicitStart = new_value;
          }
        void unsetImplicitStart(void)
          {
            flagHasImplicitStart = false;
          }
        void setNavigationMethod(TypeNavigationMethod new_value)
          {
            flagHasNavigationMethod = true;
            storeNavigationMethod = new_value;
          }
        void setNavigationMethod(const char *chars)
          {
            setNavigationMethod(stringToNavigationMethod(chars));
          }
        void setNavigationMethod(std::string the_string)
          {
            setNavigationMethod(stringToNavigationMethod(the_string.c_str()));
          }
        void unsetNavigationMethod(void)
          {
            flagHasNavigationMethod = false;
          }
        void setNavigate(bool new_value)
          {
            flagHasNavigate = true;
            storeNavigate = new_value;
          }
        void unsetNavigate(void)
          {
            flagHasNavigate = false;
          }
        void setAsksForDistance(bool new_value)
          {
            flagHasAsksForDistance = true;
            storeAsksForDistance = new_value;
          }
        void unsetAsksForDistance(void)
          {
            flagHasAsksForDistance = false;
          }
        void setAsksForTravelTime(bool new_value)
          {
            flagHasAsksForTravelTime = true;
            storeAsksForTravelTime = new_value;
          }
        void unsetAsksForTravelTime(void)
          {
            flagHasAsksForTravelTime = false;
          }
        void setDistance(double new_value)
          {
            flagHasDistance = true;
            if (new_value < -1)
                throw("The value for field Distance of TypeNativeDataJSON is less than the lower bound (-1) for that field.");
            storeDistance = new_value;
            textStoreDistance = "";
          }
        void setDistanceText(std::string new_value)
          {
            flagHasDistance = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Distance of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
                throw("The value for field Distance of TypeNativeDataJSON is less than the lower bound (-1) for that field.");
            textStoreDistance = new_value;
          }
        void unsetDistance(void)
          {
            flagHasDistance = false;
          }
        void setUnitOfMeasureID(std::string new_value)
          {
            flagHasUnitOfMeasureID = true;
            storeUnitOfMeasureID = new_value;
          }
        void unsetUnitOfMeasureID(void)
          {
            flagHasUnitOfMeasureID = false;
          }
        void setUnitOfLengthSingular(std::string new_value)
          {
            flagHasUnitOfLengthSingular = true;
            storeUnitOfLengthSingular = new_value;
          }
        void unsetUnitOfLengthSingular(void)
          {
            flagHasUnitOfLengthSingular = false;
          }
        void setUnitOfLengthPlural(std::string new_value)
          {
            flagHasUnitOfLengthPlural = true;
            storeUnitOfLengthPlural = new_value;
          }
        void unsetUnitOfLengthPlural(void)
          {
            flagHasUnitOfLengthPlural = false;
          }
        void setTravelTime(double new_value)
          {
            flagHasTravelTime = true;
            if (new_value < -1)
                throw("The value for field TravelTime of TypeNativeDataJSON is less than the lower bound (-1) for that field.");
            storeTravelTime = new_value;
            textStoreTravelTime = "";
          }
        void setTravelTimeText(std::string new_value)
          {
            flagHasTravelTime = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field TravelTime of TypeNativeDataJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "1", "", false, "1") < 0)
                throw("The value for field TravelTime of TypeNativeDataJSON is less than the lower bound (-1) for that field.");
            textStoreTravelTime = new_value;
          }
        void unsetTravelTime(void)
          {
            flagHasTravelTime = false;
          }
        void setCorrectionState(TypeCorrectionState new_value)
          {
            flagHasCorrectionState = true;
            storeCorrectionState = new_value;
          }
        void setCorrectionState(const char *chars)
          {
            setCorrectionState(stringToCorrectionState(chars));
          }
        void setCorrectionState(std::string the_string)
          {
            setCorrectionState(stringToCorrectionState(the_string.c_str()));
          }
        void unsetCorrectionState(void)
          {
            flagHasCorrectionState = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasStartMapLocationSpec)
              {
                handler->start_pair("StartMapLocationSpec");
                storeStartMapLocationSpec->write_as_json(handler);
              }
            assert(flagHasDestinationMapLocationSpec);
            handler->start_pair("DestinationMapLocationSpec");
            storeDestinationMapLocationSpec->write_as_json(handler);
            if (flagHasImplicitStart)
              {
                handler->start_pair("ImplicitStart");
                handler->boolean_value(storeImplicitStart);
              }
            assert(flagHasNavigationMethod);
            handler->start_pair("NavigationMethod");
            switch (storeNavigationMethod)
              {
                case NavigationMethod_Walk:
                    handler->string_value("Walk");
                    break;
                case NavigationMethod_Transit:
                    handler->string_value("Transit");
                    break;
                case NavigationMethod_Bike:
                    handler->string_value("Bike");
                    break;
                case NavigationMethod_Drive:
                    handler->string_value("Drive");
                    break;
                default:
                    assert(false);
              }
            assert(flagHasNavigate);
            handler->start_pair("Navigate");
            handler->boolean_value(storeNavigate);
            assert(flagHasAsksForDistance);
            handler->start_pair("AsksForDistance");
            handler->boolean_value(storeAsksForDistance);
            assert(flagHasAsksForTravelTime);
            handler->start_pair("AsksForTravelTime");
            handler->boolean_value(storeAsksForTravelTime);
            assert(flagHasDistance);
            handler->start_pair("Distance");
            if (textStoreDistance != "")
                handler->number_value(textStoreDistance.c_str());
            else if (((double)(long int)storeDistance) == storeDistance)
                handler->number_value((long int)storeDistance);
            else
                handler->number_value(storeDistance);
            if (flagHasUnitOfMeasureID)
              {
                handler->start_pair("UnitOfMeasureID");
                handler->string_value(storeUnitOfMeasureID);
              }
            if (flagHasUnitOfLengthSingular)
              {
                handler->start_pair("UnitOfLengthSingular");
                handler->string_value(storeUnitOfLengthSingular);
              }
            if (flagHasUnitOfLengthPlural)
              {
                handler->start_pair("UnitOfLengthPlural");
                handler->string_value(storeUnitOfLengthPlural);
              }
            assert(flagHasTravelTime);
            handler->start_pair("TravelTime");
            if (textStoreTravelTime != "")
                handler->number_value(textStoreTravelTime.c_str());
            else if (((double)(long int)storeTravelTime) == storeTravelTime)
                handler->number_value((long int)storeTravelTime);
            else
                handler->number_value(storeTravelTime);
            if (flagHasCorrectionState)
              {
                handler->start_pair("CorrectionState");
                switch (storeCorrectionState)
                  {
                    case CorrectionState_None:
                        handler->string_value("None");
                        break;
                    case CorrectionState_TryNewLocation:
                        handler->string_value("TryNewLocation");
                        break;
                    case CorrectionState_Fail:
                        handler->string_value("Fail");
                        break;
                    default:
                        assert(false);
                  }
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasDestinationMapLocationSpec()))
              {
                return "When parsing the object for %what%, the \"DestinationMapLocationSpec\" field was missing.";
              }
            if (!(hasNavigationMethod()))
              {
                return "When parsing the object for %what%, the \"NavigationMethod\" field was missing.";
              }
            if (!(hasNavigate()))
              {
                return "When parsing the object for %what%, the \"Navigate\" field was missing.";
              }
            if (!(hasAsksForDistance()))
              {
                return "When parsing the object for %what%, the \"AsksForDistance\" field was missing.";
              }
            if (!(hasAsksForTravelTime()))
              {
                return "When parsing the object for %what%, the \"AsksForTravelTime\" field was missing.";
              }
            if (!(hasDistance()))
              {
                return "When parsing the object for %what%, the \"Distance\" field was missing.";
              }
            if (!(hasTravelTime()))
              {
                return "When parsing the object for %what%, the \"TravelTime\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorStartMapLocationSpec;
            JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDestinationMapLocationSpec;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorImplicitStart;
        class FieldGeneratorNavigationMethod : public JSONStringGenerator
              {
              protected:
                FieldGeneratorNavigationMethod(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorNavigationMethod(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToNavigationMethod(result));
                  }
                virtual void handle_result(TypeNavigationMethod result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorNavigationMethod, TypeNavigationMethod, TypeNavigationMethod > fieldGeneratorNavigationMethod;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorNavigate;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAsksForDistance;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorAsksForTravelTime;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDistance;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfMeasureID;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfLengthSingular;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfLengthPlural;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorTravelTime;
        class FieldGeneratorCorrectionState : public JSONStringGenerator
              {
              protected:
                FieldGeneratorCorrectionState(const char *what)
                  {
                    set_what(what);
                  }
                FieldGeneratorCorrectionState(void)
                  {
                  }
                void handle_result(const char *result)
                  {
                    handle_result(stringToCorrectionState(result));
                  }
                virtual void handle_result(TypeCorrectionState result) = 0;
              };
            JSONHoldingGenerator<FieldGeneratorCorrectionState, TypeCorrectionState, TypeCorrectionState > fieldGeneratorCorrectionState;


          protected:
            void start(void)
              {
              }
            JSONHandler *start_field(const char *field_name)
              {
                JSONHandler *result = start_known_field(field_name);
                if (result != NULL)
                    return result;
                std::string message("");
                message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
                char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
                strcpy(message_chars, message.c_str());
                throw(message_chars);
              }
            void finish_field(const char *field_name, JSONHandler *field_handler)
              {
              }
            void finish(void)
              {
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorStartMapLocationSpec.have_value)
                  {
                    result->setStartMapLocationSpec(fieldGeneratorStartMapLocationSpec.value.referenced());
                    fieldGeneratorStartMapLocationSpec.have_value = false;
                  }
                if (fieldGeneratorDestinationMapLocationSpec.have_value)
                  {
                    result->setDestinationMapLocationSpec(fieldGeneratorDestinationMapLocationSpec.value.referenced());
                    fieldGeneratorDestinationMapLocationSpec.have_value = false;
                  }
                else if (!(result->hasDestinationMapLocationSpec()))
                  {
                    error("When parsing the object for %what%, the \"DestinationMapLocationSpec\" field was missing.");
                  }
                if (fieldGeneratorImplicitStart.have_value)
                  {
                    result->setImplicitStart(fieldGeneratorImplicitStart.value);
                    fieldGeneratorImplicitStart.have_value = false;
                  }
                if (fieldGeneratorNavigationMethod.have_value)
                  {
                    result->setNavigationMethod(fieldGeneratorNavigationMethod.value);
                    fieldGeneratorNavigationMethod.have_value = false;
                  }
                else if (!(result->hasNavigationMethod()))
                  {
                    error("When parsing the object for %what%, the \"NavigationMethod\" field was missing.");
                  }
                if (fieldGeneratorNavigate.have_value)
                  {
                    result->setNavigate(fieldGeneratorNavigate.value);
                    fieldGeneratorNavigate.have_value = false;
                  }
                else if (!(result->hasNavigate()))
                  {
                    error("When parsing the object for %what%, the \"Navigate\" field was missing.");
                  }
                if (fieldGeneratorAsksForDistance.have_value)
                  {
                    result->setAsksForDistance(fieldGeneratorAsksForDistance.value);
                    fieldGeneratorAsksForDistance.have_value = false;
                  }
                else if (!(result->hasAsksForDistance()))
                  {
                    error("When parsing the object for %what%, the \"AsksForDistance\" field was missing.");
                  }
                if (fieldGeneratorAsksForTravelTime.have_value)
                  {
                    result->setAsksForTravelTime(fieldGeneratorAsksForTravelTime.value);
                    fieldGeneratorAsksForTravelTime.have_value = false;
                  }
                else if (!(result->hasAsksForTravelTime()))
                  {
                    error("When parsing the object for %what%, the \"AsksForTravelTime\" field was missing.");
                  }
                if (fieldGeneratorDistance.have_value)
                  {
                    result->setDistanceText(fieldGeneratorDistance.value);
                    fieldGeneratorDistance.have_value = false;
                  }
                else if (!(result->hasDistance()))
                  {
                    error("When parsing the object for %what%, the \"Distance\" field was missing.");
                  }
                if (fieldGeneratorUnitOfMeasureID.have_value)
                  {
                    result->setUnitOfMeasureID(fieldGeneratorUnitOfMeasureID.value);
                    fieldGeneratorUnitOfMeasureID.have_value = false;
                  }
                if (fieldGeneratorUnitOfLengthSingular.have_value)
                  {
                    result->setUnitOfLengthSingular(fieldGeneratorUnitOfLengthSingular.value);
                    fieldGeneratorUnitOfLengthSingular.have_value = false;
                  }
                if (fieldGeneratorUnitOfLengthPlural.have_value)
                  {
                    result->setUnitOfLengthPlural(fieldGeneratorUnitOfLengthPlural.value);
                    fieldGeneratorUnitOfLengthPlural.have_value = false;
                  }
                if (fieldGeneratorTravelTime.have_value)
                  {
                    result->setTravelTimeText(fieldGeneratorTravelTime.value);
                    fieldGeneratorTravelTime.have_value = false;
                  }
                else if (!(result->hasTravelTime()))
                  {
                    error("When parsing the object for %what%, the \"TravelTime\" field was missing.");
                  }
                if (fieldGeneratorCorrectionState.have_value)
                  {
                    result->setCorrectionState(fieldGeneratorCorrectionState.value);
                    fieldGeneratorCorrectionState.have_value = false;
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strncmp(&(field_name[1]), "sksFor", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'D':
                                    if (strcmp(&(field_name[8]), "istance") == 0)
                                        return &fieldGeneratorAsksForDistance;
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[8]), "ravelTime") == 0)
                                        return &fieldGeneratorAsksForTravelTime;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'C':
                        if (strcmp(&(field_name[1]), "orrectionState") == 0)
                            return &fieldGeneratorCorrectionState;
                        break;
                    case 'D':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[2]), "stinationMapLocationSpec") == 0)
                                    return &fieldGeneratorDestinationMapLocationSpec;
                                break;
                            case 'i':
                                if (strcmp(&(field_name[2]), "stance") == 0)
                                    return &fieldGeneratorDistance;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'I':
                        if (strcmp(&(field_name[1]), "mplicitStart") == 0)
                            return &fieldGeneratorImplicitStart;
                        break;
                    case 'N':
                        if (strncmp(&(field_name[1]), "avigat", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[7]))
                              {
                                case 'e':
                                    if (field_name[8] == 0)
                                        return &fieldGeneratorNavigate;
                                    break;
                                case 'i':
                                    if (strcmp(&(field_name[8]), "onMethod") == 0)
                                        return &fieldGeneratorNavigationMethod;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "tartMapLocationSpec") == 0)
                            return &fieldGeneratorStartMapLocationSpec;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "ravelTime") == 0)
                            return &fieldGeneratorTravelTime;
                        break;
                    case 'U':
                        if (strncmp(&(field_name[1]), "nitOf", 5) == 0)
                          {
                            switch ((unsigned char)(field_name[6]))
                              {
                                case 'L':
                                    if (strncmp(&(field_name[7]), "ength", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[12]))
                                          {
                                            case 'P':
                                                if (strcmp(&(field_name[13]), "lural") == 0)
                                                    return &fieldGeneratorUnitOfLengthPlural;
                                                break;
                                            case 'S':
                                                if (strcmp(&(field_name[13]), "ingular") == 0)
                                                    return &fieldGeneratorUnitOfLengthSingular;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'M':
                                    if (strcmp(&(field_name[7]), "easureID") == 0)
                                        return &fieldGeneratorUnitOfMeasureID;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorStartMapLocationSpec("field \"StartMapLocationSpec\" of the TypeNativeData class", ignore_extras), fieldGeneratorDestinationMapLocationSpec("field \"DestinationMapLocationSpec\" of the TypeNativeData class", ignore_extras), fieldGeneratorImplicitStart("field \"ImplicitStart\" of the TypeNativeData class"), fieldGeneratorNavigationMethod("field \"NavigationMethod\" of the TypeNativeData class"), fieldGeneratorNavigate("field \"Navigate\" of the TypeNativeData class"), fieldGeneratorAsksForDistance("field \"AsksForDistance\" of the TypeNativeData class"), fieldGeneratorAsksForTravelTime("field \"AsksForTravelTime\" of the TypeNativeData class"), fieldGeneratorDistance("field \"Distance\" of the TypeNativeData class"), fieldGeneratorUnitOfMeasureID("field \"UnitOfMeasureID\" of the TypeNativeData class"), fieldGeneratorUnitOfLengthSingular("field \"UnitOfLengthSingular\" of the TypeNativeData class"), fieldGeneratorUnitOfLengthPlural("field \"UnitOfLengthPlural\" of the TypeNativeData class"), fieldGeneratorTravelTime("field \"TravelTime\" of the TypeNativeData class"), fieldGeneratorCorrectionState("field \"CorrectionState\" of the TypeNativeData class")
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorStartMapLocationSpec.reset();
                fieldGeneratorDestinationMapLocationSpec.reset();
                fieldGeneratorImplicitStart.reset();
                fieldGeneratorNavigationMethod.reset();
                fieldGeneratorNavigate.reset();
                fieldGeneratorAsksForDistance.reset();
                fieldGeneratorAsksForTravelTime.reset();
                fieldGeneratorDistance.reset();
                fieldGeneratorUnitOfMeasureID.reset();
                fieldGeneratorUnitOfLengthSingular.reset();
                fieldGeneratorUnitOfLengthPlural.reset();
                fieldGeneratorTravelTime.reset();
                fieldGeneratorCorrectionState.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;
    bool flagHasIntermediateDestinationRequested;
    bool storeIntermediateDestinationRequested;
    bool flagHasIntermediateDestinationPositionFromStart;
    OInteger storeIntermediateDestinationPositionFromStart;
    bool flagHasIntermediateDestinationPositionFromEnd;
    OInteger storeIntermediateDestinationPositionFromEnd;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowDirectionsJSON(const ShowDirectionsJSON &);
    ShowDirectionsJSON & operator=(const ShowDirectionsJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;
    JSONValue * extraIntermediateDestinationRequestedToJSON(void) const;
    JSONValue * extraIntermediateDestinationPositionFromStartToJSON(void) const;
    JSONValue * extraIntermediateDestinationPositionFromEndToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntermediateDestinationRequested(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntermediateDestinationPositionFromStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIntermediateDestinationPositionFromEnd(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowDirectionsJSON(void);
    virtual ~ShowDirectionsJSON(void);
    const char * getMapCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;
    bool  hasIntermediateDestinationRequested(void) const;
    bool  getIntermediateDestinationRequested(void);
    const bool  getIntermediateDestinationRequested(void) const;
    bool  hasIntermediateDestinationPositionFromStart(void) const;
    OInteger  getIntermediateDestinationPositionFromStart(void);
    const OInteger  getIntermediateDestinationPositionFromStart(void) const;
    bool  hasIntermediateDestinationPositionFromEnd(void) const;
    OInteger  getIntermediateDestinationPositionFromEnd(void);
    const OInteger  getIntermediateDestinationPositionFromEnd(void) const;

    virtual size_t extraShowDirectionsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowDirectionsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowDirectionsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowDirectionsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowDirectionsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowDirectionsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraMapCommandComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        if (flagHasIntermediateDestinationRequested)
            ++result;
        if (flagHasIntermediateDestinationPositionFromStart)
            ++result;
        if (flagHasIntermediateDestinationPositionFromEnd)
            ++result;
        result += extraShowDirectionsComponentCount();
        return result;
      }
    const char *extraMapCommandComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        if (flagHasIntermediateDestinationRequested)
          {
            if (remainder == 0)
                return "IntermediateDestinationRequested";
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromStart)
          {
            if (remainder == 0)
                return "IntermediateDestinationPositionFromStart";
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromEnd)
          {
            if (remainder == 0)
                return "IntermediateDestinationPositionFromEnd";
            --remainder;
          }
        return extraShowDirectionsComponentKey(remainder);
      }
    JSONValue *extraMapCommandComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationRequested)
          {
            if (remainder == 0)
                return extraIntermediateDestinationRequestedToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromStart)
          {
            if (remainder == 0)
                return extraIntermediateDestinationPositionFromStartToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromEnd)
          {
            if (remainder == 0)
                return extraIntermediateDestinationPositionFromEndToJSON();
            --remainder;
          }
        return extraShowDirectionsComponentValue(remainder);
      }
    const JSONValue *extraMapCommandComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationRequested)
          {
            if (remainder == 0)
                return extraIntermediateDestinationRequestedToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromStart)
          {
            if (remainder == 0)
                return extraIntermediateDestinationPositionFromStartToJSON();
            --remainder;
          }
        if (flagHasIntermediateDestinationPositionFromEnd)
          {
            if (remainder == 0)
                return extraIntermediateDestinationPositionFromEndToJSON();
            --remainder;
          }
        return extraShowDirectionsComponentValue(remainder);
      }
    JSONValue *extraMapCommandLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strncmp(&(field_name[1]), "ntermediateDestination", 22) == 0)
                  {
                    switch ((unsigned char)(field_name[23]))
                      {
                        case 'P':
                            if (strncmp(&(field_name[24]), "ositionFrom", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[35]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[36]), "nd") == 0)
                                            return (flagHasIntermediateDestinationPositionFromEnd ? extraIntermediateDestinationPositionFromEndToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[36]), "tart") == 0)
                                            return (flagHasIntermediateDestinationPositionFromStart ? extraIntermediateDestinationPositionFromStartToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(field_name[24]), "equested") == 0)
                                return (flagHasIntermediateDestinationRequested ? extraIntermediateDestinationRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowDirectionsLookup(field_name);
      }
    const JSONValue *extraMapCommandLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'I':
                if (strncmp(&(field_name[1]), "ntermediateDestination", 22) == 0)
                  {
                    switch ((unsigned char)(field_name[23]))
                      {
                        case 'P':
                            if (strncmp(&(field_name[24]), "ositionFrom", 11) == 0)
                              {
                                switch ((unsigned char)(field_name[35]))
                                  {
                                    case 'E':
                                        if (strcmp(&(field_name[36]), "nd") == 0)
                                            return (flagHasIntermediateDestinationPositionFromEnd ? extraIntermediateDestinationPositionFromEndToJSON() : NULL);
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[36]), "tart") == 0)
                                            return (flagHasIntermediateDestinationPositionFromStart ? extraIntermediateDestinationPositionFromStartToJSON() : NULL);
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(field_name[24]), "equested") == 0)
                                return (flagHasIntermediateDestinationRequested ? extraIntermediateDestinationRequestedToJSON() : NULL);
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(field_name[1]), "ativeData") == 0)
                    return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraShowDirectionsLookup(field_name);
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }
    void setIntermediateDestinationRequested(bool new_value)
      {
        flagHasIntermediateDestinationRequested = true;
        storeIntermediateDestinationRequested = new_value;
      }
    void unsetIntermediateDestinationRequested(void)
      {
        flagHasIntermediateDestinationRequested = false;
      }
    void setIntermediateDestinationPositionFromStart(OInteger new_value)
      {
        flagHasIntermediateDestinationPositionFromStart = true;
        if (new_value < 0)
            throw("The value for field IntermediateDestinationPositionFromStart of ShowDirectionsJSON is less than the lower bound (0) for that field.");
        storeIntermediateDestinationPositionFromStart = new_value;
      }
    void unsetIntermediateDestinationPositionFromStart(void)
      {
        flagHasIntermediateDestinationPositionFromStart = false;
      }
    void setIntermediateDestinationPositionFromEnd(OInteger new_value)
      {
        flagHasIntermediateDestinationPositionFromEnd = true;
        if (new_value < 0)
            throw("The value for field IntermediateDestinationPositionFromEnd of ShowDirectionsJSON is less than the lower bound (0) for that field.");
        storeIntermediateDestinationPositionFromEnd = new_value;
      }
    void unsetIntermediateDestinationPositionFromEnd(void)
      {
        flagHasIntermediateDestinationPositionFromEnd = false;
      }

    virtual void extraShowDirectionsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowDirectionsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowDirectionsLookup(key);
        if (old_field == NULL)
          {
            extraShowDirectionsAppendPair(key, new_component);
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
    void extraMapCommandAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strncmp(&(key[1]), "ntermediateDestination", 22) == 0)
                  {
                    switch ((unsigned char)(key[23]))
                      {
                        case 'P':
                            if (strncmp(&(key[24]), "ositionFrom", 11) == 0)
                              {
                                switch ((unsigned char)(key[35]))
                                  {
                                    case 'E':
                                        if (strcmp(&(key[36]), "nd") == 0)
                                            {
                                            fromJSONIntermediateDestinationPositionFromEnd(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[36]), "tart") == 0)
                                            {
                                            fromJSONIntermediateDestinationPositionFromStart(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(key[24]), "equested") == 0)
                                {
                                fromJSONIntermediateDestinationRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowDirectionsAppendPair(key, new_component);
      }
    void extraMapCommandSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'I':
                if (strncmp(&(key[1]), "ntermediateDestination", 22) == 0)
                  {
                    switch ((unsigned char)(key[23]))
                      {
                        case 'P':
                            if (strncmp(&(key[24]), "ositionFrom", 11) == 0)
                              {
                                switch ((unsigned char)(key[35]))
                                  {
                                    case 'E':
                                        if (strcmp(&(key[36]), "nd") == 0)
                                            {
                                            fromJSONIntermediateDestinationPositionFromEnd(new_component, false);
                                            return;
                                            }
                                        break;
                                    case 'S':
                                        if (strcmp(&(key[36]), "tart") == 0)
                                            {
                                            fromJSONIntermediateDestinationPositionFromStart(new_component, false);
                                            return;
                                            }
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'R':
                            if (strcmp(&(key[24]), "equested") == 0)
                                {
                                fromJSONIntermediateDestinationRequested(new_component, false);
                                return;
                                }
                            break;
                        default:
                            break;
                      }
                  }
                break;
            case 'N':
                if (strcmp(&(key[1]), "ativeData") == 0)
                    {
                    fromJSONNativeData(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraShowDirectionsSetField(key, new_component);
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
        MapCommandJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
        if (flagHasIntermediateDestinationRequested)
          {
            handler->start_pair("IntermediateDestinationRequested");
            handler->boolean_value(storeIntermediateDestinationRequested);
          }
        if (flagHasIntermediateDestinationPositionFromStart)
          {
            handler->start_pair("IntermediateDestinationPositionFromStart");
            handler->number_value(storeIntermediateDestinationPositionFromStart.get_o_integer());
          }
        if (flagHasIntermediateDestinationPositionFromEnd)
          {
            handler->start_pair("IntermediateDestinationPositionFromEnd");
            handler->number_value(storeIntermediateDestinationPositionFromEnd.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static ShowDirectionsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowDirectionsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowDirectionsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsJSON>, ShowDirectionsJSON *, bool> generator("Type ShowDirections", ignore_extras);
            parse_json_value(text, "Text for ShowDirectionsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowDirectionsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowDirectionsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsJSON>, ShowDirectionsJSON *, bool> generator("Type ShowDirections", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public MapCommandJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIntermediateDestinationRequested;
        static char lowerBoundIntermediateDestinationPositionFromStart[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIntermediateDestinationPositionFromStart>, OInteger, o_integer > fieldGeneratorIntermediateDestinationPositionFromStart;
        static char lowerBoundIntermediateDestinationPositionFromEnd[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundIntermediateDestinationPositionFromEnd>, OInteger, o_integer > fieldGeneratorIntermediateDestinationPositionFromEnd;
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
            if (!(strcmp(getMapCommandJSONKey().c_str(), "ShowDirections") == 0))
                throw("The key field has a value other than `ShowDirections'.");
            ShowDirectionsJSON *result = new ShowDirectionsJSON();
            assert(result != NULL);
            RCHandle<ShowDirectionsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowDirectionsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(MapCommandJSON *new_result)
          {
            handle_result((ShowDirectionsJSON *)new_result);
          }
        void finish(ShowDirectionsJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            if (fieldGeneratorIntermediateDestinationRequested.have_value)
              {
                result->setIntermediateDestinationRequested(fieldGeneratorIntermediateDestinationRequested.value);
                fieldGeneratorIntermediateDestinationRequested.have_value = false;
              }
            if (fieldGeneratorIntermediateDestinationPositionFromStart.have_value)
              {
                result->setIntermediateDestinationPositionFromStart(fieldGeneratorIntermediateDestinationPositionFromStart.value);
                fieldGeneratorIntermediateDestinationPositionFromStart.have_value = false;
              }
            if (fieldGeneratorIntermediateDestinationPositionFromEnd.have_value)
              {
                result->setIntermediateDestinationPositionFromEnd(fieldGeneratorIntermediateDestinationPositionFromEnd.value);
                fieldGeneratorIntermediateDestinationPositionFromEnd.have_value = false;
              }
            MapCommandJSON::Generator::finish(result);
          }
        virtual void handle_result(ShowDirectionsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strncmp(&(field_name[1]), "ntermediateDestination", 22) == 0)
                      {
                        switch ((unsigned char)(field_name[23]))
                          {
                            case 'P':
                                if (strncmp(&(field_name[24]), "ositionFrom", 11) == 0)
                                  {
                                    switch ((unsigned char)(field_name[35]))
                                      {
                                        case 'E':
                                            if (strcmp(&(field_name[36]), "nd") == 0)
                                                return &fieldGeneratorIntermediateDestinationPositionFromEnd;
                                            break;
                                        case 'S':
                                            if (strcmp(&(field_name[36]), "tart") == 0)
                                                return &fieldGeneratorIntermediateDestinationPositionFromStart;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                if (strcmp(&(field_name[24]), "equested") == 0)
                                    return &fieldGeneratorIntermediateDestinationRequested;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'N':
                    if (strcmp(&(field_name[1]), "ativeData") == 0)
                        return &fieldGeneratorNativeData;
                    break;
                default:
                    break;
              }
            return MapCommandJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : MapCommandJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the ShowDirections class", ignore_extras), fieldGeneratorIntermediateDestinationRequested("field \"IntermediateDestinationRequested\" of the ShowDirections class"), fieldGeneratorIntermediateDestinationPositionFromStart("field \"IntermediateDestinationPositionFromStart\" of the ShowDirections class"), fieldGeneratorIntermediateDestinationPositionFromEnd("field \"IntermediateDestinationPositionFromEnd\" of the ShowDirections class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowDirections class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            fieldGeneratorIntermediateDestinationRequested.reset();
            fieldGeneratorIntermediateDestinationPositionFromStart.reset();
            fieldGeneratorIntermediateDestinationPositionFromEnd.reset();
            MapCommandJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWDIRECTIONSJSON_H */
