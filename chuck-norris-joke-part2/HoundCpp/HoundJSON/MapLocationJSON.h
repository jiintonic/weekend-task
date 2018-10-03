/* file "MapLocationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MAPLOCATIONJSON_H
#define MAPLOCATIONJSON_H

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
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class MapLocationJSON : public ReferenceCounted
  {
  public:
    enum TypeType
      {
        Type_Continent,
        Type_Country,
        Type_Admin1,
        Type_Admin2,
        Type_City,
        Type_Street_x20_Address,
        Type_Airport,
        Type_Hotel,
        Type_Postal_x20_Code,
        Type_Other
      };

    static TypeType  stringToType(const char *chars);
    static const char * stringFromType(TypeType the_enum);
    class TypeBoundingBoxJSON : public ReferenceCounted
      {
      private:
        bool flagHasMinLat;
        double storeMinLat;
        std::string textStoreMinLat;
        bool flagHasMaxLat;
        double storeMaxLat;
        std::string textStoreMaxLat;
        bool flagHasMinLon;
        double storeMinLon;
        std::string textStoreMinLon;
        bool flagHasMaxLon;
        double storeMaxLon;
        std::string textStoreMaxLon;

        TypeBoundingBoxJSON(const TypeBoundingBoxJSON &);
        TypeBoundingBoxJSON & operator=(const TypeBoundingBoxJSON &other);

        void  fromJSONMinLat(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxLat(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMinLon(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONMaxLon(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeBoundingBoxJSON(void);
        virtual ~TypeBoundingBoxJSON(void);
        bool  hasMinLat(void) const;
        double  getMinLat(void);
        const double  getMinLat(void) const;
        std::string  getMinLatAsText(void) const;
        bool  hasMaxLat(void) const;
        double  getMaxLat(void);
        const double  getMaxLat(void) const;
        std::string  getMaxLatAsText(void) const;
        bool  hasMinLon(void) const;
        double  getMinLon(void);
        const double  getMinLon(void) const;
        std::string  getMinLonAsText(void) const;
        bool  hasMaxLon(void) const;
        double  getMaxLon(void);
        const double  getMaxLon(void) const;
        std::string  getMaxLonAsText(void) const;


        void setMinLat(double new_value)
          {
            flagHasMinLat = true;
            if (new_value < -90)
                throw("The value for field MinLat of TypeBoundingBoxJSON is less than the lower bound (-90) for that field.");
            if (new_value > 90)
                throw("The value for field MinLat of TypeBoundingBoxJSON is greater than the upper bound (90) for that field.");
            storeMinLat = new_value;
            textStoreMinLat = "";
          }
        void setMinLatText(std::string new_value)
          {
            flagHasMinLat = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field MinLat of TypeBoundingBoxJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
                throw("The value for field MinLat of TypeBoundingBoxJSON is less than the lower bound (-90) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
                throw("The value for field MinLat of TypeBoundingBoxJSON is greater than the upper bound (90) for that field.");
            textStoreMinLat = new_value;
          }
        void unsetMinLat(void)
          {
            flagHasMinLat = false;
          }
        void setMaxLat(double new_value)
          {
            flagHasMaxLat = true;
            if (new_value < -90)
                throw("The value for field MaxLat of TypeBoundingBoxJSON is less than the lower bound (-90) for that field.");
            if (new_value > 90)
                throw("The value for field MaxLat of TypeBoundingBoxJSON is greater than the upper bound (90) for that field.");
            storeMaxLat = new_value;
            textStoreMaxLat = "";
          }
        void setMaxLatText(std::string new_value)
          {
            flagHasMaxLat = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field MaxLat of TypeBoundingBoxJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
                throw("The value for field MaxLat of TypeBoundingBoxJSON is less than the lower bound (-90) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
                throw("The value for field MaxLat of TypeBoundingBoxJSON is greater than the upper bound (90) for that field.");
            textStoreMaxLat = new_value;
          }
        void unsetMaxLat(void)
          {
            flagHasMaxLat = false;
          }
        void setMinLon(double new_value)
          {
            flagHasMinLon = true;
            if (new_value < -180)
                throw("The value for field MinLon of TypeBoundingBoxJSON is less than the lower bound (-180) for that field.");
            if (new_value > 180)
                throw("The value for field MinLon of TypeBoundingBoxJSON is greater than the upper bound (180) for that field.");
            storeMinLon = new_value;
            textStoreMinLon = "";
          }
        void setMinLonText(std::string new_value)
          {
            flagHasMinLon = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field MinLon of TypeBoundingBoxJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
                throw("The value for field MinLon of TypeBoundingBoxJSON is less than the lower bound (-180) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
                throw("The value for field MinLon of TypeBoundingBoxJSON is greater than the upper bound (180) for that field.");
            textStoreMinLon = new_value;
          }
        void unsetMinLon(void)
          {
            flagHasMinLon = false;
          }
        void setMaxLon(double new_value)
          {
            flagHasMaxLon = true;
            if (new_value < -180)
                throw("The value for field MaxLon of TypeBoundingBoxJSON is less than the lower bound (-180) for that field.");
            if (new_value > 180)
                throw("The value for field MaxLon of TypeBoundingBoxJSON is greater than the upper bound (180) for that field.");
            storeMaxLon = new_value;
            textStoreMaxLon = "";
          }
        void setMaxLonText(std::string new_value)
          {
            flagHasMaxLon = true;
            if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
                throw("The text value for field MaxLon of TypeBoundingBoxJSON is not a valid number.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
                throw("The value for field MaxLon of TypeBoundingBoxJSON is less than the lower bound (-180) for that field.");
            if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
                throw("The value for field MaxLon of TypeBoundingBoxJSON is greater than the upper bound (180) for that field.");
            textStoreMaxLon = new_value;
          }
        void unsetMaxLon(void)
          {
            flagHasMaxLon = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasMinLat);
            handler->start_pair("MinLat");
            if (textStoreMinLat != "")
                handler->number_value(textStoreMinLat.c_str());
            else if (((double)(long int)storeMinLat) == storeMinLat)
                handler->number_value((long int)storeMinLat);
            else
                handler->number_value(storeMinLat);
            assert(flagHasMaxLat);
            handler->start_pair("MaxLat");
            if (textStoreMaxLat != "")
                handler->number_value(textStoreMaxLat.c_str());
            else if (((double)(long int)storeMaxLat) == storeMaxLat)
                handler->number_value((long int)storeMaxLat);
            else
                handler->number_value(storeMaxLat);
            assert(flagHasMinLon);
            handler->start_pair("MinLon");
            if (textStoreMinLon != "")
                handler->number_value(textStoreMinLon.c_str());
            else if (((double)(long int)storeMinLon) == storeMinLon)
                handler->number_value((long int)storeMinLon);
            else
                handler->number_value(storeMinLon);
            assert(flagHasMaxLon);
            handler->start_pair("MaxLon");
            if (textStoreMaxLon != "")
                handler->number_value(textStoreMaxLon.c_str());
            else if (((double)(long int)storeMaxLon) == storeMaxLon)
                handler->number_value((long int)storeMaxLon);
            else
                handler->number_value(storeMaxLon);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasMinLat()))
              {
                return "When parsing the object for %what%, the \"MinLat\" field was missing.";
              }
            if (!(hasMaxLat()))
              {
                return "When parsing the object for %what%, the \"MaxLat\" field was missing.";
              }
            if (!(hasMinLon()))
              {
                return "When parsing the object for %what%, the \"MinLon\" field was missing.";
              }
            if (!(hasMaxLon()))
              {
                return "When parsing the object for %what%, the \"MaxLon\" field was missing.";
              }
            return NULL;
          }

        static TypeBoundingBoxJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeBoundingBoxJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeBoundingBoxJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeBoundingBoxJSON>, TypeBoundingBoxJSON *, bool> generator("Type TypeBoundingBox", ignore_extras);
                parse_json_value(text, "Text for TypeBoundingBoxJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeBoundingBoxJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeBoundingBoxJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeBoundingBoxJSON>, TypeBoundingBoxJSON *, bool> generator("Type TypeBoundingBox", ignore_extras);
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
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMinLat;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaxLat;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMinLon;
            JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorMaxLon;


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
                TypeBoundingBoxJSON *result = new TypeBoundingBoxJSON();
                assert(result != NULL);
                RCHandle<TypeBoundingBoxJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeBoundingBoxJSON *result)
              {
                if (fieldGeneratorMinLat.have_value)
                  {
                    result->setMinLatText(fieldGeneratorMinLat.value);
                    fieldGeneratorMinLat.have_value = false;
                  }
                else if (!(result->hasMinLat()))
                  {
                    error("When parsing the object for %what%, the \"MinLat\" field was missing.");
                  }
                if (fieldGeneratorMaxLat.have_value)
                  {
                    result->setMaxLatText(fieldGeneratorMaxLat.value);
                    fieldGeneratorMaxLat.have_value = false;
                  }
                else if (!(result->hasMaxLat()))
                  {
                    error("When parsing the object for %what%, the \"MaxLat\" field was missing.");
                  }
                if (fieldGeneratorMinLon.have_value)
                  {
                    result->setMinLonText(fieldGeneratorMinLon.value);
                    fieldGeneratorMinLon.have_value = false;
                  }
                else if (!(result->hasMinLon()))
                  {
                    error("When parsing the object for %what%, the \"MinLon\" field was missing.");
                  }
                if (fieldGeneratorMaxLon.have_value)
                  {
                    result->setMaxLonText(fieldGeneratorMaxLon.value);
                    fieldGeneratorMaxLon.have_value = false;
                  }
                else if (!(result->hasMaxLon()))
                  {
                    error("When parsing the object for %what%, the \"MaxLon\" field was missing.");
                  }
              }
            virtual void handle_result(TypeBoundingBoxJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                if (strncmp(field_name, "M", 1) == 0)
                  {
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strncmp(&(field_name[2]), "xL", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[5]), "t") == 0)
                                            return &fieldGeneratorMaxLat;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[5]), "n") == 0)
                                            return &fieldGeneratorMaxLon;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'i':
                            if (strncmp(&(field_name[2]), "nL", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 'a':
                                        if (strcmp(&(field_name[5]), "t") == 0)
                                            return &fieldGeneratorMinLat;
                                        break;
                                    case 'o':
                                        if (strcmp(&(field_name[5]), "n") == 0)
                                            return &fieldGeneratorMinLon;
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
            Generator(bool ignore_extras = false) : fieldGeneratorMinLat("field \"MinLat\" of the TypeBoundingBox class"), fieldGeneratorMaxLat("field \"MaxLat\" of the TypeBoundingBox class"), fieldGeneratorMinLon("field \"MinLon\" of the TypeBoundingBox class"), fieldGeneratorMaxLon("field \"MaxLon\" of the TypeBoundingBox class")
              {
                set_what("the TypeBoundingBox class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorMinLat.reset();
                fieldGeneratorMaxLat.reset();
                fieldGeneratorMinLon.reset();
                fieldGeneratorMaxLon.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    class TypeLinksJSON : public ReferenceCounted
      {
      private:
        bool flagHasLabel;
        std::string storeLabel;
        bool flagHasURL;
        std::string storeURL;

        TypeLinksJSON(const TypeLinksJSON &);
        TypeLinksJSON & operator=(const TypeLinksJSON &other);

        void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONURL(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeLinksJSON(void);
        virtual ~TypeLinksJSON(void);
        bool  hasLabel(void) const;
        std::string  getLabel(void);
        const std::string  getLabel(void) const;
        bool  hasURL(void) const;
        std::string  getURL(void);
        const std::string  getURL(void) const;


        void setLabel(std::string new_value)
          {
            flagHasLabel = true;
            storeLabel = new_value;
          }
        void unsetLabel(void)
          {
            flagHasLabel = false;
          }
        void setURL(std::string new_value)
          {
            flagHasURL = true;
            storeURL = new_value;
          }
        void unsetURL(void)
          {
            flagHasURL = false;
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasLabel);
            handler->start_pair("Label");
            handler->string_value(storeLabel);
            assert(flagHasURL);
            handler->start_pair("URL");
            handler->string_value(storeURL);
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasLabel()))
              {
                return "When parsing the object for %what%, the \"Label\" field was missing.";
              }
            if (!(hasURL()))
              {
                return "When parsing the object for %what%, the \"URL\" field was missing.";
              }
            return NULL;
          }

        static TypeLinksJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeLinksJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeLinksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
                parse_json_value(text, "Text for TypeLinksJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeLinksJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeLinksJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool> generator("Type TypeLinks", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorURL;


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
                TypeLinksJSON *result = new TypeLinksJSON();
                assert(result != NULL);
                RCHandle<TypeLinksJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeLinksJSON *result)
              {
                if (fieldGeneratorLabel.have_value)
                  {
                    result->setLabel(fieldGeneratorLabel.value);
                    fieldGeneratorLabel.have_value = false;
                  }
                else if (!(result->hasLabel()))
                  {
                    error("When parsing the object for %what%, the \"Label\" field was missing.");
                  }
                if (fieldGeneratorURL.have_value)
                  {
                    result->setURL(fieldGeneratorURL.value);
                    fieldGeneratorURL.have_value = false;
                  }
                else if (!(result->hasURL()))
                  {
                    error("When parsing the object for %what%, the \"URL\" field was missing.");
                  }
              }
            virtual void handle_result(TypeLinksJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'L':
                        if (strcmp(&(field_name[1]), "abel") == 0)
                            return &fieldGeneratorLabel;
                        break;
                    case 'U':
                        if (strcmp(&(field_name[1]), "RL") == 0)
                            return &fieldGeneratorURL;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorLabel("field \"Label\" of the TypeLinks class"), fieldGeneratorURL("field \"URL\" of the TypeLinks class")
              {
                set_what("the TypeLinks class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorLabel.reset();
                fieldGeneratorURL.reset();
                JSONObjectGenerator::reset();
              }
          };
      };
    enum TypeOtherTypeKnownValues
      {
        OtherType_Island,
        OtherType_Islands,
        OtherType_Local_x20_Business,
        OtherType__none
      };
    struct TypeOtherType
      {
        bool in_known_list;
        std::string string_value;
        TypeOtherTypeKnownValues list_value;

        TypeOtherType(void);
        TypeOtherType(const TypeOtherType &other);
        TypeOtherType(TypeOtherTypeKnownValues other);
        bool  operator==(const TypeOtherType &other) const;
        bool  operator!=(const TypeOtherType &other) const;
        bool  operator<(const TypeOtherType &other) const;
        bool  operator>(const TypeOtherType &other) const;
        bool  operator>=(const TypeOtherType &other) const;
        bool  operator<=(const TypeOtherType &other) const;

      };

    static TypeOtherTypeKnownValues  stringToOtherType(const char *chars);
    static const char * stringFromOtherType(TypeOtherTypeKnownValues the_enum);

  private:
    bool flagHasIsFictional;
    bool storeIsFictional;
    bool flagHasIsOnEarthsSurface;
    bool storeIsOnEarthsSurface;
    bool flagHasType;
    TypeType storeType;
    bool flagHasLabel;
    std::string storeLabel;
    bool flagHasSpokenLabel;
    std::string storeSpokenLabel;
    bool flagHasAddress;
    std::string storeAddress;
    bool flagHasStreetNumber;
    std::string storeStreetNumber;
    bool flagHasStreetSecondaryNumber;
    std::string storeStreetSecondaryNumber;
    bool flagHasStreetName;
    std::string storeStreetName;
    bool flagHasCity;
    std::string storeCity;
    bool flagHasAdmin2;
    std::string storeAdmin2;
    bool flagHasAdmin1;
    std::string storeAdmin1;
    bool flagHasCountry;
    std::string storeCountry;
    bool flagHasCountryCode;
    std::string storeCountryCode;
    bool flagHasPostalCode;
    std::string storePostalCode;
    bool flagHasIATA;
    std::string storeIATA;
    bool flagHasICAO;
    std::string storeICAO;
    bool flagHasGeohash;
    std::string storeGeohash;
    bool flagHasVerified;
    bool storeVerified;
    bool flagHasHighConfidence;
    bool storeHighConfidence;
    bool flagHasCurrentLocation;
    bool storeCurrentLocation;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    bool flagHasCoordinatesAreApproximate;
    bool storeCoordinatesAreApproximate;
    bool flagHasCoordinatesAreAdjusted;
    bool storeCoordinatesAreAdjusted;
    bool flagHasReferenceDatum;
    std::string storeReferenceDatum;
    bool flagHasTimeZone;
    std::string storeTimeZone;
    bool flagHasRadius;
    double storeRadius;
    std::string textStoreRadius;
    bool flagHasBoundingBox;
    TypeBoundingBoxJSON * storeBoundingBox;
    bool flagHasLinks;
    std::vector< TypeLinksJSON * > storeLinks;
    bool flagHasTypeID;
    OInteger storeTypeID;
    bool flagHasSourceID;
    OInteger storeSourceID;
    bool flagHasRecordID;
    OInteger storeRecordID;
    bool flagHasRecordIDString;
    std::string storeRecordIDString;
    bool flagHasSource;
    std::string storeSource;
    bool flagHasPointOfInterestName;
    std::string storePointOfInterestName;
    bool flagHasOtherType;
    TypeOtherType storeOtherType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MapLocationJSON(const MapLocationJSON &);
    MapLocationJSON & operator=(const MapLocationJSON &other);

    void  fromJSONIsFictional(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIsOnEarthsSurface(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddress(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStreetNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStreetSecondaryNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStreetName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAdmin2(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAdmin1(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountry(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountryCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPostalCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONIATA(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONICAO(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeohash(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONVerified(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHighConfidence(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCurrentLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoordinatesAreApproximate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCoordinatesAreAdjusted(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReferenceDatum(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTimeZone(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRadius(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBoundingBox(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLinks(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTypeID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSourceID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecordID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRecordIDString(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSource(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPointOfInterestName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOtherType(JSONValue *json_value, bool ignore_extras = false);


  public:
    MapLocationJSON(void);
    virtual ~MapLocationJSON(void);
    bool  hasIsFictional(void) const;
    bool  getIsFictional(void);
    const bool  getIsFictional(void) const;
    bool  hasIsOnEarthsSurface(void) const;
    bool  getIsOnEarthsSurface(void);
    const bool  getIsOnEarthsSurface(void) const;
    bool  hasType(void) const;
    TypeType  getType(void);
    const TypeType  getType(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasLabel(void) const;
    std::string  getLabel(void);
    const std::string  getLabel(void) const;
    bool  hasSpokenLabel(void) const;
    std::string  getSpokenLabel(void);
    const std::string  getSpokenLabel(void) const;
    bool  hasAddress(void) const;
    std::string  getAddress(void);
    const std::string  getAddress(void) const;
    bool  hasStreetNumber(void) const;
    std::string  getStreetNumber(void);
    const std::string  getStreetNumber(void) const;
    bool  hasStreetSecondaryNumber(void) const;
    std::string  getStreetSecondaryNumber(void);
    const std::string  getStreetSecondaryNumber(void) const;
    bool  hasStreetName(void) const;
    std::string  getStreetName(void);
    const std::string  getStreetName(void) const;
    bool  hasCity(void) const;
    std::string  getCity(void);
    const std::string  getCity(void) const;
    bool  hasAdmin2(void) const;
    std::string  getAdmin2(void);
    const std::string  getAdmin2(void) const;
    bool  hasAdmin1(void) const;
    std::string  getAdmin1(void);
    const std::string  getAdmin1(void) const;
    bool  hasCountry(void) const;
    std::string  getCountry(void);
    const std::string  getCountry(void) const;
    bool  hasCountryCode(void) const;
    std::string  getCountryCode(void);
    const std::string  getCountryCode(void) const;
    bool  hasPostalCode(void) const;
    std::string  getPostalCode(void);
    const std::string  getPostalCode(void) const;
    bool  hasIATA(void) const;
    std::string  getIATA(void);
    const std::string  getIATA(void) const;
    bool  hasICAO(void) const;
    std::string  getICAO(void);
    const std::string  getICAO(void) const;
    bool  hasGeohash(void) const;
    std::string  getGeohash(void);
    const std::string  getGeohash(void) const;
    bool  hasVerified(void) const;
    bool  getVerified(void);
    const bool  getVerified(void) const;
    bool  hasHighConfidence(void) const;
    bool  getHighConfidence(void);
    const bool  getHighConfidence(void) const;
    bool  hasCurrentLocation(void) const;
    bool  getCurrentLocation(void);
    const bool  getCurrentLocation(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
    bool  hasCoordinatesAreApproximate(void) const;
    bool  getCoordinatesAreApproximate(void);
    const bool  getCoordinatesAreApproximate(void) const;
    bool  hasCoordinatesAreAdjusted(void) const;
    bool  getCoordinatesAreAdjusted(void);
    const bool  getCoordinatesAreAdjusted(void) const;
    bool  hasReferenceDatum(void) const;
    std::string  getReferenceDatum(void);
    const std::string  getReferenceDatum(void) const;
    bool  hasTimeZone(void) const;
    std::string  getTimeZone(void);
    const std::string  getTimeZone(void) const;
    bool  hasRadius(void) const;
    double  getRadius(void);
    const double  getRadius(void) const;
    std::string  getRadiusAsText(void) const;
    bool  hasBoundingBox(void) const;
    TypeBoundingBoxJSON *  getBoundingBox(void);
    const TypeBoundingBoxJSON *  getBoundingBox(void) const;
    bool  hasLinks(void) const;
    size_t  countOfLinks(void) const;
    TypeLinksJSON *  elementOfLinks(size_t element_num);
    const TypeLinksJSON *  elementOfLinks(size_t element_num) const;
    std::vector< TypeLinksJSON * >  getLinks(void);
    const std::vector< TypeLinksJSON * >  getLinks(void) const;
    bool  hasTypeID(void) const;
    OInteger  getTypeID(void);
    const OInteger  getTypeID(void) const;
    bool  hasSourceID(void) const;
    OInteger  getSourceID(void);
    const OInteger  getSourceID(void) const;
    bool  hasRecordID(void) const;
    OInteger  getRecordID(void);
    const OInteger  getRecordID(void) const;
    bool  hasRecordIDString(void) const;
    std::string  getRecordIDString(void);
    const std::string  getRecordIDString(void) const;
    bool  hasSource(void) const;
    std::string  getSource(void);
    const std::string  getSource(void) const;
    bool  hasPointOfInterestName(void) const;
    std::string  getPointOfInterestName(void);
    const std::string  getPointOfInterestName(void) const;
    bool  hasOtherType(void) const;
    TypeOtherType  getOtherType(void);
    const TypeOtherType  getOtherType(void) const;
    const char * getOtherTypeAsChars(void) const;
    std::string  getOtherTypeAsString(void) const;

    virtual size_t extraMapLocationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMapLocationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMapLocationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMapLocationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMapLocationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMapLocationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setIsFictional(bool new_value)
      {
        flagHasIsFictional = true;
        storeIsFictional = new_value;
      }
    void unsetIsFictional(void)
      {
        flagHasIsFictional = false;
      }
    void setIsOnEarthsSurface(bool new_value)
      {
        flagHasIsOnEarthsSurface = true;
        storeIsOnEarthsSurface = new_value;
      }
    void unsetIsOnEarthsSurface(void)
      {
        flagHasIsOnEarthsSurface = false;
      }
    void setType(TypeType new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void setType(const char *chars)
      {
        setType(stringToType(chars));
      }
    void setType(std::string the_string)
      {
        setType(stringToType(the_string.c_str()));
      }
    void unsetType(void)
      {
        flagHasType = false;
      }
    void setLabel(std::string new_value)
      {
        flagHasLabel = true;
        storeLabel = new_value;
      }
    void unsetLabel(void)
      {
        flagHasLabel = false;
      }
    void setSpokenLabel(std::string new_value)
      {
        flagHasSpokenLabel = true;
        storeSpokenLabel = new_value;
      }
    void unsetSpokenLabel(void)
      {
        flagHasSpokenLabel = false;
      }
    void setAddress(std::string new_value)
      {
        flagHasAddress = true;
        storeAddress = new_value;
      }
    void unsetAddress(void)
      {
        flagHasAddress = false;
      }
    void setStreetNumber(std::string new_value)
      {
        flagHasStreetNumber = true;
        storeStreetNumber = new_value;
      }
    void unsetStreetNumber(void)
      {
        flagHasStreetNumber = false;
      }
    void setStreetSecondaryNumber(std::string new_value)
      {
        flagHasStreetSecondaryNumber = true;
        storeStreetSecondaryNumber = new_value;
      }
    void unsetStreetSecondaryNumber(void)
      {
        flagHasStreetSecondaryNumber = false;
      }
    void setStreetName(std::string new_value)
      {
        flagHasStreetName = true;
        storeStreetName = new_value;
      }
    void unsetStreetName(void)
      {
        flagHasStreetName = false;
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
    void setAdmin2(std::string new_value)
      {
        flagHasAdmin2 = true;
        storeAdmin2 = new_value;
      }
    void unsetAdmin2(void)
      {
        flagHasAdmin2 = false;
      }
    void setAdmin1(std::string new_value)
      {
        flagHasAdmin1 = true;
        storeAdmin1 = new_value;
      }
    void unsetAdmin1(void)
      {
        flagHasAdmin1 = false;
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
    void setCountryCode(std::string new_value)
      {
        flagHasCountryCode = true;
        storeCountryCode = new_value;
      }
    void unsetCountryCode(void)
      {
        flagHasCountryCode = false;
      }
    void setPostalCode(std::string new_value)
      {
        flagHasPostalCode = true;
        storePostalCode = new_value;
      }
    void unsetPostalCode(void)
      {
        flagHasPostalCode = false;
      }
    void setIATA(std::string new_value)
      {
        flagHasIATA = true;
        storeIATA = new_value;
      }
    void unsetIATA(void)
      {
        flagHasIATA = false;
      }
    void setICAO(std::string new_value)
      {
        flagHasICAO = true;
        storeICAO = new_value;
      }
    void unsetICAO(void)
      {
        flagHasICAO = false;
      }
    void setGeohash(std::string new_value)
      {
        flagHasGeohash = true;
        storeGeohash = new_value;
      }
    void unsetGeohash(void)
      {
        flagHasGeohash = false;
      }
    void setVerified(bool new_value)
      {
        flagHasVerified = true;
        storeVerified = new_value;
      }
    void unsetVerified(void)
      {
        flagHasVerified = false;
      }
    void setHighConfidence(bool new_value)
      {
        flagHasHighConfidence = true;
        storeHighConfidence = new_value;
      }
    void unsetHighConfidence(void)
      {
        flagHasHighConfidence = false;
      }
    void setCurrentLocation(bool new_value)
      {
        flagHasCurrentLocation = true;
        storeCurrentLocation = new_value;
      }
    void unsetCurrentLocation(void)
      {
        flagHasCurrentLocation = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of MapLocationJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of MapLocationJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of MapLocationJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of MapLocationJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of MapLocationJSON is greater than the upper bound (90) for that field.");
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
            throw("The value for field Longitude of MapLocationJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of MapLocationJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of MapLocationJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of MapLocationJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of MapLocationJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }
    void setCoordinatesAreApproximate(bool new_value)
      {
        flagHasCoordinatesAreApproximate = true;
        storeCoordinatesAreApproximate = new_value;
      }
    void unsetCoordinatesAreApproximate(void)
      {
        flagHasCoordinatesAreApproximate = false;
      }
    void setCoordinatesAreAdjusted(bool new_value)
      {
        flagHasCoordinatesAreAdjusted = true;
        storeCoordinatesAreAdjusted = new_value;
      }
    void unsetCoordinatesAreAdjusted(void)
      {
        flagHasCoordinatesAreAdjusted = false;
      }
    void setReferenceDatum(std::string new_value)
      {
        flagHasReferenceDatum = true;
        storeReferenceDatum = new_value;
      }
    void unsetReferenceDatum(void)
      {
        flagHasReferenceDatum = false;
      }
    void setTimeZone(std::string new_value)
      {
        flagHasTimeZone = true;
        storeTimeZone = new_value;
      }
    void unsetTimeZone(void)
      {
        flagHasTimeZone = false;
      }
    void setRadius(double new_value)
      {
        flagHasRadius = true;
        if (new_value < 0)
            throw("The value for field Radius of MapLocationJSON is less than the lower bound (0) for that field.");
        storeRadius = new_value;
        textStoreRadius = "";
      }
    void setRadiusText(std::string new_value)
      {
        flagHasRadius = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Radius of MapLocationJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "", "", false, "") < 0)
            throw("The value for field Radius of MapLocationJSON is less than the lower bound (0) for that field.");
        textStoreRadius = new_value;
      }
    void unsetRadius(void)
      {
        flagHasRadius = false;
      }
    void setBoundingBox(TypeBoundingBoxJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasBoundingBox)
          {
            storeBoundingBox->remove_reference();
          }
        flagHasBoundingBox = true;
        storeBoundingBox = new_value;
      }
    void unsetBoundingBox(void)
      {
        if (flagHasBoundingBox)
          {
            storeBoundingBox->remove_reference();
          }
        flagHasBoundingBox = false;
      }
    void initLinks(void)
      {
        if (flagHasLinks)
          {
            for (size_t num2 = 0; num2 < storeLinks.size(); ++num2)
              {
                storeLinks[num2]->remove_reference();
              }
          }
        flagHasLinks = true;
        storeLinks.clear();
      }
    void appendLinks(TypeLinksJSON * to_append)
      {
        if (!flagHasLinks)
          {
            flagHasLinks = true;
            storeLinks.clear();
          }
        assert(flagHasLinks);
        to_append->add_reference();
        storeLinks.push_back(to_append);
      }
    void unsetLinks(void)
      {
        if (flagHasLinks)
          {
            for (size_t num3 = 0; num3 < storeLinks.size(); ++num3)
              {
                storeLinks[num3]->remove_reference();
              }
          }
        flagHasLinks = false;
        storeLinks.clear();
      }
    void setTypeID(OInteger new_value)
      {
        flagHasTypeID = true;
        if (new_value < 0)
            throw("The value for field TypeID of MapLocationJSON is less than the lower bound (0) for that field.");
        storeTypeID = new_value;
      }
    void unsetTypeID(void)
      {
        flagHasTypeID = false;
      }
    void setSourceID(OInteger new_value)
      {
        flagHasSourceID = true;
        if (new_value < 0)
            throw("The value for field SourceID of MapLocationJSON is less than the lower bound (0) for that field.");
        storeSourceID = new_value;
      }
    void unsetSourceID(void)
      {
        flagHasSourceID = false;
      }
    void setRecordID(OInteger new_value)
      {
        flagHasRecordID = true;
        if (new_value < 0)
            throw("The value for field RecordID of MapLocationJSON is less than the lower bound (0) for that field.");
        storeRecordID = new_value;
      }
    void unsetRecordID(void)
      {
        flagHasRecordID = false;
      }
    void setRecordIDString(std::string new_value)
      {
        flagHasRecordIDString = true;
        storeRecordIDString = new_value;
      }
    void unsetRecordIDString(void)
      {
        flagHasRecordIDString = false;
      }
    void setSource(std::string new_value)
      {
        flagHasSource = true;
        storeSource = new_value;
      }
    void unsetSource(void)
      {
        flagHasSource = false;
      }
    void setPointOfInterestName(std::string new_value)
      {
        flagHasPointOfInterestName = true;
        storePointOfInterestName = new_value;
      }
    void unsetPointOfInterestName(void)
      {
        flagHasPointOfInterestName = false;
      }
    void setOtherType(TypeOtherType new_value)
      {
        flagHasOtherType = true;
        storeOtherType = new_value;
      }
    void setOtherType(const char *chars)
      {
        TypeOtherTypeKnownValues known = stringToOtherType(chars);
        TypeOtherType new_value;
        if (known == OtherType__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setOtherType(new_value);
      }
    void setOtherType(std::string the_string)
      {
        setOtherType(the_string.c_str());
      }
    void setOtherType(TypeOtherTypeKnownValues new_value)
      {
        TypeOtherType new_full_value;
        assert(new_value != OtherType__none);
        new_full_value.in_known_list = true;
        new_full_value.list_value = new_value;
        setOtherType(new_full_value);
      }
    void unsetOtherType(void)
      {
        flagHasOtherType = false;
      }

    virtual void extraMapLocationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMapLocationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMapLocationLookup(key);
        if (old_field == NULL)
          {
            extraMapLocationAppendPair(key, new_component);
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
        if (flagHasIsFictional)
          {
            handler->start_pair("IsFictional");
            handler->boolean_value(storeIsFictional);
          }
        if (flagHasIsOnEarthsSurface)
          {
            handler->start_pair("IsOnEarthsSurface");
            handler->boolean_value(storeIsOnEarthsSurface);
          }
        assert(flagHasType);
        handler->start_pair("Type");
        switch (storeType)
          {
            case Type_Continent:
                handler->string_value("Continent");
                break;
            case Type_Country:
                handler->string_value("Country");
                break;
            case Type_Admin1:
                handler->string_value("Admin1");
                break;
            case Type_Admin2:
                handler->string_value("Admin2");
                break;
            case Type_City:
                handler->string_value("City");
                break;
            case Type_Street_x20_Address:
                handler->string_value("Street Address");
                break;
            case Type_Airport:
                handler->string_value("Airport");
                break;
            case Type_Hotel:
                handler->string_value("Hotel");
                break;
            case Type_Postal_x20_Code:
                handler->string_value("Postal Code");
                break;
            case Type_Other:
                handler->string_value("Other");
                break;
            default:
                assert(false);
          }
        assert(flagHasLabel);
        handler->start_pair("Label");
        handler->string_value(storeLabel);
        assert(flagHasSpokenLabel);
        handler->start_pair("SpokenLabel");
        handler->string_value(storeSpokenLabel);
        if (flagHasAddress)
          {
            handler->start_pair("Address");
            handler->string_value(storeAddress);
          }
        if (flagHasStreetNumber)
          {
            handler->start_pair("StreetNumber");
            handler->string_value(storeStreetNumber);
          }
        if (flagHasStreetSecondaryNumber)
          {
            handler->start_pair("StreetSecondaryNumber");
            handler->string_value(storeStreetSecondaryNumber);
          }
        if (flagHasStreetName)
          {
            handler->start_pair("StreetName");
            handler->string_value(storeStreetName);
          }
        if (flagHasCity)
          {
            handler->start_pair("City");
            handler->string_value(storeCity);
          }
        if (flagHasAdmin2)
          {
            handler->start_pair("Admin2");
            handler->string_value(storeAdmin2);
          }
        if (flagHasAdmin1)
          {
            handler->start_pair("Admin1");
            handler->string_value(storeAdmin1);
          }
        if (flagHasCountry)
          {
            handler->start_pair("Country");
            handler->string_value(storeCountry);
          }
        if (flagHasCountryCode)
          {
            handler->start_pair("CountryCode");
            handler->string_value(storeCountryCode);
          }
        if (flagHasPostalCode)
          {
            handler->start_pair("PostalCode");
            handler->string_value(storePostalCode);
          }
        if (flagHasIATA)
          {
            handler->start_pair("IATA");
            handler->string_value(storeIATA);
          }
        if (flagHasICAO)
          {
            handler->start_pair("ICAO");
            handler->string_value(storeICAO);
          }
        if (flagHasGeohash)
          {
            handler->start_pair("Geohash");
            handler->string_value(storeGeohash);
          }
        assert(flagHasVerified);
        handler->start_pair("Verified");
        handler->boolean_value(storeVerified);
        if (flagHasHighConfidence)
          {
            handler->start_pair("HighConfidence");
            handler->boolean_value(storeHighConfidence);
          }
        assert(flagHasCurrentLocation);
        handler->start_pair("CurrentLocation");
        handler->boolean_value(storeCurrentLocation);
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
        if (flagHasCoordinatesAreApproximate)
          {
            handler->start_pair("CoordinatesAreApproximate");
            handler->boolean_value(storeCoordinatesAreApproximate);
          }
        if (flagHasCoordinatesAreAdjusted)
          {
            handler->start_pair("CoordinatesAreAdjusted");
            handler->boolean_value(storeCoordinatesAreAdjusted);
          }
        if (flagHasReferenceDatum)
          {
            handler->start_pair("ReferenceDatum");
            handler->string_value(storeReferenceDatum);
          }
        if (flagHasTimeZone)
          {
            handler->start_pair("TimeZone");
            handler->string_value(storeTimeZone);
          }
        assert(flagHasRadius);
        handler->start_pair("Radius");
        if (textStoreRadius != "")
            handler->number_value(textStoreRadius.c_str());
        else if (((double)(long int)storeRadius) == storeRadius)
            handler->number_value((long int)storeRadius);
        else
            handler->number_value(storeRadius);
        if (flagHasBoundingBox)
          {
            handler->start_pair("BoundingBox");
            storeBoundingBox->write_as_json(handler);
          }
        if (flagHasLinks)
          {
            handler->start_pair("Links");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeLinks.size(); ++num1)
              {
                storeLinks[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasTypeID)
          {
            handler->start_pair("TypeID");
            handler->number_value(storeTypeID.get_o_integer());
          }
        if (flagHasSourceID)
          {
            handler->start_pair("SourceID");
            handler->number_value(storeSourceID.get_o_integer());
          }
        if (flagHasRecordID)
          {
            handler->start_pair("RecordID");
            handler->number_value(storeRecordID.get_o_integer());
          }
        if (flagHasRecordIDString)
          {
            handler->start_pair("RecordIDString");
            handler->string_value(storeRecordIDString);
          }
        if (flagHasSource)
          {
            handler->start_pair("Source");
            handler->string_value(storeSource);
          }
        if (flagHasPointOfInterestName)
          {
            handler->start_pair("PointOfInterestName");
            handler->string_value(storePointOfInterestName);
          }
        if (flagHasOtherType)
          {
            handler->start_pair("OtherType");
            if (storeOtherType.in_known_list)
              {
                switch (storeOtherType.list_value)
                  {
                    case OtherType_Island:
                        handler->string_value("Island");
                        break;
                    case OtherType_Islands:
                        handler->string_value("Islands");
                        break;
                    case OtherType_Local_x20_Business:
                        handler->string_value("Local Business");
                        break;
                    default:
                        assert(false);
                  }
              }
            else
              {
                        handler->string_value(storeOtherType.string_value);
              }
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        if (!(hasLabel()))
          {
            return "When parsing the object for %what%, the \"Label\" field was missing.";
          }
        if (!(hasSpokenLabel()))
          {
            return "When parsing the object for %what%, the \"SpokenLabel\" field was missing.";
          }
        if (!(hasVerified()))
          {
            return "When parsing the object for %what%, the \"Verified\" field was missing.";
          }
        if (!(hasCurrentLocation()))
          {
            return "When parsing the object for %what%, the \"CurrentLocation\" field was missing.";
          }
        if (!(hasRadius()))
          {
            return "When parsing the object for %what%, the \"Radius\" field was missing.";
          }
        return NULL;
      }

    static MapLocationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MapLocationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MapLocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool> generator("Type MapLocation", ignore_extras);
            parse_json_value(text, "Text for MapLocationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MapLocationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MapLocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool> generator("Type MapLocation", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsFictional;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorIsOnEarthsSurface;
    class FieldGeneratorType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToType(result));
              }
            virtual void handle_result(TypeType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorType, TypeType, TypeType > fieldGeneratorType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAddress;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStreetNumber;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStreetSecondaryNumber;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStreetName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAdmin2;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAdmin1;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountry;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountryCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPostalCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIATA;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorICAO;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorGeohash;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorVerified;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorHighConfidence;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCurrentLocation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCoordinatesAreApproximate;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorCoordinatesAreAdjusted;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorReferenceDatum;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTimeZone;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorRadius;
        JSONHoldingGenerator<TypeBoundingBoxJSON::Generator, RCHandle<TypeBoundingBoxJSON>, TypeBoundingBoxJSON *, bool > fieldGeneratorBoundingBox;
        JSONHoldingArrayGenerator<TypeLinksJSON::Generator, RCHandle<TypeLinksJSON>, TypeLinksJSON *, bool > fieldGeneratorLinks;
        static char lowerBoundTypeID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundTypeID>, OInteger, o_integer > fieldGeneratorTypeID;
        static char lowerBoundSourceID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundSourceID>, OInteger, o_integer > fieldGeneratorSourceID;
        static char lowerBoundRecordID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundRecordID>, OInteger, o_integer > fieldGeneratorRecordID;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorRecordIDString;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSource;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPointOfInterestName;
    class FieldGeneratorOtherType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorOtherType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorOtherType(void)
              {
              }
            void handle_result(const char *result)
              {
                TypeOtherTypeKnownValues known = stringToOtherType(result);
                TypeOtherType new_value;
                if (known == OtherType__none)
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
            virtual void handle_result(TypeOtherType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorOtherType, TypeOtherType, TypeOtherType > fieldGeneratorOtherType;
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
            MapLocationJSON *result = new MapLocationJSON();
            assert(result != NULL);
            RCHandle<MapLocationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMapLocationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MapLocationJSON *result)
          {
            if (fieldGeneratorIsFictional.have_value)
              {
                result->setIsFictional(fieldGeneratorIsFictional.value);
                fieldGeneratorIsFictional.have_value = false;
              }
            if (fieldGeneratorIsOnEarthsSurface.have_value)
              {
                result->setIsOnEarthsSurface(fieldGeneratorIsOnEarthsSurface.value);
                fieldGeneratorIsOnEarthsSurface.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorLabel.have_value)
              {
                result->setLabel(fieldGeneratorLabel.value);
                fieldGeneratorLabel.have_value = false;
              }
            else if (!(result->hasLabel()))
              {
                error("When parsing the object for %what%, the \"Label\" field was missing.");
              }
            if (fieldGeneratorSpokenLabel.have_value)
              {
                result->setSpokenLabel(fieldGeneratorSpokenLabel.value);
                fieldGeneratorSpokenLabel.have_value = false;
              }
            else if (!(result->hasSpokenLabel()))
              {
                error("When parsing the object for %what%, the \"SpokenLabel\" field was missing.");
              }
            if (fieldGeneratorAddress.have_value)
              {
                result->setAddress(fieldGeneratorAddress.value);
                fieldGeneratorAddress.have_value = false;
              }
            if (fieldGeneratorStreetNumber.have_value)
              {
                result->setStreetNumber(fieldGeneratorStreetNumber.value);
                fieldGeneratorStreetNumber.have_value = false;
              }
            if (fieldGeneratorStreetSecondaryNumber.have_value)
              {
                result->setStreetSecondaryNumber(fieldGeneratorStreetSecondaryNumber.value);
                fieldGeneratorStreetSecondaryNumber.have_value = false;
              }
            if (fieldGeneratorStreetName.have_value)
              {
                result->setStreetName(fieldGeneratorStreetName.value);
                fieldGeneratorStreetName.have_value = false;
              }
            if (fieldGeneratorCity.have_value)
              {
                result->setCity(fieldGeneratorCity.value);
                fieldGeneratorCity.have_value = false;
              }
            if (fieldGeneratorAdmin2.have_value)
              {
                result->setAdmin2(fieldGeneratorAdmin2.value);
                fieldGeneratorAdmin2.have_value = false;
              }
            if (fieldGeneratorAdmin1.have_value)
              {
                result->setAdmin1(fieldGeneratorAdmin1.value);
                fieldGeneratorAdmin1.have_value = false;
              }
            if (fieldGeneratorCountry.have_value)
              {
                result->setCountry(fieldGeneratorCountry.value);
                fieldGeneratorCountry.have_value = false;
              }
            if (fieldGeneratorCountryCode.have_value)
              {
                result->setCountryCode(fieldGeneratorCountryCode.value);
                fieldGeneratorCountryCode.have_value = false;
              }
            if (fieldGeneratorPostalCode.have_value)
              {
                result->setPostalCode(fieldGeneratorPostalCode.value);
                fieldGeneratorPostalCode.have_value = false;
              }
            if (fieldGeneratorIATA.have_value)
              {
                result->setIATA(fieldGeneratorIATA.value);
                fieldGeneratorIATA.have_value = false;
              }
            if (fieldGeneratorICAO.have_value)
              {
                result->setICAO(fieldGeneratorICAO.value);
                fieldGeneratorICAO.have_value = false;
              }
            if (fieldGeneratorGeohash.have_value)
              {
                result->setGeohash(fieldGeneratorGeohash.value);
                fieldGeneratorGeohash.have_value = false;
              }
            if (fieldGeneratorVerified.have_value)
              {
                result->setVerified(fieldGeneratorVerified.value);
                fieldGeneratorVerified.have_value = false;
              }
            else if (!(result->hasVerified()))
              {
                error("When parsing the object for %what%, the \"Verified\" field was missing.");
              }
            if (fieldGeneratorHighConfidence.have_value)
              {
                result->setHighConfidence(fieldGeneratorHighConfidence.value);
                fieldGeneratorHighConfidence.have_value = false;
              }
            if (fieldGeneratorCurrentLocation.have_value)
              {
                result->setCurrentLocation(fieldGeneratorCurrentLocation.value);
                fieldGeneratorCurrentLocation.have_value = false;
              }
            else if (!(result->hasCurrentLocation()))
              {
                error("When parsing the object for %what%, the \"CurrentLocation\" field was missing.");
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
            if (fieldGeneratorCoordinatesAreApproximate.have_value)
              {
                result->setCoordinatesAreApproximate(fieldGeneratorCoordinatesAreApproximate.value);
                fieldGeneratorCoordinatesAreApproximate.have_value = false;
              }
            if (fieldGeneratorCoordinatesAreAdjusted.have_value)
              {
                result->setCoordinatesAreAdjusted(fieldGeneratorCoordinatesAreAdjusted.value);
                fieldGeneratorCoordinatesAreAdjusted.have_value = false;
              }
            if (fieldGeneratorReferenceDatum.have_value)
              {
                result->setReferenceDatum(fieldGeneratorReferenceDatum.value);
                fieldGeneratorReferenceDatum.have_value = false;
              }
            if (fieldGeneratorTimeZone.have_value)
              {
                result->setTimeZone(fieldGeneratorTimeZone.value);
                fieldGeneratorTimeZone.have_value = false;
              }
            if (fieldGeneratorRadius.have_value)
              {
                result->setRadiusText(fieldGeneratorRadius.value);
                fieldGeneratorRadius.have_value = false;
              }
            else if (!(result->hasRadius()))
              {
                error("When parsing the object for %what%, the \"Radius\" field was missing.");
              }
            if (fieldGeneratorBoundingBox.have_value)
              {
                result->setBoundingBox(fieldGeneratorBoundingBox.value.referenced());
                fieldGeneratorBoundingBox.have_value = false;
              }
            if (fieldGeneratorLinks.have_value)
              {
                result->initLinks();
                size_t count = fieldGeneratorLinks.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendLinks(fieldGeneratorLinks.value[num].referenced());
                  }
                fieldGeneratorLinks.value.clear();
                fieldGeneratorLinks.have_value = false;
              }
            if (fieldGeneratorTypeID.have_value)
              {
                result->setTypeID(fieldGeneratorTypeID.value);
                fieldGeneratorTypeID.have_value = false;
              }
            if (fieldGeneratorSourceID.have_value)
              {
                result->setSourceID(fieldGeneratorSourceID.value);
                fieldGeneratorSourceID.have_value = false;
              }
            if (fieldGeneratorRecordID.have_value)
              {
                result->setRecordID(fieldGeneratorRecordID.value);
                fieldGeneratorRecordID.have_value = false;
              }
            if (fieldGeneratorRecordIDString.have_value)
              {
                result->setRecordIDString(fieldGeneratorRecordIDString.value);
                fieldGeneratorRecordIDString.have_value = false;
              }
            if (fieldGeneratorSource.have_value)
              {
                result->setSource(fieldGeneratorSource.value);
                fieldGeneratorSource.have_value = false;
              }
            if (fieldGeneratorPointOfInterestName.have_value)
              {
                result->setPointOfInterestName(fieldGeneratorPointOfInterestName.value);
                fieldGeneratorPointOfInterestName.have_value = false;
              }
            if (fieldGeneratorOtherType.have_value)
              {
                result->setOtherType(fieldGeneratorOtherType.value);
                fieldGeneratorOtherType.have_value = false;
              }
          }
        virtual void handle_result(MapLocationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strncmp(&(field_name[1]), "d", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'd':
                                if (strcmp(&(field_name[3]), "ress") == 0)
                                    return &fieldGeneratorAddress;
                                break;
                            case 'm':
                                if (strncmp(&(field_name[3]), "in", 2) == 0)
                                  {
                                    switch ((unsigned char)(field_name[5]))
                                      {
                                        case '1':
                                            if (field_name[6] == 0)
                                                return &fieldGeneratorAdmin1;
                                            break;
                                        case '2':
                                            if (field_name[6] == 0)
                                                return &fieldGeneratorAdmin2;
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
                case 'B':
                    if (strcmp(&(field_name[1]), "oundingBox") == 0)
                        return &fieldGeneratorBoundingBox;
                    break;
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ty") == 0)
                                return &fieldGeneratorCity;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'o':
                                    if (strncmp(&(field_name[3]), "rdinatesAreA", 12) == 0)
                                      {
                                        switch ((unsigned char)(field_name[15]))
                                          {
                                            case 'd':
                                                if (strcmp(&(field_name[16]), "justed") == 0)
                                                    return &fieldGeneratorCoordinatesAreAdjusted;
                                                break;
                                            case 'p':
                                                if (strcmp(&(field_name[16]), "proximate") == 0)
                                                    return &fieldGeneratorCoordinatesAreApproximate;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'u':
                                    if (strncmp(&(field_name[3]), "ntry", 4) == 0)
                                      {
                                        switch ((unsigned char)(field_name[7]))
                                          {
                                            case 0:
                                                return &fieldGeneratorCountry;
                                            case 'C':
                                                if (strcmp(&(field_name[8]), "ode") == 0)
                                                    return &fieldGeneratorCountryCode;
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
                        case 'u':
                            if (strcmp(&(field_name[2]), "rrentLocation") == 0)
                                return &fieldGeneratorCurrentLocation;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "eohash") == 0)
                        return &fieldGeneratorGeohash;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "ighConfidence") == 0)
                        return &fieldGeneratorHighConfidence;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[2]), "TA") == 0)
                                return &fieldGeneratorIATA;
                            break;
                        case 'C':
                            if (strcmp(&(field_name[2]), "AO") == 0)
                                return &fieldGeneratorICAO;
                            break;
                        case 's':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'F':
                                    if (strcmp(&(field_name[3]), "ictional") == 0)
                                        return &fieldGeneratorIsFictional;
                                    break;
                                case 'O':
                                    if (strcmp(&(field_name[3]), "nEarthsSurface") == 0)
                                        return &fieldGeneratorIsOnEarthsSurface;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'b':
                                    if (strcmp(&(field_name[3]), "el") == 0)
                                        return &fieldGeneratorLabel;
                                    break;
                                case 't':
                                    if (strcmp(&(field_name[3]), "itude") == 0)
                                        return &fieldGeneratorLatitude;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "nks") == 0)
                                return &fieldGeneratorLinks;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                return &fieldGeneratorLongitude;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "therType") == 0)
                        return &fieldGeneratorOtherType;
                    break;
                case 'P':
                    if (strncmp(&(field_name[1]), "o", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'i':
                                if (strcmp(&(field_name[3]), "ntOfInterestName") == 0)
                                    return &fieldGeneratorPointOfInterestName;
                                break;
                            case 's':
                                if (strcmp(&(field_name[3]), "talCode") == 0)
                                    return &fieldGeneratorPostalCode;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'R':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "dius") == 0)
                                return &fieldGeneratorRadius;
                            break;
                        case 'e':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'c':
                                    if (strncmp(&(field_name[3]), "ordID", 5) == 0)
                                      {
                                        switch ((unsigned char)(field_name[8]))
                                          {
                                            case 0:
                                                return &fieldGeneratorRecordID;
                                            case 'S':
                                                if (strcmp(&(field_name[9]), "tring") == 0)
                                                    return &fieldGeneratorRecordIDString;
                                                break;
                                            default:
                                                break;
                                          }
                                      }
                                    break;
                                case 'f':
                                    if (strcmp(&(field_name[3]), "erenceDatum") == 0)
                                        return &fieldGeneratorReferenceDatum;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'S':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'o':
                            if (strncmp(&(field_name[2]), "urce", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 0:
                                        return &fieldGeneratorSource;
                                    case 'I':
                                        if (strcmp(&(field_name[7]), "D") == 0)
                                            return &fieldGeneratorSourceID;
                                        break;
                                    default:
                                        break;
                                  }
                              }
                            break;
                        case 'p':
                            if (strcmp(&(field_name[2]), "okenLabel") == 0)
                                return &fieldGeneratorSpokenLabel;
                            break;
                        case 't':
                            if (strncmp(&(field_name[2]), "reet", 4) == 0)
                              {
                                switch ((unsigned char)(field_name[6]))
                                  {
                                    case 'N':
                                        switch ((unsigned char)(field_name[7]))
                                          {
                                            case 'a':
                                                if (strcmp(&(field_name[8]), "me") == 0)
                                                    return &fieldGeneratorStreetName;
                                                break;
                                            case 'u':
                                                if (strcmp(&(field_name[8]), "mber") == 0)
                                                    return &fieldGeneratorStreetNumber;
                                                break;
                                            default:
                                                break;
                                          }
                                        break;
                                    case 'S':
                                        if (strcmp(&(field_name[7]), "econdaryNumber") == 0)
                                            return &fieldGeneratorStreetSecondaryNumber;
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
                case 'T':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "meZone") == 0)
                                return &fieldGeneratorTimeZone;
                            break;
                        case 'y':
                            if (strncmp(&(field_name[2]), "pe", 2) == 0)
                              {
                                switch ((unsigned char)(field_name[4]))
                                  {
                                    case 0:
                                        return &fieldGeneratorType;
                                    case 'I':
                                        if (strcmp(&(field_name[5]), "D") == 0)
                                            return &fieldGeneratorTypeID;
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
                case 'V':
                    if (strcmp(&(field_name[1]), "erified") == 0)
                        return &fieldGeneratorVerified;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorIsFictional("field \"IsFictional\" of the MapLocation class"), fieldGeneratorIsOnEarthsSurface("field \"IsOnEarthsSurface\" of the MapLocation class"), fieldGeneratorType("field \"Type\" of the MapLocation class"), fieldGeneratorLabel("field \"Label\" of the MapLocation class"), fieldGeneratorSpokenLabel("field \"SpokenLabel\" of the MapLocation class"), fieldGeneratorAddress("field \"Address\" of the MapLocation class"), fieldGeneratorStreetNumber("field \"StreetNumber\" of the MapLocation class"), fieldGeneratorStreetSecondaryNumber("field \"StreetSecondaryNumber\" of the MapLocation class"), fieldGeneratorStreetName("field \"StreetName\" of the MapLocation class"), fieldGeneratorCity("field \"City\" of the MapLocation class"), fieldGeneratorAdmin2("field \"Admin2\" of the MapLocation class"), fieldGeneratorAdmin1("field \"Admin1\" of the MapLocation class"), fieldGeneratorCountry("field \"Country\" of the MapLocation class"), fieldGeneratorCountryCode("field \"CountryCode\" of the MapLocation class"), fieldGeneratorPostalCode("field \"PostalCode\" of the MapLocation class"), fieldGeneratorIATA("field \"IATA\" of the MapLocation class"), fieldGeneratorICAO("field \"ICAO\" of the MapLocation class"), fieldGeneratorGeohash("field \"Geohash\" of the MapLocation class"), fieldGeneratorVerified("field \"Verified\" of the MapLocation class"), fieldGeneratorHighConfidence("field \"HighConfidence\" of the MapLocation class"), fieldGeneratorCurrentLocation("field \"CurrentLocation\" of the MapLocation class"), fieldGeneratorLatitude("field \"Latitude\" of the MapLocation class"), fieldGeneratorLongitude("field \"Longitude\" of the MapLocation class"), fieldGeneratorCoordinatesAreApproximate("field \"CoordinatesAreApproximate\" of the MapLocation class"), fieldGeneratorCoordinatesAreAdjusted("field \"CoordinatesAreAdjusted\" of the MapLocation class"), fieldGeneratorReferenceDatum("field \"ReferenceDatum\" of the MapLocation class"), fieldGeneratorTimeZone("field \"TimeZone\" of the MapLocation class"), fieldGeneratorRadius("field \"Radius\" of the MapLocation class"), fieldGeneratorBoundingBox("field \"BoundingBox\" of the MapLocation class", ignore_extras), fieldGeneratorLinks("field \"Links\" of the MapLocation class", ignore_extras), fieldGeneratorTypeID("field \"TypeID\" of the MapLocation class"), fieldGeneratorSourceID("field \"SourceID\" of the MapLocation class"), fieldGeneratorRecordID("field \"RecordID\" of the MapLocation class"), fieldGeneratorRecordIDString("field \"RecordIDString\" of the MapLocation class"), fieldGeneratorSource("field \"Source\" of the MapLocation class"), fieldGeneratorPointOfInterestName("field \"PointOfInterestName\" of the MapLocation class"), fieldGeneratorOtherType("field \"OtherType\" of the MapLocation class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MapLocation class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIsFictional.reset();
            fieldGeneratorIsOnEarthsSurface.reset();
            fieldGeneratorType.reset();
            fieldGeneratorLabel.reset();
            fieldGeneratorSpokenLabel.reset();
            fieldGeneratorAddress.reset();
            fieldGeneratorStreetNumber.reset();
            fieldGeneratorStreetSecondaryNumber.reset();
            fieldGeneratorStreetName.reset();
            fieldGeneratorCity.reset();
            fieldGeneratorAdmin2.reset();
            fieldGeneratorAdmin1.reset();
            fieldGeneratorCountry.reset();
            fieldGeneratorCountryCode.reset();
            fieldGeneratorPostalCode.reset();
            fieldGeneratorIATA.reset();
            fieldGeneratorICAO.reset();
            fieldGeneratorGeohash.reset();
            fieldGeneratorVerified.reset();
            fieldGeneratorHighConfidence.reset();
            fieldGeneratorCurrentLocation.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorCoordinatesAreApproximate.reset();
            fieldGeneratorCoordinatesAreAdjusted.reset();
            fieldGeneratorReferenceDatum.reset();
            fieldGeneratorTimeZone.reset();
            fieldGeneratorRadius.reset();
            fieldGeneratorBoundingBox.reset();
            fieldGeneratorLinks.reset();
            fieldGeneratorTypeID.reset();
            fieldGeneratorSourceID.reset();
            fieldGeneratorRecordID.reset();
            fieldGeneratorRecordIDString.reset();
            fieldGeneratorSource.reset();
            fieldGeneratorPointOfInterestName.reset();
            fieldGeneratorOtherType.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MAPLOCATIONJSON_H */
