/* file "UberRequestDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTDATAJSON_H
#define UBERREQUESTDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "MapLocationJSON.h"
#include "MapLocationJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasUberProductId;
    std::string storeUberProductId;
    bool flagHasPickupLocation;
    MapLocationJSON * storePickupLocation;
    bool flagHasDropoffLocation;
    MapLocationJSON * storeDropoffLocation;
    bool flagHasSurgeConfirmationId;
    std::string storeSurgeConfirmationId;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestDataJSON(const UberRequestDataJSON &);
    UberRequestDataJSON & operator=(const UberRequestDataJSON &other);

    void  fromJSONUberProductId(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONPickupLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDropoffLocation(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSurgeConfirmationId(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestDataJSON(void);
    virtual ~UberRequestDataJSON(void);
    bool  hasUberProductId(void) const;
    std::string  getUberProductId(void);
    const std::string  getUberProductId(void) const;
    bool  hasPickupLocation(void) const;
    MapLocationJSON *  getPickupLocation(void);
    const MapLocationJSON *  getPickupLocation(void) const;
    bool  hasDropoffLocation(void) const;
    MapLocationJSON *  getDropoffLocation(void);
    const MapLocationJSON *  getDropoffLocation(void) const;
    bool  hasSurgeConfirmationId(void) const;
    std::string  getSurgeConfirmationId(void);
    const std::string  getSurgeConfirmationId(void) const;

    virtual size_t extraUberRequestDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUberProductId(std::string new_value)
      {
        flagHasUberProductId = true;
        storeUberProductId = new_value;
      }
    void unsetUberProductId(void)
      {
        flagHasUberProductId = false;
      }
    void setPickupLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = true;
        storePickupLocation = new_value;
      }
    void unsetPickupLocation(void)
      {
        if (flagHasPickupLocation)
          {
            storePickupLocation->remove_reference();
          }
        flagHasPickupLocation = false;
      }
    void setDropoffLocation(MapLocationJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = true;
        storeDropoffLocation = new_value;
      }
    void unsetDropoffLocation(void)
      {
        if (flagHasDropoffLocation)
          {
            storeDropoffLocation->remove_reference();
          }
        flagHasDropoffLocation = false;
      }
    void setSurgeConfirmationId(std::string new_value)
      {
        flagHasSurgeConfirmationId = true;
        storeSurgeConfirmationId = new_value;
      }
    void unsetSurgeConfirmationId(void)
      {
        flagHasSurgeConfirmationId = false;
      }

    virtual void extraUberRequestDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestDataLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestDataAppendPair(key, new_component);
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
        if (flagHasUberProductId)
          {
            handler->start_pair("UberProductId");
            handler->string_value(storeUberProductId);
          }
        if (flagHasPickupLocation)
          {
            handler->start_pair("PickupLocation");
            storePickupLocation->write_as_json(handler);
          }
        if (flagHasDropoffLocation)
          {
            handler->start_pair("DropoffLocation");
            storeDropoffLocation->write_as_json(handler);
          }
        if (flagHasSurgeConfirmationId)
          {
            handler->start_pair("SurgeConfirmationId");
            handler->string_value(storeSurgeConfirmationId);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static UberRequestDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDataJSON>, UberRequestDataJSON *, bool> generator("Type UberRequestData", ignore_extras);
            parse_json_value(text, "Text for UberRequestDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestDataJSON>, UberRequestDataJSON *, bool> generator("Type UberRequestData", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUberProductId;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorPickupLocation;
        JSONHoldingGenerator<MapLocationJSON::Generator, RCHandle<MapLocationJSON>, MapLocationJSON *, bool > fieldGeneratorDropoffLocation;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSurgeConfirmationId;
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
            UberRequestDataJSON *result = new UberRequestDataJSON();
            assert(result != NULL);
            RCHandle<UberRequestDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestDataJSON *result)
          {
            if (fieldGeneratorUberProductId.have_value)
              {
                result->setUberProductId(fieldGeneratorUberProductId.value);
                fieldGeneratorUberProductId.have_value = false;
              }
            if (fieldGeneratorPickupLocation.have_value)
              {
                result->setPickupLocation(fieldGeneratorPickupLocation.value.referenced());
                fieldGeneratorPickupLocation.have_value = false;
              }
            if (fieldGeneratorDropoffLocation.have_value)
              {
                result->setDropoffLocation(fieldGeneratorDropoffLocation.value.referenced());
                fieldGeneratorDropoffLocation.have_value = false;
              }
            if (fieldGeneratorSurgeConfirmationId.have_value)
              {
                result->setSurgeConfirmationId(fieldGeneratorSurgeConfirmationId.value);
                fieldGeneratorSurgeConfirmationId.have_value = false;
              }
          }
        virtual void handle_result(UberRequestDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "ropoffLocation") == 0)
                        return &fieldGeneratorDropoffLocation;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "ickupLocation") == 0)
                        return &fieldGeneratorPickupLocation;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "urgeConfirmationId") == 0)
                        return &fieldGeneratorSurgeConfirmationId;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "berProductId") == 0)
                        return &fieldGeneratorUberProductId;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUberProductId("field \"UberProductId\" of the UberRequestData class"), fieldGeneratorPickupLocation("field \"PickupLocation\" of the UberRequestData class", ignore_extras), fieldGeneratorDropoffLocation("field \"DropoffLocation\" of the UberRequestData class", ignore_extras), fieldGeneratorSurgeConfirmationId("field \"SurgeConfirmationId\" of the UberRequestData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUberProductId.reset();
            fieldGeneratorPickupLocation.reset();
            fieldGeneratorDropoffLocation.reset();
            fieldGeneratorSurgeConfirmationId.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTDATAJSON_H */
