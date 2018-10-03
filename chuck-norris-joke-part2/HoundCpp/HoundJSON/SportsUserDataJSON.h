/* file "SportsUserDataJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSUSERDATAJSON_H
#define SPORTSUSERDATAJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "DateAndOrTimeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsUserDataJSON : public ReferenceCounted
  {
  private:
    bool flagHasNow;
    DateAndOrTimeJSON * storeNow;
    bool flagHasLatitude;
    double storeLatitude;
    std::string textStoreLatitude;
    bool flagHasLongitude;
    double storeLongitude;
    std::string textStoreLongitude;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsUserDataJSON(const SportsUserDataJSON &);
    SportsUserDataJSON & operator=(const SportsUserDataJSON &other);

    void  fromJSONNow(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLatitude(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLongitude(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsUserDataJSON(void);
    virtual ~SportsUserDataJSON(void);
    bool  hasNow(void) const;
    DateAndOrTimeJSON *  getNow(void);
    const DateAndOrTimeJSON *  getNow(void) const;
    bool  hasLatitude(void) const;
    double  getLatitude(void);
    const double  getLatitude(void) const;
    std::string  getLatitudeAsText(void) const;
    bool  hasLongitude(void) const;
    double  getLongitude(void);
    const double  getLongitude(void) const;
    std::string  getLongitudeAsText(void) const;

    virtual size_t extraSportsUserDataComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsUserDataComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsUserDataComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsUserDataComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsUserDataLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsUserDataLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setNow(DateAndOrTimeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNow)
          {
            storeNow->remove_reference();
          }
        flagHasNow = true;
        storeNow = new_value;
      }
    void unsetNow(void)
      {
        if (flagHasNow)
          {
            storeNow->remove_reference();
          }
        flagHasNow = false;
      }
    void setLatitude(double new_value)
      {
        flagHasLatitude = true;
        if (new_value < -90)
            throw("The value for field Latitude of SportsUserDataJSON is less than the lower bound (-90) for that field.");
        if (new_value > 90)
            throw("The value for field Latitude of SportsUserDataJSON is greater than the upper bound (90) for that field.");
        storeLatitude = new_value;
        textStoreLatitude = "";
      }
    void setLatitudeText(std::string new_value)
      {
        flagHasLatitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Latitude of SportsUserDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "90", "", false, "2") < 0)
            throw("The value for field Latitude of SportsUserDataJSON is less than the lower bound (-90) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "90", "", false, "2") > 0)
            throw("The value for field Latitude of SportsUserDataJSON is greater than the upper bound (90) for that field.");
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
            throw("The value for field Longitude of SportsUserDataJSON is less than the lower bound (-180) for that field.");
        if (new_value > 180)
            throw("The value for field Longitude of SportsUserDataJSON is greater than the upper bound (180) for that field.");
        storeLongitude = new_value;
        textStoreLongitude = "";
      }
    void setLongitudeText(std::string new_value)
      {
        flagHasLongitude = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field Longitude of SportsUserDataJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), true, "180", "", false, "3") < 0)
            throw("The value for field Longitude of SportsUserDataJSON is less than the lower bound (-180) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "180", "", false, "3") > 0)
            throw("The value for field Longitude of SportsUserDataJSON is greater than the upper bound (180) for that field.");
        textStoreLongitude = new_value;
      }
    void unsetLongitude(void)
      {
        flagHasLongitude = false;
      }

    virtual void extraSportsUserDataAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsUserDataSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsUserDataLookup(key);
        if (old_field == NULL)
          {
            extraSportsUserDataAppendPair(key, new_component);
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
        assert(flagHasNow);
        handler->start_pair("Now");
        storeNow->write_as_json(handler);
        if (flagHasLatitude)
          {
            handler->start_pair("Latitude");
            if (textStoreLatitude != "")
                handler->number_value(textStoreLatitude.c_str());
            else if (((double)(long int)storeLatitude) == storeLatitude)
                handler->number_value((long int)storeLatitude);
            else
                handler->number_value(storeLatitude);
          }
        if (flagHasLongitude)
          {
            handler->start_pair("Longitude");
            if (textStoreLongitude != "")
                handler->number_value(textStoreLongitude.c_str());
            else if (((double)(long int)storeLongitude) == storeLongitude)
                handler->number_value((long int)storeLongitude);
            else
                handler->number_value(storeLongitude);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNow()))
          {
            return "When parsing the object for %what%, the \"Now\" field was missing.";
          }
        return NULL;
      }

    static SportsUserDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsUserDataJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsUserDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsUserDataJSON>, SportsUserDataJSON *, bool> generator("Type SportsUserData", ignore_extras);
            parse_json_value(text, "Text for SportsUserDataJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsUserDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsUserDataJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsUserDataJSON>, SportsUserDataJSON *, bool> generator("Type SportsUserData", ignore_extras);
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
        JSONHoldingGenerator<DateAndOrTimeJSON::Generator, RCHandle<DateAndOrTimeJSON>, DateAndOrTimeJSON *, bool > fieldGeneratorNow;
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
            SportsUserDataJSON *result = new SportsUserDataJSON();
            assert(result != NULL);
            RCHandle<SportsUserDataJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsUserDataAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsUserDataJSON *result)
          {
            if (fieldGeneratorNow.have_value)
              {
                result->setNow(fieldGeneratorNow.value.referenced());
                fieldGeneratorNow.have_value = false;
              }
            else if (!(result->hasNow()))
              {
                error("When parsing the object for %what%, the \"Now\" field was missing.");
              }
            if (fieldGeneratorLatitude.have_value)
              {
                result->setLatitudeText(fieldGeneratorLatitude.value);
                fieldGeneratorLatitude.have_value = false;
              }
            if (fieldGeneratorLongitude.have_value)
              {
                result->setLongitudeText(fieldGeneratorLongitude.value);
                fieldGeneratorLongitude.have_value = false;
              }
          }
        virtual void handle_result(SportsUserDataJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
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
                case 'N':
                    if (strcmp(&(field_name[1]), "ow") == 0)
                        return &fieldGeneratorNow;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorNow("field \"Now\" of the SportsUserData class", ignore_extras), fieldGeneratorLatitude("field \"Latitude\" of the SportsUserData class"), fieldGeneratorLongitude("field \"Longitude\" of the SportsUserData class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsUserData class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNow.reset();
            fieldGeneratorLatitude.reset();
            fieldGeneratorLongitude.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSUSERDATAJSON_H */
