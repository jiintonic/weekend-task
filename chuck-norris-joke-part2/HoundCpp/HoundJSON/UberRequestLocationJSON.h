/* file "UberRequestLocationJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERREQUESTLOCATIONJSON_H
#define UBERREQUESTLOCATIONJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UberRequestLocationJSON : public ReferenceCounted
  {
  private:
    bool flagHaslatitude;
    double storelatitude;
    std::string textStorelatitude;
    bool flagHaslongitude;
    double storelongitude;
    std::string textStorelongitude;
    bool flagHasbearing;
    OInteger storebearing;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberRequestLocationJSON(const UberRequestLocationJSON &);
    UberRequestLocationJSON & operator=(const UberRequestLocationJSON &other);

    void  fromJSONlatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONlongitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONbearing(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberRequestLocationJSON(void);
    virtual ~UberRequestLocationJSON(void);
    bool  haslatitude(void) const;
    double  getlatitude(void);
    const double  getlatitude(void) const;
    std::string  getlatitudeAsText(void) const;
    bool  haslongitude(void) const;
    double  getlongitude(void);
    const double  getlongitude(void) const;
    std::string  getlongitudeAsText(void) const;
    bool  hasbearing(void) const;
    OInteger  getbearing(void);
    const OInteger  getbearing(void) const;

    virtual size_t extraUberRequestLocationComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberRequestLocationComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberRequestLocationComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberRequestLocationComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberRequestLocationLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberRequestLocationLookup(const char *field_name) const
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
            throw("The text value for field latitude of UberRequestLocationJSON is not a valid number.");
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
            throw("The text value for field longitude of UberRequestLocationJSON is not a valid number.");
        textStorelongitude = new_value;
      }
    void unsetlongitude(void)
      {
        flagHaslongitude = false;
      }
    void setbearing(OInteger new_value)
      {
        flagHasbearing = true;
        storebearing = new_value;
      }
    void unsetbearing(void)
      {
        flagHasbearing = false;
      }

    virtual void extraUberRequestLocationAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberRequestLocationSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberRequestLocationLookup(key);
        if (old_field == NULL)
          {
            extraUberRequestLocationAppendPair(key, new_component);
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
        assert(flagHasbearing);
        handler->start_pair("bearing");
        handler->number_value(storebearing.get_o_integer());
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
        if (!(hasbearing()))
          {
            return "When parsing the object for %what%, the \"bearing\" field was missing.";
          }
        return NULL;
      }

    static UberRequestLocationJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberRequestLocationJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberRequestLocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestLocationJSON>, UberRequestLocationJSON *, bool> generator("Type UberRequestLocation", ignore_extras);
            parse_json_value(text, "Text for UberRequestLocationJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberRequestLocationJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberRequestLocationJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberRequestLocationJSON>, UberRequestLocationJSON *, bool> generator("Type UberRequestLocation", ignore_extras);
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
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorbearing;
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
            UberRequestLocationJSON *result = new UberRequestLocationJSON();
            assert(result != NULL);
            RCHandle<UberRequestLocationJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberRequestLocationAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberRequestLocationJSON *result)
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
            if (fieldGeneratorbearing.have_value)
              {
                result->setbearing(fieldGeneratorbearing.value);
                fieldGeneratorbearing.have_value = false;
              }
            else if (!(result->hasbearing()))
              {
                error("When parsing the object for %what%, the \"bearing\" field was missing.");
              }
          }
        virtual void handle_result(UberRequestLocationJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'b':
                    if (strcmp(&(field_name[1]), "earing") == 0)
                        return &fieldGeneratorbearing;
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
        Generator(bool ignore_extras = false) : fieldGeneratorlatitude("field \"latitude\" of the UberRequestLocation class"), fieldGeneratorlongitude("field \"longitude\" of the UberRequestLocation class"), fieldGeneratorbearing("field \"bearing\" of the UberRequestLocation class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberRequestLocation class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorlatitude.reset();
            fieldGeneratorlongitude.reset();
            fieldGeneratorbearing.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERREQUESTLOCATIONJSON_H */
