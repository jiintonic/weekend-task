/* file "LocationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef LOCATIONJSON_H
#define LOCATIONJSON_H

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


class LocationJSON : public ReferenceCounted
  {
  private:
    bool flagHasCountryName;
    std::string storeCountryName;
    bool flagHasPostalCode;
    std::string storePostalCode;
    bool flagHasCityName;
    std::string storeCityName;
    bool flagHasStateAbbreviation;
    std::string storeStateAbbreviation;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    LocationJSON(const LocationJSON &);
    LocationJSON & operator=(const LocationJSON &other);

    void  fromJSONCountryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPostalCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCityName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONStateAbbreviation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);


  public:
    LocationJSON(void);
    virtual ~LocationJSON(void);
    bool  hasCountryName(void) const;
    std::string  getCountryName(void);
    const std::string  getCountryName(void) const;
    bool  hasPostalCode(void) const;
    std::string  getPostalCode(void);
    const std::string  getPostalCode(void) const;
    bool  hasCityName(void) const;
    std::string  getCityName(void);
    const std::string  getCityName(void) const;
    bool  hasStateAbbreviation(void) const;
    std::string  getStateAbbreviation(void);
    const std::string  getStateAbbreviation(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;

    virtual size_t extraLocationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraLocationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraLocationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraLocationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraLocationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraLocationLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setCountryName(std::string new_value)
      {
        flagHasCountryName = true;
        storeCountryName = new_value;
      }
    void unsetCountryName(void)
      {
        flagHasCountryName = false;
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
    void setCityName(std::string new_value)
      {
        flagHasCityName = true;
        storeCityName = new_value;
      }
    void unsetCityName(void)
      {
        flagHasCityName = false;
      }
    void setStateAbbreviation(std::string new_value)
      {
        flagHasStateAbbreviation = true;
        storeStateAbbreviation = new_value;
      }
    void unsetStateAbbreviation(void)
      {
        flagHasStateAbbreviation = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of LocationJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of LocationJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of LocationJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of LocationJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of LocationJSON is greater than the upper bound (90) for that field.");
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
            throw("The value for field Longitude of LocationJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of LocationJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of LocationJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of LocationJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of LocationJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }

    virtual void extraLocationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraLocationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraLocationLookup(key);
        if (old_field == NULL)
          {
            extraLocationAppendPair(key, new_component);
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
        if (flagHasCountryName)
          {
            handler->start_pair("CountryName");
            handler->string_value(storeCountryName);
          }
        if (flagHasPostalCode)
          {
            handler->start_pair("PostalCode");
            handler->string_value(storePostalCode);
          }
        if (flagHasCityName)
          {
            handler->start_pair("CityName");
            handler->string_value(storeCityName);
          }
        if (flagHasStateAbbreviation)
          {
            handler->start_pair("StateAbbreviation");
            handler->string_value(storeStateAbbreviation);
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
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLatitude()))
          {
            return "When parsing the object for %what%, the \"Latitude\" field was missing.";
          }
        if (!(hasLongitude()))
          {
            return "When parsing the object for %what%, the \"Longitude\" field was missing.";
          }
        return NULL;
      }

    static LocationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static LocationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        LocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationJSON>, LocationJSON *, bool> generator("Type Location", ignore_extras);
            parse_json_value(text, "Text for LocationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static LocationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        LocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<LocationJSON>, LocationJSON *, bool> generator("Type Location", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountryName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorPostalCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCityName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStateAbbreviation;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorLongitude;
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
            LocationJSON *result = new LocationJSON();
            assert(result != NULL);
            RCHandle<LocationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraLocationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(LocationJSON *result)
          {
            if (fieldGeneratorCountryName.have_value)
              {
                result->setCountryName(fieldGeneratorCountryName.value);
                fieldGeneratorCountryName.have_value = false;
              }
            if (fieldGeneratorPostalCode.have_value)
              {
                result->setPostalCode(fieldGeneratorPostalCode.value);
                fieldGeneratorPostalCode.have_value = false;
              }
            if (fieldGeneratorCityName.have_value)
              {
                result->setCityName(fieldGeneratorCityName.value);
                fieldGeneratorCityName.have_value = false;
              }
            if (fieldGeneratorStateAbbreviation.have_value)
              {
                result->setStateAbbreviation(fieldGeneratorStateAbbreviation.value);
                fieldGeneratorStateAbbreviation.have_value = false;
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
          }
        virtual void handle_result(LocationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "tyName") == 0)
                                return &fieldGeneratorCityName;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "untryName") == 0)
                                return &fieldGeneratorCountryName;
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
                case 'S':
                    if (strcmp(&(field_name[1]), "tateAbbreviation") == 0)
                        return &fieldGeneratorStateAbbreviation;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorCountryName("field \"CountryName\" of the Location class"), fieldGeneratorPostalCode("field \"PostalCode\" of the Location class"), fieldGeneratorCityName("field \"CityName\" of the Location class"), fieldGeneratorStateAbbreviation("field \"StateAbbreviation\" of the Location class"), fieldGeneratorLatitude("field \"Latitude\" of the Location class"), fieldGeneratorLongitude("field \"Longitude\" of the Location class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Location class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorCountryName.reset();
            fieldGeneratorPostalCode.reset();
            fieldGeneratorCityName.reset();
            fieldGeneratorStateAbbreviation.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* LOCATIONJSON_H */
