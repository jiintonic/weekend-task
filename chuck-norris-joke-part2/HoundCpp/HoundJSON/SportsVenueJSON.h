/* file "SportsVenueJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSVENUEJSON_H
#define SPORTSVENUEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsVenueJSON : public ReferenceCounted
  {
  private:
    bool flagHasName;
    std::string storeName;
    bool flagHasAddress;
    std::string storeAddress;
    bool flagHasCity;
    std::string storeCity;
    bool flagHasState;
    std::string storeState;
    bool flagHasZip;
    std::string storeZip;
    bool flagHasCountry;
    std::string storeCountry;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsVenueJSON(const SportsVenueJSON &);
    SportsVenueJSON & operator=(const SportsVenueJSON &other);

    void  fromJSONName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAddress(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCity(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONState(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONZip(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCountry(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsVenueJSON(void);
    virtual ~SportsVenueJSON(void);
    bool  hasName(void) const;
    std::string  getName(void);
    const std::string  getName(void) const;
    bool  hasAddress(void) const;
    std::string  getAddress(void);
    const std::string  getAddress(void) const;
    bool  hasCity(void) const;
    std::string  getCity(void);
    const std::string  getCity(void) const;
    bool  hasState(void) const;
    std::string  getState(void);
    const std::string  getState(void) const;
    bool  hasZip(void) const;
    std::string  getZip(void);
    const std::string  getZip(void) const;
    bool  hasCountry(void) const;
    std::string  getCountry(void);
    const std::string  getCountry(void) const;

    virtual size_t extraSportsVenueComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsVenueComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsVenueComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsVenueComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsVenueLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsVenueLookup(const char *field_name) const
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
    void setAddress(std::string new_value)
      {
        flagHasAddress = true;
        storeAddress = new_value;
      }
    void unsetAddress(void)
      {
        flagHasAddress = false;
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
    void setState(std::string new_value)
      {
        flagHasState = true;
        storeState = new_value;
      }
    void unsetState(void)
      {
        flagHasState = false;
      }
    void setZip(std::string new_value)
      {
        flagHasZip = true;
        storeZip = new_value;
      }
    void unsetZip(void)
      {
        flagHasZip = false;
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

    virtual void extraSportsVenueAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsVenueSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsVenueLookup(key);
        if (old_field == NULL)
          {
            extraSportsVenueAppendPair(key, new_component);
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
        assert(flagHasName);
        handler->start_pair("Name");
        handler->string_value(storeName);
        if (flagHasAddress)
          {
            handler->start_pair("Address");
            handler->string_value(storeAddress);
          }
        assert(flagHasCity);
        handler->start_pair("City");
        handler->string_value(storeCity);
        if (flagHasState)
          {
            handler->start_pair("State");
            handler->string_value(storeState);
          }
        if (flagHasZip)
          {
            handler->start_pair("Zip");
            handler->string_value(storeZip);
          }
        if (flagHasCountry)
          {
            handler->start_pair("Country");
            handler->string_value(storeCountry);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasName()))
          {
            return "When parsing the object for %what%, the \"Name\" field was missing.";
          }
        if (!(hasCity()))
          {
            return "When parsing the object for %what%, the \"City\" field was missing.";
          }
        return NULL;
      }

    static SportsVenueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsVenueJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsVenueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsVenueJSON>, SportsVenueJSON *, bool> generator("Type SportsVenue", ignore_extras);
            parse_json_value(text, "Text for SportsVenueJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsVenueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsVenueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsVenueJSON>, SportsVenueJSON *, bool> generator("Type SportsVenue", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorAddress;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCity;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorState;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorZip;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCountry;
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
            SportsVenueJSON *result = new SportsVenueJSON();
            assert(result != NULL);
            RCHandle<SportsVenueJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsVenueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsVenueJSON *result)
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
            if (fieldGeneratorAddress.have_value)
              {
                result->setAddress(fieldGeneratorAddress.value);
                fieldGeneratorAddress.have_value = false;
              }
            if (fieldGeneratorCity.have_value)
              {
                result->setCity(fieldGeneratorCity.value);
                fieldGeneratorCity.have_value = false;
              }
            else if (!(result->hasCity()))
              {
                error("When parsing the object for %what%, the \"City\" field was missing.");
              }
            if (fieldGeneratorState.have_value)
              {
                result->setState(fieldGeneratorState.value);
                fieldGeneratorState.have_value = false;
              }
            if (fieldGeneratorZip.have_value)
              {
                result->setZip(fieldGeneratorZip.value);
                fieldGeneratorZip.have_value = false;
              }
            if (fieldGeneratorCountry.have_value)
              {
                result->setCountry(fieldGeneratorCountry.value);
                fieldGeneratorCountry.have_value = false;
              }
          }
        virtual void handle_result(SportsVenueJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "ddress") == 0)
                        return &fieldGeneratorAddress;
                    break;
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
                case 'N':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorName;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tate") == 0)
                        return &fieldGeneratorState;
                    break;
                case 'Z':
                    if (strcmp(&(field_name[1]), "ip") == 0)
                        return &fieldGeneratorZip;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorName("field \"Name\" of the SportsVenue class"), fieldGeneratorAddress("field \"Address\" of the SportsVenue class"), fieldGeneratorCity("field \"City\" of the SportsVenue class"), fieldGeneratorState("field \"State\" of the SportsVenue class"), fieldGeneratorZip("field \"Zip\" of the SportsVenue class"), fieldGeneratorCountry("field \"Country\" of the SportsVenue class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsVenue class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorName.reset();
            fieldGeneratorAddress.reset();
            fieldGeneratorCity.reset();
            fieldGeneratorState.reset();
            fieldGeneratorZip.reset();
            fieldGeneratorCountry.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSVENUEJSON_H */
