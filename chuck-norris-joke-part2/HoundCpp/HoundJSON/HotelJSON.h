/* file "HotelJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOTELJSON_H
#define HOTELJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include <vector>
#include <string>
#include "OInteger.h"
#include "HotelPricingJSON.h"
#include "DateAndOrTimeJSON.h"
#include "HotelPricingJSON.h"
#include "HotelPricingJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HotelJSON : public ReferenceCounted
  {
  public:
    enum TypeDistanceFromReferenceUnit
      {
        DistanceFromReferenceUnit_km,
        DistanceFromReferenceUnit_mi
      };

    static TypeDistanceFromReferenceUnit  stringToDistanceFromReferenceUnit(const char *chars);
    static const char * stringFromDistanceFromReferenceUnit(TypeDistanceFromReferenceUnit the_enum);
    class TypeHotelLocationJSON : public ReferenceCounted
      {
      private:
        bool flagHasStreetAddress;
        std::string storeStreetAddress;
        bool flagHasCity;
        std::string storeCity;
        bool flagHasProvince;
        std::string storeProvince;
        bool flagHasCountry;
        std::string storeCountry;
        bool flagHasLatitude;
        double storeLatitude;
        std::string textStoreLatitude;
        bool flagHasLongitude;
        double storeLongitude;
        std::string textStoreLongitude;

        TypeHotelLocationJSON(const TypeHotelLocationJSON &);
        TypeHotelLocationJSON & operator=(const TypeHotelLocationJSON &other);

        void  fromJSONStreetAddress(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCity(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONProvince(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCountry(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHotelLocationJSON(void);
        virtual ~TypeHotelLocationJSON(void);
        bool  hasStreetAddress(void) const;
        std::string  getStreetAddress(void);
        const std::string  getStreetAddress(void) const;
        bool  hasCity(void) const;
        std::string  getCity(void);
        const std::string  getCity(void) const;
        bool  hasProvince(void) const;
        std::string  getProvince(void);
        const std::string  getProvince(void) const;
        bool  hasCountry(void) const;
        std::string  getCountry(void);
        const std::string  getCountry(void) const;
        bool  hasLatitude(void) const;
        double  getLatitude(void);
        const double  getLatitude(void) const;
        std::string  getLatitudeAsText(void) const;
        bool  hasLongitude(void) const;
        double  getLongitude(void);
        const double  getLongitude(void) const;
        std::string  getLongitudeAsText(void) const;


        void setStreetAddress(std::string new_value)
          {
            flagHasStreetAddress = true;
            storeStreetAddress = new_value;
          }
        void unsetStreetAddress(void)
          {
            flagHasStreetAddress = false;
          }
        void setCity(std::string new_value)
          {
            flagHasCity = true;
            storeCity = new_value;
          }
        void unsetCity(void)
          {
            flagHasCity = false;
          }
        void setProvince(std::string new_value)
          {
            flagHasProvince = true;
            storeProvince = new_value;
          }
        void unsetProvince(void)
          {
            flagHasProvince = false;
          }
        void setCountry(std::string new_value)
          {
            flagHasCountry = true;
            storeCountry = new_value;
          }
        void unsetCountry(void)
          {
            flagHasCountry = false;
          }
        void setLatitude(double new_value)
          {
            flagHasLatitude = true;
            if (new_value < -90)
                throw("The value for field Latitude of TypeHotelLocationJSON is less than the lower bound (-90) for that field.");
            if (new_value > 90)
                throw("The value for field Latitude of TypeHotelLocationJSON is greater than the upper bound (90) for that field.");
            storeLatitude = new_value;
            textStoreLatitude = "";
          }
        void setLatitudeText(std::string new_value)
          {
            flagHasLatitude = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Latitude of TypeHotelLocationJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
                throw("The value for field Latitude of TypeHotelLocationJSON is less than the lower bound (-90) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
                throw("The value for field Latitude of TypeHotelLocationJSON is greater than the upper bound (90) for that field.");
            textStoreLatitude = new_value;
          }
        void unsetLatitude(void)
          {
            flagHasLatitude = false;
          }
        void setLongitude(double new_value)
          {
            flagHasLongitude = true;
            if (new_value < -180)
                throw("The value for field Longitude of TypeHotelLocationJSON is less than the lower bound (-180) for that field.");
            if (new_value > 180)
                throw("The value for field Longitude of TypeHotelLocationJSON is greater than the upper bound (180) for that field.");
            storeLongitude = new_value;
            textStoreLongitude = "";
          }
        void setLongitudeText(std::string new_value)
          {
            flagHasLongitude = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field Longitude of TypeHotelLocationJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
                throw("The value for field Longitude of TypeHotelLocationJSON is less than the lower bound (-180) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
                throw("The value for field Longitude of TypeHotelLocationJSON is greater than the upper bound (180) for that field.");
            textStoreLongitude = new_value;
          }
        void unsetLongitude(void)
          {
            flagHasLongitude = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasStreetAddress)
              {
                handler->start_pair("StreetAddress");
                handler->string_value(storeStreetAddress);
              }
            if (flagHasCity)
              {
                handler->start_pair("City");
                handler->string_value(storeCity);
              }
            if (flagHasProvince)
              {
                handler->start_pair("Province");
                handler->string_value(storeProvince);
              }
            if (flagHasCountry)
              {
                handler->start_pair("Country");
                handler->string_value(storeCountry);
              }
            if (flagHasLatitude)
              {
                handler->start_pair("Latitude");
                if (textStoreLatitude != "")
                    handler->number_value(textStoreLatitude.c_str());
                else if (((double)(long int)storeLatitude) == storeLatitude)
                    handler->number_value((long int)storeLatitude);
                else
                    handler->number_value(storeLatitude);
              }
            if (flagHasLongitude)
              {
                handler->start_pair("Longitude");
                if (textStoreLongitude != "")
                    handler->number_value(textStoreLongitude.c_str());
                else if (((double)(long int)storeLongitude) == storeLongitude)
                    handler->number_value((long int)storeLongitude);
                else
                    handler->number_value(storeLongitude);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeHotelLocationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHotelLocationJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHotelLocationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelLocationJSON>, TypeHotelLocationJSON *, bool> generator("Type TypeHotelLocation", ignore_extras);
                parse_json_value(text, "Text for TypeHotelLocationJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHotelLocationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHotelLocationJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelLocationJSON>, TypeHotelLocationJSON *, bool> generator("Type TypeHotelLocation", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStreetAddress;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCity;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProvince;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountry;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;


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
                TypeHotelLocationJSON *result = new TypeHotelLocationJSON();
                assert(result != NULL);
                RCHandle<TypeHotelLocationJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeHotelLocationJSON *result)
              {
                if (fieldGeneratorStreetAddress.have_value)
                  {
                    result->setStreetAddress(fieldGeneratorStreetAddress.value);
                    fieldGeneratorStreetAddress.have_value = false;
                  }
                if (fieldGeneratorCity.have_value)
                  {
                    result->setCity(fieldGeneratorCity.value);
                    fieldGeneratorCity.have_value = false;
                  }
                if (fieldGeneratorProvince.have_value)
                  {
                    result->setProvince(fieldGeneratorProvince.value);
                    fieldGeneratorProvince.have_value = false;
                  }
                if (fieldGeneratorCountry.have_value)
                  {
                    result->setCountry(fieldGeneratorCountry.value);
                    fieldGeneratorCountry.have_value = false;
                  }
                if (fieldGeneratorLatitude.have_value)
                  {
                    result->setLatitudeText(fieldGeneratorLatitude.value);
                    fieldGeneratorLatitude.have_value = false;
                  }
                if (fieldGeneratorLongitude.have_value)
                  {
                    result->setLongitudeText(fieldGeneratorLongitude.value);
                    fieldGeneratorLongitude.have_value = false;
                  }
              }
            virtual void handle_result(TypeHotelLocationJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[2]), "ty") == 0)
                                    return &fieldGeneratorCity;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "untry") == 0)
                                    return &fieldGeneratorCountry;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'L':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "titude") == 0)
                                    return &fieldGeneratorLatitude;
                                break;
                            case 'o':
                                if (strcmp(&(field_name[2]), "ngitude") == 0)
                                    return &fieldGeneratorLongitude;
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "rovince") == 0)
                            return &fieldGeneratorProvince;
                        break;
                    case 'S':
                        if (strcmp(&(field_name[1]), "treetAddress") == 0)
                            return &fieldGeneratorStreetAddress;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorStreetAddress("field \"StreetAddress\" of the TypeHotelLocation class"), fieldGeneratorCity("field \"City\" of the TypeHotelLocation class"), fieldGeneratorProvince("field \"Province\" of the TypeHotelLocation class"), fieldGeneratorCountry("field \"Country\" of the TypeHotelLocation class"), fieldGeneratorLatitude("field \"Latitude\" of the TypeHotelLocation class"), fieldGeneratorLongitude("field \"Longitude\" of the TypeHotelLocation class")
              {
                set_what("the TypeHotelLocation class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorStreetAddress.reset();
                fieldGeneratorCity.reset();
                fieldGeneratorProvince.reset();
                fieldGeneratorCountry.reset();
                fieldGeneratorLatitude.reset();
                fieldGeneratorLongitude.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeHotelFeaturedOfferJSON : public ReferenceCounted
      {
      private:
        bool flagHasPricing;
        HotelPricingJSON * storePricing;
        bool flagHasCheckInDate;
        DateAndOrTimeJSON * storeCheckInDate;
        bool flagHasLengthOfStay;
        OInteger storeLengthOfStay;
        bool flagHasDetailsUrl;
        std::string storeDetailsUrl;

        TypeHotelFeaturedOfferJSON(const TypeHotelFeaturedOfferJSON &);
        TypeHotelFeaturedOfferJSON & operator=(const TypeHotelFeaturedOfferJSON &other);

        void  fromJSONPricing(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONCheckInDate(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONLengthOfStay(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONDetailsUrl(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHotelFeaturedOfferJSON(void);
        virtual ~TypeHotelFeaturedOfferJSON(void);
        bool  hasPricing(void) const;
        HotelPricingJSON *  getPricing(void);
        const HotelPricingJSON *  getPricing(void) const;
        bool  hasCheckInDate(void) const;
        DateAndOrTimeJSON *  getCheckInDate(void);
        const DateAndOrTimeJSON *  getCheckInDate(void) const;
        bool  hasLengthOfStay(void) const;
        OInteger  getLengthOfStay(void);
        const OInteger  getLengthOfStay(void) const;
        bool  hasDetailsUrl(void) const;
        std::string  getDetailsUrl(void);
        const std::string  getDetailsUrl(void) const;


        void setPricing(HotelPricingJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPricing)
              {
                storePricing->remove_reference();
              }
            flagHasPricing = true;
            storePricing = new_value;
          }
        void unsetPricing(void)
          {
            if (flagHasPricing)
              {
                storePricing->remove_reference();
              }
            flagHasPricing = false;
          }
        void setCheckInDate(DateAndOrTimeJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasCheckInDate)
              {
                storeCheckInDate->remove_reference();
              }
            flagHasCheckInDate = true;
            storeCheckInDate = new_value;
          }
        void unsetCheckInDate(void)
          {
            if (flagHasCheckInDate)
              {
                storeCheckInDate->remove_reference();
              }
            flagHasCheckInDate = false;
          }
        void setLengthOfStay(OInteger new_value)
          {
            flagHasLengthOfStay = true;
            if (new_value < 0)
                throw("The value for field LengthOfStay of TypeHotelFeaturedOfferJSON is less than the lower bound (0) for that field.");
            storeLengthOfStay = new_value;
          }
        void unsetLengthOfStay(void)
          {
            flagHasLengthOfStay = false;
          }
        void setDetailsUrl(std::string new_value)
          {
            flagHasDetailsUrl = true;
            storeDetailsUrl = new_value;
          }
        void unsetDetailsUrl(void)
          {
            flagHasDetailsUrl = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasPricing)
              {
                handler->start_pair("Pricing");
                storePricing->write_as_json(handler);
              }
            if (flagHasCheckInDate)
              {
                handler->start_pair("CheckInDate");
                storeCheckInDate->write_as_json(handler);
              }
            if (flagHasLengthOfStay)
              {
                handler->start_pair("LengthOfStay");
                handler->number_value(storeLengthOfStay.get_o_integer());
              }
            if (flagHasDetailsUrl)
              {
                handler->start_pair("DetailsUrl");
                handler->string_value(storeDetailsUrl);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeHotelFeaturedOfferJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHotelFeaturedOfferJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHotelFeaturedOfferJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelFeaturedOfferJSON>, TypeHotelFeaturedOfferJSON *, bool> generator("Type TypeHotelFeaturedOffer", ignore_extras);
                parse_json_value(text, "Text for TypeHotelFeaturedOfferJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHotelFeaturedOfferJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHotelFeaturedOfferJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelFeaturedOfferJSON>, TypeHotelFeaturedOfferJSON *, bool> generator("Type TypeHotelFeaturedOffer", ignore_extras);
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
            JSONHoldingGenerator<HotelPricingJSON::Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool > fieldGeneratorPricing;
            JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorCheckInDate;
            static char lowerBoundLengthOfStay[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundLengthOfStay>, OInteger, o_integer > fieldGeneratorLengthOfStay;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDetailsUrl;


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
                TypeHotelFeaturedOfferJSON *result = new TypeHotelFeaturedOfferJSON();
                assert(result != NULL);
                RCHandle<TypeHotelFeaturedOfferJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeHotelFeaturedOfferJSON *result)
              {
                if (fieldGeneratorPricing.have_value)
                  {
                    result->setPricing(fieldGeneratorPricing.value.referenced());
                    fieldGeneratorPricing.have_value = false;
                  }
                if (fieldGeneratorCheckInDate.have_value)
                  {
                    result->setCheckInDate(fieldGeneratorCheckInDate.value.referenced());
                    fieldGeneratorCheckInDate.have_value = false;
                  }
                if (fieldGeneratorLengthOfStay.have_value)
                  {
                    result->setLengthOfStay(fieldGeneratorLengthOfStay.value);
                    fieldGeneratorLengthOfStay.have_value = false;
                  }
                if (fieldGeneratorDetailsUrl.have_value)
                  {
                    result->setDetailsUrl(fieldGeneratorDetailsUrl.value);
                    fieldGeneratorDetailsUrl.have_value = false;
                  }
              }
            virtual void handle_result(TypeHotelFeaturedOfferJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'C':
                        if (strcmp(&(field_name[1]), "heckInDate") == 0)
                            return &fieldGeneratorCheckInDate;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "etailsUrl") == 0)
                            return &fieldGeneratorDetailsUrl;
                        break;
                    case 'L':
                        if (strcmp(&(field_name[1]), "engthOfStay") == 0)
                            return &fieldGeneratorLengthOfStay;
                        break;
                    case 'P':
                        if (strcmp(&(field_name[1]), "ricing") == 0)
                            return &fieldGeneratorPricing;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorPricing("field \"Pricing\" of the TypeHotelFeaturedOffer class", ignore_extras), fieldGeneratorCheckInDate("field \"CheckInDate\" of the TypeHotelFeaturedOffer class", ignore_extras), fieldGeneratorLengthOfStay("field \"LengthOfStay\" of the TypeHotelFeaturedOffer class"), fieldGeneratorDetailsUrl("field \"DetailsUrl\" of the TypeHotelFeaturedOffer class")
              {
                set_what("the TypeHotelFeaturedOffer class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorPricing.reset();
                fieldGeneratorCheckInDate.reset();
                fieldGeneratorLengthOfStay.reset();
                fieldGeneratorDetailsUrl.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    enum TypeHotelStatusCode
      {
        HotelStatusCode_Available,
        HotelStatusCode_Not_x20_available,
        HotelStatusCode_Error,
        HotelStatusCode_No_x20_available_x20_rate_x20_plan
      };

    static TypeHotelStatusCode  stringToHotelStatusCode(const char *chars);
    static const char * stringFromHotelStatusCode(TypeHotelStatusCode the_enum);
    class TypeHotelPromotionJSON : public ReferenceCounted
      {
      private:
        bool flagHasPromotionDiscountCurrency;
        std::string storePromotionDiscountCurrency;
        bool flagHasPromotionDiscountCurrencySymbol;
        std::string storePromotionDiscountCurrencySymbol;
        bool flagHasPromotionDiscount;
        double storePromotionDiscount;
        std::string textStorePromotionDiscount;
        bool flagHasPromotionDescription;
        std::string storePromotionDescription;

        TypeHotelPromotionJSON(const TypeHotelPromotionJSON &);
        TypeHotelPromotionJSON & operator=(const TypeHotelPromotionJSON &other);

        void  fromJSONPromotionDiscountCurrency(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPromotionDiscountCurrencySymbol(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPromotionDiscount(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPromotionDescription(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHotelPromotionJSON(void);
        virtual ~TypeHotelPromotionJSON(void);
        bool  hasPromotionDiscountCurrency(void) const;
        std::string  getPromotionDiscountCurrency(void);
        const std::string  getPromotionDiscountCurrency(void) const;
        bool  hasPromotionDiscountCurrencySymbol(void) const;
        std::string  getPromotionDiscountCurrencySymbol(void);
        const std::string  getPromotionDiscountCurrencySymbol(void) const;
        bool  hasPromotionDiscount(void) const;
        double  getPromotionDiscount(void);
        const double  getPromotionDiscount(void) const;
        std::string  getPromotionDiscountAsText(void) const;
        bool  hasPromotionDescription(void) const;
        std::string  getPromotionDescription(void);
        const std::string  getPromotionDescription(void) const;


        void setPromotionDiscountCurrency(std::string new_value)
          {
            flagHasPromotionDiscountCurrency = true;
            storePromotionDiscountCurrency = new_value;
          }
        void unsetPromotionDiscountCurrency(void)
          {
            flagHasPromotionDiscountCurrency = false;
          }
        void setPromotionDiscountCurrencySymbol(std::string new_value)
          {
            flagHasPromotionDiscountCurrencySymbol = true;
            storePromotionDiscountCurrencySymbol = new_value;
          }
        void unsetPromotionDiscountCurrencySymbol(void)
          {
            flagHasPromotionDiscountCurrencySymbol = false;
          }
        void setPromotionDiscount(double new_value)
          {
            flagHasPromotionDiscount = true;
            if (new_value < 0)
                throw("The value for field PromotionDiscount of TypeHotelPromotionJSON is less than the lower bound (0) for that field.");
            storePromotionDiscount = new_value;
            textStorePromotionDiscount = "";
          }
        void setPromotionDiscountText(std::string new_value)
          {
            flagHasPromotionDiscount = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field PromotionDiscount of TypeHotelPromotionJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                throw("The value for field PromotionDiscount of TypeHotelPromotionJSON is less than the lower bound (0) for that field.");
            textStorePromotionDiscount = new_value;
          }
        void unsetPromotionDiscount(void)
          {
            flagHasPromotionDiscount = false;
          }
        void setPromotionDescription(std::string new_value)
          {
            flagHasPromotionDescription = true;
            storePromotionDescription = new_value;
          }
        void unsetPromotionDescription(void)
          {
            flagHasPromotionDescription = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasPromotionDiscountCurrency)
              {
                handler->start_pair("PromotionDiscountCurrency");
                handler->string_value(storePromotionDiscountCurrency);
              }
            if (flagHasPromotionDiscountCurrencySymbol)
              {
                handler->start_pair("PromotionDiscountCurrencySymbol");
                handler->string_value(storePromotionDiscountCurrencySymbol);
              }
            if (flagHasPromotionDiscount)
              {
                handler->start_pair("PromotionDiscount");
                if (textStorePromotionDiscount != "")
                    handler->number_value(textStorePromotionDiscount.c_str());
                else if (((double)(long int)storePromotionDiscount) == storePromotionDiscount)
                    handler->number_value((long int)storePromotionDiscount);
                else
                    handler->number_value(storePromotionDiscount);
              }
            if (flagHasPromotionDescription)
              {
                handler->start_pair("PromotionDescription");
                handler->string_value(storePromotionDescription);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            return NULL;
          }

        static TypeHotelPromotionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHotelPromotionJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHotelPromotionJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelPromotionJSON>, TypeHotelPromotionJSON *, bool> generator("Type TypeHotelPromotion", ignore_extras);
                parse_json_value(text, "Text for TypeHotelPromotionJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHotelPromotionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHotelPromotionJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelPromotionJSON>, TypeHotelPromotionJSON *, bool> generator("Type TypeHotelPromotion", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDiscountCurrency;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDiscountCurrencySymbol;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPromotionDiscount;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDescription;


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
                TypeHotelPromotionJSON *result = new TypeHotelPromotionJSON();
                assert(result != NULL);
                RCHandle<TypeHotelPromotionJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeHotelPromotionJSON *result)
              {
                if (fieldGeneratorPromotionDiscountCurrency.have_value)
                  {
                    result->setPromotionDiscountCurrency(fieldGeneratorPromotionDiscountCurrency.value);
                    fieldGeneratorPromotionDiscountCurrency.have_value = false;
                  }
                if (fieldGeneratorPromotionDiscountCurrencySymbol.have_value)
                  {
                    result->setPromotionDiscountCurrencySymbol(fieldGeneratorPromotionDiscountCurrencySymbol.value);
                    fieldGeneratorPromotionDiscountCurrencySymbol.have_value = false;
                  }
                if (fieldGeneratorPromotionDiscount.have_value)
                  {
                    result->setPromotionDiscountText(fieldGeneratorPromotionDiscount.value);
                    fieldGeneratorPromotionDiscount.have_value = false;
                  }
                if (fieldGeneratorPromotionDescription.have_value)
                  {
                    result->setPromotionDescription(fieldGeneratorPromotionDescription.value);
                    fieldGeneratorPromotionDescription.have_value = false;
                  }
              }
            virtual void handle_result(TypeHotelPromotionJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "PromotionD", 10) == 0)
                  {
                    switch ((unsigned char)(field_name[10]))
                      {
                        case 'e':
                            if (strcmp(&(field_name[11]), "scription") == 0)
                                return &fieldGeneratorPromotionDescription;
                            break;
                        case 'i':
                            if (strncmp(&(field_name[11]), "scount", 6) == 0)
                              {
                                switch ((unsigned char)(field_name[17]))
                                  {
                                    case 0:
                                        return &fieldGeneratorPromotionDiscount;
                                    case 'C':
                                        if (strncmp(&(field_name[18]), "urrency", 7) == 0)
                                          {
                                            switch ((unsigned char)(field_name[25]))
                                              {
                                                case 0:
                                                    return &fieldGeneratorPromotionDiscountCurrency;
                                                case 'S':
                                                    if (strcmp(&(field_name[26]), "ymbol") == 0)
                                                        return &fieldGeneratorPromotionDiscountCurrencySymbol;
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
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorPromotionDiscountCurrency("field \"PromotionDiscountCurrency\" of the TypeHotelPromotion class"), fieldGeneratorPromotionDiscountCurrencySymbol("field \"PromotionDiscountCurrencySymbol\" of the TypeHotelPromotion class"), fieldGeneratorPromotionDiscount("field \"PromotionDiscount\" of the TypeHotelPromotion class"), fieldGeneratorPromotionDescription("field \"PromotionDescription\" of the TypeHotelPromotion class")
              {
                set_what("the TypeHotelPromotion class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorPromotionDiscountCurrency.reset();
                fieldGeneratorPromotionDiscountCurrencySymbol.reset();
                fieldGeneratorPromotionDiscount.reset();
                fieldGeneratorPromotionDescription.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeHotelRoomTypesJSON : public ReferenceCounted
      {
      public:
        class TypePromotionJSON : public ReferenceCounted
          {
          private:
            bool flagHasPromotionDiscountCurrency;
            std::string storePromotionDiscountCurrency;
            bool flagHasPromotionDiscountCurrencySymbol;
            std::string storePromotionDiscountCurrencySymbol;
            bool flagHasPromotionDiscount;
            double storePromotionDiscount;
            std::string textStorePromotionDiscount;
            bool flagHasPromotionDescription;
            std::string storePromotionDescription;

            TypePromotionJSON(const TypePromotionJSON &);
            TypePromotionJSON & operator=(const TypePromotionJSON &other);

            void  fromJSONPromotionDiscountCurrency(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPromotionDiscountCurrencySymbol(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPromotionDiscount(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONPromotionDescription(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypePromotionJSON(void);
            virtual ~TypePromotionJSON(void);
            bool  hasPromotionDiscountCurrency(void) const;
            std::string  getPromotionDiscountCurrency(void);
            const std::string  getPromotionDiscountCurrency(void) const;
            bool  hasPromotionDiscountCurrencySymbol(void) const;
            std::string  getPromotionDiscountCurrencySymbol(void);
            const std::string  getPromotionDiscountCurrencySymbol(void) const;
            bool  hasPromotionDiscount(void) const;
            double  getPromotionDiscount(void);
            const double  getPromotionDiscount(void) const;
            std::string  getPromotionDiscountAsText(void) const;
            bool  hasPromotionDescription(void) const;
            std::string  getPromotionDescription(void);
            const std::string  getPromotionDescription(void) const;


            void setPromotionDiscountCurrency(std::string new_value)
              {
                flagHasPromotionDiscountCurrency = true;
                storePromotionDiscountCurrency = new_value;
              }
            void unsetPromotionDiscountCurrency(void)
              {
                flagHasPromotionDiscountCurrency = false;
              }
            void setPromotionDiscountCurrencySymbol(std::string new_value)
              {
                flagHasPromotionDiscountCurrencySymbol = true;
                storePromotionDiscountCurrencySymbol = new_value;
              }
            void unsetPromotionDiscountCurrencySymbol(void)
              {
                flagHasPromotionDiscountCurrencySymbol = false;
              }
            void setPromotionDiscount(double new_value)
              {
                flagHasPromotionDiscount = true;
                if (new_value < 0)
                    throw("The value for field PromotionDiscount of TypePromotionJSON is less than the lower bound (0) for that field.");
                storePromotionDiscount = new_value;
                textStorePromotionDiscount = "";
              }
            void setPromotionDiscountText(std::string new_value)
              {
                flagHasPromotionDiscount = true;
                if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                    throw("The text value for field PromotionDiscount of TypePromotionJSON is not a valid number.");
                if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
                    throw("The value for field PromotionDiscount of TypePromotionJSON is less than the lower bound (0) for that field.");
                textStorePromotionDiscount = new_value;
              }
            void unsetPromotionDiscount(void)
              {
                flagHasPromotionDiscount = false;
              }
            void setPromotionDescription(std::string new_value)
              {
                flagHasPromotionDescription = true;
                storePromotionDescription = new_value;
              }
            void unsetPromotionDescription(void)
              {
                flagHasPromotionDescription = false;
              }


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                if (flagHasPromotionDiscountCurrency)
                  {
                    handler->start_pair("PromotionDiscountCurrency");
                    handler->string_value(storePromotionDiscountCurrency);
                  }
                if (flagHasPromotionDiscountCurrencySymbol)
                  {
                    handler->start_pair("PromotionDiscountCurrencySymbol");
                    handler->string_value(storePromotionDiscountCurrencySymbol);
                  }
                if (flagHasPromotionDiscount)
                  {
                    handler->start_pair("PromotionDiscount");
                    if (textStorePromotionDiscount != "")
                        handler->number_value(textStorePromotionDiscount.c_str());
                    else if (((double)(long int)storePromotionDiscount) == storePromotionDiscount)
                        handler->number_value((long int)storePromotionDiscount);
                    else
                        handler->number_value(storePromotionDiscount);
                  }
                if (flagHasPromotionDescription)
                  {
                    handler->start_pair("PromotionDescription");
                    handler->string_value(storePromotionDescription);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TypePromotionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypePromotionJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypePromotionJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePromotionJSON>, TypePromotionJSON *, bool> generator("Type TypePromotion", ignore_extras);
                    parse_json_value(text, "Text for TypePromotionJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypePromotionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypePromotionJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypePromotionJSON>, TypePromotionJSON *, bool> generator("Type TypePromotion", ignore_extras);
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
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDiscountCurrency;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDiscountCurrencySymbol;
                JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorPromotionDiscount;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPromotionDescription;


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
                    TypePromotionJSON *result = new TypePromotionJSON();
                    assert(result != NULL);
                    RCHandle<TypePromotionJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypePromotionJSON *result)
                  {
                    if (fieldGeneratorPromotionDiscountCurrency.have_value)
                      {
                        result->setPromotionDiscountCurrency(fieldGeneratorPromotionDiscountCurrency.value);
                        fieldGeneratorPromotionDiscountCurrency.have_value = false;
                      }
                    if (fieldGeneratorPromotionDiscountCurrencySymbol.have_value)
                      {
                        result->setPromotionDiscountCurrencySymbol(fieldGeneratorPromotionDiscountCurrencySymbol.value);
                        fieldGeneratorPromotionDiscountCurrencySymbol.have_value = false;
                      }
                    if (fieldGeneratorPromotionDiscount.have_value)
                      {
                        result->setPromotionDiscountText(fieldGeneratorPromotionDiscount.value);
                        fieldGeneratorPromotionDiscount.have_value = false;
                      }
                    if (fieldGeneratorPromotionDescription.have_value)
                      {
                        result->setPromotionDescription(fieldGeneratorPromotionDescription.value);
                        fieldGeneratorPromotionDescription.have_value = false;
                      }
                  }
                virtual void handle_result(TypePromotionJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    if (strncmp(field_name, "PromotionD", 10) == 0)
                      {
                        switch ((unsigned char)(field_name[10]))
                          {
                            case 'e':
                                if (strcmp(&(field_name[11]), "scription") == 0)
                                    return &fieldGeneratorPromotionDescription;
                                break;
                            case 'i':
                                if (strncmp(&(field_name[11]), "scount", 6) == 0)
                                  {
                                    switch ((unsigned char)(field_name[17]))
                                      {
                                        case 0:
                                            return &fieldGeneratorPromotionDiscount;
                                        case 'C':
                                            if (strncmp(&(field_name[18]), "urrency", 7) == 0)
                                              {
                                                switch ((unsigned char)(field_name[25]))
                                                  {
                                                    case 0:
                                                        return &fieldGeneratorPromotionDiscountCurrency;
                                                    case 'S':
                                                        if (strcmp(&(field_name[26]), "ymbol") == 0)
                                                            return &fieldGeneratorPromotionDiscountCurrencySymbol;
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
                      }
                    return NULL;
                  }

              public:
                Generator(bool ignore_extras = false) : fieldGeneratorPromotionDiscountCurrency("field \"PromotionDiscountCurrency\" of the TypePromotion class"), fieldGeneratorPromotionDiscountCurrencySymbol("field \"PromotionDiscountCurrencySymbol\" of the TypePromotion class"), fieldGeneratorPromotionDiscount("field \"PromotionDiscount\" of the TypePromotion class"), fieldGeneratorPromotionDescription("field \"PromotionDescription\" of the TypePromotion class")
                  {
                    set_what("the TypePromotion class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorPromotionDiscountCurrency.reset();
                    fieldGeneratorPromotionDiscountCurrencySymbol.reset();
                    fieldGeneratorPromotionDiscount.reset();
                    fieldGeneratorPromotionDescription.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };
        class TypeAmenitiesJSON : public ReferenceCounted
          {
          private:
            bool flagHasID;
            OInteger storeID;
            bool flagHasName;
            std::string storeName;

            TypeAmenitiesJSON(const TypeAmenitiesJSON &);
            TypeAmenitiesJSON & operator=(const TypeAmenitiesJSON &other);

            void  fromJSONID(JSONValue *json_value, bool ignore_extras = false);

            void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);


          public:
            TypeAmenitiesJSON(void);
            virtual ~TypeAmenitiesJSON(void);
            bool  hasID(void) const;
            OInteger  getID(void);
            const OInteger  getID(void) const;
            bool  hasName(void) const;
            std::string  getName(void);
            const std::string  getName(void) const;


            void setID(OInteger new_value)
              {
                flagHasID = true;
                if (new_value < 0)
                    throw("The value for field ID of TypeAmenitiesJSON is less than the lower bound (0) for that field.");
                storeID = new_value;
              }
            void unsetID(void)
              {
                flagHasID = false;
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


            void write_as_json(JSONHandler *handler) const
              {
                handler->start_object();
                write_fields_as_json(handler);
                handler->finish_object();
              }

            virtual void write_fields_as_json(JSONHandler *handler) const
              {
                if (flagHasID)
                  {
                    handler->start_pair("ID");
                    handler->number_value(storeID.get_o_integer());
                  }
                if (flagHasName)
                  {
                    handler->start_pair("Name");
                    handler->string_value(storeName);
                  }
              }
            virtual const char *missing_field_error(void) const
              {
                return NULL;
              }

            static TypeAmenitiesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
            static TypeAmenitiesJSON *from_text(const char *text, bool ignore_extras = false)
              {
                TypeAmenitiesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesJSON>, TypeAmenitiesJSON *, bool> generator("Type TypeAmenities", ignore_extras);
                    parse_json_value(text, "Text for TypeAmenitiesJSON", &generator);
                    assert(generator.have_value);
                    result = generator.value.referenced();
                    result->add_reference();
                  };
                result->remove_reference_no_delete();
                return result;
              }
            static TypeAmenitiesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
              {
                TypeAmenitiesJSON *result;
                  {
                    JSONHoldingGenerator<Generator, RCHandle<TypeAmenitiesJSON>, TypeAmenitiesJSON *, bool> generator("Type TypeAmenities", ignore_extras);
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
                static char lowerBoundID[];
                JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundID>, OInteger, o_integer > fieldGeneratorID;
                JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorName;


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
                    TypeAmenitiesJSON *result = new TypeAmenitiesJSON();
                    assert(result != NULL);
                    RCHandle<TypeAmenitiesJSON> result_holder = result;
                    finish(result);
                    handle_result(result);
                  }
                void finish(TypeAmenitiesJSON *result)
                  {
                    if (fieldGeneratorID.have_value)
                      {
                        result->setID(fieldGeneratorID.value);
                        fieldGeneratorID.have_value = false;
                      }
                    if (fieldGeneratorName.have_value)
                      {
                        result->setName(fieldGeneratorName.value);
                        fieldGeneratorName.have_value = false;
                      }
                  }
                virtual void handle_result(TypeAmenitiesJSON *new_result) = 0;
                virtual JSONHandler *start_known_field(const char *field_name)
                  {
                    switch ((unsigned char)(field_name[0]))
                      {
                        case 'I':
                            if (strcmp(&(field_name[1]), "D") == 0)
                                return &fieldGeneratorID;
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
                Generator(bool ignore_extras = false) : fieldGeneratorID("field \"ID\" of the TypeAmenities class"), fieldGeneratorName("field \"Name\" of the TypeAmenities class")
                  {
                    set_what("the TypeAmenities class");
                  }
                ~Generator(void)
                  {
                  }

                void reset(void)
                  {
                    fieldGeneratorID.reset();
                    fieldGeneratorName.reset();
                    JSONObjectGenerator::reset();
                  }
              };
          };

      private:
        bool flagHasDescription;
        std::string storeDescription;
        bool flagHasRemainingCount;
        OInteger storeRemainingCount;
        bool flagHasPricing;
        HotelPricingJSON * storePricing;
        bool flagHasPromotion;
        TypePromotionJSON * storePromotion;
        bool flagHasRateDetailsUrl;
        std::string storeRateDetailsUrl;
        bool flagHasAmenities;
        std::vector< TypeAmenitiesJSON * > storeAmenities;
        bool flagHasRefundable;
        bool storeRefundable;
        bool flagHasFreeCancellation;
        bool storeFreeCancellation;
        bool flagHasPaymentMethod;
        std::string storePaymentMethod;

        TypeHotelRoomTypesJSON(const TypeHotelRoomTypesJSON &);
        TypeHotelRoomTypesJSON & operator=(const TypeHotelRoomTypesJSON &other);

        void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRemainingCount(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPricing(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPromotion(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRateDetailsUrl(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONAmenities(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONRefundable(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONFreeCancellation(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONPaymentMethod(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeHotelRoomTypesJSON(void);
        virtual ~TypeHotelRoomTypesJSON(void);
        bool  hasDescription(void) const;
        std::string  getDescription(void);
        const std::string  getDescription(void) const;
        bool  hasRemainingCount(void) const;
        OInteger  getRemainingCount(void);
        const OInteger  getRemainingCount(void) const;
        bool  hasPricing(void) const;
        HotelPricingJSON *  getPricing(void);
        const HotelPricingJSON *  getPricing(void) const;
        bool  hasPromotion(void) const;
        TypePromotionJSON *  getPromotion(void);
        const TypePromotionJSON *  getPromotion(void) const;
        bool  hasRateDetailsUrl(void) const;
        std::string  getRateDetailsUrl(void);
        const std::string  getRateDetailsUrl(void) const;
        bool  hasAmenities(void) const;
        size_t  countOfAmenities(void) const;
        TypeAmenitiesJSON *  elementOfAmenities(size_t element_num);
        const TypeAmenitiesJSON *  elementOfAmenities(size_t element_num) const;
        std::vector< TypeAmenitiesJSON * >  getAmenities(void);
        const std::vector< TypeAmenitiesJSON * >  getAmenities(void) const;
        bool  hasRefundable(void) const;
        bool  getRefundable(void);
        const bool  getRefundable(void) const;
        bool  hasFreeCancellation(void) const;
        bool  getFreeCancellation(void);
        const bool  getFreeCancellation(void) const;
        bool  hasPaymentMethod(void) const;
        std::string  getPaymentMethod(void);
        const std::string  getPaymentMethod(void) const;


        void setDescription(std::string new_value)
          {
            flagHasDescription = true;
            storeDescription = new_value;
          }
        void unsetDescription(void)
          {
            flagHasDescription = false;
          }
        void setRemainingCount(OInteger new_value)
          {
            flagHasRemainingCount = true;
            if (new_value < 0)
                throw("The value for field RemainingCount of TypeHotelRoomTypesJSON is less than the lower bound (0) for that field.");
            storeRemainingCount = new_value;
          }
        void unsetRemainingCount(void)
          {
            flagHasRemainingCount = false;
          }
        void setPricing(HotelPricingJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPricing)
              {
                storePricing->remove_reference();
              }
            flagHasPricing = true;
            storePricing = new_value;
          }
        void unsetPricing(void)
          {
            if (flagHasPricing)
              {
                storePricing->remove_reference();
              }
            flagHasPricing = false;
          }
        void setPromotion(TypePromotionJSON * new_value)
          {
            new_value->add_reference();
            if (flagHasPromotion)
              {
                storePromotion->remove_reference();
              }
            flagHasPromotion = true;
            storePromotion = new_value;
          }
        void unsetPromotion(void)
          {
            if (flagHasPromotion)
              {
                storePromotion->remove_reference();
              }
            flagHasPromotion = false;
          }
        void setRateDetailsUrl(std::string new_value)
          {
            flagHasRateDetailsUrl = true;
            storeRateDetailsUrl = new_value;
          }
        void unsetRateDetailsUrl(void)
          {
            flagHasRateDetailsUrl = false;
          }
        void initAmenities(void)
          {
            if (flagHasAmenities)
              {
                for (size_t num2 = 0; num2 < storeAmenities.size(); ++num2)
                  {
                    storeAmenities[num2]->remove_reference();
                  }
              }
            flagHasAmenities = true;
            storeAmenities.clear();
          }
        void appendAmenities(TypeAmenitiesJSON * to_append)
          {
            if (!flagHasAmenities)
              {
                flagHasAmenities = true;
                storeAmenities.clear();
              }
            assert(flagHasAmenities);
            to_append->add_reference();
            storeAmenities.push_back(to_append);
          }
        void unsetAmenities(void)
          {
            if (flagHasAmenities)
              {
                for (size_t num3 = 0; num3 < storeAmenities.size(); ++num3)
                  {
                    storeAmenities[num3]->remove_reference();
                  }
              }
            flagHasAmenities = false;
            storeAmenities.clear();
          }
        void setRefundable(bool new_value)
          {
            flagHasRefundable = true;
            storeRefundable = new_value;
          }
        void unsetRefundable(void)
          {
            flagHasRefundable = false;
          }
        void setFreeCancellation(bool new_value)
          {
            flagHasFreeCancellation = true;
            storeFreeCancellation = new_value;
          }
        void unsetFreeCancellation(void)
          {
            flagHasFreeCancellation = false;
          }
        void setPaymentMethod(std::string new_value)
          {
            flagHasPaymentMethod = true;
            storePaymentMethod = new_value;
          }
        void unsetPaymentMethod(void)
          {
            flagHasPaymentMethod = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            if (flagHasDescription)
              {
                handler->start_pair("Description");
                handler->string_value(storeDescription);
              }
            if (flagHasRemainingCount)
              {
                handler->start_pair("RemainingCount");
                handler->number_value(storeRemainingCount.get_o_integer());
              }
            if (flagHasPricing)
              {
                handler->start_pair("Pricing");
                storePricing->write_as_json(handler);
              }
            if (flagHasPromotion)
              {
                handler->start_pair("Promotion");
                storePromotion->write_as_json(handler);
              }
            if (flagHasRateDetailsUrl)
              {
                handler->start_pair("RateDetailsUrl");
                handler->string_value(storeRateDetailsUrl);
              }
            if (flagHasAmenities)
              {
                handler->start_pair("Amenities");
                handler->start_array();
                for (size_t num1 = 0; num1 < storeAmenities.size(); ++num1)
                  {
                    storeAmenities[num1]->write_as_json(handler);
                  }
                handler->finish_array();
              }
            assert(flagHasRefundable);
            handler->start_pair("Refundable");
            handler->boolean_value(storeRefundable);
            assert(flagHasFreeCancellation);
            handler->start_pair("FreeCancellation");
            handler->boolean_value(storeFreeCancellation);
            if (flagHasPaymentMethod)
              {
                handler->start_pair("PaymentMethod");
                handler->string_value(storePaymentMethod);
              }
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasRefundable()))
              {
                return "When parsing the object for %what%, the \"Refundable\" field was missing.";
              }
            if (!(hasFreeCancellation()))
              {
                return "When parsing the object for %what%, the \"FreeCancellation\" field was missing.";
              }
            return NULL;
          }

        static TypeHotelRoomTypesJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeHotelRoomTypesJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeHotelRoomTypesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelRoomTypesJSON>, TypeHotelRoomTypesJSON *, bool> generator("Type TypeHotelRoomTypes", ignore_extras);
                parse_json_value(text, "Text for TypeHotelRoomTypesJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeHotelRoomTypesJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeHotelRoomTypesJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeHotelRoomTypesJSON>, TypeHotelRoomTypesJSON *, bool> generator("Type TypeHotelRoomTypes", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
            static char lowerBoundRemainingCount[];
            JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRemainingCount>, OInteger, o_integer > fieldGeneratorRemainingCount;
            JSONHoldingGenerator<HotelPricingJSON::Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool > fieldGeneratorPricing;
            JSONHoldingGenerator<TypePromotionJSON::Generator, RCHandle<TypePromotionJSON>, TypePromotionJSON *, bool > fieldGeneratorPromotion;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRateDetailsUrl;
            JSONHoldingArrayGenerator<TypeAmenitiesJSON::Generator, RCHandle<TypeAmenitiesJSON>, TypeAmenitiesJSON *, bool > fieldGeneratorAmenities;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRefundable;
            JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorFreeCancellation;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPaymentMethod;


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
                TypeHotelRoomTypesJSON *result = new TypeHotelRoomTypesJSON();
                assert(result != NULL);
                RCHandle<TypeHotelRoomTypesJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeHotelRoomTypesJSON *result)
              {
                if (fieldGeneratorDescription.have_value)
                  {
                    result->setDescription(fieldGeneratorDescription.value);
                    fieldGeneratorDescription.have_value = false;
                  }
                if (fieldGeneratorRemainingCount.have_value)
                  {
                    result->setRemainingCount(fieldGeneratorRemainingCount.value);
                    fieldGeneratorRemainingCount.have_value = false;
                  }
                if (fieldGeneratorPricing.have_value)
                  {
                    result->setPricing(fieldGeneratorPricing.value.referenced());
                    fieldGeneratorPricing.have_value = false;
                  }
                if (fieldGeneratorPromotion.have_value)
                  {
                    result->setPromotion(fieldGeneratorPromotion.value.referenced());
                    fieldGeneratorPromotion.have_value = false;
                  }
                if (fieldGeneratorRateDetailsUrl.have_value)
                  {
                    result->setRateDetailsUrl(fieldGeneratorRateDetailsUrl.value);
                    fieldGeneratorRateDetailsUrl.have_value = false;
                  }
                if (fieldGeneratorAmenities.have_value)
                  {
                    result->initAmenities();
                    size_t count = fieldGeneratorAmenities.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendAmenities(fieldGeneratorAmenities.value[num].referenced());
                      }
                    fieldGeneratorAmenities.value.clear();
                    fieldGeneratorAmenities.have_value = false;
                  }
                if (fieldGeneratorRefundable.have_value)
                  {
                    result->setRefundable(fieldGeneratorRefundable.value);
                    fieldGeneratorRefundable.have_value = false;
                  }
                else if (!(result->hasRefundable()))
                  {
                    error("When parsing the object for %what%, the \"Refundable\" field was missing.");
                  }
                if (fieldGeneratorFreeCancellation.have_value)
                  {
                    result->setFreeCancellation(fieldGeneratorFreeCancellation.value);
                    fieldGeneratorFreeCancellation.have_value = false;
                  }
                else if (!(result->hasFreeCancellation()))
                  {
                    error("When parsing the object for %what%, the \"FreeCancellation\" field was missing.");
                  }
                if (fieldGeneratorPaymentMethod.have_value)
                  {
                    result->setPaymentMethod(fieldGeneratorPaymentMethod.value);
                    fieldGeneratorPaymentMethod.have_value = false;
                  }
              }
            virtual void handle_result(TypeHotelRoomTypesJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[1]), "menities") == 0)
                            return &fieldGeneratorAmenities;
                        break;
                    case 'D':
                        if (strcmp(&(field_name[1]), "escription") == 0)
                            return &fieldGeneratorDescription;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[1]), "reeCancellation") == 0)
                            return &fieldGeneratorFreeCancellation;
                        break;
                    case 'P':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "ymentMethod") == 0)
                                    return &fieldGeneratorPaymentMethod;
                                break;
                            case 'r':
                                switch ((unsigned char)(field_name[2]))
                                  {
                                    case 'i':
                                        if (strcmp(&(field_name[3]), "cing") == 0)
                                            return &fieldGeneratorPricing;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[3]), "motion") == 0)
                                            return &fieldGeneratorPromotion;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            default:
                                break;
                          }
                        break;
                    case 'R':
                        switch ((unsigned char)(field_name[1]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[2]), "teDetailsUrl") == 0)
                                    return &fieldGeneratorRateDetailsUrl;
                                break;
                            case 'e':
                                switch ((unsigned char)(field_name[2]))
                                  {
                                    case 'f':
                                        if (strcmp(&(field_name[3]), "undable") == 0)
                                            return &fieldGeneratorRefundable;
                                        break;
                                    case 'm':
                                        if (strcmp(&(field_name[3]), "ainingCount") == 0)
                                            return &fieldGeneratorRemainingCount;
                                        break;
                                    default:
                                        break;
                                  }
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
            Generator(bool ignore_extras = false) : fieldGeneratorDescription("field \"Description\" of the TypeHotelRoomTypes class"), fieldGeneratorRemainingCount("field \"RemainingCount\" of the TypeHotelRoomTypes class"), fieldGeneratorPricing("field \"Pricing\" of the TypeHotelRoomTypes class", ignore_extras), fieldGeneratorPromotion("field \"Promotion\" of the TypeHotelRoomTypes class", ignore_extras), fieldGeneratorRateDetailsUrl("field \"RateDetailsUrl\" of the TypeHotelRoomTypes class"), fieldGeneratorAmenities("field \"Amenities\" of the TypeHotelRoomTypes class", ignore_extras), fieldGeneratorRefundable("field \"Refundable\" of the TypeHotelRoomTypes class"), fieldGeneratorFreeCancellation("field \"FreeCancellation\" of the TypeHotelRoomTypes class"), fieldGeneratorPaymentMethod("field \"PaymentMethod\" of the TypeHotelRoomTypes class")
              {
                set_what("the TypeHotelRoomTypes class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorDescription.reset();
                fieldGeneratorRemainingCount.reset();
                fieldGeneratorPricing.reset();
                fieldGeneratorPromotion.reset();
                fieldGeneratorRateDetailsUrl.reset();
                fieldGeneratorAmenities.reset();
                fieldGeneratorRefundable.reset();
                fieldGeneratorFreeCancellation.reset();
                fieldGeneratorPaymentMethod.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasHotelID;
    OInteger storeHotelID;
    bool flagHasHotelName;
    std::string storeHotelName;
    bool flagHasDistanceFromReference;
    double storeDistanceFromReference;
    std::string textStoreDistanceFromReference;
    bool flagHasDistanceFromReferenceUnit;
    TypeDistanceFromReferenceUnit storeDistanceFromReferenceUnit;
    bool flagHasHotelLocation;
    TypeHotelLocationJSON * storeHotelLocation;
    bool flagHasHotelDescription;
    std::string storeHotelDescription;
    bool flagHasHotelFeaturedOffer;
    TypeHotelFeaturedOfferJSON * storeHotelFeaturedOffer;
    bool flagHasHotelStatusCode;
    TypeHotelStatusCode storeHotelStatusCode;
    bool flagHasHotelStatusDescription;
    std::string storeHotelStatusDescription;
    bool flagHasHotelPricing;
    HotelPricingJSON * storeHotelPricing;
    bool flagHasHotelPromotion;
    TypeHotelPromotionJSON * storeHotelPromotion;
    bool flagHasHotelDetailsUrl;
    std::string storeHotelDetailsUrl;
    bool flagHasHotelRateDetailsUrl;
    std::string storeHotelRateDetailsUrl;
    bool flagHasHotelThumbnailUrl;
    std::string storeHotelThumbnailUrl;
    bool flagHasHotelImageUrl;
    std::string storeHotelImageUrl;
    bool flagHasHotelStarRating;
    double storeHotelStarRating;
    std::string textStoreHotelStarRating;
    bool flagHasHotelGuestRating;
    double storeHotelGuestRating;
    std::string textStoreHotelGuestRating;
    bool flagHasHotelGuestReviewCount;
    OInteger storeHotelGuestReviewCount;
    bool flagHasHotelRoomTypes;
    std::vector< TypeHotelRoomTypesJSON * > storeHotelRoomTypes;
    bool flagHasHotelAmenities;
    std::vector< std::string > storeHotelAmenities;
    bool flagHasMatchedCriteriaInclude;
    std::vector< std::string > storeMatchedCriteriaInclude;
    bool flagHasMatchedCriteriaExclude;
    std::vector< std::string > storeMatchedCriteriaExclude;

    HotelJSON(const HotelJSON &);
    HotelJSON & operator=(const HotelJSON &other);

    void  fromJSONHotelID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceFromReference(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDistanceFromReferenceUnit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelFeaturedOffer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelStatusCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelStatusDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelPricing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelPromotion(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelDetailsUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelRateDetailsUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelThumbnailUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelImageUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelStarRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelGuestRating(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelGuestReviewCount(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelRoomTypes(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHotelAmenities(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchedCriteriaInclude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONMatchedCriteriaExclude(JSONValue *json_value, bool ignore_extras = false);


  public:
    HotelJSON(void);
    virtual ~HotelJSON(void);
    bool  hasHotelID(void) const;
    OInteger  getHotelID(void);
    const OInteger  getHotelID(void) const;
    bool  hasHotelName(void) const;
    std::string  getHotelName(void);
    const std::string  getHotelName(void) const;
    bool  hasDistanceFromReference(void) const;
    double  getDistanceFromReference(void);
    const double  getDistanceFromReference(void) const;
    std::string  getDistanceFromReferenceAsText(void) const;
    bool  hasDistanceFromReferenceUnit(void) const;
    TypeDistanceFromReferenceUnit  getDistanceFromReferenceUnit(void);
    const TypeDistanceFromReferenceUnit  getDistanceFromReferenceUnit(void) const;
    const char * getDistanceFromReferenceUnitAsChars(void) const;
    std::string  getDistanceFromReferenceUnitAsString(void) const;
    bool  hasHotelLocation(void) const;
    TypeHotelLocationJSON *  getHotelLocation(void);
    const TypeHotelLocationJSON *  getHotelLocation(void) const;
    bool  hasHotelDescription(void) const;
    std::string  getHotelDescription(void);
    const std::string  getHotelDescription(void) const;
    bool  hasHotelFeaturedOffer(void) const;
    TypeHotelFeaturedOfferJSON *  getHotelFeaturedOffer(void);
    const TypeHotelFeaturedOfferJSON *  getHotelFeaturedOffer(void) const;
    bool  hasHotelStatusCode(void) const;
    TypeHotelStatusCode  getHotelStatusCode(void);
    const TypeHotelStatusCode  getHotelStatusCode(void) const;
    const char * getHotelStatusCodeAsChars(void) const;
    std::string  getHotelStatusCodeAsString(void) const;
    bool  hasHotelStatusDescription(void) const;
    std::string  getHotelStatusDescription(void);
    const std::string  getHotelStatusDescription(void) const;
    bool  hasHotelPricing(void) const;
    HotelPricingJSON *  getHotelPricing(void);
    const HotelPricingJSON *  getHotelPricing(void) const;
    bool  hasHotelPromotion(void) const;
    TypeHotelPromotionJSON *  getHotelPromotion(void);
    const TypeHotelPromotionJSON *  getHotelPromotion(void) const;
    bool  hasHotelDetailsUrl(void) const;
    std::string  getHotelDetailsUrl(void);
    const std::string  getHotelDetailsUrl(void) const;
    bool  hasHotelRateDetailsUrl(void) const;
    std::string  getHotelRateDetailsUrl(void);
    const std::string  getHotelRateDetailsUrl(void) const;
    bool  hasHotelThumbnailUrl(void) const;
    std::string  getHotelThumbnailUrl(void);
    const std::string  getHotelThumbnailUrl(void) const;
    bool  hasHotelImageUrl(void) const;
    std::string  getHotelImageUrl(void);
    const std::string  getHotelImageUrl(void) const;
    bool  hasHotelStarRating(void) const;
    double  getHotelStarRating(void);
    const double  getHotelStarRating(void) const;
    std::string  getHotelStarRatingAsText(void) const;
    bool  hasHotelGuestRating(void) const;
    double  getHotelGuestRating(void);
    const double  getHotelGuestRating(void) const;
    std::string  getHotelGuestRatingAsText(void) const;
    bool  hasHotelGuestReviewCount(void) const;
    OInteger  getHotelGuestReviewCount(void);
    const OInteger  getHotelGuestReviewCount(void) const;
    bool  hasHotelRoomTypes(void) const;
    size_t  countOfHotelRoomTypes(void) const;
    TypeHotelRoomTypesJSON *  elementOfHotelRoomTypes(size_t element_num);
    const TypeHotelRoomTypesJSON *  elementOfHotelRoomTypes(size_t element_num) const;
    std::vector< TypeHotelRoomTypesJSON * >  getHotelRoomTypes(void);
    const std::vector< TypeHotelRoomTypesJSON * >  getHotelRoomTypes(void) const;
    bool  hasHotelAmenities(void) const;
    size_t  countOfHotelAmenities(void) const;
    std::string  elementOfHotelAmenities(size_t element_num);
    const std::string  elementOfHotelAmenities(size_t element_num) const;
    std::vector< std::string >  getHotelAmenities(void);
    const std::vector< std::string >  getHotelAmenities(void) const;
    bool  hasMatchedCriteriaInclude(void) const;
    size_t  countOfMatchedCriteriaInclude(void) const;
    std::string  elementOfMatchedCriteriaInclude(size_t element_num);
    const std::string  elementOfMatchedCriteriaInclude(size_t element_num) const;
    std::vector< std::string >  getMatchedCriteriaInclude(void);
    const std::vector< std::string >  getMatchedCriteriaInclude(void) const;
    bool  hasMatchedCriteriaExclude(void) const;
    size_t  countOfMatchedCriteriaExclude(void) const;
    std::string  elementOfMatchedCriteriaExclude(size_t element_num);
    const std::string  elementOfMatchedCriteriaExclude(size_t element_num) const;
    std::vector< std::string >  getMatchedCriteriaExclude(void);
    const std::vector< std::string >  getMatchedCriteriaExclude(void) const;


    void setHotelID(OInteger new_value)
      {
        flagHasHotelID = true;
        if (new_value < 1)
            throw("The value for field HotelID of HotelJSON is less than the lower bound (1) for that field.");
        storeHotelID = new_value;
      }
    void unsetHotelID(void)
      {
        flagHasHotelID = false;
      }
    void setHotelName(std::string new_value)
      {
        flagHasHotelName = true;
        storeHotelName = new_value;
      }
    void unsetHotelName(void)
      {
        flagHasHotelName = false;
      }
    void setDistanceFromReference(double new_value)
      {
        flagHasDistanceFromReference = true;
        storeDistanceFromReference = new_value;
        textStoreDistanceFromReference = "";
      }
    void setDistanceFromReferenceText(std::string new_value)
      {
        flagHasDistanceFromReference = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field DistanceFromReference of HotelJSON is not a valid number.");
        textStoreDistanceFromReference = new_value;
      }
    void unsetDistanceFromReference(void)
      {
        flagHasDistanceFromReference = false;
      }
    void setDistanceFromReferenceUnit(TypeDistanceFromReferenceUnit new_value)
      {
        flagHasDistanceFromReferenceUnit = true;
        storeDistanceFromReferenceUnit = new_value;
      }
    void setDistanceFromReferenceUnit(const char *chars)
      {
        setDistanceFromReferenceUnit(stringToDistanceFromReferenceUnit(chars));
      }
    void setDistanceFromReferenceUnit(std::string the_string)
      {
        setDistanceFromReferenceUnit(stringToDistanceFromReferenceUnit(the_string.c_str()));
      }
    void unsetDistanceFromReferenceUnit(void)
      {
        flagHasDistanceFromReferenceUnit = false;
      }
    void setHotelLocation(TypeHotelLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelLocation)
          {
            storeHotelLocation->remove_reference();
          }
        flagHasHotelLocation = true;
        storeHotelLocation = new_value;
      }
    void unsetHotelLocation(void)
      {
        if (flagHasHotelLocation)
          {
            storeHotelLocation->remove_reference();
          }
        flagHasHotelLocation = false;
      }
    void setHotelDescription(std::string new_value)
      {
        flagHasHotelDescription = true;
        storeHotelDescription = new_value;
      }
    void unsetHotelDescription(void)
      {
        flagHasHotelDescription = false;
      }
    void setHotelFeaturedOffer(TypeHotelFeaturedOfferJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelFeaturedOffer)
          {
            storeHotelFeaturedOffer->remove_reference();
          }
        flagHasHotelFeaturedOffer = true;
        storeHotelFeaturedOffer = new_value;
      }
    void unsetHotelFeaturedOffer(void)
      {
        if (flagHasHotelFeaturedOffer)
          {
            storeHotelFeaturedOffer->remove_reference();
          }
        flagHasHotelFeaturedOffer = false;
      }
    void setHotelStatusCode(TypeHotelStatusCode new_value)
      {
        flagHasHotelStatusCode = true;
        storeHotelStatusCode = new_value;
      }
    void setHotelStatusCode(const char *chars)
      {
        setHotelStatusCode(stringToHotelStatusCode(chars));
      }
    void setHotelStatusCode(std::string the_string)
      {
        setHotelStatusCode(stringToHotelStatusCode(the_string.c_str()));
      }
    void unsetHotelStatusCode(void)
      {
        flagHasHotelStatusCode = false;
      }
    void setHotelStatusDescription(std::string new_value)
      {
        flagHasHotelStatusDescription = true;
        storeHotelStatusDescription = new_value;
      }
    void unsetHotelStatusDescription(void)
      {
        flagHasHotelStatusDescription = false;
      }
    void setHotelPricing(HotelPricingJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelPricing)
          {
            storeHotelPricing->remove_reference();
          }
        flagHasHotelPricing = true;
        storeHotelPricing = new_value;
      }
    void unsetHotelPricing(void)
      {
        if (flagHasHotelPricing)
          {
            storeHotelPricing->remove_reference();
          }
        flagHasHotelPricing = false;
      }
    void setHotelPromotion(TypeHotelPromotionJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasHotelPromotion)
          {
            storeHotelPromotion->remove_reference();
          }
        flagHasHotelPromotion = true;
        storeHotelPromotion = new_value;
      }
    void unsetHotelPromotion(void)
      {
        if (flagHasHotelPromotion)
          {
            storeHotelPromotion->remove_reference();
          }
        flagHasHotelPromotion = false;
      }
    void setHotelDetailsUrl(std::string new_value)
      {
        flagHasHotelDetailsUrl = true;
        storeHotelDetailsUrl = new_value;
      }
    void unsetHotelDetailsUrl(void)
      {
        flagHasHotelDetailsUrl = false;
      }
    void setHotelRateDetailsUrl(std::string new_value)
      {
        flagHasHotelRateDetailsUrl = true;
        storeHotelRateDetailsUrl = new_value;
      }
    void unsetHotelRateDetailsUrl(void)
      {
        flagHasHotelRateDetailsUrl = false;
      }
    void setHotelThumbnailUrl(std::string new_value)
      {
        flagHasHotelThumbnailUrl = true;
        storeHotelThumbnailUrl = new_value;
      }
    void unsetHotelThumbnailUrl(void)
      {
        flagHasHotelThumbnailUrl = false;
      }
    void setHotelImageUrl(std::string new_value)
      {
        flagHasHotelImageUrl = true;
        storeHotelImageUrl = new_value;
      }
    void unsetHotelImageUrl(void)
      {
        flagHasHotelImageUrl = false;
      }
    void setHotelStarRating(double new_value)
      {
        flagHasHotelStarRating = true;
        if (new_value < 0)
            throw("The value for field HotelStarRating of HotelJSON is less than the lower bound (0) for that field.");
        if (new_value > 5)
            throw("The value for field HotelStarRating of HotelJSON is greater than the upper bound (5) for that field.");
        storeHotelStarRating = new_value;
        textStoreHotelStarRating = "";
      }
    void setHotelStarRatingText(std::string new_value)
      {
        flagHasHotelStarRating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelStarRating of HotelJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelStarRating of HotelJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "5", "", false, "1") > 0)
            throw("The value for field HotelStarRating of HotelJSON is greater than the upper bound (5) for that field.");
        textStoreHotelStarRating = new_value;
      }
    void unsetHotelStarRating(void)
      {
        flagHasHotelStarRating = false;
      }
    void setHotelGuestRating(double new_value)
      {
        flagHasHotelGuestRating = true;
        if (new_value < 0)
            throw("The value for field HotelGuestRating of HotelJSON is less than the lower bound (0) for that field.");
        if (new_value > 5)
            throw("The value for field HotelGuestRating of HotelJSON is greater than the upper bound (5) for that field.");
        storeHotelGuestRating = new_value;
        textStoreHotelGuestRating = "";
      }
    void setHotelGuestRatingText(std::string new_value)
      {
        flagHasHotelGuestRating = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HotelGuestRating of HotelJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field HotelGuestRating of HotelJSON is less than the lower bound (0) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "5", "", false, "1") > 0)
            throw("The value for field HotelGuestRating of HotelJSON is greater than the upper bound (5) for that field.");
        textStoreHotelGuestRating = new_value;
      }
    void unsetHotelGuestRating(void)
      {
        flagHasHotelGuestRating = false;
      }
    void setHotelGuestReviewCount(OInteger new_value)
      {
        flagHasHotelGuestReviewCount = true;
        if (new_value < 0)
            throw("The value for field HotelGuestReviewCount of HotelJSON is less than the lower bound (0) for that field.");
        storeHotelGuestReviewCount = new_value;
      }
    void unsetHotelGuestReviewCount(void)
      {
        flagHasHotelGuestReviewCount = false;
      }
    void initHotelRoomTypes(void)
      {
        if (flagHasHotelRoomTypes)
          {
            for (size_t num5 = 0; num5 < storeHotelRoomTypes.size(); ++num5)
              {
                storeHotelRoomTypes[num5]->remove_reference();
              }
          }
        flagHasHotelRoomTypes = true;
        storeHotelRoomTypes.clear();
      }
    void appendHotelRoomTypes(TypeHotelRoomTypesJSON * to_append)
      {
        if (!flagHasHotelRoomTypes)
          {
            flagHasHotelRoomTypes = true;
            storeHotelRoomTypes.clear();
          }
        assert(flagHasHotelRoomTypes);
        to_append->add_reference();
        storeHotelRoomTypes.push_back(to_append);
      }
    void unsetHotelRoomTypes(void)
      {
        if (flagHasHotelRoomTypes)
          {
            for (size_t num6 = 0; num6 < storeHotelRoomTypes.size(); ++num6)
              {
                storeHotelRoomTypes[num6]->remove_reference();
              }
          }
        flagHasHotelRoomTypes = false;
        storeHotelRoomTypes.clear();
      }
    void initHotelAmenities(void)
      {
        flagHasHotelAmenities = true;
        storeHotelAmenities.clear();
      }
    void appendHotelAmenities(std::string to_append)
      {
        if (!flagHasHotelAmenities)
          {
            flagHasHotelAmenities = true;
            storeHotelAmenities.clear();
          }
        assert(flagHasHotelAmenities);
        storeHotelAmenities.push_back(to_append);
      }
    void unsetHotelAmenities(void)
      {
        flagHasHotelAmenities = false;
        storeHotelAmenities.clear();
      }
    void initMatchedCriteriaInclude(void)
      {
        flagHasMatchedCriteriaInclude = true;
        storeMatchedCriteriaInclude.clear();
      }
    void appendMatchedCriteriaInclude(std::string to_append)
      {
        if (!flagHasMatchedCriteriaInclude)
          {
            flagHasMatchedCriteriaInclude = true;
            storeMatchedCriteriaInclude.clear();
          }
        assert(flagHasMatchedCriteriaInclude);
        storeMatchedCriteriaInclude.push_back(to_append);
      }
    void unsetMatchedCriteriaInclude(void)
      {
        flagHasMatchedCriteriaInclude = false;
        storeMatchedCriteriaInclude.clear();
      }
    void initMatchedCriteriaExclude(void)
      {
        flagHasMatchedCriteriaExclude = true;
        storeMatchedCriteriaExclude.clear();
      }
    void appendMatchedCriteriaExclude(std::string to_append)
      {
        if (!flagHasMatchedCriteriaExclude)
          {
            flagHasMatchedCriteriaExclude = true;
            storeMatchedCriteriaExclude.clear();
          }
        assert(flagHasMatchedCriteriaExclude);
        storeMatchedCriteriaExclude.push_back(to_append);
      }
    void unsetMatchedCriteriaExclude(void)
      {
        flagHasMatchedCriteriaExclude = false;
        storeMatchedCriteriaExclude.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        if (flagHasHotelID)
          {
            handler->start_pair("HotelID");
            handler->number_value(storeHotelID.get_o_integer());
          }
        if (flagHasHotelName)
          {
            handler->start_pair("HotelName");
            handler->string_value(storeHotelName);
          }
        if (flagHasDistanceFromReference)
          {
            handler->start_pair("DistanceFromReference");
            if (textStoreDistanceFromReference != "")
                handler->number_value(textStoreDistanceFromReference.c_str());
            else if (((double)(long int)storeDistanceFromReference) == storeDistanceFromReference)
                handler->number_value((long int)storeDistanceFromReference);
            else
                handler->number_value(storeDistanceFromReference);
          }
        if (flagHasDistanceFromReferenceUnit)
          {
            handler->start_pair("DistanceFromReferenceUnit");
            switch (storeDistanceFromReferenceUnit)
              {
                case DistanceFromReferenceUnit_km:
                    handler->string_value("km");
                    break;
                case DistanceFromReferenceUnit_mi:
                    handler->string_value("mi");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasHotelLocation)
          {
            handler->start_pair("HotelLocation");
            storeHotelLocation->write_as_json(handler);
          }
        if (flagHasHotelDescription)
          {
            handler->start_pair("HotelDescription");
            handler->string_value(storeHotelDescription);
          }
        if (flagHasHotelFeaturedOffer)
          {
            handler->start_pair("HotelFeaturedOffer");
            storeHotelFeaturedOffer->write_as_json(handler);
          }
        if (flagHasHotelStatusCode)
          {
            handler->start_pair("HotelStatusCode");
            switch (storeHotelStatusCode)
              {
                case HotelStatusCode_Available:
                    handler->string_value("Available");
                    break;
                case HotelStatusCode_Not_x20_available:
                    handler->string_value("Not available");
                    break;
                case HotelStatusCode_Error:
                    handler->string_value("Error");
                    break;
                case HotelStatusCode_No_x20_available_x20_rate_x20_plan:
                    handler->string_value("No available rate plan");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasHotelStatusDescription)
          {
            handler->start_pair("HotelStatusDescription");
            handler->string_value(storeHotelStatusDescription);
          }
        if (flagHasHotelPricing)
          {
            handler->start_pair("HotelPricing");
            storeHotelPricing->write_as_json(handler);
          }
        if (flagHasHotelPromotion)
          {
            handler->start_pair("HotelPromotion");
            storeHotelPromotion->write_as_json(handler);
          }
        if (flagHasHotelDetailsUrl)
          {
            handler->start_pair("HotelDetailsUrl");
            handler->string_value(storeHotelDetailsUrl);
          }
        if (flagHasHotelRateDetailsUrl)
          {
            handler->start_pair("HotelRateDetailsUrl");
            handler->string_value(storeHotelRateDetailsUrl);
          }
        if (flagHasHotelThumbnailUrl)
          {
            handler->start_pair("HotelThumbnailUrl");
            handler->string_value(storeHotelThumbnailUrl);
          }
        if (flagHasHotelImageUrl)
          {
            handler->start_pair("HotelImageUrl");
            handler->string_value(storeHotelImageUrl);
          }
        if (flagHasHotelStarRating)
          {
            handler->start_pair("HotelStarRating");
            if (textStoreHotelStarRating != "")
                handler->number_value(textStoreHotelStarRating.c_str());
            else if (((double)(long int)storeHotelStarRating) == storeHotelStarRating)
                handler->number_value((long int)storeHotelStarRating);
            else
                handler->number_value(storeHotelStarRating);
          }
        if (flagHasHotelGuestRating)
          {
            handler->start_pair("HotelGuestRating");
            if (textStoreHotelGuestRating != "")
                handler->number_value(textStoreHotelGuestRating.c_str());
            else if (((double)(long int)storeHotelGuestRating) == storeHotelGuestRating)
                handler->number_value((long int)storeHotelGuestRating);
            else
                handler->number_value(storeHotelGuestRating);
          }
        if (flagHasHotelGuestReviewCount)
          {
            handler->start_pair("HotelGuestReviewCount");
            handler->number_value(storeHotelGuestReviewCount.get_o_integer());
          }
        if (flagHasHotelRoomTypes)
          {
            handler->start_pair("HotelRoomTypes");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeHotelRoomTypes.size(); ++num1)
              {
                storeHotelRoomTypes[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasHotelAmenities)
          {
            handler->start_pair("HotelAmenities");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeHotelAmenities.size(); ++num2)
              {
                handler->string_value(storeHotelAmenities[num2]);
              }
            handler->finish_array();
          }
        if (flagHasMatchedCriteriaInclude)
          {
            handler->start_pair("MatchedCriteriaInclude");
            handler->start_array();
            for (size_t num3 = 0; num3 < storeMatchedCriteriaInclude.size(); ++num3)
              {
                handler->string_value(storeMatchedCriteriaInclude[num3]);
              }
            handler->finish_array();
          }
        if (flagHasMatchedCriteriaExclude)
          {
            handler->start_pair("MatchedCriteriaExclude");
            handler->start_array();
            for (size_t num4 = 0; num4 < storeMatchedCriteriaExclude.size(); ++num4)
              {
                handler->string_value(storeMatchedCriteriaExclude[num4]);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static HotelJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HotelJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HotelJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelJSON>, HotelJSON *, bool> generator("Type Hotel", ignore_extras);
            parse_json_value(text, "Text for HotelJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HotelJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HotelJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HotelJSON>, HotelJSON *, bool> generator("Type Hotel", ignore_extras);
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
        static char lowerBoundHotelID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundHotelID>, OInteger, o_integer > fieldGeneratorHotelID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelName;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorDistanceFromReference;
    class FieldGeneratorDistanceFromReferenceUnit : public JSONStringGenerator
          {
          protected:
            FieldGeneratorDistanceFromReferenceUnit(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorDistanceFromReferenceUnit(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToDistanceFromReferenceUnit(result));
              }
            virtual void handle_result(TypeDistanceFromReferenceUnit result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorDistanceFromReferenceUnit, TypeDistanceFromReferenceUnit, TypeDistanceFromReferenceUnit > fieldGeneratorDistanceFromReferenceUnit;
        JSONHoldingGenerator<TypeHotelLocationJSON::Generator, RCHandle<TypeHotelLocationJSON>, TypeHotelLocationJSON *, bool > fieldGeneratorHotelLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelDescription;
        JSONHoldingGenerator<TypeHotelFeaturedOfferJSON::Generator, RCHandle<TypeHotelFeaturedOfferJSON>, TypeHotelFeaturedOfferJSON *, bool > fieldGeneratorHotelFeaturedOffer;
    class FieldGeneratorHotelStatusCode : public JSONStringGenerator
          {
          protected:
            FieldGeneratorHotelStatusCode(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorHotelStatusCode(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToHotelStatusCode(result));
              }
            virtual void handle_result(TypeHotelStatusCode result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorHotelStatusCode, TypeHotelStatusCode, TypeHotelStatusCode > fieldGeneratorHotelStatusCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelStatusDescription;
        JSONHoldingGenerator<HotelPricingJSON::Generator, RCHandle<HotelPricingJSON>, HotelPricingJSON *, bool > fieldGeneratorHotelPricing;
        JSONHoldingGenerator<TypeHotelPromotionJSON::Generator, RCHandle<TypeHotelPromotionJSON>, TypeHotelPromotionJSON *, bool > fieldGeneratorHotelPromotion;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelDetailsUrl;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelRateDetailsUrl;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelThumbnailUrl;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelImageUrl;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelStarRating;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHotelGuestRating;
        static char lowerBoundHotelGuestReviewCount[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundHotelGuestReviewCount>, OInteger, o_integer > fieldGeneratorHotelGuestReviewCount;
        JSONHoldingArrayGenerator<TypeHotelRoomTypesJSON::Generator, RCHandle<TypeHotelRoomTypesJSON>, TypeHotelRoomTypesJSON *, bool > fieldGeneratorHotelRoomTypes;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorHotelAmenities;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMatchedCriteriaInclude;
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMatchedCriteriaExclude;


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
            HotelJSON *result = new HotelJSON();
            assert(result != NULL);
            RCHandle<HotelJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(HotelJSON *result)
          {
            if (fieldGeneratorHotelID.have_value)
              {
                result->setHotelID(fieldGeneratorHotelID.value);
                fieldGeneratorHotelID.have_value = false;
              }
            if (fieldGeneratorHotelName.have_value)
              {
                result->setHotelName(fieldGeneratorHotelName.value);
                fieldGeneratorHotelName.have_value = false;
              }
            if (fieldGeneratorDistanceFromReference.have_value)
              {
                result->setDistanceFromReferenceText(fieldGeneratorDistanceFromReference.value);
                fieldGeneratorDistanceFromReference.have_value = false;
              }
            if (fieldGeneratorDistanceFromReferenceUnit.have_value)
              {
                result->setDistanceFromReferenceUnit(fieldGeneratorDistanceFromReferenceUnit.value);
                fieldGeneratorDistanceFromReferenceUnit.have_value = false;
              }
            if (fieldGeneratorHotelLocation.have_value)
              {
                result->setHotelLocation(fieldGeneratorHotelLocation.value.referenced());
                fieldGeneratorHotelLocation.have_value = false;
              }
            if (fieldGeneratorHotelDescription.have_value)
              {
                result->setHotelDescription(fieldGeneratorHotelDescription.value);
                fieldGeneratorHotelDescription.have_value = false;
              }
            if (fieldGeneratorHotelFeaturedOffer.have_value)
              {
                result->setHotelFeaturedOffer(fieldGeneratorHotelFeaturedOffer.value.referenced());
                fieldGeneratorHotelFeaturedOffer.have_value = false;
              }
            if (fieldGeneratorHotelStatusCode.have_value)
              {
                result->setHotelStatusCode(fieldGeneratorHotelStatusCode.value);
                fieldGeneratorHotelStatusCode.have_value = false;
              }
            if (fieldGeneratorHotelStatusDescription.have_value)
              {
                result->setHotelStatusDescription(fieldGeneratorHotelStatusDescription.value);
                fieldGeneratorHotelStatusDescription.have_value = false;
              }
            if (fieldGeneratorHotelPricing.have_value)
              {
                result->setHotelPricing(fieldGeneratorHotelPricing.value.referenced());
                fieldGeneratorHotelPricing.have_value = false;
              }
            if (fieldGeneratorHotelPromotion.have_value)
              {
                result->setHotelPromotion(fieldGeneratorHotelPromotion.value.referenced());
                fieldGeneratorHotelPromotion.have_value = false;
              }
            if (fieldGeneratorHotelDetailsUrl.have_value)
              {
                result->setHotelDetailsUrl(fieldGeneratorHotelDetailsUrl.value);
                fieldGeneratorHotelDetailsUrl.have_value = false;
              }
            if (fieldGeneratorHotelRateDetailsUrl.have_value)
              {
                result->setHotelRateDetailsUrl(fieldGeneratorHotelRateDetailsUrl.value);
                fieldGeneratorHotelRateDetailsUrl.have_value = false;
              }
            if (fieldGeneratorHotelThumbnailUrl.have_value)
              {
                result->setHotelThumbnailUrl(fieldGeneratorHotelThumbnailUrl.value);
                fieldGeneratorHotelThumbnailUrl.have_value = false;
              }
            if (fieldGeneratorHotelImageUrl.have_value)
              {
                result->setHotelImageUrl(fieldGeneratorHotelImageUrl.value);
                fieldGeneratorHotelImageUrl.have_value = false;
              }
            if (fieldGeneratorHotelStarRating.have_value)
              {
                result->setHotelStarRatingText(fieldGeneratorHotelStarRating.value);
                fieldGeneratorHotelStarRating.have_value = false;
              }
            if (fieldGeneratorHotelGuestRating.have_value)
              {
                result->setHotelGuestRatingText(fieldGeneratorHotelGuestRating.value);
                fieldGeneratorHotelGuestRating.have_value = false;
              }
            if (fieldGeneratorHotelGuestReviewCount.have_value)
              {
                result->setHotelGuestReviewCount(fieldGeneratorHotelGuestReviewCount.value);
                fieldGeneratorHotelGuestReviewCount.have_value = false;
              }
            if (fieldGeneratorHotelRoomTypes.have_value)
              {
                result->initHotelRoomTypes();
                size_t count = fieldGeneratorHotelRoomTypes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotelRoomTypes(fieldGeneratorHotelRoomTypes.value[num].referenced());
                  }
                fieldGeneratorHotelRoomTypes.value.clear();
                fieldGeneratorHotelRoomTypes.have_value = false;
              }
            if (fieldGeneratorHotelAmenities.have_value)
              {
                result->initHotelAmenities();
                size_t count = fieldGeneratorHotelAmenities.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendHotelAmenities(fieldGeneratorHotelAmenities.value[num]);
                  }
                fieldGeneratorHotelAmenities.value.clear();
                fieldGeneratorHotelAmenities.have_value = false;
              }
            if (fieldGeneratorMatchedCriteriaInclude.have_value)
              {
                result->initMatchedCriteriaInclude();
                size_t count = fieldGeneratorMatchedCriteriaInclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMatchedCriteriaInclude(fieldGeneratorMatchedCriteriaInclude.value[num]);
                  }
                fieldGeneratorMatchedCriteriaInclude.value.clear();
                fieldGeneratorMatchedCriteriaInclude.have_value = false;
              }
            if (fieldGeneratorMatchedCriteriaExclude.have_value)
              {
                result->initMatchedCriteriaExclude();
                size_t count = fieldGeneratorMatchedCriteriaExclude.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendMatchedCriteriaExclude(fieldGeneratorMatchedCriteriaExclude.value[num]);
                  }
                fieldGeneratorMatchedCriteriaExclude.value.clear();
                fieldGeneratorMatchedCriteriaExclude.have_value = false;
              }
          }
        virtual void handle_result(HotelJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strncmp(&(field_name[1]), "istanceFromReference", 20) == 0)
                      {
                        switch ((unsigned char)(field_name[21]))
                          {
                            case 0:
                                return &fieldGeneratorDistanceFromReference;
                            case 'U':
                                if (strcmp(&(field_name[22]), "nit") == 0)
                                    return &fieldGeneratorDistanceFromReferenceUnit;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'H':
                    if (strncmp(&(field_name[1]), "otel", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 'A':
                                if (strcmp(&(field_name[6]), "menities") == 0)
                                    return &fieldGeneratorHotelAmenities;
                                break;
                            case 'D':
                                if (strncmp(&(field_name[6]), "e", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 's':
                                            if (strcmp(&(field_name[8]), "cription") == 0)
                                                return &fieldGeneratorHotelDescription;
                                            break;
                                        case 't':
                                            if (strcmp(&(field_name[8]), "ailsUrl") == 0)
                                                return &fieldGeneratorHotelDetailsUrl;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'F':
                                if (strcmp(&(field_name[6]), "eaturedOffer") == 0)
                                    return &fieldGeneratorHotelFeaturedOffer;
                                break;
                            case 'G':
                                if (strncmp(&(field_name[6]), "uestR", 5) == 0)
                                  {
                                    switch ((unsigned char)(field_name[11]))
                                      {
                                        case 'a':
                                            if (strcmp(&(field_name[12]), "ting") == 0)
                                                return &fieldGeneratorHotelGuestRating;
                                            break;
                                        case 'e':
                                            if (strcmp(&(field_name[12]), "viewCount") == 0)
                                                return &fieldGeneratorHotelGuestReviewCount;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'I':
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'D':
                                        if (field_name[7] == 0)
                                            return &fieldGeneratorHotelID;
                                        break;
                                    case 'm':
                                        if (strcmp(&(field_name[7]), "ageUrl") == 0)
                                            return &fieldGeneratorHotelImageUrl;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'L':
                                if (strcmp(&(field_name[6]), "ocation") == 0)
                                    return &fieldGeneratorHotelLocation;
                                break;
                            case 'N':
                                if (strcmp(&(field_name[6]), "ame") == 0)
                                    return &fieldGeneratorHotelName;
                                break;
                            case 'P':
                                if (strncmp(&(field_name[6]), "r", 1) == 0)
                                  {
                                    switch ((unsigned char)(field_name[7]))
                                      {
                                        case 'i':
                                            if (strcmp(&(field_name[8]), "cing") == 0)
                                                return &fieldGeneratorHotelPricing;
                                            break;
                                        case 'o':
                                            if (strcmp(&(field_name[8]), "motion") == 0)
                                                return &fieldGeneratorHotelPromotion;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'R':
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[7]), "teDetailsUrl") == 0)
                                            return &fieldGeneratorHotelRateDetailsUrl;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[7]), "omTypes") == 0)
                                            return &fieldGeneratorHotelRoomTypes;
                                        break;
                                    default:
                                        break;
                                  }
                                break;
                            case 'S':
                                if (strncmp(&(field_name[6]), "ta", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[8]))
                                      {
                                        case 'r':
                                            if (strcmp(&(field_name[9]), "Rating") == 0)
                                                return &fieldGeneratorHotelStarRating;
                                            break;
                                        case 't':
                                            if (strncmp(&(field_name[9]), "us", 2) == 0)
                                              {
                                                switch ((unsigned char)(field_name[11]))
                                                  {
                                                    case 'C':
                                                        if (strcmp(&(field_name[12]), "ode") == 0)
                                                            return &fieldGeneratorHotelStatusCode;
                                                        break;
                                                    case 'D':
                                                        if (strcmp(&(field_name[12]), "escription") == 0)
                                                            return &fieldGeneratorHotelStatusDescription;
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
                            case 'T':
                                if (strcmp(&(field_name[6]), "humbnailUrl") == 0)
                                    return &fieldGeneratorHotelThumbnailUrl;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'M':
                    if (strncmp(&(field_name[1]), "atchedCriteria", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 'E':
                                if (strcmp(&(field_name[16]), "xclude") == 0)
                                    return &fieldGeneratorMatchedCriteriaExclude;
                                break;
                            case 'I':
                                if (strcmp(&(field_name[16]), "nclude") == 0)
                                    return &fieldGeneratorMatchedCriteriaInclude;
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
        Generator(bool ignore_extras = false) : fieldGeneratorHotelID("field \"HotelID\" of the Hotel class"), fieldGeneratorHotelName("field \"HotelName\" of the Hotel class"), fieldGeneratorDistanceFromReference("field \"DistanceFromReference\" of the Hotel class"), fieldGeneratorDistanceFromReferenceUnit("field \"DistanceFromReferenceUnit\" of the Hotel class"), fieldGeneratorHotelLocation("field \"HotelLocation\" of the Hotel class", ignore_extras), fieldGeneratorHotelDescription("field \"HotelDescription\" of the Hotel class"), fieldGeneratorHotelFeaturedOffer("field \"HotelFeaturedOffer\" of the Hotel class", ignore_extras), fieldGeneratorHotelStatusCode("field \"HotelStatusCode\" of the Hotel class"), fieldGeneratorHotelStatusDescription("field \"HotelStatusDescription\" of the Hotel class"), fieldGeneratorHotelPricing("field \"HotelPricing\" of the Hotel class", ignore_extras), fieldGeneratorHotelPromotion("field \"HotelPromotion\" of the Hotel class", ignore_extras), fieldGeneratorHotelDetailsUrl("field \"HotelDetailsUrl\" of the Hotel class"), fieldGeneratorHotelRateDetailsUrl("field \"HotelRateDetailsUrl\" of the Hotel class"), fieldGeneratorHotelThumbnailUrl("field \"HotelThumbnailUrl\" of the Hotel class"), fieldGeneratorHotelImageUrl("field \"HotelImageUrl\" of the Hotel class"), fieldGeneratorHotelStarRating("field \"HotelStarRating\" of the Hotel class"), fieldGeneratorHotelGuestRating("field \"HotelGuestRating\" of the Hotel class"), fieldGeneratorHotelGuestReviewCount("field \"HotelGuestReviewCount\" of the Hotel class"), fieldGeneratorHotelRoomTypes("field \"HotelRoomTypes\" of the Hotel class", ignore_extras), fieldGeneratorHotelAmenities("field \"HotelAmenities\" of the Hotel class"), fieldGeneratorMatchedCriteriaInclude("field \"MatchedCriteriaInclude\" of the Hotel class"), fieldGeneratorMatchedCriteriaExclude("field \"MatchedCriteriaExclude\" of the Hotel class")
          {
            set_what("the Hotel class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorHotelID.reset();
            fieldGeneratorHotelName.reset();
            fieldGeneratorDistanceFromReference.reset();
            fieldGeneratorDistanceFromReferenceUnit.reset();
            fieldGeneratorHotelLocation.reset();
            fieldGeneratorHotelDescription.reset();
            fieldGeneratorHotelFeaturedOffer.reset();
            fieldGeneratorHotelStatusCode.reset();
            fieldGeneratorHotelStatusDescription.reset();
            fieldGeneratorHotelPricing.reset();
            fieldGeneratorHotelPromotion.reset();
            fieldGeneratorHotelDetailsUrl.reset();
            fieldGeneratorHotelRateDetailsUrl.reset();
            fieldGeneratorHotelThumbnailUrl.reset();
            fieldGeneratorHotelImageUrl.reset();
            fieldGeneratorHotelStarRating.reset();
            fieldGeneratorHotelGuestRating.reset();
            fieldGeneratorHotelGuestReviewCount.reset();
            fieldGeneratorHotelRoomTypes.reset();
            fieldGeneratorHotelAmenities.reset();
            fieldGeneratorMatchedCriteriaInclude.reset();
            fieldGeneratorMatchedCriteriaExclude.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* HOTELJSON_H */
