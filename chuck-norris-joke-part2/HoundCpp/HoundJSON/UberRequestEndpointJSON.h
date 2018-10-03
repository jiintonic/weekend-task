/* file "UberRequestEndpointJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTENDPOINTJSON_H
#define UBERREQUESTENDPOINTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestEndpointJSON : public ReferenceCounted
  {
  private:
    bool flagHaslatitude;
    double storelatitude;
    std::string textStorelatitude;
    bool flagHaslongitude;
    double storelongitude;
    std::string textStorelongitude;
    bool flagHaseta;
    OInteger storeeta;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestEndpointJSON(const UberRequestEndpointJSON &);
    UberRequestEndpointJSON & operator=(const UberRequestEndpointJSON &other);

    void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONeta(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestEndpointJSON(void);
    virtual ~UberRequestEndpointJSON(void);
    bool  haslatitude(void) const;
    double  getlatitude(void);
    const double  getlatitude(void) const;
    std::string  getlatitudeAsText(void) const;
    bool  haslongitude(void) const;
    double  getlongitude(void);
    const double  getlongitude(void) const;
    std::string  getlongitudeAsText(void) const;
    bool  haseta(void) const;
    OInteger  geteta(void);
    const OInteger  geteta(void) const;

    virtual size_t extraUberRequestEndpointComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestEndpointComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestEndpointComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestEndpointComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestEndpointLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestEndpointLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
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
            throw("The text value for field latitude of UberRequestEndpointJSON is not a valid number.");
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
            throw("The text value for field longitude of UberRequestEndpointJSON is not a valid number.");
        textStorelongitude = new_value;
      }
    void unsetlongitude(void)
      {
        flagHaslongitude = false;
      }
    void seteta(OInteger new_value)
      {
        flagHaseta = true;
        if (new_value < 0)
            throw("The value for field eta of UberRequestEndpointJSON is less than the lower bound (0) for that field.");
        storeeta = new_value;
      }
    void unseteta(void)
      {
        flagHaseta = false;
      }

    virtual void extraUberRequestEndpointAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestEndpointSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestEndpointLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestEndpointAppendPair(key, new_component);
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
        if (flagHaseta)
          {
            handler->start_pair("eta");
            handler->number_value(storeeta.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
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

    static UberRequestEndpointJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestEndpointJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestEndpointJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEndpointJSON>, UberRequestEndpointJSON *, bool> generator("Type UberRequestEndpoint", ignore_extras);
            parse_json_value(text, "Text for UberRequestEndpointJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestEndpointJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestEndpointJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestEndpointJSON>, UberRequestEndpointJSON *, bool> generator("Type UberRequestEndpoint", ignore_extras);
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
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlatitude;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorlongitude;
        static char lowerBoundeta[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundeta>, OInteger, o_integer > fieldGeneratoreta;
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
            UberRequestEndpointJSON *result = new UberRequestEndpointJSON();
            assert(result != NULL);
            RCHandle<UberRequestEndpointJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestEndpointAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestEndpointJSON *result)
          {
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
            if (fieldGeneratoreta.have_value)
              {
                result->seteta(fieldGeneratoreta.value);
                fieldGeneratoreta.have_value = false;
              }
          }
        virtual void handle_result(UberRequestEndpointJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'e':
                    if (strcmp(&(field_name[1]), "ta") == 0)
                        return &fieldGeneratoreta;
                    break;
                case 'l':
                    switch ((unsigned char)(field_name[1]))
                      {
                        case 'a':
                            if (strcmp(&(field_name[2]), "titude") == 0)
                                return &fieldGeneratorlatitude;
                            break;
                        case 'o':
                            if (strcmp(&(field_name[2]), "ngitude") == 0)
                                return &fieldGeneratorlongitude;
                            break;
                        default:
                            break;
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorlatitude("field \"latitude\" of the UberRequestEndpoint class"), fieldGeneratorlongitude("field \"longitude\" of the UberRequestEndpoint class"), fieldGeneratoreta("field \"eta\" of the UberRequestEndpoint class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestEndpoint class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorlatitude.reset();
            fieldGeneratorlongitude.reset();
            fieldGeneratoreta.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTENDPOINTJSON_H */
