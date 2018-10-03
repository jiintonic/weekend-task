/* file "FlightStatsAirportJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSAIRPORTJSON_H
#define FLIGHTSTATSAIRPORTJSON_H

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


class FlightStatsAirportJSON : public ReferenceCounted
  {
  private:
    bool flagHasiata;
    std::string storeiata;
    bool flagHasicao;
    std::string storeicao;
    bool flagHasname;
    std::string storename;
    bool flagHasstreet1;
    std::string storestreet1;
    bool flagHasstreet2;
    std::string storestreet2;
    bool flagHascity;
    std::string storecity;
    bool flagHasstateCode;
    std::string storestateCode;
    bool flagHaspostalCode;
    std::string storepostalCode;
    bool flagHascountryCode;
    std::string storecountryCode;
    bool flagHascountryName;
    std::string storecountryName;
    bool flagHasregionName;
    std::string storeregionName;
    bool flagHastimeZoneRegionName;
    std::string storetimeZoneRegionName;
    bool flagHaslocalTime;
    std::string storelocalTime;
    bool flagHasutcOffsetHours;
    double storeutcOffsetHours;
    std::string textStoreutcOffsetHours;
    bool flagHaslatitude;
    double storelatitude;
    std::string textStorelatitude;
    bool flagHaslongitude;
    double storelongitude;
    std::string textStorelongitude;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsAirportJSON(const FlightStatsAirportJSON &);
    FlightStatsAirportJSON & operator=(const FlightStatsAirportJSON &other);

    void  fromJSONiata(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONicao(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONstreet1(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONstreet2(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONstateCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONpostalCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcountryCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONcountryName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONregionName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONtimeZoneRegionName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlocalTime(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONutcOffsetHours(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsAirportJSON(void);
    virtual ~FlightStatsAirportJSON(void);
    bool  hasiata(void) const;
    std::string  getiata(void);
    const std::string  getiata(void) const;
    bool  hasicao(void) const;
    std::string  geticao(void);
    const std::string  geticao(void) const;
    bool  hasname(void) const;
    std::string  getname(void);
    const std::string  getname(void) const;
    bool  hasstreet1(void) const;
    std::string  getstreet1(void);
    const std::string  getstreet1(void) const;
    bool  hasstreet2(void) const;
    std::string  getstreet2(void);
    const std::string  getstreet2(void) const;
    bool  hascity(void) const;
    std::string  getcity(void);
    const std::string  getcity(void) const;
    bool  hasstateCode(void) const;
    std::string  getstateCode(void);
    const std::string  getstateCode(void) const;
    bool  haspostalCode(void) const;
    std::string  getpostalCode(void);
    const std::string  getpostalCode(void) const;
    bool  hascountryCode(void) const;
    std::string  getcountryCode(void);
    const std::string  getcountryCode(void) const;
    bool  hascountryName(void) const;
    std::string  getcountryName(void);
    const std::string  getcountryName(void) const;
    bool  hasregionName(void) const;
    std::string  getregionName(void);
    const std::string  getregionName(void) const;
    bool  hastimeZoneRegionName(void) const;
    std::string  gettimeZoneRegionName(void);
    const std::string  gettimeZoneRegionName(void) const;
    bool  haslocalTime(void) const;
    std::string  getlocalTime(void);
    const std::string  getlocalTime(void) const;
    bool  hasutcOffsetHours(void) const;
    double  getutcOffsetHours(void);
    const double  getutcOffsetHours(void) const;
    std::string  getutcOffsetHoursAsText(void) const;
    bool  haslatitude(void) const;
    double  getlatitude(void);
    const double  getlatitude(void) const;
    std::string  getlatitudeAsText(void) const;
    bool  haslongitude(void) const;
    double  getlongitude(void);
    const double  getlongitude(void) const;
    std::string  getlongitudeAsText(void) const;

    virtual size_t extraFlightStatsAirportComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsAirportComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsAirportComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsAirportComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsAirportLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsAirportLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setiata(std::string new_value)
      {
        flagHasiata = true;
        storeiata = new_value;
      }
    void unsetiata(void)
      {
        flagHasiata = false;
      }
    void seticao(std::string new_value)
      {
        flagHasicao = true;
        storeicao = new_value;
      }
    void unseticao(void)
      {
        flagHasicao = false;
      }
    void setname(std::string new_value)
      {
        flagHasname = true;
        storename = new_value;
      }
    void unsetname(void)
      {
        flagHasname = false;
      }
    void setstreet1(std::string new_value)
      {
        flagHasstreet1 = true;
        storestreet1 = new_value;
      }
    void unsetstreet1(void)
      {
        flagHasstreet1 = false;
      }
    void setstreet2(std::string new_value)
      {
        flagHasstreet2 = true;
        storestreet2 = new_value;
      }
    void unsetstreet2(void)
      {
        flagHasstreet2 = false;
      }
    void setcity(std::string new_value)
      {
        flagHascity = true;
        storecity = new_value;
      }
    void unsetcity(void)
      {
        flagHascity = false;
      }
    void setstateCode(std::string new_value)
      {
        flagHasstateCode = true;
        storestateCode = new_value;
      }
    void unsetstateCode(void)
      {
        flagHasstateCode = false;
      }
    void setpostalCode(std::string new_value)
      {
        flagHaspostalCode = true;
        storepostalCode = new_value;
      }
    void unsetpostalCode(void)
      {
        flagHaspostalCode = false;
      }
    void setcountryCode(std::string new_value)
      {
        flagHascountryCode = true;
        storecountryCode = new_value;
      }
    void unsetcountryCode(void)
      {
        flagHascountryCode = false;
      }
    void setcountryName(std::string new_value)
      {
        flagHascountryName = true;
        storecountryName = new_value;
      }
    void unsetcountryName(void)
      {
        flagHascountryName = false;
      }
    void setregionName(std::string new_value)
      {
        flagHasregionName = true;
        storeregionName = new_value;
      }
    void unsetregionName(void)
      {
        flagHasregionName = false;
      }
    void settimeZoneRegionName(std::string new_value)
      {
        flagHastimeZoneRegionName = true;
        storetimeZoneRegionName = new_value;
      }
    void unsettimeZoneRegionName(void)
      {
        flagHastimeZoneRegionName = false;
      }
    void setlocalTime(std::string new_value)
      {
        flagHaslocalTime = true;
        storelocalTime = new_value;
      }
    void unsetlocalTime(void)
      {
        flagHaslocalTime = false;
      }
    void setutcOffsetHours(double new_value)
      {
        flagHasutcOffsetHours = true;
        storeutcOffsetHours = new_value;
        textStoreutcOffsetHours = "";
      }
    void setutcOffsetHoursText(std::string new_value)
      {
        flagHasutcOffsetHours = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field utcOffsetHours of FlightStatsAirportJSON is not a valid number.");
        textStoreutcOffsetHours = new_value;
      }
    void unsetutcOffsetHours(void)
      {
        flagHasutcOffsetHours = false;
      }
    void setlatitude(double new_value)
      {
        flagHaslatitude = true;
        storelatitude = new_value;
        textStorelatitude = "";
      }
    void setlatitudeText(std::string new_value)
      {
        flagHaslatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field latitude of FlightStatsAirportJSON is not a valid number.");
        textStorelatitude = new_value;
      }
    void unsetlatitude(void)
      {
        flagHaslatitude = false;
      }
    void setlongitude(double new_value)
      {
        flagHaslongitude = true;
        storelongitude = new_value;
        textStorelongitude = "";
      }
    void setlongitudeText(std::string new_value)
      {
        flagHaslongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field longitude of FlightStatsAirportJSON is not a valid number.");
        textStorelongitude = new_value;
      }
    void unsetlongitude(void)
      {
        flagHaslongitude = false;
      }

    virtual void extraFlightStatsAirportAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsAirportSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsAirportLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsAirportAppendPair(key, new_component);
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
        if (flagHasiata)
          {
            handler->start_pair("iata");
            handler->string_value(storeiata);
          }
        if (flagHasicao)
          {
            handler->start_pair("icao");
            handler->string_value(storeicao);
          }
        if (flagHasname)
          {
            handler->start_pair("name");
            handler->string_value(storename);
          }
        if (flagHasstreet1)
          {
            handler->start_pair("street1");
            handler->string_value(storestreet1);
          }
        if (flagHasstreet2)
          {
            handler->start_pair("street2");
            handler->string_value(storestreet2);
          }
        assert(flagHascity);
        handler->start_pair("city");
        handler->string_value(storecity);
        if (flagHasstateCode)
          {
            handler->start_pair("stateCode");
            handler->string_value(storestateCode);
          }
        if (flagHaspostalCode)
          {
            handler->start_pair("postalCode");
            handler->string_value(storepostalCode);
          }
        assert(flagHascountryCode);
        handler->start_pair("countryCode");
        handler->string_value(storecountryCode);
        assert(flagHascountryName);
        handler->start_pair("countryName");
        handler->string_value(storecountryName);
        assert(flagHasregionName);
        handler->start_pair("regionName");
        handler->string_value(storeregionName);
        assert(flagHastimeZoneRegionName);
        handler->start_pair("timeZoneRegionName");
        handler->string_value(storetimeZoneRegionName);
        assert(flagHaslocalTime);
        handler->start_pair("localTime");
        handler->string_value(storelocalTime);
        assert(flagHasutcOffsetHours);
        handler->start_pair("utcOffsetHours");
        if (textStoreutcOffsetHours != "")
            handler->number_value(textStoreutcOffsetHours.c_str());
        else if (((double)(long int)storeutcOffsetHours) == storeutcOffsetHours)
            handler->number_value((long int)storeutcOffsetHours);
        else
            handler->number_value(storeutcOffsetHours);
        assert(flagHaslatitude);
        handler->start_pair("latitude");
        if (textStorelatitude != "")
            handler->number_value(textStorelatitude.c_str());
        else if (((double)(long int)storelatitude) == storelatitude)
            handler->number_value((long int)storelatitude);
        else
            handler->number_value(storelatitude);
        assert(flagHaslongitude);
        handler->start_pair("longitude");
        if (textStorelongitude != "")
            handler->number_value(textStorelongitude.c_str());
        else if (((double)(long int)storelongitude) == storelongitude)
            handler->number_value((long int)storelongitude);
        else
            handler->number_value(storelongitude);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hascity()))
          {
            return "When parsing the object for %what%, the \"city\" field was missing.";
          }
        if (!(hascountryCode()))
          {
            return "When parsing the object for %what%, the \"countryCode\" field was missing.";
          }
        if (!(hascountryName()))
          {
            return "When parsing the object for %what%, the \"countryName\" field was missing.";
          }
        if (!(hasregionName()))
          {
            return "When parsing the object for %what%, the \"regionName\" field was missing.";
          }
        if (!(hastimeZoneRegionName()))
          {
            return "When parsing the object for %what%, the \"timeZoneRegionName\" field was missing.";
          }
        if (!(haslocalTime()))
          {
            return "When parsing the object for %what%, the \"localTime\" field was missing.";
          }
        if (!(hasutcOffsetHours()))
          {
            return "When parsing the object for %what%, the \"utcOffsetHours\" field was missing.";
          }
        if (!(haslatitude()))
          {
            return "When parsing the object for %what%, the \"latitude\" field was missing.";
          }
        if (!(haslongitude()))
          {
            return "When parsing the object for %what%, the \"longitude\" field was missing.";
          }
        return NULL;
      }

    static FlightStatsAirportJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsAirportJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsAirportJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool> generator("Type FlightStatsAirport", ignore_extras);
            parse_json_value(text, "Text for FlightStatsAirportJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsAirportJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsAirportJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsAirportJSON>, FlightStatsAirportJSON *, bool> generator("Type FlightStatsAirport", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratoriata;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratoricao;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorstreet1;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorstreet2;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorstateCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorpostalCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountryCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorcountryName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorregionName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratortimeZoneRegionName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorlocalTime;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorutcOffsetHours;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlongitude;
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
            FlightStatsAirportJSON *result = new FlightStatsAirportJSON();
            assert(result != NULL);
            RCHandle<FlightStatsAirportJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsAirportAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsAirportJSON *result)
          {
            if (fieldGeneratoriata.have_value)
              {
                result->setiata(fieldGeneratoriata.value);
                fieldGeneratoriata.have_value = false;
              }
            if (fieldGeneratoricao.have_value)
              {
                result->seticao(fieldGeneratoricao.value);
                fieldGeneratoricao.have_value = false;
              }
            if (fieldGeneratorname.have_value)
              {
                result->setname(fieldGeneratorname.value);
                fieldGeneratorname.have_value = false;
              }
            if (fieldGeneratorstreet1.have_value)
              {
                result->setstreet1(fieldGeneratorstreet1.value);
                fieldGeneratorstreet1.have_value = false;
              }
            if (fieldGeneratorstreet2.have_value)
              {
                result->setstreet2(fieldGeneratorstreet2.value);
                fieldGeneratorstreet2.have_value = false;
              }
            if (fieldGeneratorcity.have_value)
              {
                result->setcity(fieldGeneratorcity.value);
                fieldGeneratorcity.have_value = false;
              }
            else if (!(result->hascity()))
              {
                error("When parsing the object for %what%, the \"city\" field was missing.");
              }
            if (fieldGeneratorstateCode.have_value)
              {
                result->setstateCode(fieldGeneratorstateCode.value);
                fieldGeneratorstateCode.have_value = false;
              }
            if (fieldGeneratorpostalCode.have_value)
              {
                result->setpostalCode(fieldGeneratorpostalCode.value);
                fieldGeneratorpostalCode.have_value = false;
              }
            if (fieldGeneratorcountryCode.have_value)
              {
                result->setcountryCode(fieldGeneratorcountryCode.value);
                fieldGeneratorcountryCode.have_value = false;
              }
            else if (!(result->hascountryCode()))
              {
                error("When parsing the object for %what%, the \"countryCode\" field was missing.");
              }
            if (fieldGeneratorcountryName.have_value)
              {
                result->setcountryName(fieldGeneratorcountryName.value);
                fieldGeneratorcountryName.have_value = false;
              }
            else if (!(result->hascountryName()))
              {
                error("When parsing the object for %what%, the \"countryName\" field was missing.");
              }
            if (fieldGeneratorregionName.have_value)
              {
                result->setregionName(fieldGeneratorregionName.value);
                fieldGeneratorregionName.have_value = false;
              }
            else if (!(result->hasregionName()))
              {
                error("When parsing the object for %what%, the \"regionName\" field was missing.");
              }
            if (fieldGeneratortimeZoneRegionName.have_value)
              {
                result->settimeZoneRegionName(fieldGeneratortimeZoneRegionName.value);
                fieldGeneratortimeZoneRegionName.have_value = false;
              }
            else if (!(result->hastimeZoneRegionName()))
              {
                error("When parsing the object for %what%, the \"timeZoneRegionName\" field was missing.");
              }
            if (fieldGeneratorlocalTime.have_value)
              {
                result->setlocalTime(fieldGeneratorlocalTime.value);
                fieldGeneratorlocalTime.have_value = false;
              }
            else if (!(result->haslocalTime()))
              {
                error("When parsing the object for %what%, the \"localTime\" field was missing.");
              }
            if (fieldGeneratorutcOffsetHours.have_value)
              {
                result->setutcOffsetHoursText(fieldGeneratorutcOffsetHours.value);
                fieldGeneratorutcOffsetHours.have_value = false;
              }
            else if (!(result->hasutcOffsetHours()))
              {
                error("When parsing the object for %what%, the \"utcOffsetHours\" field was missing.");
              }
            if (fieldGeneratorlatitude.have_value)
              {
                result->setlatitudeText(fieldGeneratorlatitude.value);
                fieldGeneratorlatitude.have_value = false;
              }
            else if (!(result->haslatitude()))
              {
                error("When parsing the object for %what%, the \"latitude\" field was missing.");
              }
            if (fieldGeneratorlongitude.have_value)
              {
                result->setlongitudeText(fieldGeneratorlongitude.value);
                fieldGeneratorlongitude.have_value = false;
              }
            else if (!(result->haslongitude()))
              {
                error("When parsing the object for %what%, the \"longitude\" field was missing.");
              }
          }
        virtual void handle_result(FlightStatsAirportJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'c':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'i':
                            if (strcmp(&(field_name[2]), "ty") == 0)
                                return &fieldGeneratorcity;
                            break;
                        case 'o':
                            if (strncmp(&(field_name[2]), "untry", 5) == 0)
                              {
                                switch ((unsigned char)(field_name[7]))
                                  {
                                    case 'C':
                                        if (strcmp(&(field_name[8]), "ode") == 0)
                                            return &fieldGeneratorcountryCode;
                                        break;
                                    case 'N':
                                        if (strcmp(&(field_name[8]), "ame") == 0)
                                            return &fieldGeneratorcountryName;
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
                case 'i':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "ta") == 0)
                                return &fieldGeneratoriata;
                            break;
                        case 'c':
                            if (strcmp(&(field_name[2]), "ao") == 0)
                                return &fieldGeneratoricao;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'l':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "titude") == 0)
                                return &fieldGeneratorlatitude;
                            break;
                        case 'o':
                            switch ((unsigned char)(field_name[2]))
                              {
                                case 'c':
                                    if (strcmp(&(field_name[3]), "alTime") == 0)
                                        return &fieldGeneratorlocalTime;
                                    break;
                                case 'n':
                                    if (strcmp(&(field_name[3]), "gitude") == 0)
                                        return &fieldGeneratorlongitude;
                                    break;
                                default:
                                    break;
                              }
                            break;
                        default:
                            break;
                      }
                    break;
                case 'n':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorname;
                    break;
                case 'p':
                    if (strcmp(&(field_name[1]), "ostalCode") == 0)
                        return &fieldGeneratorpostalCode;
                    break;
                case 'r':
                    if (strcmp(&(field_name[1]), "egionName") == 0)
                        return &fieldGeneratorregionName;
                    break;
                case 's':
                    if (strncmp(&(field_name[1]), "t", 1) == 0)
                      {
                        switch ((unsigned char)(field_name[2]))
                          {
                            case 'a':
                                if (strcmp(&(field_name[3]), "teCode") == 0)
                                    return &fieldGeneratorstateCode;
                                break;
                            case 'r':
                                if (strncmp(&(field_name[3]), "eet", 3) == 0)
                                  {
                                    switch ((unsigned char)(field_name[6]))
                                      {
                                        case '1':
                                            if (field_name[7] == 0)
                                                return &fieldGeneratorstreet1;
                                            break;
                                        case '2':
                                            if (field_name[7] == 0)
                                                return &fieldGeneratorstreet2;
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
                case 't':
                    if (strcmp(&(field_name[1]), "imeZoneRegionName") == 0)
                        return &fieldGeneratortimeZoneRegionName;
                    break;
                case 'u':
                    if (strcmp(&(field_name[1]), "tcOffsetHours") == 0)
                        return &fieldGeneratorutcOffsetHours;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratoriata("field \"iata\" of the FlightStatsAirport class"), fieldGeneratoricao("field \"icao\" of the FlightStatsAirport class"), fieldGeneratorname("field \"name\" of the FlightStatsAirport class"), fieldGeneratorstreet1("field \"street1\" of the FlightStatsAirport class"), fieldGeneratorstreet2("field \"street2\" of the FlightStatsAirport class"), fieldGeneratorcity("field \"city\" of the FlightStatsAirport class"), fieldGeneratorstateCode("field \"stateCode\" of the FlightStatsAirport class"), fieldGeneratorpostalCode("field \"postalCode\" of the FlightStatsAirport class"), fieldGeneratorcountryCode("field \"countryCode\" of the FlightStatsAirport class"), fieldGeneratorcountryName("field \"countryName\" of the FlightStatsAirport class"), fieldGeneratorregionName("field \"regionName\" of the FlightStatsAirport class"), fieldGeneratortimeZoneRegionName("field \"timeZoneRegionName\" of the FlightStatsAirport class"), fieldGeneratorlocalTime("field \"localTime\" of the FlightStatsAirport class"), fieldGeneratorutcOffsetHours("field \"utcOffsetHours\" of the FlightStatsAirport class"), fieldGeneratorlatitude("field \"latitude\" of the FlightStatsAirport class"), fieldGeneratorlongitude("field \"longitude\" of the FlightStatsAirport class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsAirport class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratoriata.reset();
            fieldGeneratoricao.reset();
            fieldGeneratorname.reset();
            fieldGeneratorstreet1.reset();
            fieldGeneratorstreet2.reset();
            fieldGeneratorcity.reset();
            fieldGeneratorstateCode.reset();
            fieldGeneratorpostalCode.reset();
            fieldGeneratorcountryCode.reset();
            fieldGeneratorcountryName.reset();
            fieldGeneratorregionName.reset();
            fieldGeneratortimeZoneRegionName.reset();
            fieldGeneratorlocalTime.reset();
            fieldGeneratorutcOffsetHours.reset();
            fieldGeneratorlatitude.reset();
            fieldGeneratorlongitude.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSAIRPORTJSON_H */
