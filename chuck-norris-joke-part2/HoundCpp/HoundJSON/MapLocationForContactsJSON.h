/* file "MapLocationForContactsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef MAPLOCATIONFORCONTACTSJSON_H
#define MAPLOCATIONFORCONTACTSJSON_H

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


class MapLocationForContactsJSON : public ReferenceCounted
  {
  private:
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
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    bool flagHasReferenceDatum;
    std::string storeReferenceDatum;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    MapLocationForContactsJSON(const MapLocationForContactsJSON &);
    MapLocationForContactsJSON & operator=(const MapLocationForContactsJSON &other);

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

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONReferenceDatum(JSONValue *json_value, bool ignore_extras = false);


  public:
    MapLocationForContactsJSON(void);
    virtual ~MapLocationForContactsJSON(void);
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
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
    bool  hasReferenceDatum(void) const;
    std::string  getReferenceDatum(void);
    const std::string  getReferenceDatum(void) const;

    virtual size_t extraMapLocationForContactsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraMapLocationForContactsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraMapLocationForContactsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraMapLocationForContactsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraMapLocationForContactsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraMapLocationForContactsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of MapLocationForContactsJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of MapLocationForContactsJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of MapLocationForContactsJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of MapLocationForContactsJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of MapLocationForContactsJSON is greater than the upper bound (90) for that field.");
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
            throw("The value for field Longitude of MapLocationForContactsJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of MapLocationForContactsJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of MapLocationForContactsJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of MapLocationForContactsJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of MapLocationForContactsJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
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

    virtual void extraMapLocationForContactsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraMapLocationForContactsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraMapLocationForContactsLookup(key);
        if (old_field == NULL)
          {
            extraMapLocationForContactsAppendPair(key, new_component);
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
        if (flagHasReferenceDatum)
          {
            handler->start_pair("ReferenceDatum");
            handler->string_value(storeReferenceDatum);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static MapLocationForContactsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static MapLocationForContactsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        MapLocationForContactsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapLocationForContactsJSON>, MapLocationForContactsJSON *, bool> generator("Type MapLocationForContacts", ignore_extras);
            parse_json_value(text, "Text for MapLocationForContactsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static MapLocationForContactsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        MapLocationForContactsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<MapLocationForContactsJSON>, MapLocationForContactsJSON *, bool> generator("Type MapLocationForContacts", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorReferenceDatum;
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
            MapLocationForContactsJSON *result = new MapLocationForContactsJSON();
            assert(result != NULL);
            RCHandle<MapLocationForContactsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraMapLocationForContactsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(MapLocationForContactsJSON *result)
          {
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
            if (fieldGeneratorReferenceDatum.have_value)
              {
                result->setReferenceDatum(fieldGeneratorReferenceDatum.value);
                fieldGeneratorReferenceDatum.have_value = false;
              }
          }
        virtual void handle_result(MapLocationForContactsJSON *new_result) = 0;
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
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ty") == 0)
                                return &fieldGeneratorCity;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "untry", 5) == 0)
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
                    if (strcmp(&(field_name[1]), "ostalCode") == 0)
                        return &fieldGeneratorPostalCode;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "eferenceDatum") == 0)
                        return &fieldGeneratorReferenceDatum;
                    break;
                case 'S':
                    if (strncmp(&(field_name[1]), "treet", 5) == 0)
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
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAddress("field \"Address\" of the MapLocationForContacts class"), fieldGeneratorStreetNumber("field \"StreetNumber\" of the MapLocationForContacts class"), fieldGeneratorStreetSecondaryNumber("field \"StreetSecondaryNumber\" of the MapLocationForContacts class"), fieldGeneratorStreetName("field \"StreetName\" of the MapLocationForContacts class"), fieldGeneratorCity("field \"City\" of the MapLocationForContacts class"), fieldGeneratorAdmin2("field \"Admin2\" of the MapLocationForContacts class"), fieldGeneratorAdmin1("field \"Admin1\" of the MapLocationForContacts class"), fieldGeneratorCountry("field \"Country\" of the MapLocationForContacts class"), fieldGeneratorCountryCode("field \"CountryCode\" of the MapLocationForContacts class"), fieldGeneratorPostalCode("field \"PostalCode\" of the MapLocationForContacts class"), fieldGeneratorIATA("field \"IATA\" of the MapLocationForContacts class"), fieldGeneratorICAO("field \"ICAO\" of the MapLocationForContacts class"), fieldGeneratorLatitude("field \"Latitude\" of the MapLocationForContacts class"), fieldGeneratorLongitude("field \"Longitude\" of the MapLocationForContacts class"), fieldGeneratorReferenceDatum("field \"ReferenceDatum\" of the MapLocationForContacts class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the MapLocationForContacts class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
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
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorReferenceDatum.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* MAPLOCATIONFORCONTACTSJSON_H */
