/* file "FlightStatsEquipmentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef FLIGHTSTATSEQUIPMENTJSON_H
#define FLIGHTSTATSEQUIPMENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
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


class FlightStatsEquipmentJSON : public ReferenceCounted
  {
  private:
    bool flagHasiata;
    std::string storeiata;
    bool flagHasname;
    std::string storename;
    bool flagHasturboProp;
    bool storeturboProp;
    bool flagHasjet;
    bool storejet;
    bool flagHaswidebody;
    bool storewidebody;
    bool flagHasregional;
    bool storeregional;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    FlightStatsEquipmentJSON(const FlightStatsEquipmentJSON &);
    FlightStatsEquipmentJSON & operator=(const FlightStatsEquipmentJSON &other);

    void  fromJSONiata(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONname(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONturboProp(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONjet(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONwidebody(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONregional(JSONValue *json_value, bool ignore_extras = false);


  public:
    FlightStatsEquipmentJSON(void);
    virtual ~FlightStatsEquipmentJSON(void);
    bool  hasiata(void) const;
    std::string  getiata(void);
    const std::string  getiata(void) const;
    bool  hasname(void) const;
    std::string  getname(void);
    const std::string  getname(void) const;
    bool  hasturboProp(void) const;
    bool  getturboProp(void);
    const bool  getturboProp(void) const;
    bool  hasjet(void) const;
    bool  getjet(void);
    const bool  getjet(void) const;
    bool  haswidebody(void) const;
    bool  getwidebody(void);
    const bool  getwidebody(void) const;
    bool  hasregional(void) const;
    bool  getregional(void);
    const bool  getregional(void) const;

    virtual size_t extraFlightStatsEquipmentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraFlightStatsEquipmentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraFlightStatsEquipmentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraFlightStatsEquipmentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraFlightStatsEquipmentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraFlightStatsEquipmentLookup(const char *field_name) const
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
    void setname(std::string new_value)
      {
        flagHasname = true;
        storename = new_value;
      }
    void unsetname(void)
      {
        flagHasname = false;
      }
    void setturboProp(bool new_value)
      {
        flagHasturboProp = true;
        storeturboProp = new_value;
      }
    void unsetturboProp(void)
      {
        flagHasturboProp = false;
      }
    void setjet(bool new_value)
      {
        flagHasjet = true;
        storejet = new_value;
      }
    void unsetjet(void)
      {
        flagHasjet = false;
      }
    void setwidebody(bool new_value)
      {
        flagHaswidebody = true;
        storewidebody = new_value;
      }
    void unsetwidebody(void)
      {
        flagHaswidebody = false;
      }
    void setregional(bool new_value)
      {
        flagHasregional = true;
        storeregional = new_value;
      }
    void unsetregional(void)
      {
        flagHasregional = false;
      }

    virtual void extraFlightStatsEquipmentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraFlightStatsEquipmentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraFlightStatsEquipmentLookup(key);
        if (old_field == NULL)
          {
            extraFlightStatsEquipmentAppendPair(key, new_component);
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
        assert(flagHasiata);
        handler->start_pair("iata");
        handler->string_value(storeiata);
        assert(flagHasname);
        handler->start_pair("name");
        handler->string_value(storename);
        assert(flagHasturboProp);
        handler->start_pair("turboProp");
        handler->boolean_value(storeturboProp);
        assert(flagHasjet);
        handler->start_pair("jet");
        handler->boolean_value(storejet);
        assert(flagHaswidebody);
        handler->start_pair("widebody");
        handler->boolean_value(storewidebody);
        assert(flagHasregional);
        handler->start_pair("regional");
        handler->boolean_value(storeregional);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasiata()))
          {
            return "When parsing the object for %what%, the \"iata\" field was missing.";
          }
        if (!(hasname()))
          {
            return "When parsing the object for %what%, the \"name\" field was missing.";
          }
        if (!(hasturboProp()))
          {
            return "When parsing the object for %what%, the \"turboProp\" field was missing.";
          }
        if (!(hasjet()))
          {
            return "When parsing the object for %what%, the \"jet\" field was missing.";
          }
        if (!(haswidebody()))
          {
            return "When parsing the object for %what%, the \"widebody\" field was missing.";
          }
        if (!(hasregional()))
          {
            return "When parsing the object for %what%, the \"regional\" field was missing.";
          }
        return NULL;
      }

    static FlightStatsEquipmentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static FlightStatsEquipmentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        FlightStatsEquipmentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsEquipmentJSON>, FlightStatsEquipmentJSON *, bool> generator("Type FlightStatsEquipment", ignore_extras);
            parse_json_value(text, "Text for FlightStatsEquipmentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static FlightStatsEquipmentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        FlightStatsEquipmentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<FlightStatsEquipmentJSON>, FlightStatsEquipmentJSON *, bool> generator("Type FlightStatsEquipment", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorname;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorturboProp;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorjet;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorwidebody;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorregional;
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
            FlightStatsEquipmentJSON *result = new FlightStatsEquipmentJSON();
            assert(result != NULL);
            RCHandle<FlightStatsEquipmentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraFlightStatsEquipmentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(FlightStatsEquipmentJSON *result)
          {
            if (fieldGeneratoriata.have_value)
              {
                result->setiata(fieldGeneratoriata.value);
                fieldGeneratoriata.have_value = false;
              }
            else if (!(result->hasiata()))
              {
                error("When parsing the object for %what%, the \"iata\" field was missing.");
              }
            if (fieldGeneratorname.have_value)
              {
                result->setname(fieldGeneratorname.value);
                fieldGeneratorname.have_value = false;
              }
            else if (!(result->hasname()))
              {
                error("When parsing the object for %what%, the \"name\" field was missing.");
              }
            if (fieldGeneratorturboProp.have_value)
              {
                result->setturboProp(fieldGeneratorturboProp.value);
                fieldGeneratorturboProp.have_value = false;
              }
            else if (!(result->hasturboProp()))
              {
                error("When parsing the object for %what%, the \"turboProp\" field was missing.");
              }
            if (fieldGeneratorjet.have_value)
              {
                result->setjet(fieldGeneratorjet.value);
                fieldGeneratorjet.have_value = false;
              }
            else if (!(result->hasjet()))
              {
                error("When parsing the object for %what%, the \"jet\" field was missing.");
              }
            if (fieldGeneratorwidebody.have_value)
              {
                result->setwidebody(fieldGeneratorwidebody.value);
                fieldGeneratorwidebody.have_value = false;
              }
            else if (!(result->haswidebody()))
              {
                error("When parsing the object for %what%, the \"widebody\" field was missing.");
              }
            if (fieldGeneratorregional.have_value)
              {
                result->setregional(fieldGeneratorregional.value);
                fieldGeneratorregional.have_value = false;
              }
            else if (!(result->hasregional()))
              {
                error("When parsing the object for %what%, the \"regional\" field was missing.");
              }
          }
        virtual void handle_result(FlightStatsEquipmentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'i':
                    if (strcmp(&(field_name[1]), "ata") == 0)
                        return &fieldGeneratoriata;
                    break;
                case 'j':
                    if (strcmp(&(field_name[1]), "et") == 0)
                        return &fieldGeneratorjet;
                    break;
                case 'n':
                    if (strcmp(&(field_name[1]), "ame") == 0)
                        return &fieldGeneratorname;
                    break;
                case 'r':
                    if (strcmp(&(field_name[1]), "egional") == 0)
                        return &fieldGeneratorregional;
                    break;
                case 't':
                    if (strcmp(&(field_name[1]), "urboProp") == 0)
                        return &fieldGeneratorturboProp;
                    break;
                case 'w':
                    if (strcmp(&(field_name[1]), "idebody") == 0)
                        return &fieldGeneratorwidebody;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratoriata("field \"iata\" of the FlightStatsEquipment class"), fieldGeneratorname("field \"name\" of the FlightStatsEquipment class"), fieldGeneratorturboProp("field \"turboProp\" of the FlightStatsEquipment class"), fieldGeneratorjet("field \"jet\" of the FlightStatsEquipment class"), fieldGeneratorwidebody("field \"widebody\" of the FlightStatsEquipment class"), fieldGeneratorregional("field \"regional\" of the FlightStatsEquipment class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the FlightStatsEquipment class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratoriata.reset();
            fieldGeneratorname.reset();
            fieldGeneratorturboProp.reset();
            fieldGeneratorjet.reset();
            fieldGeneratorwidebody.reset();
            fieldGeneratorregional.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* FLIGHTSTATSEQUIPMENTJSON_H */
