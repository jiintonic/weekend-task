/* file "ShowDirectionsQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SHOWDIRECTIONSQUERYSTATEJSON_H
#define SHOWDIRECTIONSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
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


class ShowDirectionsQueryStateJSON : public ReferenceCounted
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
    bool flagHasUnitOfMeasureID;
    std::string storeUnitOfMeasureID;
    bool flagHasCorrectionState;
    TypeCorrectionState storeCorrectionState;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    ShowDirectionsQueryStateJSON(const ShowDirectionsQueryStateJSON &);
    ShowDirectionsQueryStateJSON & operator=(const ShowDirectionsQueryStateJSON &other);

    void  fromJSONStartMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDestinationMapLocationSpec(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImplicitStart(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNavigationMethod(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONNavigate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAsksForDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAsksForTravelTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnitOfMeasureID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCorrectionState(JSONValue *json_value, bool ignore_extras = false);


  public:
    ShowDirectionsQueryStateJSON(void);
    virtual ~ShowDirectionsQueryStateJSON(void);
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
    bool  hasUnitOfMeasureID(void) const;
    std::string  getUnitOfMeasureID(void);
    const std::string  getUnitOfMeasureID(void) const;
    bool  hasCorrectionState(void) const;
    TypeCorrectionState  getCorrectionState(void);
    const TypeCorrectionState  getCorrectionState(void) const;
    const char * getCorrectionStateAsChars(void) const;
    std::string  getCorrectionStateAsString(void) const;

    virtual size_t extraShowDirectionsQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraShowDirectionsQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraShowDirectionsQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraShowDirectionsQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraShowDirectionsQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraShowDirectionsQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

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
    void setUnitOfMeasureID(std::string new_value)
      {
        flagHasUnitOfMeasureID = true;
        storeUnitOfMeasureID = new_value;
      }
    void unsetUnitOfMeasureID(void)
      {
        flagHasUnitOfMeasureID = false;
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

    virtual void extraShowDirectionsQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraShowDirectionsQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraShowDirectionsQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraShowDirectionsQueryStateAppendPair(key, new_component);
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
        assert(flagHasStartMapLocationSpec);
        handler->start_pair("StartMapLocationSpec");
        storeStartMapLocationSpec->write_as_json(handler);
        assert(flagHasDestinationMapLocationSpec);
        handler->start_pair("DestinationMapLocationSpec");
        storeDestinationMapLocationSpec->write_as_json(handler);
        assert(flagHasImplicitStart);
        handler->start_pair("ImplicitStart");
        handler->boolean_value(storeImplicitStart);
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
        if (flagHasUnitOfMeasureID)
          {
            handler->start_pair("UnitOfMeasureID");
            handler->string_value(storeUnitOfMeasureID);
          }
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
        if (!(hasStartMapLocationSpec()))
          {
            return "When parsing the object for %what%, the \"StartMapLocationSpec\" field was missing.";
          }
        if (!(hasDestinationMapLocationSpec()))
          {
            return "When parsing the object for %what%, the \"DestinationMapLocationSpec\" field was missing.";
          }
        if (!(hasImplicitStart()))
          {
            return "When parsing the object for %what%, the \"ImplicitStart\" field was missing.";
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
        return NULL;
      }

    static ShowDirectionsQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ShowDirectionsQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ShowDirectionsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsQueryStateJSON>, ShowDirectionsQueryStateJSON *, bool> generator("Type ShowDirectionsQueryState", ignore_extras);
            parse_json_value(text, "Text for ShowDirectionsQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ShowDirectionsQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ShowDirectionsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ShowDirectionsQueryStateJSON>, ShowDirectionsQueryStateJSON *, bool> generator("Type ShowDirectionsQueryState", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnitOfMeasureID;
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
            ShowDirectionsQueryStateJSON *result = new ShowDirectionsQueryStateJSON();
            assert(result != NULL);
            RCHandle<ShowDirectionsQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraShowDirectionsQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(ShowDirectionsQueryStateJSON *result)
          {
            if (fieldGeneratorStartMapLocationSpec.have_value)
              {
                result->setStartMapLocationSpec(fieldGeneratorStartMapLocationSpec.value.referenced());
                fieldGeneratorStartMapLocationSpec.have_value = false;
              }
            else if (!(result->hasStartMapLocationSpec()))
              {
                error("When parsing the object for %what%, the \"StartMapLocationSpec\" field was missing.");
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
            else if (!(result->hasImplicitStart()))
              {
                error("When parsing the object for %what%, the \"ImplicitStart\" field was missing.");
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
            if (fieldGeneratorUnitOfMeasureID.have_value)
              {
                result->setUnitOfMeasureID(fieldGeneratorUnitOfMeasureID.value);
                fieldGeneratorUnitOfMeasureID.have_value = false;
              }
            if (fieldGeneratorCorrectionState.have_value)
              {
                result->setCorrectionState(fieldGeneratorCorrectionState.value);
                fieldGeneratorCorrectionState.have_value = false;
              }
          }
        virtual void handle_result(ShowDirectionsQueryStateJSON *new_result) = 0;
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
                    if (strcmp(&(field_name[1]), "estinationMapLocationSpec") == 0)
                        return &fieldGeneratorDestinationMapLocationSpec;
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
                case 'U':
                    if (strcmp(&(field_name[1]), "nitOfMeasureID") == 0)
                        return &fieldGeneratorUnitOfMeasureID;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStartMapLocationSpec("field \"StartMapLocationSpec\" of the ShowDirectionsQueryState class", ignore_extras), fieldGeneratorDestinationMapLocationSpec("field \"DestinationMapLocationSpec\" of the ShowDirectionsQueryState class", ignore_extras), fieldGeneratorImplicitStart("field \"ImplicitStart\" of the ShowDirectionsQueryState class"), fieldGeneratorNavigationMethod("field \"NavigationMethod\" of the ShowDirectionsQueryState class"), fieldGeneratorNavigate("field \"Navigate\" of the ShowDirectionsQueryState class"), fieldGeneratorAsksForDistance("field \"AsksForDistance\" of the ShowDirectionsQueryState class"), fieldGeneratorAsksForTravelTime("field \"AsksForTravelTime\" of the ShowDirectionsQueryState class"), fieldGeneratorUnitOfMeasureID("field \"UnitOfMeasureID\" of the ShowDirectionsQueryState class"), fieldGeneratorCorrectionState("field \"CorrectionState\" of the ShowDirectionsQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the ShowDirectionsQueryState class");
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
            fieldGeneratorUnitOfMeasureID.reset();
            fieldGeneratorCorrectionState.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SHOWDIRECTIONSQUERYSTATEJSON_H */
