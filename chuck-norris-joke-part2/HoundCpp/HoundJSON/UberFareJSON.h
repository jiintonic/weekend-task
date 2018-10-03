/* file "UberFareJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERFAREJSON_H
#define UBERFAREJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberFareJSON : public ReferenceCounted
  {
  public:
    enum TypeDistanceUnitKnownValues
      {
        DistanceUnit_mile,
        DistanceUnit_km,
        DistanceUnit__none
      };
    struct TypeDistanceUnit
      {
        bool in_known_list;
        std::string string_value;
        TypeDistanceUnitKnownValues list_value;

        TypeDistanceUnit(void);
        TypeDistanceUnit(const TypeDistanceUnit &other);
        TypeDistanceUnit(TypeDistanceUnitKnownValues other);
        bool  operator==(const TypeDistanceUnit &other) const;
        bool  operator!=(const TypeDistanceUnit &other) const;
        bool  operator<(const TypeDistanceUnit &other) const;
        bool  operator>(const TypeDistanceUnit &other) const;
        bool  operator>=(const TypeDistanceUnit &other) const;
        bool  operator<=(const TypeDistanceUnit &other) const;

      };

    static TypeDistanceUnitKnownValues  stringToDistanceUnit(const char *chars);
    static const char * stringFromDistanceUnit(TypeDistanceUnitKnownValues the_enum);
    class TypeServiceFeesJSON : public ReferenceCounted
      {
      private:
        bool flagHasName;
        std::string storeName;
        bool flagHasFee;
        double storeFee;
        std::string textStoreFee;
        std::vector<std::string> extraKeys;
        std::vector<JSONValue *> extraValues;
        string_index *extraIndex;

        TypeServiceFeesJSON(const TypeServiceFeesJSON &);
        TypeServiceFeesJSON & operator=(const TypeServiceFeesJSON &other);

        void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFee(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeServiceFeesJSON(void);
        virtual ~TypeServiceFeesJSON(void);
        bool  hasName(void) const;
        std::string  getName(void);
        const std::string  getName(void) const;
        bool  hasFee(void) const;
        double  getFee(void);
        const double  getFee(void) const;
        std::string  getFeeAsText(void) const;

        virtual size_t extraTypeServiceFeesComponentCount(void) const
          {
            assert(extraKeys.size() == extraValues.size());
            return extraKeys.size();
          }
        virtual const char *extraTypeServiceFeesComponentKey(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraKeys[component_num].c_str();
          }
        virtual JSONValue *extraTypeServiceFeesComponentValue(size_t component_num)
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual const JSONValue *extraTypeServiceFeesComponentValue(size_t component_num) const
          {
            assert(extraKeys.size() == extraValues.size());
            assert(component_num < extraValues.size());
            return extraValues[component_num];
          }
        virtual JSONValue *extraTypeServiceFeesLookup(const char *field_name)
          {
            JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
            if (result != NULL)
                result->add_reference();
            return result;
          }
        virtual const JSONValue *extraTypeServiceFeesLookup(const char *field_name) const
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
        void setFee(double new_value)
          {
            flagHasFee = true;
            storeFee = new_value;
            textStoreFee = "";
          }
        void setFeeText(std::string new_value)
          {
            flagHasFee = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Fee of TypeServiceFeesJSON is not a valid number.");
            textStoreFee = new_value;
          }
        void unsetFee(void)
          {
            flagHasFee = false;
          }

        virtual void extraTypeServiceFeesAppendPair(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            assert(extraKeys.size() == extraValues.size());
            extraKeys.push_back(key);
            extraValues.push_back(new_component);
            enter_into_string_index(extraIndex, key, new_component);
            new_component->add_reference();
          }
        virtual void extraTypeServiceFeesSetField(const char *key, JSONValue *new_component)
          {
            assert(key != NULL);
            assert(new_component != NULL);

            JSONValue *old_field = extraTypeServiceFeesLookup(key);
            if (old_field == NULL)
              {
                extraTypeServiceFeesAppendPair(key, new_component);
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
            assert(flagHasName);
            handler->start_pair("Name");
            handler->string_value(storeName);
            assert(flagHasFee);
            handler->start_pair("Fee");
            if (textStoreFee != "")
                handler->number_value(textStoreFee.c_str());
            else if (((double)(long int)storeFee) == storeFee)
                handler->number_value((long int)storeFee);
            else
                handler->number_value(storeFee);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasName()))
              {
                return "When parsing the object for %what%, the \"Name\" field was missing.";
              }
            if (!(hasFee()))
              {
                return "When parsing the object for %what%, the \"Fee\" field was missing.";
              }
            return NULL;
          }

        static TypeServiceFeesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeServiceFeesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeServiceFeesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeServiceFeesJSON>, TypeServiceFeesJSON *, bool> generator("Type TypeServiceFees", ignore_extras);
                parse_json_value(text, "Text for TypeServiceFeesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeServiceFeesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeServiceFeesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeServiceFeesJSON>, TypeServiceFeesJSON *, bool> generator("Type TypeServiceFees", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorFee;
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
                TypeServiceFeesJSON *result = new TypeServiceFeesJSON();
                assert(result != NULL);
                RCHandle<TypeServiceFeesJSON> result_holder = result;
                finish(result);
                size_t extra_count = unknownFieldGenerator.field_names.size();
                assert(extra_count == unknownFieldGenerator.field_values.size());
                for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
                  {
                    result->extraTypeServiceFeesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
                  }
                unknownFieldGenerator.field_names.clear();
                unknownFieldGenerator.field_values.clear();
                destroy_string_index(unknownFieldGenerator.index);
            unknownFieldGenerator.index = create_string_index();
                handle_result(result);
              }
            void finish(TypeServiceFeesJSON *result)
              {
                if (fieldGeneratorName.have_value)
                  {
                    result->setName(fieldGeneratorName.value);
                    fieldGeneratorName.have_value = false;
                  }
                else if (!(result->hasName()))
                  {
                    error("When parsing the object for %what%, the \"Name\" field was missing.");
                  }
                if (fieldGeneratorFee.have_value)
                  {
                    result->setFeeText(fieldGeneratorFee.value);
                    fieldGeneratorFee.have_value = false;
                  }
                else if (!(result->hasFee()))
                  {
                    error("When parsing the object for %what%, the \"Fee\" field was missing.");
                  }
              }
            virtual void handle_result(TypeServiceFeesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'F':
                        if (strcmp(&(field_name[1]), "ee") == 0)
                            return &fieldGeneratorFee;
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
            Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the TypeServiceFees class"), fieldGeneratorFee("field \"Fee\" of the TypeServiceFees class"), unknownFieldGenerator(ignore_extras)
              {
                set_what("the TypeServiceFees class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorName.reset();
                fieldGeneratorFee.reset();
                JSONObjectGenerator::reset();
                unknownFieldGenerator.reset();
              }
          };
      };

  private:
    bool flagHasBasePrice;
    double storeBasePrice;
    std::string textStoreBasePrice;
    bool flagHasMinimumPrice;
    double storeMinimumPrice;
    std::string textStoreMinimumPrice;
    bool flagHasRatePerMinute;
    double storeRatePerMinute;
    std::string textStoreRatePerMinute;
    bool flagHasRatePerDistance;
    double storeRatePerDistance;
    std::string textStoreRatePerDistance;
    bool flagHasDistanceUnit;
    TypeDistanceUnit storeDistanceUnit;
    bool flagHasCancellationFee;
    double storeCancellationFee;
    std::string textStoreCancellationFee;
    bool flagHasCurrency;
    std::string storeCurrency;
    bool flagHasServiceFees;
    std::vector< TypeServiceFeesJSON * > storeServiceFees;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberFareJSON(const UberFareJSON &);
    UberFareJSON & operator=(const UberFareJSON &other);

    void  fromJSONBasePrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMinimumPrice(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRatePerMinute(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRatePerDistance(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCancellationFee(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONServiceFees(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberFareJSON(void);
    virtual ~UberFareJSON(void);
    bool  hasBasePrice(void) const;
    double  getBasePrice(void);
    const double  getBasePrice(void) const;
    std::string  getBasePriceAsText(void) const;
    bool  hasMinimumPrice(void) const;
    double  getMinimumPrice(void);
    const double  getMinimumPrice(void) const;
    std::string  getMinimumPriceAsText(void) const;
    bool  hasRatePerMinute(void) const;
    double  getRatePerMinute(void);
    const double  getRatePerMinute(void) const;
    std::string  getRatePerMinuteAsText(void) const;
    bool  hasRatePerDistance(void) const;
    double  getRatePerDistance(void);
    const double  getRatePerDistance(void) const;
    std::string  getRatePerDistanceAsText(void) const;
    bool  hasDistanceUnit(void) const;
    TypeDistanceUnit  getDistanceUnit(void);
    const TypeDistanceUnit  getDistanceUnit(void) const;
    const char * getDistanceUnitAsChars(void) const;
    std::string  getDistanceUnitAsString(void) const;
    bool  hasCancellationFee(void) const;
    double  getCancellationFee(void);
    const double  getCancellationFee(void) const;
    std::string  getCancellationFeeAsText(void) const;
    bool  hasCurrency(void) const;
    std::string  getCurrency(void);
    const std::string  getCurrency(void) const;
    bool  hasServiceFees(void) const;
    size_t  countOfServiceFees(void) const;
    TypeServiceFeesJSON *  elementOfServiceFees(size_t element_num);
    const TypeServiceFeesJSON *  elementOfServiceFees(size_t element_num) const;
    std::vector< TypeServiceFeesJSON * >  getServiceFees(void);
    const std::vector< TypeServiceFeesJSON * >  getServiceFees(void) const;

    virtual size_t extraUberFareComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberFareComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberFareComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberFareComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberFareLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberFareLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setBasePrice(double new_value)
      {
        flagHasBasePrice = true;
        storeBasePrice = new_value;
        textStoreBasePrice = "";
      }
    void setBasePriceText(std::string new_value)
      {
        flagHasBasePrice = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field BasePrice of UberFareJSON is not a valid number.");
        textStoreBasePrice = new_value;
      }
    void unsetBasePrice(void)
      {
        flagHasBasePrice = false;
      }
    void setMinimumPrice(double new_value)
      {
        flagHasMinimumPrice = true;
        storeMinimumPrice = new_value;
        textStoreMinimumPrice = "";
      }
    void setMinimumPriceText(std::string new_value)
      {
        flagHasMinimumPrice = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field MinimumPrice of UberFareJSON is not a valid number.");
        textStoreMinimumPrice = new_value;
      }
    void unsetMinimumPrice(void)
      {
        flagHasMinimumPrice = false;
      }
    void setRatePerMinute(double new_value)
      {
        flagHasRatePerMinute = true;
        storeRatePerMinute = new_value;
        textStoreRatePerMinute = "";
      }
    void setRatePerMinuteText(std::string new_value)
      {
        flagHasRatePerMinute = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field RatePerMinute of UberFareJSON is not a valid number.");
        textStoreRatePerMinute = new_value;
      }
    void unsetRatePerMinute(void)
      {
        flagHasRatePerMinute = false;
      }
    void setRatePerDistance(double new_value)
      {
        flagHasRatePerDistance = true;
        storeRatePerDistance = new_value;
        textStoreRatePerDistance = "";
      }
    void setRatePerDistanceText(std::string new_value)
      {
        flagHasRatePerDistance = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field RatePerDistance of UberFareJSON is not a valid number.");
        textStoreRatePerDistance = new_value;
      }
    void unsetRatePerDistance(void)
      {
        flagHasRatePerDistance = false;
      }
    void setDistanceUnit(TypeDistanceUnit new_value)
      {
        flagHasDistanceUnit = true;
        storeDistanceUnit = new_value;
      }
    void setDistanceUnit(const char *chars)
      {
        TypeDistanceUnitKnownValues known = stringToDistanceUnit(chars);
        TypeDistanceUnit new_value;
        if (known == DistanceUnit__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setDistanceUnit(new_value);
      }
    void setDistanceUnit(std::string the_string)
      {
        setDistanceUnit(the_string.c_str());
      }
    void setDistanceUnit(TypeDistanceUnitKnownValues new_value)
      {
        TypeDistanceUnit new_full_value;
        assert(new_value != DistanceUnit__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setDistanceUnit(new_full_value);
      }
    void unsetDistanceUnit(void)
      {
        flagHasDistanceUnit = false;
      }
    void setCancellationFee(double new_value)
      {
        flagHasCancellationFee = true;
        storeCancellationFee = new_value;
        textStoreCancellationFee = "";
      }
    void setCancellationFeeText(std::string new_value)
      {
        flagHasCancellationFee = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field CancellationFee of UberFareJSON is not a valid number.");
        textStoreCancellationFee = new_value;
      }
    void unsetCancellationFee(void)
      {
        flagHasCancellationFee = false;
      }
    void setCurrency(std::string new_value)
      {
        flagHasCurrency = true;
        storeCurrency = new_value;
      }
    void unsetCurrency(void)
      {
        flagHasCurrency = false;
      }
    void initServiceFees(void)
      {
        if (flagHasServiceFees)
          {
            for (size_t num2 = 0; num2 < storeServiceFees.size(); ++num2)
              {
                storeServiceFees[num2]->remove_reference();
              }
          }
        flagHasServiceFees = true;
        storeServiceFees.clear();
      }
    void appendServiceFees(TypeServiceFeesJSON * to_append)
      {
        if (!flagHasServiceFees)
          {
            flagHasServiceFees = true;
            storeServiceFees.clear();
          }
        assert(flagHasServiceFees);
        to_append->add_reference();
        storeServiceFees.push_back(to_append);
      }
    void unsetServiceFees(void)
      {
        if (flagHasServiceFees)
          {
            for (size_t num3 = 0; num3 < storeServiceFees.size(); ++num3)
              {
                storeServiceFees[num3]->remove_reference();
              }
          }
        flagHasServiceFees = false;
        storeServiceFees.clear();
      }

    virtual void extraUberFareAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberFareSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberFareLookup(key);
        if (old_field == NULL)
          {
            extraUberFareAppendPair(key, new_component);
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
        assert(flagHasBasePrice);
        handler->start_pair("BasePrice");
        if (textStoreBasePrice != "")
            handler->number_value(textStoreBasePrice.c_str());
        else if (((double)(long int)storeBasePrice) == storeBasePrice)
            handler->number_value((long int)storeBasePrice);
        else
            handler->number_value(storeBasePrice);
        assert(flagHasMinimumPrice);
        handler->start_pair("MinimumPrice");
        if (textStoreMinimumPrice != "")
            handler->number_value(textStoreMinimumPrice.c_str());
        else if (((double)(long int)storeMinimumPrice) == storeMinimumPrice)
            handler->number_value((long int)storeMinimumPrice);
        else
            handler->number_value(storeMinimumPrice);
        if (flagHasRatePerMinute)
          {
            handler->start_pair("RatePerMinute");
            if (textStoreRatePerMinute != "")
                handler->number_value(textStoreRatePerMinute.c_str());
            else if (((double)(long int)storeRatePerMinute) == storeRatePerMinute)
                handler->number_value((long int)storeRatePerMinute);
            else
                handler->number_value(storeRatePerMinute);
          }
        if (flagHasRatePerDistance)
          {
            handler->start_pair("RatePerDistance");
            if (textStoreRatePerDistance != "")
                handler->number_value(textStoreRatePerDistance.c_str());
            else if (((double)(long int)storeRatePerDistance) == storeRatePerDistance)
                handler->number_value((long int)storeRatePerDistance);
            else
                handler->number_value(storeRatePerDistance);
          }
        assert(flagHasDistanceUnit);
        handler->start_pair("DistanceUnit");
        if (storeDistanceUnit.in_known_list)
          {
            switch (storeDistanceUnit.list_value)
              {
                case DistanceUnit_mile:
                    handler->string_value("mile");
                    break;
                case DistanceUnit_km:
                    handler->string_value("km");
                    break;
                default:
                    assert(false);
              }
          }
        else
          {
                    handler->string_value(storeDistanceUnit.string_value);
          }
        assert(flagHasCancellationFee);
        handler->start_pair("CancellationFee");
        if (textStoreCancellationFee != "")
            handler->number_value(textStoreCancellationFee.c_str());
        else if (((double)(long int)storeCancellationFee) == storeCancellationFee)
            handler->number_value((long int)storeCancellationFee);
        else
            handler->number_value(storeCancellationFee);
        assert(flagHasCurrency);
        handler->start_pair("Currency");
        handler->string_value(storeCurrency);
        assert(flagHasServiceFees);
        handler->start_pair("ServiceFees");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeServiceFees.size(); ++num1)
          {
            storeServiceFees[num1]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBasePrice()))
          {
            return "When parsing the object for %what%, the \"BasePrice\" field was missing.";
          }
        if (!(hasMinimumPrice()))
          {
            return "When parsing the object for %what%, the \"MinimumPrice\" field was missing.";
          }
        if (!(hasDistanceUnit()))
          {
            return "When parsing the object for %what%, the \"DistanceUnit\" field was missing.";
          }
        if (!(hasCancellationFee()))
          {
            return "When parsing the object for %what%, the \"CancellationFee\" field was missing.";
          }
        if (!(hasCurrency()))
          {
            return "When parsing the object for %what%, the \"Currency\" field was missing.";
          }
        if (!(hasServiceFees()))
          {
            return "When parsing the object for %what%, the \"ServiceFees\" field was missing.";
          }
        return NULL;
      }

    static UberFareJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberFareJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberFareJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberFareJSON>, UberFareJSON *, bool> generator("Type UberFare", ignore_extras);
            parse_json_value(text, "Text for UberFareJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberFareJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberFareJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberFareJSON>, UberFareJSON *, bool> generator("Type UberFare", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorBasePrice;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMinimumPrice;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRatePerMinute;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRatePerDistance;
    class FieldGeneratorDistanceUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDistanceUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDistanceUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeDistanceUnitKnownValues known = stringToDistanceUnit(result);
                TypeDistanceUnit new_value;
                if (known == DistanceUnit__none)
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
            virtual void handle_result(TypeDistanceUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDistanceUnit, TypeDistanceUnit, TypeDistanceUnit > fieldGeneratorDistanceUnit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorCancellationFee;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrency;
        JSONHoldingArrayGenerator<TypeServiceFeesJSON::Generator, RCHandle<TypeServiceFeesJSON>, TypeServiceFeesJSON *, bool > fieldGeneratorServiceFees;
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
            UberFareJSON *result = new UberFareJSON();
            assert(result != NULL);
            RCHandle<UberFareJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberFareAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberFareJSON *result)
          {
            if (fieldGeneratorBasePrice.have_value)
              {
                result->setBasePriceText(fieldGeneratorBasePrice.value);
                fieldGeneratorBasePrice.have_value = false;
              }
            else if (!(result->hasBasePrice()))
              {
                error("When parsing the object for %what%, the \"BasePrice\" field was missing.");
              }
            if (fieldGeneratorMinimumPrice.have_value)
              {
                result->setMinimumPriceText(fieldGeneratorMinimumPrice.value);
                fieldGeneratorMinimumPrice.have_value = false;
              }
            else if (!(result->hasMinimumPrice()))
              {
                error("When parsing the object for %what%, the \"MinimumPrice\" field was missing.");
              }
            if (fieldGeneratorRatePerMinute.have_value)
              {
                result->setRatePerMinuteText(fieldGeneratorRatePerMinute.value);
                fieldGeneratorRatePerMinute.have_value = false;
              }
            if (fieldGeneratorRatePerDistance.have_value)
              {
                result->setRatePerDistanceText(fieldGeneratorRatePerDistance.value);
                fieldGeneratorRatePerDistance.have_value = false;
              }
            if (fieldGeneratorDistanceUnit.have_value)
              {
                result->setDistanceUnit(fieldGeneratorDistanceUnit.value);
                fieldGeneratorDistanceUnit.have_value = false;
              }
            else if (!(result->hasDistanceUnit()))
              {
                error("When parsing the object for %what%, the \"DistanceUnit\" field was missing.");
              }
            if (fieldGeneratorCancellationFee.have_value)
              {
                result->setCancellationFeeText(fieldGeneratorCancellationFee.value);
                fieldGeneratorCancellationFee.have_value = false;
              }
            else if (!(result->hasCancellationFee()))
              {
                error("When parsing the object for %what%, the \"CancellationFee\" field was missing.");
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value);
                fieldGeneratorCurrency.have_value = false;
              }
            else if (!(result->hasCurrency()))
              {
                error("When parsing the object for %what%, the \"Currency\" field was missing.");
              }
            if (fieldGeneratorServiceFees.have_value)
              {
                result->initServiceFees();
                size_t count = fieldGeneratorServiceFees.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendServiceFees(fieldGeneratorServiceFees.value[num].referenced());
                  }
                fieldGeneratorServiceFees.value.clear();
                fieldGeneratorServiceFees.have_value = false;
              }
            else if (!(result->hasServiceFees()))
              {
                error("When parsing the object for %what%, the \"ServiceFees\" field was missing.");
              }
          }
        virtual void handle_result(UberFareJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "asePrice") == 0)
                        return &fieldGeneratorBasePrice;
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ncellationFee") == 0)
                                return &fieldGeneratorCancellationFee;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrency") == 0)
                                return &fieldGeneratorCurrency;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "istanceUnit") == 0)
                        return &fieldGeneratorDistanceUnit;
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "inimumPrice") == 0)
                        return &fieldGeneratorMinimumPrice;
                    break;
                case 'R':
                    if (strncmp(&(field_name[1]), "atePer", 6) == 0)
                      {
                        switch ((unsigned char)(field_name[7]))
                          {
                            case 'D':
                                if (strcmp(&(field_name[8]), "istance") == 0)
                                    return &fieldGeneratorRatePerDistance;
                                break;
                            case 'M':
                                if (strcmp(&(field_name[8]), "inute") == 0)
                                    return &fieldGeneratorRatePerMinute;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "erviceFees") == 0)
                        return &fieldGeneratorServiceFees;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorBasePrice("field \"BasePrice\" of the UberFare class"), fieldGeneratorMinimumPrice("field \"MinimumPrice\" of the UberFare class"), fieldGeneratorRatePerMinute("field \"RatePerMinute\" of the UberFare class"), fieldGeneratorRatePerDistance("field \"RatePerDistance\" of the UberFare class"), fieldGeneratorDistanceUnit("field \"DistanceUnit\" of the UberFare class"), fieldGeneratorCancellationFee("field \"CancellationFee\" of the UberFare class"), fieldGeneratorCurrency("field \"Currency\" of the UberFare class"), fieldGeneratorServiceFees("field \"ServiceFees\" of the UberFare class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberFare class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBasePrice.reset();
            fieldGeneratorMinimumPrice.reset();
            fieldGeneratorRatePerMinute.reset();
            fieldGeneratorRatePerDistance.reset();
            fieldGeneratorDistanceUnit.reset();
            fieldGeneratorCancellationFee.reset();
            fieldGeneratorCurrency.reset();
            fieldGeneratorServiceFees.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERFAREJSON_H */
