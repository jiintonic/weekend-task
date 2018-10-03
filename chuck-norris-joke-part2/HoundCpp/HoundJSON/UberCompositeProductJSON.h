/* file "UberCompositeProductJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERCOMPOSITEPRODUCTJSON_H
#define UBERCOMPOSITEPRODUCTJSON_H

#pragma interface

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
#include "UberFareJSON.h"
#include "UberTripEstimatesJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberCompositeProductJSON : public ReferenceCounted
  {
  public:
    enum TypeFareTypeKnownValues
      {
        FareType_rated,
        FareType_metered,
        FareType_upfront,
        FareType__none
      };
    struct TypeFareType
      {
        bool in_known_list;
        std::string string_value;
        TypeFareTypeKnownValues list_value;

        TypeFareType(void);
        TypeFareType(const TypeFareType &other);
        TypeFareType(TypeFareTypeKnownValues other);
        bool  operator==(const TypeFareType &other) const;
        bool  operator!=(const TypeFareType &other) const;
        bool  operator<(const TypeFareType &other) const;
        bool  operator>(const TypeFareType &other) const;
        bool  operator>=(const TypeFareType &other) const;
        bool  operator<=(const TypeFareType &other) const;

      };

    static TypeFareTypeKnownValues  stringToFareType(const char *chars);
    static const char * stringFromFareType(TypeFareTypeKnownValues the_enum);

  private:
    bool flagHasDisplayName;
    std::string storeDisplayName;
    bool flagHasProductId;
    std::string storeProductId;
    bool flagHasDescription;
    std::string storeDescription;
    bool flagHasImage;
    std::string storeImage;
    bool flagHasCapacity;
    OInteger storeCapacity;
    bool flagHasSurgeMultiplier;
    double storeSurgeMultiplier;
    std::string textStoreSurgeMultiplier;
    bool flagHasIsSelected;
    bool storeIsSelected;
    bool flagHasIsShared;
    bool storeIsShared;
    bool flagHasCount;
    OInteger storeCount;
    bool flagHasPickUpEstimateInSeconds;
    double storePickUpEstimateInSeconds;
    std::string textStorePickUpEstimateInSeconds;
    bool flagHasFareType;
    TypeFareType storeFareType;
    bool flagHasFare;
    UberFareJSON * storeFare;
    bool flagHasTripEstimates;
    UberTripEstimatesJSON * storeTripEstimates;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberCompositeProductJSON(const UberCompositeProductJSON &);
    UberCompositeProductJSON & operator=(const UberCompositeProductJSON &other);

    void  fromJSONDisplayName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProductId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONImage(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCapacity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsSelected(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsShared(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickUpEstimateInSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFareType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFare(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTripEstimates(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberCompositeProductJSON(void);
    virtual ~UberCompositeProductJSON(void);
    bool  hasDisplayName(void) const;
    std::string  getDisplayName(void);
    const std::string  getDisplayName(void) const;
    bool  hasProductId(void) const;
    std::string  getProductId(void);
    const std::string  getProductId(void) const;
    bool  hasDescription(void) const;
    std::string  getDescription(void);
    const std::string  getDescription(void) const;
    bool  hasImage(void) const;
    std::string  getImage(void);
    const std::string  getImage(void) const;
    bool  hasCapacity(void) const;
    OInteger  getCapacity(void);
    const OInteger  getCapacity(void) const;
    bool  hasSurgeMultiplier(void) const;
    double  getSurgeMultiplier(void);
    const double  getSurgeMultiplier(void) const;
    std::string  getSurgeMultiplierAsText(void) const;
    bool  hasIsSelected(void) const;
    bool  getIsSelected(void);
    const bool  getIsSelected(void) const;
    bool  hasIsShared(void) const;
    bool  getIsShared(void);
    const bool  getIsShared(void) const;
    bool  hasCount(void) const;
    OInteger  getCount(void);
    const OInteger  getCount(void) const;
    bool  hasPickUpEstimateInSeconds(void) const;
    double  getPickUpEstimateInSeconds(void);
    const double  getPickUpEstimateInSeconds(void) const;
    std::string  getPickUpEstimateInSecondsAsText(void) const;
    bool  hasFareType(void) const;
    TypeFareType  getFareType(void);
    const TypeFareType  getFareType(void) const;
    const char * getFareTypeAsChars(void) const;
    std::string  getFareTypeAsString(void) const;
    bool  hasFare(void) const;
    UberFareJSON *  getFare(void);
    const UberFareJSON *  getFare(void) const;
    bool  hasTripEstimates(void) const;
    UberTripEstimatesJSON *  getTripEstimates(void);
    const UberTripEstimatesJSON *  getTripEstimates(void) const;

    virtual size_t extraUberCompositeProductComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberCompositeProductComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberCompositeProductComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberCompositeProductComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberCompositeProductLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberCompositeProductLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setDisplayName(std::string new_value)
      {
        flagHasDisplayName = true;
        storeDisplayName = new_value;
      }
    void unsetDisplayName(void)
      {
        flagHasDisplayName = false;
      }
    void setProductId(std::string new_value)
      {
        flagHasProductId = true;
        storeProductId = new_value;
      }
    void unsetProductId(void)
      {
        flagHasProductId = false;
      }
    void setDescription(std::string new_value)
      {
        flagHasDescription = true;
        storeDescription = new_value;
      }
    void unsetDescription(void)
      {
        flagHasDescription = false;
      }
    void setImage(std::string new_value)
      {
        flagHasImage = true;
        storeImage = new_value;
      }
    void unsetImage(void)
      {
        flagHasImage = false;
      }
    void setCapacity(OInteger new_value)
      {
        flagHasCapacity = true;
        if (new_value < 0)
            throw("The value for field Capacity of UberCompositeProductJSON is less than the lower bound (0) for that field.");
        storeCapacity = new_value;
      }
    void unsetCapacity(void)
      {
        flagHasCapacity = false;
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
            throw("The text value for field SurgeMultiplier of UberCompositeProductJSON is not a valid number.");
        textStoreSurgeMultiplier = new_value;
      }
    void unsetSurgeMultiplier(void)
      {
        flagHasSurgeMultiplier = false;
      }
    void setIsSelected(bool new_value)
      {
        flagHasIsSelected = true;
        storeIsSelected = new_value;
      }
    void unsetIsSelected(void)
      {
        flagHasIsSelected = false;
      }
    void setIsShared(bool new_value)
      {
        flagHasIsShared = true;
        storeIsShared = new_value;
      }
    void unsetIsShared(void)
      {
        flagHasIsShared = false;
      }
    void setCount(OInteger new_value)
      {
        flagHasCount = true;
        if (new_value < 0)
            throw("The value for field Count of UberCompositeProductJSON is less than the lower bound (0) for that field.");
        storeCount = new_value;
      }
    void unsetCount(void)
      {
        flagHasCount = false;
      }
    void setPickUpEstimateInSeconds(double new_value)
      {
        flagHasPickUpEstimateInSeconds = true;
        storePickUpEstimateInSeconds = new_value;
        textStorePickUpEstimateInSeconds = "";
      }
    void setPickUpEstimateInSecondsText(std::string new_value)
      {
        flagHasPickUpEstimateInSeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field PickUpEstimateInSeconds of UberCompositeProductJSON is not a valid number.");
        textStorePickUpEstimateInSeconds = new_value;
      }
    void unsetPickUpEstimateInSeconds(void)
      {
        flagHasPickUpEstimateInSeconds = false;
      }
    void setFareType(TypeFareType new_value)
      {
        flagHasFareType = true;
        storeFareType = new_value;
      }
    void setFareType(const char *chars)
      {
        TypeFareTypeKnownValues known = stringToFareType(chars);
        TypeFareType new_value;
        if (known == FareType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setFareType(new_value);
      }
    void setFareType(std::string the_string)
      {
        setFareType(the_string.c_str());
      }
    void setFareType(TypeFareTypeKnownValues new_value)
      {
        TypeFareType new_full_value;
        assert(new_value != FareType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setFareType(new_full_value);
      }
    void unsetFareType(void)
      {
        flagHasFareType = false;
      }
    void setFare(UberFareJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasFare)
          {
            storeFare->remove_reference();
          }
        flagHasFare = true;
        storeFare = new_value;
      }
    void unsetFare(void)
      {
        if (flagHasFare)
          {
            storeFare->remove_reference();
          }
        flagHasFare = false;
      }
    void setTripEstimates(UberTripEstimatesJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasTripEstimates)
          {
            storeTripEstimates->remove_reference();
          }
        flagHasTripEstimates = true;
        storeTripEstimates = new_value;
      }
    void unsetTripEstimates(void)
      {
        if (flagHasTripEstimates)
          {
            storeTripEstimates->remove_reference();
          }
        flagHasTripEstimates = false;
      }

    virtual void extraUberCompositeProductAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberCompositeProductSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberCompositeProductLookup(key);
        if (old_field == NULL)
          {
            extraUberCompositeProductAppendPair(key, new_component);
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
        assert(flagHasDisplayName);
        handler->start_pair("DisplayName");
        handler->string_value(storeDisplayName);
        assert(flagHasProductId);
        handler->start_pair("ProductId");
        handler->string_value(storeProductId);
        assert(flagHasDescription);
        handler->start_pair("Description");
        handler->string_value(storeDescription);
        assert(flagHasImage);
        handler->start_pair("Image");
        handler->string_value(storeImage);
        assert(flagHasCapacity);
        handler->start_pair("Capacity");
        handler->number_value(storeCapacity.get_o_integer());
        assert(flagHasSurgeMultiplier);
        handler->start_pair("SurgeMultiplier");
        if (textStoreSurgeMultiplier != "")
            handler->number_value(textStoreSurgeMultiplier.c_str());
        else if (((double)(long int)storeSurgeMultiplier) == storeSurgeMultiplier)
            handler->number_value((long int)storeSurgeMultiplier);
        else
            handler->number_value(storeSurgeMultiplier);
        if (flagHasIsSelected)
          {
            handler->start_pair("IsSelected");
            handler->boolean_value(storeIsSelected);
          }
        if (flagHasIsShared)
          {
            handler->start_pair("IsShared");
            handler->boolean_value(storeIsShared);
          }
        if (flagHasCount)
          {
            handler->start_pair("Count");
            handler->number_value(storeCount.get_o_integer());
          }
        if (flagHasPickUpEstimateInSeconds)
          {
            handler->start_pair("PickUpEstimateInSeconds");
            if (textStorePickUpEstimateInSeconds != "")
                handler->number_value(textStorePickUpEstimateInSeconds.c_str());
            else if (((double)(long int)storePickUpEstimateInSeconds) == storePickUpEstimateInSeconds)
                handler->number_value((long int)storePickUpEstimateInSeconds);
            else
                handler->number_value(storePickUpEstimateInSeconds);
          }
        assert(flagHasFareType);
        handler->start_pair("FareType");
        if (storeFareType.in_known_list)
          {
            switch (storeFareType.list_value)
              {
                case FareType_rated:
                    handler->string_value("rated");
                    break;
                case FareType_metered:
                    handler->string_value("metered");
                    break;
                case FareType_upfront:
                    handler->string_value("upfront");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeFareType.string_value);
          }
        if (flagHasFare)
          {
            handler->start_pair("Fare");
            storeFare->write_as_json(handler);
          }
        if (flagHasTripEstimates)
          {
            handler->start_pair("TripEstimates");
            storeTripEstimates->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasDisplayName()))
          {
            return "When parsing the object for %what%, the \"DisplayName\" field was missing.";
          }
        if (!(hasProductId()))
          {
            return "When parsing the object for %what%, the \"ProductId\" field was missing.";
          }
        if (!(hasDescription()))
          {
            return "When parsing the object for %what%, the \"Description\" field was missing.";
          }
        if (!(hasImage()))
          {
            return "When parsing the object for %what%, the \"Image\" field was missing.";
          }
        if (!(hasCapacity()))
          {
            return "When parsing the object for %what%, the \"Capacity\" field was missing.";
          }
        if (!(hasSurgeMultiplier()))
          {
            return "When parsing the object for %what%, the \"SurgeMultiplier\" field was missing.";
          }
        if (!(hasFareType()))
          {
            return "When parsing the object for %what%, the \"FareType\" field was missing.";
          }
        return NULL;
      }

    static UberCompositeProductJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberCompositeProductJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberCompositeProductJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCompositeProductJSON>, UberCompositeProductJSON *, bool> generator("Type UberCompositeProduct", ignore_extras);
            parse_json_value(text, "Text for UberCompositeProductJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberCompositeProductJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberCompositeProductJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberCompositeProductJSON>, UberCompositeProductJSON *, bool> generator("Type UberCompositeProduct", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDisplayName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProductId;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorImage;
        static char lowerBoundCapacity[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundCapacity>, OInteger, o_integer > fieldGeneratorCapacity;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSurgeMultiplier;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsSelected;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsShared;
        static char lowerBoundCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundCount>, OInteger, o_integer > fieldGeneratorCount;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPickUpEstimateInSeconds;
    class FieldGeneratorFareType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorFareType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorFareType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeFareTypeKnownValues known = stringToFareType(result);
                TypeFareType new_value;
                if (known == FareType__none)
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
            virtual void handle_result(TypeFareType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorFareType, TypeFareType, TypeFareType > fieldGeneratorFareType;
        JSONHoldingGenerator<UberFareJSON::Generator, RCHandle<UberFareJSON>, UberFareJSON *, bool > fieldGeneratorFare;
        JSONHoldingGenerator<UberTripEstimatesJSON::Generator, RCHandle<UberTripEstimatesJSON>, UberTripEstimatesJSON *, bool > fieldGeneratorTripEstimates;
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
            UberCompositeProductJSON *result = new UberCompositeProductJSON();
            assert(result != NULL);
            RCHandle<UberCompositeProductJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberCompositeProductAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberCompositeProductJSON *result)
          {
            if (fieldGeneratorDisplayName.have_value)
              {
                result->setDisplayName(fieldGeneratorDisplayName.value);
                fieldGeneratorDisplayName.have_value = false;
              }
            else if (!(result->hasDisplayName()))
              {
                error("When parsing the object for %what%, the \"DisplayName\" field was missing.");
              }
            if (fieldGeneratorProductId.have_value)
              {
                result->setProductId(fieldGeneratorProductId.value);
                fieldGeneratorProductId.have_value = false;
              }
            else if (!(result->hasProductId()))
              {
                error("When parsing the object for %what%, the \"ProductId\" field was missing.");
              }
            if (fieldGeneratorDescription.have_value)
              {
                result->setDescription(fieldGeneratorDescription.value);
                fieldGeneratorDescription.have_value = false;
              }
            else if (!(result->hasDescription()))
              {
                error("When parsing the object for %what%, the \"Description\" field was missing.");
              }
            if (fieldGeneratorImage.have_value)
              {
                result->setImage(fieldGeneratorImage.value);
                fieldGeneratorImage.have_value = false;
              }
            else if (!(result->hasImage()))
              {
                error("When parsing the object for %what%, the \"Image\" field was missing.");
              }
            if (fieldGeneratorCapacity.have_value)
              {
                result->setCapacity(fieldGeneratorCapacity.value);
                fieldGeneratorCapacity.have_value = false;
              }
            else if (!(result->hasCapacity()))
              {
                error("When parsing the object for %what%, the \"Capacity\" field was missing.");
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
            if (fieldGeneratorIsSelected.have_value)
              {
                result->setIsSelected(fieldGeneratorIsSelected.value);
                fieldGeneratorIsSelected.have_value = false;
              }
            if (fieldGeneratorIsShared.have_value)
              {
                result->setIsShared(fieldGeneratorIsShared.value);
                fieldGeneratorIsShared.have_value = false;
              }
            if (fieldGeneratorCount.have_value)
              {
                result->setCount(fieldGeneratorCount.value);
                fieldGeneratorCount.have_value = false;
              }
            if (fieldGeneratorPickUpEstimateInSeconds.have_value)
              {
                result->setPickUpEstimateInSecondsText(fieldGeneratorPickUpEstimateInSeconds.value);
                fieldGeneratorPickUpEstimateInSeconds.have_value = false;
              }
            if (fieldGeneratorFareType.have_value)
              {
                result->setFareType(fieldGeneratorFareType.value);
                fieldGeneratorFareType.have_value = false;
              }
            else if (!(result->hasFareType()))
              {
                error("When parsing the object for %what%, the \"FareType\" field was missing.");
              }
            if (fieldGeneratorFare.have_value)
              {
                result->setFare(fieldGeneratorFare.value.referenced());
                fieldGeneratorFare.have_value = false;
              }
            if (fieldGeneratorTripEstimates.have_value)
              {
                result->setTripEstimates(fieldGeneratorTripEstimates.value.referenced());
                fieldGeneratorTripEstimates.have_value = false;
              }
          }
        virtual void handle_result(UberCompositeProductJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "pacity") == 0)
                                return &fieldGeneratorCapacity;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "unt") == 0)
                                return &fieldGeneratorCount;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[2]), "scription") == 0)
                                return &fieldGeneratorDescription;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "splayName") == 0)
                                return &fieldGeneratorDisplayName;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'F':
                    if (strncmp(&(field_name[1]), "are", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 0:
                                return &fieldGeneratorFare;
                            case 'T':
                                if (strcmp(&(field_name[5]), "ype") == 0)
                                    return &fieldGeneratorFareType;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'm':
                            if (strcmp(&(field_name[2]), "age") == 0)
                                return &fieldGeneratorImage;
                            break;
                        case 's':
                            if (strncmp(&(field_name[2]), "S", 1) == 0)
                              {
                                switch ((unsigned char)(field_name[3]))
                                  {
                                    case 'e':
                                        if (strcmp(&(field_name[4]), "lected") == 0)
                                            return &fieldGeneratorIsSelected;
                                        break;
                                    case 'h':
                                        if (strcmp(&(field_name[4]), "ared") == 0)
                                            return &fieldGeneratorIsShared;
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
                case 'P':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ckUpEstimateInSeconds") == 0)
                                return &fieldGeneratorPickUpEstimateInSeconds;
                            break;
                        case 'r':
                            if (strcmp(&(field_name[2]), "oductId") == 0)
                                return &fieldGeneratorProductId;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "urgeMultiplier") == 0)
                        return &fieldGeneratorSurgeMultiplier;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ripEstimates") == 0)
                        return &fieldGeneratorTripEstimates;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorDisplayName("field \"DisplayName\" of the UberCompositeProduct class"), fieldGeneratorProductId("field \"ProductId\" of the UberCompositeProduct class"), fieldGeneratorDescription("field \"Description\" of the UberCompositeProduct class"), fieldGeneratorImage("field \"Image\" of the UberCompositeProduct class"), fieldGeneratorCapacity("field \"Capacity\" of the UberCompositeProduct class"), fieldGeneratorSurgeMultiplier("field \"SurgeMultiplier\" of the UberCompositeProduct class"), fieldGeneratorIsSelected("field \"IsSelected\" of the UberCompositeProduct class"), fieldGeneratorIsShared("field \"IsShared\" of the UberCompositeProduct class"), fieldGeneratorCount("field \"Count\" of the UberCompositeProduct class"), fieldGeneratorPickUpEstimateInSeconds("field \"PickUpEstimateInSeconds\" of the UberCompositeProduct class"), fieldGeneratorFareType("field \"FareType\" of the UberCompositeProduct class"), fieldGeneratorFare("field \"Fare\" of the UberCompositeProduct class", ignore_extras), fieldGeneratorTripEstimates("field \"TripEstimates\" of the UberCompositeProduct class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberCompositeProduct class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorDisplayName.reset();
            fieldGeneratorProductId.reset();
            fieldGeneratorDescription.reset();
            fieldGeneratorImage.reset();
            fieldGeneratorCapacity.reset();
            fieldGeneratorSurgeMultiplier.reset();
            fieldGeneratorIsSelected.reset();
            fieldGeneratorIsShared.reset();
            fieldGeneratorCount.reset();
            fieldGeneratorPickUpEstimateInSeconds.reset();
            fieldGeneratorFareType.reset();
            fieldGeneratorFare.reset();
            fieldGeneratorTripEstimates.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERCOMPOSITEPRODUCTJSON_H */
