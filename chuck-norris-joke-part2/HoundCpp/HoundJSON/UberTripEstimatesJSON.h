/* file "UberTripEstimatesJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERTRIPESTIMATESJSON_H
#define UBERTRIPESTIMATESJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberTripEstimatesJSON : public ReferenceCounted
  {
  private:
    bool flagHasPriceEstimateRange;
    std::string storePriceEstimateRange;
    bool flagHasLowPriceEstimate;
    double storeLowPriceEstimate;
    std::string textStoreLowPriceEstimate;
    bool flagHasHighPriceEstimate;
    double storeHighPriceEstimate;
    std::string textStoreHighPriceEstimate;
    bool flagHasCurrency;
    std::string storeCurrency;
    bool flagHasSurgeMultiplier;
    double storeSurgeMultiplier;
    std::string textStoreSurgeMultiplier;
    bool flagHasDurationEstimateInSeconds;
    double storeDurationEstimateInSeconds;
    std::string textStoreDurationEstimateInSeconds;
    bool flagHasDistanceEstimateInMiles;
    double storeDistanceEstimateInMiles;
    std::string textStoreDistanceEstimateInMiles;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberTripEstimatesJSON(const UberTripEstimatesJSON &);
    UberTripEstimatesJSON & operator=(const UberTripEstimatesJSON &other);

    void  fromJSONPriceEstimateRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLowPriceEstimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHighPriceEstimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeMultiplier(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDurationEstimateInSeconds(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceEstimateInMiles(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberTripEstimatesJSON(void);
    virtual ~UberTripEstimatesJSON(void);
    bool  hasPriceEstimateRange(void) const;
    std::string  getPriceEstimateRange(void);
    const std::string  getPriceEstimateRange(void) const;
    bool  hasLowPriceEstimate(void) const;
    double  getLowPriceEstimate(void);
    const double  getLowPriceEstimate(void) const;
    std::string  getLowPriceEstimateAsText(void) const;
    bool  hasHighPriceEstimate(void) const;
    double  getHighPriceEstimate(void);
    const double  getHighPriceEstimate(void) const;
    std::string  getHighPriceEstimateAsText(void) const;
    bool  hasCurrency(void) const;
    std::string  getCurrency(void);
    const std::string  getCurrency(void) const;
    bool  hasSurgeMultiplier(void) const;
    double  getSurgeMultiplier(void);
    const double  getSurgeMultiplier(void) const;
    std::string  getSurgeMultiplierAsText(void) const;
    bool  hasDurationEstimateInSeconds(void) const;
    double  getDurationEstimateInSeconds(void);
    const double  getDurationEstimateInSeconds(void) const;
    std::string  getDurationEstimateInSecondsAsText(void) const;
    bool  hasDistanceEstimateInMiles(void) const;
    double  getDistanceEstimateInMiles(void);
    const double  getDistanceEstimateInMiles(void) const;
    std::string  getDistanceEstimateInMilesAsText(void) const;

    virtual size_t extraUberTripEstimatesComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberTripEstimatesComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberTripEstimatesComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberTripEstimatesComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberTripEstimatesLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberTripEstimatesLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setPriceEstimateRange(std::string new_value)
      {
        flagHasPriceEstimateRange = true;
        storePriceEstimateRange = new_value;
      }
    void unsetPriceEstimateRange(void)
      {
        flagHasPriceEstimateRange = false;
      }
    void setLowPriceEstimate(double new_value)
      {
        flagHasLowPriceEstimate = true;
        storeLowPriceEstimate = new_value;
        textStoreLowPriceEstimate = "";
      }
    void setLowPriceEstimateText(std::string new_value)
      {
        flagHasLowPriceEstimate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field LowPriceEstimate of UberTripEstimatesJSON is not a valid number.");
        textStoreLowPriceEstimate = new_value;
      }
    void unsetLowPriceEstimate(void)
      {
        flagHasLowPriceEstimate = false;
      }
    void setHighPriceEstimate(double new_value)
      {
        flagHasHighPriceEstimate = true;
        storeHighPriceEstimate = new_value;
        textStoreHighPriceEstimate = "";
      }
    void setHighPriceEstimateText(std::string new_value)
      {
        flagHasHighPriceEstimate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HighPriceEstimate of UberTripEstimatesJSON is not a valid number.");
        textStoreHighPriceEstimate = new_value;
      }
    void unsetHighPriceEstimate(void)
      {
        flagHasHighPriceEstimate = false;
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
            throw("The text value for field SurgeMultiplier of UberTripEstimatesJSON is not a valid number.");
        textStoreSurgeMultiplier = new_value;
      }
    void unsetSurgeMultiplier(void)
      {
        flagHasSurgeMultiplier = false;
      }
    void setDurationEstimateInSeconds(double new_value)
      {
        flagHasDurationEstimateInSeconds = true;
        storeDurationEstimateInSeconds = new_value;
        textStoreDurationEstimateInSeconds = "";
      }
    void setDurationEstimateInSecondsText(std::string new_value)
      {
        flagHasDurationEstimateInSeconds = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DurationEstimateInSeconds of UberTripEstimatesJSON is not a valid number.");
        textStoreDurationEstimateInSeconds = new_value;
      }
    void unsetDurationEstimateInSeconds(void)
      {
        flagHasDurationEstimateInSeconds = false;
      }
    void setDistanceEstimateInMiles(double new_value)
      {
        flagHasDistanceEstimateInMiles = true;
        storeDistanceEstimateInMiles = new_value;
        textStoreDistanceEstimateInMiles = "";
      }
    void setDistanceEstimateInMilesText(std::string new_value)
      {
        flagHasDistanceEstimateInMiles = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DistanceEstimateInMiles of UberTripEstimatesJSON is not a valid number.");
        textStoreDistanceEstimateInMiles = new_value;
      }
    void unsetDistanceEstimateInMiles(void)
      {
        flagHasDistanceEstimateInMiles = false;
      }

    virtual void extraUberTripEstimatesAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberTripEstimatesSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberTripEstimatesLookup(key);
        if (old_field == NULL)
          {
            extraUberTripEstimatesAppendPair(key, new_component);
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
        assert(flagHasPriceEstimateRange);
        handler->start_pair("PriceEstimateRange");
        handler->string_value(storePriceEstimateRange);
        if (flagHasLowPriceEstimate)
          {
            handler->start_pair("LowPriceEstimate");
            if (textStoreLowPriceEstimate != "")
                handler->number_value(textStoreLowPriceEstimate.c_str());
            else if (((double)(long int)storeLowPriceEstimate) == storeLowPriceEstimate)
                handler->number_value((long int)storeLowPriceEstimate);
            else
                handler->number_value(storeLowPriceEstimate);
          }
        if (flagHasHighPriceEstimate)
          {
            handler->start_pair("HighPriceEstimate");
            if (textStoreHighPriceEstimate != "")
                handler->number_value(textStoreHighPriceEstimate.c_str());
            else if (((double)(long int)storeHighPriceEstimate) == storeHighPriceEstimate)
                handler->number_value((long int)storeHighPriceEstimate);
            else
                handler->number_value(storeHighPriceEstimate);
          }
        if (flagHasCurrency)
          {
            handler->start_pair("Currency");
            handler->string_value(storeCurrency);
          }
        assert(flagHasSurgeMultiplier);
        handler->start_pair("SurgeMultiplier");
        if (textStoreSurgeMultiplier != "")
            handler->number_value(textStoreSurgeMultiplier.c_str());
        else if (((double)(long int)storeSurgeMultiplier) == storeSurgeMultiplier)
            handler->number_value((long int)storeSurgeMultiplier);
        else
            handler->number_value(storeSurgeMultiplier);
        assert(flagHasDurationEstimateInSeconds);
        handler->start_pair("DurationEstimateInSeconds");
        if (textStoreDurationEstimateInSeconds != "")
            handler->number_value(textStoreDurationEstimateInSeconds.c_str());
        else if (((double)(long int)storeDurationEstimateInSeconds) == storeDurationEstimateInSeconds)
            handler->number_value((long int)storeDurationEstimateInSeconds);
        else
            handler->number_value(storeDurationEstimateInSeconds);
        assert(flagHasDistanceEstimateInMiles);
        handler->start_pair("DistanceEstimateInMiles");
        if (textStoreDistanceEstimateInMiles != "")
            handler->number_value(textStoreDistanceEstimateInMiles.c_str());
        else if (((double)(long int)storeDistanceEstimateInMiles) == storeDistanceEstimateInMiles)
            handler->number_value((long int)storeDistanceEstimateInMiles);
        else
            handler->number_value(storeDistanceEstimateInMiles);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasPriceEstimateRange()))
          {
            return "When parsing the object for %what%, the \"PriceEstimateRange\" field was missing.";
          }
        if (!(hasSurgeMultiplier()))
          {
            return "When parsing the object for %what%, the \"SurgeMultiplier\" field was missing.";
          }
        if (!(hasDurationEstimateInSeconds()))
          {
            return "When parsing the object for %what%, the \"DurationEstimateInSeconds\" field was missing.";
          }
        if (!(hasDistanceEstimateInMiles()))
          {
            return "When parsing the object for %what%, the \"DistanceEstimateInMiles\" field was missing.";
          }
        return NULL;
      }

    static UberTripEstimatesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberTripEstimatesJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberTripEstimatesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTripEstimatesJSON>, UberTripEstimatesJSON *, bool> generator("Type UberTripEstimates", ignore_extras);
            parse_json_value(text, "Text for UberTripEstimatesJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberTripEstimatesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberTripEstimatesJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTripEstimatesJSON>, UberTripEstimatesJSON *, bool> generator("Type UberTripEstimates", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPriceEstimateRange;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLowPriceEstimate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHighPriceEstimate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCurrency;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorSurgeMultiplier;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDurationEstimateInSeconds;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDistanceEstimateInMiles;
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
            UberTripEstimatesJSON *result = new UberTripEstimatesJSON();
            assert(result != NULL);
            RCHandle<UberTripEstimatesJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberTripEstimatesAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberTripEstimatesJSON *result)
          {
            if (fieldGeneratorPriceEstimateRange.have_value)
              {
                result->setPriceEstimateRange(fieldGeneratorPriceEstimateRange.value);
                fieldGeneratorPriceEstimateRange.have_value = false;
              }
            else if (!(result->hasPriceEstimateRange()))
              {
                error("When parsing the object for %what%, the \"PriceEstimateRange\" field was missing.");
              }
            if (fieldGeneratorLowPriceEstimate.have_value)
              {
                result->setLowPriceEstimateText(fieldGeneratorLowPriceEstimate.value);
                fieldGeneratorLowPriceEstimate.have_value = false;
              }
            if (fieldGeneratorHighPriceEstimate.have_value)
              {
                result->setHighPriceEstimateText(fieldGeneratorHighPriceEstimate.value);
                fieldGeneratorHighPriceEstimate.have_value = false;
              }
            if (fieldGeneratorCurrency.have_value)
              {
                result->setCurrency(fieldGeneratorCurrency.value);
                fieldGeneratorCurrency.have_value = false;
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
            if (fieldGeneratorDurationEstimateInSeconds.have_value)
              {
                result->setDurationEstimateInSecondsText(fieldGeneratorDurationEstimateInSeconds.value);
                fieldGeneratorDurationEstimateInSeconds.have_value = false;
              }
            else if (!(result->hasDurationEstimateInSeconds()))
              {
                error("When parsing the object for %what%, the \"DurationEstimateInSeconds\" field was missing.");
              }
            if (fieldGeneratorDistanceEstimateInMiles.have_value)
              {
                result->setDistanceEstimateInMilesText(fieldGeneratorDistanceEstimateInMiles.value);
                fieldGeneratorDistanceEstimateInMiles.have_value = false;
              }
            else if (!(result->hasDistanceEstimateInMiles()))
              {
                error("When parsing the object for %what%, the \"DistanceEstimateInMiles\" field was missing.");
              }
          }
        virtual void handle_result(UberTripEstimatesJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "urrency") == 0)
                        return &fieldGeneratorCurrency;
                    break;
                case 'D':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "stanceEstimateInMiles") == 0)
                                return &fieldGeneratorDistanceEstimateInMiles;
                            break;
                        case 'u':
                            if (strcmp(&(field_name[2]), "rationEstimateInSeconds") == 0)
                                return &fieldGeneratorDurationEstimateInSeconds;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ighPriceEstimate") == 0)
                        return &fieldGeneratorHighPriceEstimate;
                    break;
                case 'L':
                    if (strcmp(&(field_name[1]), "owPriceEstimate") == 0)
                        return &fieldGeneratorLowPriceEstimate;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "riceEstimateRange") == 0)
                        return &fieldGeneratorPriceEstimateRange;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "urgeMultiplier") == 0)
                        return &fieldGeneratorSurgeMultiplier;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPriceEstimateRange("field \"PriceEstimateRange\" of the UberTripEstimates class"), fieldGeneratorLowPriceEstimate("field \"LowPriceEstimate\" of the UberTripEstimates class"), fieldGeneratorHighPriceEstimate("field \"HighPriceEstimate\" of the UberTripEstimates class"), fieldGeneratorCurrency("field \"Currency\" of the UberTripEstimates class"), fieldGeneratorSurgeMultiplier("field \"SurgeMultiplier\" of the UberTripEstimates class"), fieldGeneratorDurationEstimateInSeconds("field \"DurationEstimateInSeconds\" of the UberTripEstimates class"), fieldGeneratorDistanceEstimateInMiles("field \"DistanceEstimateInMiles\" of the UberTripEstimates class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberTripEstimates class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPriceEstimateRange.reset();
            fieldGeneratorLowPriceEstimate.reset();
            fieldGeneratorHighPriceEstimate.reset();
            fieldGeneratorCurrency.reset();
            fieldGeneratorSurgeMultiplier.reset();
            fieldGeneratorDurationEstimateInSeconds.reset();
            fieldGeneratorDistanceEstimateInMiles.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERTRIPESTIMATESJSON_H */
