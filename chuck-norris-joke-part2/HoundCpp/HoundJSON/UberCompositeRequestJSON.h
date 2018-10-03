/* file "UberCompositeRequestJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERCOMPOSITEREQUESTJSON_H
#define UBERCOMPOSITEREQUESTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "UberVehicleJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberCompositeRequestJSON : public ReferenceCounted
  {
  public:
    enum TypeStatusKnownValues
      {
        Status_processing,
        Status_no_drivers_available,
        Status_accepted,
        Status_arriving,
        Status_in_progress,
        Status_driver_canceled,
        Status_rider_canceled,
        Status_completed,
        Status__none
      };
    struct TypeStatus
      {
        bool in_known_list;
        std::string string_value;
        TypeStatusKnownValues list_value;

        TypeStatus(void);
        TypeStatus(const TypeStatus &other);
        TypeStatus(TypeStatusKnownValues other);
        bool  operator==(const TypeStatus &other) const;
        bool  operator!=(const TypeStatus &other) const;
        bool  operator<(const TypeStatus &other) const;
        bool  operator>(const TypeStatus &other) const;
        bool  operator>=(const TypeStatus &other) const;
        bool  operator<=(const TypeStatus &other) const;

      };

    static TypeStatusKnownValues  stringToStatus(const char *chars);
    static const char * stringFromStatus(TypeStatusKnownValues the_enum);

  private:
    bool flagHasRequestId;
    std::string storeRequestId;
    bool flagHasStatus;
    TypeStatus storeStatus;
    bool flagHasArrivalEstimateInMinutes;
    double storeArrivalEstimateInMinutes;
    std::string textStoreArrivalEstimateInMinutes;
    bool flagHasVehicle;
    UberVehicleJSON * storeVehicle;
    bool flagHasSurgeMultiplier;
    double storeSurgeMultiplier;
    std::string textStoreSurgeMultiplier;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberCompositeRequestJSON(const UberCompositeRequestJSON &);
    UberCompositeRequestJSON & operator=(const UberCompositeRequestJSON &other);

    void  fromJSONRequestId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStatus(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArrivalEstimateInMinutes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVehicle(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberCompositeRequestJSON(void);
    virtual ~UberCompositeRequestJSON(void);
    bool  hasRequestId(void) const;
    std::string  getRequestId(void);
    const std::string  getRequestId(void) const;
    bool  hasStatus(void) const;
    TypeStatus  getStatus(void);
    const TypeStatus  getStatus(void) const;
    const char * getStatusAsChars(void) const;
    std::string  getStatusAsString(void) const;
    bool  hasArrivalEstimateInMinutes(void) const;
    double  getArrivalEstimateInMinutes(void);
    const double  getArrivalEstimateInMinutes(void) const;
    std::string  getArrivalEstimateInMinutesAsText(void) const;
    bool  hasVehicle(void) const;
    UberVehicleJSON *  getVehicle(void);
    const UberVehicleJSON *  getVehicle(void) const;
    bool  hasSurgeMultiplier(void) const;
    double  getSurgeMultiplier(void);
    const double  getSurgeMultiplier(void) const;
    std::string  getSurgeMultiplierAsText(void) const;

    virtual size_t extraUberCompositeRequestComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberCompositeRequestComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberCompositeRequestComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberCompositeRequestComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberCompositeRequestLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberCompositeRequestLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setRequestId(std::string new_value)
      {
        flagHasRequestId = true;
        storeRequestId = new_value;
      }
    void unsetRequestId(void)
      {
        flagHasRequestId = false;
      }
    void setStatus(TypeStatus new_value)
      {
        flagHasStatus = true;
        storeStatus = new_value;
      }
    void setStatus(const char *chars)
      {
        TypeStatusKnownValues known = stringToStatus(chars);
        TypeStatus new_value;
        if (known == Status__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setStatus(new_value);
      }
    void setStatus(std::string the_string)
      {
        setStatus(the_string.c_str());
      }
    void setStatus(TypeStatusKnownValues new_value)
      {
        TypeStatus new_full_value;
        assert(new_value != Status__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setStatus(new_full_value);
      }
    void unsetStatus(void)
      {
        flagHasStatus = false;
      }
    void setArrivalEstimateInMinutes(double new_value)
      {
        flagHasArrivalEstimateInMinutes = true;
        storeArrivalEstimateInMinutes = new_value;
        textStoreArrivalEstimateInMinutes = "";
      }
    void setArrivalEstimateInMinutesText(std::string new_value)
      {
        flagHasArrivalEstimateInMinutes = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field ArrivalEstimateInMinutes of UberCompositeRequestJSON is not a valid number.");
        textStoreArrivalEstimateInMinutes = new_value;
      }
    void unsetArrivalEstimateInMinutes(void)
      {
        flagHasArrivalEstimateInMinutes = false;
      }
    void setVehicle(UberVehicleJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasVehicle)
          {
            storeVehicle->remove_reference();
          }
        flagHasVehicle = true;
        storeVehicle = new_value;
      }
    void unsetVehicle(void)
      {
        if (flagHasVehicle)
          {
            storeVehicle->remove_reference();
          }
        flagHasVehicle = false;
      }
    void setSurgeMultiplier(double new_value)
      {
        flagHasSurgeMultiplier = true;
        storeSurgeMultiplier = new_value;
        textStoreSurgeMultiplier = "";
      }
    void setSurgeMultiplierText(std::string new_value)
      {
        flagHasSurgeMultiplier = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field SurgeMultiplier of UberCompositeRequestJSON is not a valid number.");
        textStoreSurgeMultiplier = new_value;
      }
    void unsetSurgeMultiplier(void)
      {
        flagHasSurgeMultiplier = false;
      }

    virtual void extraUberCompositeRequestAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberCompositeRequestSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberCompositeRequestLookup(key);
        if (old_field == NULL)
          {
            extraUberCompositeRequestAppendPair(key, new_component);
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
        assert(flagHasRequestId);
        handler->start_pair("RequestId");
        handler->string_value(storeRequestId);
        assert(flagHasStatus);
        handler->start_pair("Status");
        if (storeStatus.in_known_list)
          {
            switch (storeStatus.list_value)
              {
                case Status_processing:
                    handler->string_value("processing");
                    break;
                case Status_no_drivers_available:
                    handler->string_value("no_drivers_available");
                    break;
                case Status_accepted:
                    handler->string_value("accepted");
                    break;
                case Status_arriving:
                    handler->string_value("arriving");
                    break;
                case Status_in_progress:
                    handler->string_value("in_progress");
                    break;
                case Status_driver_canceled:
                    handler->string_value("driver_canceled");
                    break;
                case Status_rider_canceled:
                    handler->string_value("rider_canceled");
                    break;
                case Status_completed:
                    handler->string_value("completed");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeStatus.string_value);
          }
        if (flagHasArrivalEstimateInMinutes)
          {
            handler->start_pair("ArrivalEstimateInMinutes");
            if (textStoreArrivalEstimateInMinutes != "")
                handler->number_value(textStoreArrivalEstimateInMinutes.c_str());
            else if (((double)(long int)storeArrivalEstimateInMinutes) == storeArrivalEstimateInMinutes)
                handler->number_value((long int)storeArrivalEstimateInMinutes);
            else
                handler->number_value(storeArrivalEstimateInMinutes);
          }
        if (flagHasVehicle)
          {
            handler->start_pair("Vehicle");
            storeVehicle->write_as_json(handler);
          }
        assert(flagHasSurgeMultiplier);
        handler->start_pair("SurgeMultiplier");
        if (textStoreSurgeMultiplier != "")
            handler->number_value(textStoreSurgeMultiplier.c_str());
        else if (((double)(long int)storeSurgeMultiplier) == storeSurgeMultiplier)
            handler->number_value((long int)storeSurgeMultiplier);
        else
            handler->number_value(storeSurgeMultiplier);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasRequestId()))
          {
            return "When parsing the object for %what%, the \"RequestId\" field was missing.";
          }
        if (!(hasStatus()))
          {
            return "When parsing the object for %what%, the \"Status\" field was missing.";
          }
        if (!(hasSurgeMultiplier()))
          {
            return "When parsing the object for %what%, the \"SurgeMultiplier\" field was missing.";
          }
        return NULL;
      }

    static UberCompositeRequestJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberCompositeRequestJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberCompositeRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCompositeRequestJSON>, UberCompositeRequestJSON *, bool> generator("Type UberCompositeRequest", ignore_extras);
            parse_json_value(text, "Text for UberCompositeRequestJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberCompositeRequestJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberCompositeRequestJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCompositeRequestJSON>, UberCompositeRequestJSON *, bool> generator("Type UberCompositeRequest", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRequestId;
    class FieldGeneratorStatus : public JSONStringGenerator
          {
          protected:
            FieldGeneratorStatus(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorStatus(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeStatusKnownValues known = stringToStatus(result);
                TypeStatus new_value;
                if (known == Status__none)
                  {
                    new_value.in_known_list = false;
                    new_value.string_value = result;
                  }
                else
                  {
                    new_value.in_known_list = true;
                    new_value.list_value = known;
                  }
                handle_result(new_value);
              }
            virtual void handle_result(TypeStatus result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorStatus, TypeStatus, TypeStatus > fieldGeneratorStatus;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorArrivalEstimateInMinutes;
        JSONHoldingGenerator<UberVehicleJSON::Generator, RCHandle<UberVehicleJSON>, UberVehicleJSON *, bool > fieldGeneratorVehicle;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSurgeMultiplier;
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
            UberCompositeRequestJSON *result = new UberCompositeRequestJSON();
            assert(result != NULL);
            RCHandle<UberCompositeRequestJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberCompositeRequestAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberCompositeRequestJSON *result)
          {
            if (fieldGeneratorRequestId.have_value)
              {
                result->setRequestId(fieldGeneratorRequestId.value);
                fieldGeneratorRequestId.have_value = false;
              }
            else if (!(result->hasRequestId()))
              {
                error("When parsing the object for %what%, the \"RequestId\" field was missing.");
              }
            if (fieldGeneratorStatus.have_value)
              {
                result->setStatus(fieldGeneratorStatus.value);
                fieldGeneratorStatus.have_value = false;
              }
            else if (!(result->hasStatus()))
              {
                error("When parsing the object for %what%, the \"Status\" field was missing.");
              }
            if (fieldGeneratorArrivalEstimateInMinutes.have_value)
              {
                result->setArrivalEstimateInMinutesText(fieldGeneratorArrivalEstimateInMinutes.value);
                fieldGeneratorArrivalEstimateInMinutes.have_value = false;
              }
            if (fieldGeneratorVehicle.have_value)
              {
                result->setVehicle(fieldGeneratorVehicle.value.referenced());
                fieldGeneratorVehicle.have_value = false;
              }
            if (fieldGeneratorSurgeMultiplier.have_value)
              {
                result->setSurgeMultiplierText(fieldGeneratorSurgeMultiplier.value);
                fieldGeneratorSurgeMultiplier.have_value = false;
              }
            else if (!(result->hasSurgeMultiplier()))
              {
                error("When parsing the object for %what%, the \"SurgeMultiplier\" field was missing.");
              }
          }
        virtual void handle_result(UberCompositeRequestJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "rrivalEstimateInMinutes") == 0)
                        return &fieldGeneratorArrivalEstimateInMinutes;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equestId") == 0)
                        return &fieldGeneratorRequestId;
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 't':
                            if (strcmp(&(field_name[2]), "atus") == 0)
                                return &fieldGeneratorStatus;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rgeMultiplier") == 0)
                                return &fieldGeneratorSurgeMultiplier;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "ehicle") == 0)
                        return &fieldGeneratorVehicle;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorRequestId("field \"RequestId\" of the UberCompositeRequest class"), fieldGeneratorStatus("field \"Status\" of the UberCompositeRequest class"), fieldGeneratorArrivalEstimateInMinutes("field \"ArrivalEstimateInMinutes\" of the UberCompositeRequest class"), fieldGeneratorVehicle("field \"Vehicle\" of the UberCompositeRequest class", ignore_extras), fieldGeneratorSurgeMultiplier("field \"SurgeMultiplier\" of the UberCompositeRequest class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberCompositeRequest class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorRequestId.reset();
            fieldGeneratorStatus.reset();
            fieldGeneratorArrivalEstimateInMinutes.reset();
            fieldGeneratorVehicle.reset();
            fieldGeneratorSurgeMultiplier.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERCOMPOSITEREQUESTJSON_H */
