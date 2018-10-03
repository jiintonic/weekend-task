/* file "AircraftJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AIRCRAFTJSON_H
#define AIRCRAFTJSON_H

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


class AircraftJSON : public ReferenceCounted
  {
  private:
    bool flagHasIATACode;
    std::string storeIATACode;
    bool flagHasICAOCode;
    std::string storeICAOCode;
    bool flagHasDescription;
    std::string storeDescription;
    bool flagHasManufacturer;
    std::string storeManufacturer;
    bool flagHasType;
    std::string storeType;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AircraftJSON(const AircraftJSON &);
    AircraftJSON & operator=(const AircraftJSON &other);

    void  fromJSONIATACode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONICAOCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDescription(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONManufacturer(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);


  public:
    AircraftJSON(void);
    virtual ~AircraftJSON(void);
    bool  hasIATACode(void) const;
    std::string  getIATACode(void);
    const std::string  getIATACode(void) const;
    bool  hasICAOCode(void) const;
    std::string  getICAOCode(void);
    const std::string  getICAOCode(void) const;
    bool  hasDescription(void) const;
    std::string  getDescription(void);
    const std::string  getDescription(void) const;
    bool  hasManufacturer(void) const;
    std::string  getManufacturer(void);
    const std::string  getManufacturer(void) const;
    bool  hasType(void) const;
    std::string  getType(void);
    const std::string  getType(void) const;

    virtual size_t extraAircraftComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAircraftComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAircraftComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAircraftComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAircraftLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAircraftLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setIATACode(std::string new_value)
      {
        flagHasIATACode = true;
        storeIATACode = new_value;
      }
    void unsetIATACode(void)
      {
        flagHasIATACode = false;
      }
    void setICAOCode(std::string new_value)
      {
        flagHasICAOCode = true;
        storeICAOCode = new_value;
      }
    void unsetICAOCode(void)
      {
        flagHasICAOCode = false;
      }
    void setDescription(std::string new_value)
      {
        flagHasDescription = true;
        storeDescription = new_value;
      }
    void unsetDescription(void)
      {
        flagHasDescription = false;
      }
    void setManufacturer(std::string new_value)
      {
        flagHasManufacturer = true;
        storeManufacturer = new_value;
      }
    void unsetManufacturer(void)
      {
        flagHasManufacturer = false;
      }
    void setType(std::string new_value)
      {
        flagHasType = true;
        storeType = new_value;
      }
    void unsetType(void)
      {
        flagHasType = false;
      }

    virtual void extraAircraftAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAircraftSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAircraftLookup(key);
        if (old_field == NULL)
          {
            extraAircraftAppendPair(key, new_component);
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
        if (flagHasIATACode)
          {
            handler->start_pair("IATACode");
            handler->string_value(storeIATACode);
          }
        if (flagHasICAOCode)
          {
            handler->start_pair("ICAOCode");
            handler->string_value(storeICAOCode);
          }
        if (flagHasDescription)
          {
            handler->start_pair("Description");
            handler->string_value(storeDescription);
          }
        if (flagHasManufacturer)
          {
            handler->start_pair("Manufacturer");
            handler->string_value(storeManufacturer);
          }
        if (flagHasType)
          {
            handler->start_pair("Type");
            handler->string_value(storeType);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static AircraftJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AircraftJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AircraftJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AircraftJSON>, AircraftJSON *, bool> generator("Type Aircraft", ignore_extras);
            parse_json_value(text, "Text for AircraftJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AircraftJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AircraftJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AircraftJSON>, AircraftJSON *, bool> generator("Type Aircraft", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorIATACode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorICAOCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDescription;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorManufacturer;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorType;
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
            AircraftJSON *result = new AircraftJSON();
            assert(result != NULL);
            RCHandle<AircraftJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAircraftAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AircraftJSON *result)
          {
            if (fieldGeneratorIATACode.have_value)
              {
                result->setIATACode(fieldGeneratorIATACode.value);
                fieldGeneratorIATACode.have_value = false;
              }
            if (fieldGeneratorICAOCode.have_value)
              {
                result->setICAOCode(fieldGeneratorICAOCode.value);
                fieldGeneratorICAOCode.have_value = false;
              }
            if (fieldGeneratorDescription.have_value)
              {
                result->setDescription(fieldGeneratorDescription.value);
                fieldGeneratorDescription.have_value = false;
              }
            if (fieldGeneratorManufacturer.have_value)
              {
                result->setManufacturer(fieldGeneratorManufacturer.value);
                fieldGeneratorManufacturer.have_value = false;
              }
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value);
                fieldGeneratorType.have_value = false;
              }
          }
        virtual void handle_result(AircraftJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "escription") == 0)
                        return &fieldGeneratorDescription;
                    break;
                case 'I':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'A':
                            if (strcmp(&(field_name[2]), "TACode") == 0)
                                return &fieldGeneratorIATACode;
                            break;
                        case 'C':
                            if (strcmp(&(field_name[2]), "AOCode") == 0)
                                return &fieldGeneratorICAOCode;
                            break;
                        default:
                            break;
                      }
                    break;
                case 'M':
                    if (strcmp(&(field_name[1]), "anufacturer") == 0)
                        return &fieldGeneratorManufacturer;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorIATACode("field \"IATACode\" of the Aircraft class"), fieldGeneratorICAOCode("field \"ICAOCode\" of the Aircraft class"), fieldGeneratorDescription("field \"Description\" of the Aircraft class"), fieldGeneratorManufacturer("field \"Manufacturer\" of the Aircraft class"), fieldGeneratorType("field \"Type\" of the Aircraft class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Aircraft class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorIATACode.reset();
            fieldGeneratorICAOCode.reset();
            fieldGeneratorDescription.reset();
            fieldGeneratorManufacturer.reset();
            fieldGeneratorType.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AIRCRAFTJSON_H */
