/* file "UberRequestEstimateTripJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTESTIMATETRIPJSON_H
#define UBERREQUESTESTIMATETRIPJSON_H

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


class UberRequestEstimateTripJSON : public ReferenceCounted
  {
  private:
    bool flagHasdistance_estimate;
    double storedistance_estimate;
    std::string textStoredistance_estimate;
    bool flagHasdistance_unit;
    std::string storedistance_unit;
    bool flagHasduration_estimate;
    double storeduration_estimate;
    std::string textStoreduration_estimate;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestEstimateTripJSON(const UberRequestEstimateTripJSON &);
    UberRequestEstimateTripJSON & operator=(const UberRequestEstimateTripJSON &other);

    void  fromJSONdistance_estimate(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdistance_unit(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONduration_estimate(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestEstimateTripJSON(void);
    virtual ~UberRequestEstimateTripJSON(void);
    bool  hasdistance_estimate(void) const;
    double  getdistance_estimate(void);
    const double  getdistance_estimate(void) const;
    std::string  getdistance_estimateAsText(void) const;
    bool  hasdistance_unit(void) const;
    std::string  getdistance_unit(void);
    const std::string  getdistance_unit(void) const;
    bool  hasduration_estimate(void) const;
    double  getduration_estimate(void);
    const double  getduration_estimate(void) const;
    std::string  getduration_estimateAsText(void) const;

    virtual size_t extraUberRequestEstimateTripComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestEstimateTripComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestEstimateTripComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestEstimateTripComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestEstimateTripLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestEstimateTripLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setdistance_estimate(double new_value)
      {
        flagHasdistance_estimate = true;
        storedistance_estimate = new_value;
        textStoredistance_estimate = "";
      }
    void setdistance_estimateText(std::string new_value)
      {
        flagHasdistance_estimate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field distance_estimate of UberRequestEstimateTripJSON is not a valid number.");
        textStoredistance_estimate = new_value;
      }
    void unsetdistance_estimate(void)
      {
        flagHasdistance_estimate = false;
      }
    void setdistance_unit(std::string new_value)
      {
        flagHasdistance_unit = true;
        storedistance_unit = new_value;
      }
    void unsetdistance_unit(void)
      {
        flagHasdistance_unit = false;
      }
    void setduration_estimate(double new_value)
      {
        flagHasduration_estimate = true;
        storeduration_estimate = new_value;
        textStoreduration_estimate = "";
      }
    void setduration_estimateText(std::string new_value)
      {
        flagHasduration_estimate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field duration_estimate of UberRequestEstimateTripJSON is not a valid number.");
        textStoreduration_estimate = new_value;
      }
    void unsetduration_estimate(void)
      {
        flagHasduration_estimate = false;
      }

    virtual void extraUberRequestEstimateTripAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestEstimateTripSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestEstimateTripLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestEstimateTripAppendPair(key, new_component);
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
        assert(flagHasdistance_estimate);
        handler->start_pair("distance_estimate");
        if (((double)(long int)storedistance_estimate) == storedistance_estimate)
            handler->number_value((long int)storedistance_estimate);
        else
            handler->number_value(storedistance_estimate);
        assert(flagHasdistance_unit);
        handler->start_pair("distance_unit");
        handler->string_value(storedistance_unit);
        assert(flagHasduration_estimate);
        handler->start_pair("duration_estimate");
        if (((double)(long int)storeduration_estimate) == storeduration_estimate)
            handler->number_value((long int)storeduration_estimate);
        else
            handler->number_value(storeduration_estimate);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasdistance_estimate()))
          {
            return "When parsing the object for %what%, the \"distance_estimate\" field was missing.";
          }
        if (!(hasdistance_unit()))
          {
            return "When parsing the object for %what%, the \"distance_unit\" field was missing.";
          }
        if (!(hasduration_estimate()))
          {
            return "When parsing the object for %what%, the \"duration_estimate\" field was missing.";
          }
        return NULL;
      }

    static UberRequestEstimateTripJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestEstimateTripJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestEstimateTripJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimateTripJSON>, UberRequestEstimateTripJSON *, bool> generator("Type UberRequestEstimateTrip", ignore_extras);
            parse_json_value(text, "Text for UberRequestEstimateTripJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestEstimateTripJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestEstimateTripJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEstimateTripJSON>, UberRequestEstimateTripJSON *, bool> generator("Type UberRequestEstimateTrip", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratordistance_estimate;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordistance_unit;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorduration_estimate;
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
            UberRequestEstimateTripJSON *result = new UberRequestEstimateTripJSON();
            assert(result != NULL);
            RCHandle<UberRequestEstimateTripJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestEstimateTripAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestEstimateTripJSON *result)
          {
            if (fieldGeneratordistance_estimate.have_value)
              {
                result->setdistance_estimateText(fieldGeneratordistance_estimate.value);
                fieldGeneratordistance_estimate.have_value = false;
              }
            else if (!(result->hasdistance_estimate()))
              {
                error("When parsing the object for %what%, the \"distance_estimate\" field was missing.");
              }
            if (fieldGeneratordistance_unit.have_value)
              {
                result->setdistance_unit(fieldGeneratordistance_unit.value);
                fieldGeneratordistance_unit.have_value = false;
              }
            else if (!(result->hasdistance_unit()))
              {
                error("When parsing the object for %what%, the \"distance_unit\" field was missing.");
              }
            if (fieldGeneratorduration_estimate.have_value)
              {
                result->setduration_estimateText(fieldGeneratorduration_estimate.value);
                fieldGeneratorduration_estimate.have_value = false;
              }
            else if (!(result->hasduration_estimate()))
              {
                error("When parsing the object for %what%, the \"duration_estimate\" field was missing.");
              }
          }
        virtual void handle_result(UberRequestEstimateTripJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "d", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'i':
                        if (strncmp(&(field_name[2]), "stance_", 7) == 0)
                          {
                            switch ((unsigned char)(field_name[9]))
                              {
                                case 'e':
                                    if (strcmp(&(field_name[10]), "stimate") == 0)
                                        return &fieldGeneratordistance_estimate;
                                    break;
                                case 'u':
                                    if (strcmp(&(field_name[10]), "nit") == 0)
                                        return &fieldGeneratordistance_unit;
                                    break;
                                default:
                                    break;
                              }
                          }
                        break;
                    case 'u':
                        if (strcmp(&(field_name[2]), "ration_estimate") == 0)
                            return &fieldGeneratorduration_estimate;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratordistance_estimate("field \"distance_estimate\" of the UberRequestEstimateTrip class"), fieldGeneratordistance_unit("field \"distance_unit\" of the UberRequestEstimateTrip class"), fieldGeneratorduration_estimate("field \"duration_estimate\" of the UberRequestEstimateTrip class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestEstimateTrip class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratordistance_estimate.reset();
            fieldGeneratordistance_unit.reset();
            fieldGeneratorduration_estimate.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTESTIMATETRIPJSON_H */
