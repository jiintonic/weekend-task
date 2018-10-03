/* file "UberVehicleJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERVEHICLEJSON_H
#define UBERVEHICLEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <string>
#include "OInteger.h"
#include "UberDriverJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberVehicleJSON : public ReferenceCounted
  {
  private:
    bool flagHasMake;
    std::string storeMake;
    bool flagHasModel;
    std::string storeModel;
    bool flagHasLicensePlate;
    std::string storeLicensePlate;
    bool flagHasPictureUrl;
    std::string storePictureUrl;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    bool flagHasBearing;
    OInteger storeBearing;
    bool flagHasDriver;
    UberDriverJSON * storeDriver;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberVehicleJSON(const UberVehicleJSON &);
    UberVehicleJSON & operator=(const UberVehicleJSON &other);

    void  fromJSONMake(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONModel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLicensePlate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPictureUrl(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBearing(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDriver(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberVehicleJSON(void);
    virtual ~UberVehicleJSON(void);
    bool  hasMake(void) const;
    std::string  getMake(void);
    const std::string  getMake(void) const;
    bool  hasModel(void) const;
    std::string  getModel(void);
    const std::string  getModel(void) const;
    bool  hasLicensePlate(void) const;
    std::string  getLicensePlate(void);
    const std::string  getLicensePlate(void) const;
    bool  hasPictureUrl(void) const;
    std::string  getPictureUrl(void);
    const std::string  getPictureUrl(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;
    bool  hasBearing(void) const;
    OInteger  getBearing(void);
    const OInteger  getBearing(void) const;
    bool  hasDriver(void) const;
    UberDriverJSON *  getDriver(void);
    const UberDriverJSON *  getDriver(void) const;

    virtual size_t extraUberVehicleComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberVehicleComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberVehicleComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberVehicleComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberVehicleLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberVehicleLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setMake(std::string new_value)
      {
        flagHasMake = true;
        storeMake = new_value;
      }
    void unsetMake(void)
      {
        flagHasMake = false;
      }
    void setModel(std::string new_value)
      {
        flagHasModel = true;
        storeModel = new_value;
      }
    void unsetModel(void)
      {
        flagHasModel = false;
      }
    void setLicensePlate(std::string new_value)
      {
        flagHasLicensePlate = true;
        storeLicensePlate = new_value;
      }
    void unsetLicensePlate(void)
      {
        flagHasLicensePlate = false;
      }
    void setPictureUrl(std::string new_value)
      {
        flagHasPictureUrl = true;
        storePictureUrl = new_value;
      }
    void unsetPictureUrl(void)
      {
        flagHasPictureUrl = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of UberVehicleJSON is not a valid number.");
        textStoreLatitude = new_value;
      }
    void unsetLatitude(void)
      {
        flagHasLatitude = false;
      }
    void setLongitude(double new_value)
      {
        flagHasLongitude = true;
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of UberVehicleJSON is not a valid number.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }
    void setBearing(OInteger new_value)
      {
        flagHasBearing = true;
        storeBearing = new_value;
      }
    void unsetBearing(void)
      {
        flagHasBearing = false;
      }
    void setDriver(UberDriverJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDriver)
          {
            storeDriver->remove_reference();
          }
        flagHasDriver = true;
        storeDriver = new_value;
      }
    void unsetDriver(void)
      {
        if (flagHasDriver)
          {
            storeDriver->remove_reference();
          }
        flagHasDriver = false;
      }

    virtual void extraUberVehicleAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberVehicleSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberVehicleLookup(key);
        if (old_field == NULL)
          {
            extraUberVehicleAppendPair(key, new_component);
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
        assert(flagHasMake);
        handler->start_pair("Make");
        handler->string_value(storeMake);
        assert(flagHasModel);
        handler->start_pair("Model");
        handler->string_value(storeModel);
        assert(flagHasLicensePlate);
        handler->start_pair("LicensePlate");
        handler->string_value(storeLicensePlate);
        if (flagHasPictureUrl)
          {
            handler->start_pair("PictureUrl");
            handler->string_value(storePictureUrl);
          }
        assert(flagHasLatitude);
        handler->start_pair("Latitude");
        if (textStoreLatitude != "")
            handler->number_value(textStoreLatitude.c_str());
        else if (((double)(long int)storeLatitude) == storeLatitude)
            handler->number_value((long int)storeLatitude);
        else
            handler->number_value(storeLatitude);
        assert(flagHasLongitude);
        handler->start_pair("Longitude");
        if (textStoreLongitude != "")
            handler->number_value(textStoreLongitude.c_str());
        else if (((double)(long int)storeLongitude) == storeLongitude)
            handler->number_value((long int)storeLongitude);
        else
            handler->number_value(storeLongitude);
        assert(flagHasBearing);
        handler->start_pair("Bearing");
        handler->number_value(storeBearing.get_o_integer());
        if (flagHasDriver)
          {
            handler->start_pair("Driver");
            storeDriver->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasMake()))
          {
            return "When parsing the object for %what%, the \"Make\" field was missing.";
          }
        if (!(hasModel()))
          {
            return "When parsing the object for %what%, the \"Model\" field was missing.";
          }
        if (!(hasLicensePlate()))
          {
            return "When parsing the object for %what%, the \"LicensePlate\" field was missing.";
          }
        if (!(hasLatitude()))
          {
            return "When parsing the object for %what%, the \"Latitude\" field was missing.";
          }
        if (!(hasLongitude()))
          {
            return "When parsing the object for %what%, the \"Longitude\" field was missing.";
          }
        if (!(hasBearing()))
          {
            return "When parsing the object for %what%, the \"Bearing\" field was missing.";
          }
        return NULL;
      }

    static UberVehicleJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberVehicleJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberVehicleJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberVehicleJSON>, UberVehicleJSON *, bool> generator("Type UberVehicle", ignore_extras);
            parse_json_value(text, "Text for UberVehicleJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberVehicleJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberVehicleJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberVehicleJSON>, UberVehicleJSON *, bool> generator("Type UberVehicle", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorMake;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorModel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLicensePlate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPictureUrl;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorBearing;
        JSONHoldingGenerator<UberDriverJSON::Generator, RCHandle<UberDriverJSON>, UberDriverJSON *, bool > fieldGeneratorDriver;
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
            UberVehicleJSON *result = new UberVehicleJSON();
            assert(result != NULL);
            RCHandle<UberVehicleJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberVehicleAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberVehicleJSON *result)
          {
            if (fieldGeneratorMake.have_value)
              {
                result->setMake(fieldGeneratorMake.value);
                fieldGeneratorMake.have_value = false;
              }
            else if (!(result->hasMake()))
              {
                error("When parsing the object for %what%, the \"Make\" field was missing.");
              }
            if (fieldGeneratorModel.have_value)
              {
                result->setModel(fieldGeneratorModel.value);
                fieldGeneratorModel.have_value = false;
              }
            else if (!(result->hasModel()))
              {
                error("When parsing the object for %what%, the \"Model\" field was missing.");
              }
            if (fieldGeneratorLicensePlate.have_value)
              {
                result->setLicensePlate(fieldGeneratorLicensePlate.value);
                fieldGeneratorLicensePlate.have_value = false;
              }
            else if (!(result->hasLicensePlate()))
              {
                error("When parsing the object for %what%, the \"LicensePlate\" field was missing.");
              }
            if (fieldGeneratorPictureUrl.have_value)
              {
                result->setPictureUrl(fieldGeneratorPictureUrl.value);
                fieldGeneratorPictureUrl.have_value = false;
              }
            if (fieldGeneratorLatitude.have_value)
              {
                result->setLatitudeText(fieldGeneratorLatitude.value);
                fieldGeneratorLatitude.have_value = false;
              }
            else if (!(result->hasLatitude()))
              {
                error("When parsing the object for %what%, the \"Latitude\" field was missing.");
              }
            if (fieldGeneratorLongitude.have_value)
              {
                result->setLongitudeText(fieldGeneratorLongitude.value);
                fieldGeneratorLongitude.have_value = false;
              }
            else if (!(result->hasLongitude()))
              {
                error("When parsing the object for %what%, the \"Longitude\" field was missing.");
              }
            if (fieldGeneratorBearing.have_value)
              {
                result->setBearing(fieldGeneratorBearing.value);
                fieldGeneratorBearing.have_value = false;
              }
            else if (!(result->hasBearing()))
              {
                error("When parsing the object for %what%, the \"Bearing\" field was missing.");
              }
            if (fieldGeneratorDriver.have_value)
              {
                result->setDriver(fieldGeneratorDriver.value.referenced());
                fieldGeneratorDriver.have_value = false;
              }
          }
        virtual void handle_result(UberVehicleJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strcmp(&(field_name[1]), "earing") == 0)
                        return &fieldGeneratorBearing;
                    break;
                case 'D':
                    if (strcmp(&(field_name[1]), "river") == 0)
                        return &fieldGeneratorDriver;
                    break;
                case 'L':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "titude") == 0)
                                return &fieldGeneratorLatitude;
                            break;
                        case 'i':
                            if (strcmp(&(field_name[2]), "censePlate") == 0)
                                return &fieldGeneratorLicensePlate;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                return &fieldGeneratorLongitude;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ke") == 0)
                                return &fieldGeneratorMake;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "del") == 0)
                                return &fieldGeneratorModel;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "ictureUrl") == 0)
                        return &fieldGeneratorPictureUrl;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorMake("field \"Make\" of the UberVehicle class"), fieldGeneratorModel("field \"Model\" of the UberVehicle class"), fieldGeneratorLicensePlate("field \"LicensePlate\" of the UberVehicle class"), fieldGeneratorPictureUrl("field \"PictureUrl\" of the UberVehicle class"), fieldGeneratorLatitude("field \"Latitude\" of the UberVehicle class"), fieldGeneratorLongitude("field \"Longitude\" of the UberVehicle class"), fieldGeneratorBearing("field \"Bearing\" of the UberVehicle class"), fieldGeneratorDriver("field \"Driver\" of the UberVehicle class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberVehicle class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorMake.reset();
            fieldGeneratorModel.reset();
            fieldGeneratorLicensePlate.reset();
            fieldGeneratorPictureUrl.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            fieldGeneratorBearing.reset();
            fieldGeneratorDriver.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERVEHICLEJSON_H */
