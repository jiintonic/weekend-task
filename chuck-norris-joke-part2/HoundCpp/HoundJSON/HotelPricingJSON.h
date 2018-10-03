/* file "HotelPricingJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELPRICINGJSON_H
#define HOTELPRICINGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONBooleanGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelPricingJSON : public ReferenceCounted
  {
  private:
    bool flagHasHotelRateCurrency;
    std::string storeHotelRateCurrency;
    bool flagHasHotelRateCurrencySymbol;
    std::string storeHotelRateCurrencySymbol;
    bool flagHasHotelBaseRate;
    double storeHotelBaseRate;
    std::string textStoreHotelBaseRate;
    bool flagHasHotelNightlyBaseRate;
    double storeHotelNightlyBaseRate;
    std::string textStoreHotelNightlyBaseRate;
    bool flagHasHotelNightlyMinBaseRate;
    double storeHotelNightlyMinBaseRate;
    std::string textStoreHotelNightlyMinBaseRate;
    bool flagHasHotelNightlyMaxBaseRate;
    double storeHotelNightlyMaxBaseRate;
    std::string textStoreHotelNightlyMaxBaseRate;
    bool flagHasHotelShowPriceRange;
    bool storeHotelShowPriceRange;
    bool flagHasHotelTaxesAndFeesRate;
    double storeHotelTaxesAndFeesRate;
    std::string textStoreHotelTaxesAndFeesRate;
    bool flagHasHotelMandatoryTaxesAndFeesRate;
    double storeHotelMandatoryTaxesAndFeesRate;
    std::string textStoreHotelMandatoryTaxesAndFeesRate;
    bool flagHasHotelTotalRate;
    double storeHotelTotalRate;
    std::string textStoreHotelTotalRate;
    bool flagHasHotelNightlyTotalRate;
    double storeHotelNightlyTotalRate;
    std::string textStoreHotelNightlyTotalRate;

    HotelPricingJSON(const HotelPricingJSON &);
    HotelPricingJSON & operator=(const HotelPricingJSON &other);

    void  fromJSONHotelRateCurrency(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelRateCurrencySymbol(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelBaseRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelNightlyBaseRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelNightlyMinBaseRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelNightlyMaxBaseRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelShowPriceRange(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelTaxesAndFeesRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelMandatoryTaxesAndFeesRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelTotalRate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelNightlyTotalRate(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelPricingJSON(void);
    virtual ~HotelPricingJSON(void);
    bool  hasHotelRateCurrency(void) const;
    std::string  getHotelRateCurrency(void);
    const std::string  getHotelRateCurrency(void) const;
    bool  hasHotelRateCurrencySymbol(void) const;
    std::string  getHotelRateCurrencySymbol(void);
    const std::string  getHotelRateCurrencySymbol(void) const;
    bool  hasHotelBaseRate(void) const;
    double  getHotelBaseRate(void);
    const double  getHotelBaseRate(void) const;
    std::string  getHotelBaseRateAsText(void) const;
    bool  hasHotelNightlyBaseRate(void) const;
    double  getHotelNightlyBaseRate(void);
    const double  getHotelNightlyBaseRate(void) const;
    std::string  getHotelNightlyBaseRateAsText(void) const;
    bool  hasHotelNightlyMinBaseRate(void) const;
    double  getHotelNightlyMinBaseRate(void);
    const double  getHotelNightlyMinBaseRate(void) const;
    std::string  getHotelNightlyMinBaseRateAsText(void) const;
    bool  hasHotelNightlyMaxBaseRate(void) const;
    double  getHotelNightlyMaxBaseRate(void);
    const double  getHotelNightlyMaxBaseRate(void) const;
    std::string  getHotelNightlyMaxBaseRateAsText(void) const;
    bool  hasHotelShowPriceRange(void) const;
    bool  getHotelShowPriceRange(void);
    const bool  getHotelShowPriceRange(void) const;
    bool  hasHotelTaxesAndFeesRate(void) const;
    double  getHotelTaxesAndFeesRate(void);
    const double  getHotelTaxesAndFeesRate(void) const;
    std::string  getHotelTaxesAndFeesRateAsText(void) const;
    bool  hasHotelMandatoryTaxesAndFeesRate(void) const;
    double  getHotelMandatoryTaxesAndFeesRate(void);
    const double  getHotelMandatoryTaxesAndFeesRate(void) const;
    std::string  getHotelMandatoryTaxesAndFeesRateAsText(void) const;
    bool  hasHotelTotalRate(void) const;
    double  getHotelTotalRate(void);
    const double  getHotelTotalRate(void) const;
    std::string  getHotelTotalRateAsText(void) const;
    bool  hasHotelNightlyTotalRate(void) const;
    double  getHotelNightlyTotalRate(void);
    const double  getHotelNightlyTotalRate(void) const;
    std::string  getHotelNightlyTotalRateAsText(void) const;


    void setHotelRateCurrency(std::string new_value)
      {
        flagHasHotelRateCurrency = true;
        storeHotelRateCurrency = new_value;
      }
    void unsetHotelRateCurrency(void)
      {
        flagHasHotelRateCurrency = false;
      }
    void setHotelRateCurrencySymbol(std::string new_value)
      {
        flagHasHotelRateCurrencySymbol = true;
        storeHotelRateCurrencySymbol = new_value;
      }
    void unsetHotelRateCurrencySymbol(void)
      {
        flagHasHotelRateCurrencySymbol = false;
      }
    void setHotelBaseRate(double new_value)
      {
        flagHasHotelBaseRate = true;
        if (new_value < 0)
            throw("The value for field HotelBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelBaseRate = new_value;
        textStoreHotelBaseRate = "";
      }
    void setHotelBaseRateText(std::string new_value)
      {
        flagHasHotelBaseRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelBaseRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelBaseRate = new_value;
      }
    void unsetHotelBaseRate(void)
      {
        flagHasHotelBaseRate = false;
      }
    void setHotelNightlyBaseRate(double new_value)
      {
        flagHasHotelNightlyBaseRate = true;
        if (new_value < 0)
            throw("The value for field HotelNightlyBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelNightlyBaseRate = new_value;
        textStoreHotelNightlyBaseRate = "";
      }
    void setHotelNightlyBaseRateText(std::string new_value)
      {
        flagHasHotelNightlyBaseRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelNightlyBaseRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelNightlyBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelNightlyBaseRate = new_value;
      }
    void unsetHotelNightlyBaseRate(void)
      {
        flagHasHotelNightlyBaseRate = false;
      }
    void setHotelNightlyMinBaseRate(double new_value)
      {
        flagHasHotelNightlyMinBaseRate = true;
        if (new_value < 0)
            throw("The value for field HotelNightlyMinBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelNightlyMinBaseRate = new_value;
        textStoreHotelNightlyMinBaseRate = "";
      }
    void setHotelNightlyMinBaseRateText(std::string new_value)
      {
        flagHasHotelNightlyMinBaseRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelNightlyMinBaseRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelNightlyMinBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelNightlyMinBaseRate = new_value;
      }
    void unsetHotelNightlyMinBaseRate(void)
      {
        flagHasHotelNightlyMinBaseRate = false;
      }
    void setHotelNightlyMaxBaseRate(double new_value)
      {
        flagHasHotelNightlyMaxBaseRate = true;
        if (new_value < 0)
            throw("The value for field HotelNightlyMaxBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelNightlyMaxBaseRate = new_value;
        textStoreHotelNightlyMaxBaseRate = "";
      }
    void setHotelNightlyMaxBaseRateText(std::string new_value)
      {
        flagHasHotelNightlyMaxBaseRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelNightlyMaxBaseRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelNightlyMaxBaseRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelNightlyMaxBaseRate = new_value;
      }
    void unsetHotelNightlyMaxBaseRate(void)
      {
        flagHasHotelNightlyMaxBaseRate = false;
      }
    void setHotelShowPriceRange(bool new_value)
      {
        flagHasHotelShowPriceRange = true;
        storeHotelShowPriceRange = new_value;
      }
    void unsetHotelShowPriceRange(void)
      {
        flagHasHotelShowPriceRange = false;
      }
    void setHotelTaxesAndFeesRate(double new_value)
      {
        flagHasHotelTaxesAndFeesRate = true;
        if (new_value < 0)
            throw("The value for field HotelTaxesAndFeesRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelTaxesAndFeesRate = new_value;
        textStoreHotelTaxesAndFeesRate = "";
      }
    void setHotelTaxesAndFeesRateText(std::string new_value)
      {
        flagHasHotelTaxesAndFeesRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelTaxesAndFeesRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelTaxesAndFeesRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelTaxesAndFeesRate = new_value;
      }
    void unsetHotelTaxesAndFeesRate(void)
      {
        flagHasHotelTaxesAndFeesRate = false;
      }
    void setHotelMandatoryTaxesAndFeesRate(double new_value)
      {
        flagHasHotelMandatoryTaxesAndFeesRate = true;
        if (new_value < 0)
            throw("The value for field HotelMandatoryTaxesAndFeesRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelMandatoryTaxesAndFeesRate = new_value;
        textStoreHotelMandatoryTaxesAndFeesRate = "";
      }
    void setHotelMandatoryTaxesAndFeesRateText(std::string new_value)
      {
        flagHasHotelMandatoryTaxesAndFeesRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelMandatoryTaxesAndFeesRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelMandatoryTaxesAndFeesRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelMandatoryTaxesAndFeesRate = new_value;
      }
    void unsetHotelMandatoryTaxesAndFeesRate(void)
      {
        flagHasHotelMandatoryTaxesAndFeesRate = false;
      }
    void setHotelTotalRate(double new_value)
      {
        flagHasHotelTotalRate = true;
        if (new_value < 0)
            throw("The value for field HotelTotalRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelTotalRate = new_value;
        textStoreHotelTotalRate = "";
      }
    void setHotelTotalRateText(std::string new_value)
      {
        flagHasHotelTotalRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelTotalRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelTotalRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelTotalRate = new_value;
      }
    void unsetHotelTotalRate(void)
      {
        flagHasHotelTotalRate = false;
      }
    void setHotelNightlyTotalRate(double new_value)
      {
        flagHasHotelNightlyTotalRate = true;
        if (new_value < 0)
            throw("The value for field HotelNightlyTotalRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        storeHotelNightlyTotalRate = new_value;
        textStoreHotelNightlyTotalRate = "";
      }
    void setHotelNightlyTotalRateText(std::string new_value)
      {
        flagHasHotelNightlyTotalRate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelNightlyTotalRate of HotelPricingJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelNightlyTotalRate of HotelPricingJSON is less than the lower bound (0) for that field.");
        textStoreHotelNightlyTotalRate = new_value;
      }
    void unsetHotelNightlyTotalRate(void)
      {
        flagHasHotelNightlyTotalRate = false;
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasHotelRateCurrency)
          {
            handler->start_pair("HotelRateCurrency");
            handler->string_value(storeHotelRateCurrency);
          }
        if (flagHasHotelRateCurrencySymbol)
          {
            handler->start_pair("HotelRateCurrencySymbol");
            handler->string_value(storeHotelRateCurrencySymbol);
          }
        if (flagHasHotelBaseRate)
          {
            handler->start_pair("HotelBaseRate");
            if (textStoreHotelBaseRate != "")
                handler->number_value(textStoreHotelBaseRate.c_str());
            else if (((double)(long int)storeHotelBaseRate) == storeHotelBaseRate)
                handler->number_value((long int)storeHotelBaseRate);
            else
                handler->number_value(storeHotelBaseRate);
          }
        if (flagHasHotelNightlyBaseRate)
          {
            handler->start_pair("HotelNightlyBaseRate");
            if (textStoreHotelNightlyBaseRate != "")
                handler->number_value(textStoreHotelNightlyBaseRate.c_str());
            else if (((double)(long int)storeHotelNightlyBaseRate) == storeHotelNightlyBaseRate)
                handler->number_value((long int)storeHotelNightlyBaseRate);
            else
                handler->number_value(storeHotelNightlyBaseRate);
          }
        if (flagHasHotelNightlyMinBaseRate)
          {
            handler->start_pair("HotelNightlyMinBaseRate");
            if (textStoreHotelNightlyMinBaseRate != "")
                handler->number_value(textStoreHotelNightlyMinBaseRate.c_str());
            else if (((double)(long int)storeHotelNightlyMinBaseRate) == storeHotelNightlyMinBaseRate)
                handler->number_value((long int)storeHotelNightlyMinBaseRate);
            else
                handler->number_value(storeHotelNightlyMinBaseRate);
          }
        if (flagHasHotelNightlyMaxBaseRate)
          {
            handler->start_pair("HotelNightlyMaxBaseRate");
            if (textStoreHotelNightlyMaxBaseRate != "")
                handler->number_value(textStoreHotelNightlyMaxBaseRate.c_str());
            else if (((double)(long int)storeHotelNightlyMaxBaseRate) == storeHotelNightlyMaxBaseRate)
                handler->number_value((long int)storeHotelNightlyMaxBaseRate);
            else
                handler->number_value(storeHotelNightlyMaxBaseRate);
          }
        if (flagHasHotelShowPriceRange)
          {
            handler->start_pair("HotelShowPriceRange");
            handler->boolean_value(storeHotelShowPriceRange);
          }
        if (flagHasHotelTaxesAndFeesRate)
          {
            handler->start_pair("HotelTaxesAndFeesRate");
            if (textStoreHotelTaxesAndFeesRate != "")
                handler->number_value(textStoreHotelTaxesAndFeesRate.c_str());
            else if (((double)(long int)storeHotelTaxesAndFeesRate) == storeHotelTaxesAndFeesRate)
                handler->number_value((long int)storeHotelTaxesAndFeesRate);
            else
                handler->number_value(storeHotelTaxesAndFeesRate);
          }
        if (flagHasHotelMandatoryTaxesAndFeesRate)
          {
            handler->start_pair("HotelMandatoryTaxesAndFeesRate");
            if (textStoreHotelMandatoryTaxesAndFeesRate != "")
                handler->number_value(textStoreHotelMandatoryTaxesAndFeesRate.c_str());
            else if (((double)(long int)storeHotelMandatoryTaxesAndFeesRate) == storeHotelMandatoryTaxesAndFeesRate)
                handler->number_value((long int)storeHotelMandatoryTaxesAndFeesRate);
            else
                handler->number_value(storeHotelMandatoryTaxesAndFeesRate);
          }
        if (flagHasHotelTotalRate)
          {
            handler->start_pair("HotelTotalRate");
            if (textStoreHotelTotalRate != "")
                handler->number_value(textStoreHotelTotalRate.c_str());
            else if (((double)(long int)storeHotelTotalRate) == storeHotelTotalRate)
                handler->number_value((long int)storeHotelTotalRate);
            else
                handler->number_value(storeHotelTotalRate);
          }
        if (flagHasHotelNightlyTotalRate)
          {
            handler->start_pair("HotelNightlyTotalRate");
            if (textStoreHotelNightlyTotalRate != "")
                handler->number_value(textStoreHotelNightlyTotalRate.c_str());
            else if (((double)(long int)storeHotelNightlyTotalRate) == storeHotelNightlyTotalRate)
                handler->number_value((long int)storeHotelNightlyTotalRate);
            else
                handler->number_value(storeHotelNightlyTotalRate);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HotelPricingJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelPricingJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelPricingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool> generator("Type HotelPricing", ignore_extras);
            parse_json_value(text, "Text for HotelPricingJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelPricingJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelPricingJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool> generator("Type HotelPricing", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelRateCurrency;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelRateCurrencySymbol;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelBaseRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelNightlyBaseRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelNightlyMinBaseRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelNightlyMaxBaseRate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHotelShowPriceRange;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelTaxesAndFeesRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelMandatoryTaxesAndFeesRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelTotalRate;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelNightlyTotalRate;


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
            HotelPricingJSON *result = new HotelPricingJSON();
            assert(result != NULL);
            RCHandle<HotelPricingJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(HotelPricingJSON *result)
          {
            if (fieldGeneratorHotelRateCurrency.have_value)
              {
                result->setHotelRateCurrency(fieldGeneratorHotelRateCurrency.value);
                fieldGeneratorHotelRateCurrency.have_value = false;
              }
            if (fieldGeneratorHotelRateCurrencySymbol.have_value)
              {
                result->setHotelRateCurrencySymbol(fieldGeneratorHotelRateCurrencySymbol.value);
                fieldGeneratorHotelRateCurrencySymbol.have_value = false;
              }
            if (fieldGeneratorHotelBaseRate.have_value)
              {
                result->setHotelBaseRateText(fieldGeneratorHotelBaseRate.value);
                fieldGeneratorHotelBaseRate.have_value = false;
              }
            if (fieldGeneratorHotelNightlyBaseRate.have_value)
              {
                result->setHotelNightlyBaseRateText(fieldGeneratorHotelNightlyBaseRate.value);
                fieldGeneratorHotelNightlyBaseRate.have_value = false;
              }
            if (fieldGeneratorHotelNightlyMinBaseRate.have_value)
              {
                result->setHotelNightlyMinBaseRateText(fieldGeneratorHotelNightlyMinBaseRate.value);
                fieldGeneratorHotelNightlyMinBaseRate.have_value = false;
              }
            if (fieldGeneratorHotelNightlyMaxBaseRate.have_value)
              {
                result->setHotelNightlyMaxBaseRateText(fieldGeneratorHotelNightlyMaxBaseRate.value);
                fieldGeneratorHotelNightlyMaxBaseRate.have_value = false;
              }
            if (fieldGeneratorHotelShowPriceRange.have_value)
              {
                result->setHotelShowPriceRange(fieldGeneratorHotelShowPriceRange.value);
                fieldGeneratorHotelShowPriceRange.have_value = false;
              }
            if (fieldGeneratorHotelTaxesAndFeesRate.have_value)
              {
                result->setHotelTaxesAndFeesRateText(fieldGeneratorHotelTaxesAndFeesRate.value);
                fieldGeneratorHotelTaxesAndFeesRate.have_value = false;
              }
            if (fieldGeneratorHotelMandatoryTaxesAndFeesRate.have_value)
              {
                result->setHotelMandatoryTaxesAndFeesRateText(fieldGeneratorHotelMandatoryTaxesAndFeesRate.value);
                fieldGeneratorHotelMandatoryTaxesAndFeesRate.have_value = false;
              }
            if (fieldGeneratorHotelTotalRate.have_value)
              {
                result->setHotelTotalRateText(fieldGeneratorHotelTotalRate.value);
                fieldGeneratorHotelTotalRate.have_value = false;
              }
            if (fieldGeneratorHotelNightlyTotalRate.have_value)
              {
                result->setHotelNightlyTotalRateText(fieldGeneratorHotelNightlyTotalRate.value);
                fieldGeneratorHotelNightlyTotalRate.have_value = false;
              }
          }
        virtual void handle_result(HotelPricingJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Hotel", 5) == 0)
              {
                switch ((unsigned char)(field_name[5]))
                  {
                    case 'B':
                        if (strcmp(&(field_name[6]), "aseRate") == 0)
                            return &fieldGeneratorHotelBaseRate;
                        break;
                    case 'M':
                        if (strcmp(&(field_name[6]), "andatoryTaxesAndFeesRate") == 0)
                            return &fieldGeneratorHotelMandatoryTaxesAndFeesRate;
                        break;
                    case 'N':
                        if (strncmp(&(field_name[6]), "ightly", 6) == 0)
                          {
                            switch ((unsigned char)(field_name[12]))
                              {
                                case 'B':
                                    if (strcmp(&(field_name[13]), "aseRate") == 0)
                                        return &fieldGeneratorHotelNightlyBaseRate;
                                    break;
                                case 'M':
                                    switch ((unsigned char)(field_name[13]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[14]), "xBaseRate") == 0)
                                                return &fieldGeneratorHotelNightlyMaxBaseRate;
                                            break;
                                        case 'i':
                                            if (strcmp(&(field_name[14]), "nBaseRate") == 0)
                                                return &fieldGeneratorHotelNightlyMinBaseRate;
                                            break;
                                        default:
                                            break;
                                      }
                                    break;
                                case 'T':
                                    if (strcmp(&(field_name[13]), "otalRate") == 0)
                                        return &fieldGeneratorHotelNightlyTotalRate;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'R':
                        if (strncmp(&(field_name[6]), "ateCurrency", 11) == 0)
                          {
                            switch ((unsigned char)(field_name[17]))
                              {
                                case 0:
                                    return &fieldGeneratorHotelRateCurrency;
                                case 'S':
                                    if (strcmp(&(field_name[18]), "ymbol") == 0)
                                        return &fieldGeneratorHotelRateCurrencySymbol;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'S':
                        if (strcmp(&(field_name[6]), "howPriceRange") == 0)
                            return &fieldGeneratorHotelShowPriceRange;
                        break;
                    case 'T':
                        switch ((unsigned char)(field_name[6]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[7]), "xesAndFeesRate") == 0)
                                    return &fieldGeneratorHotelTaxesAndFeesRate;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[7]), "talRate") == 0)
                                    return &fieldGeneratorHotelTotalRate;
                                break;
                            default:
                                break;
                          }
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorHotelRateCurrency("field \"HotelRateCurrency\" of the HotelPricing class"), fieldGeneratorHotelRateCurrencySymbol("field \"HotelRateCurrencySymbol\" of the HotelPricing class"), fieldGeneratorHotelBaseRate("field \"HotelBaseRate\" of the HotelPricing class"), fieldGeneratorHotelNightlyBaseRate("field \"HotelNightlyBaseRate\" of the HotelPricing class"), fieldGeneratorHotelNightlyMinBaseRate("field \"HotelNightlyMinBaseRate\" of the HotelPricing class"), fieldGeneratorHotelNightlyMaxBaseRate("field \"HotelNightlyMaxBaseRate\" of the HotelPricing class"), fieldGeneratorHotelShowPriceRange("field \"HotelShowPriceRange\" of the HotelPricing class"), fieldGeneratorHotelTaxesAndFeesRate("field \"HotelTaxesAndFeesRate\" of the HotelPricing class"), fieldGeneratorHotelMandatoryTaxesAndFeesRate("field \"HotelMandatoryTaxesAndFeesRate\" of the HotelPricing class"), fieldGeneratorHotelTotalRate("field \"HotelTotalRate\" of the HotelPricing class"), fieldGeneratorHotelNightlyTotalRate("field \"HotelNightlyTotalRate\" of the HotelPricing class")
          {
            set_what("the HotelPricing class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHotelRateCurrency.reset();
            fieldGeneratorHotelRateCurrencySymbol.reset();
            fieldGeneratorHotelBaseRate.reset();
            fieldGeneratorHotelNightlyBaseRate.reset();
            fieldGeneratorHotelNightlyMinBaseRate.reset();
            fieldGeneratorHotelNightlyMaxBaseRate.reset();
            fieldGeneratorHotelShowPriceRange.reset();
            fieldGeneratorHotelTaxesAndFeesRate.reset();
            fieldGeneratorHotelMandatoryTaxesAndFeesRate.reset();
            fieldGeneratorHotelTotalRate.reset();
            fieldGeneratorHotelNightlyTotalRate.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* HOTELPRICINGJSON_H */
