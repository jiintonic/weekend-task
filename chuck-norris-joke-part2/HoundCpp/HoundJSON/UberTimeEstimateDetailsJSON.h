/* file "UberTimeEstimateDetailsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UBERTIMEESTIMATEDETAILSJSON_H
#define UBERTIMEESTIMATEDETAILSJSON_H

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


class UberTimeEstimateDetailsJSON : public ReferenceCounted
  {
  private:
    bool flagHasproduct_id;
    std::string storeproduct_id;
    bool flagHasdisplay_name;
    std::string storedisplay_name;
    bool flagHasestimate;
    double storeestimate;
    std::string textStoreestimate;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UberTimeEstimateDetailsJSON(const UberTimeEstimateDetailsJSON &);
    UberTimeEstimateDetailsJSON & operator=(const UberTimeEstimateDetailsJSON &other);

    void  fromJSONproduct_id(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONdisplay_name(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONestimate(JSONValue *json_value, bool ignore_extras = false);


  public:
    UberTimeEstimateDetailsJSON(void);
    virtual ~UberTimeEstimateDetailsJSON(void);
    bool  hasproduct_id(void) const;
    std::string  getproduct_id(void);
    const std::string  getproduct_id(void) const;
    bool  hasdisplay_name(void) const;
    std::string  getdisplay_name(void);
    const std::string  getdisplay_name(void) const;
    bool  hasestimate(void) const;
    double  getestimate(void);
    const double  getestimate(void) const;
    std::string  getestimateAsText(void) const;

    virtual size_t extraUberTimeEstimateDetailsComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUberTimeEstimateDetailsComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUberTimeEstimateDetailsComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUberTimeEstimateDetailsComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUberTimeEstimateDetailsLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUberTimeEstimateDetailsLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setproduct_id(std::string new_value)
      {
        flagHasproduct_id = true;
        storeproduct_id = new_value;
      }
    void unsetproduct_id(void)
      {
        flagHasproduct_id = false;
      }
    void setdisplay_name(std::string new_value)
      {
        flagHasdisplay_name = true;
        storedisplay_name = new_value;
      }
    void unsetdisplay_name(void)
      {
        flagHasdisplay_name = false;
      }
    void setestimate(double new_value)
      {
        flagHasestimate = true;
        storeestimate = new_value;
        textStoreestimate = "";
      }
    void setestimateText(std::string new_value)
      {
        flagHasestimate = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field estimate of UberTimeEstimateDetailsJSON is not a valid number.");
        textStoreestimate = new_value;
      }
    void unsetestimate(void)
      {
        flagHasestimate = false;
      }

    virtual void extraUberTimeEstimateDetailsAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUberTimeEstimateDetailsSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUberTimeEstimateDetailsLookup(key);
        if (old_field == NULL)
          {
            extraUberTimeEstimateDetailsAppendPair(key, new_component);
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
        assert(flagHasproduct_id);
        handler->start_pair("product_id");
        handler->string_value(storeproduct_id);
        assert(flagHasdisplay_name);
        handler->start_pair("display_name");
        handler->string_value(storedisplay_name);
        assert(flagHasestimate);
        handler->start_pair("estimate");
        if (textStoreestimate != "")
            handler->number_value(textStoreestimate.c_str());
        else if (((double)(long int)storeestimate) == storeestimate)
            handler->number_value((long int)storeestimate);
        else
            handler->number_value(storeestimate);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasproduct_id()))
          {
            return "When parsing the object for %what%, the \"product_id\" field was missing.";
          }
        if (!(hasdisplay_name()))
          {
            return "When parsing the object for %what%, the \"display_name\" field was missing.";
          }
        if (!(hasestimate()))
          {
            return "When parsing the object for %what%, the \"estimate\" field was missing.";
          }
        return NULL;
      }

    static UberTimeEstimateDetailsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UberTimeEstimateDetailsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UberTimeEstimateDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimateDetailsJSON>, UberTimeEstimateDetailsJSON *, bool> generator("Type UberTimeEstimateDetails", ignore_extras);
            parse_json_value(text, "Text for UberTimeEstimateDetailsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UberTimeEstimateDetailsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UberTimeEstimateDetailsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UberTimeEstimateDetailsJSON>, UberTimeEstimateDetailsJSON *, bool> generator("Type UberTimeEstimateDetails", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorproduct_id;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratordisplay_name;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorestimate;
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
            UberTimeEstimateDetailsJSON *result = new UberTimeEstimateDetailsJSON();
            assert(result != NULL);
            RCHandle<UberTimeEstimateDetailsJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUberTimeEstimateDetailsAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UberTimeEstimateDetailsJSON *result)
          {
            if (fieldGeneratorproduct_id.have_value)
              {
                result->setproduct_id(fieldGeneratorproduct_id.value);
                fieldGeneratorproduct_id.have_value = false;
              }
            else if (!(result->hasproduct_id()))
              {
                error("When parsing the object for %what%, the \"product_id\" field was missing.");
              }
            if (fieldGeneratordisplay_name.have_value)
              {
                result->setdisplay_name(fieldGeneratordisplay_name.value);
                fieldGeneratordisplay_name.have_value = false;
              }
            else if (!(result->hasdisplay_name()))
              {
                error("When parsing the object for %what%, the \"display_name\" field was missing.");
              }
            if (fieldGeneratorestimate.have_value)
              {
                result->setestimateText(fieldGeneratorestimate.value);
                fieldGeneratorestimate.have_value = false;
              }
            else if (!(result->hasestimate()))
              {
                error("When parsing the object for %what%, the \"estimate\" field was missing.");
              }
          }
        virtual void handle_result(UberTimeEstimateDetailsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'd':
                    if (strcmp(&(field_name[1]), "isplay_name") == 0)
                        return &fieldGeneratordisplay_name;
                    break;
                case 'e':
                    if (strcmp(&(field_name[1]), "stimate") == 0)
                        return &fieldGeneratorestimate;
                    break;
                case 'p':
                    if (strcmp(&(field_name[1]), "roduct_id") == 0)
                        return &fieldGeneratorproduct_id;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorproduct_id("field \"product_id\" of the UberTimeEstimateDetails class"), fieldGeneratordisplay_name("field \"display_name\" of the UberTimeEstimateDetails class"), fieldGeneratorestimate("field \"estimate\" of the UberTimeEstimateDetails class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UberTimeEstimateDetails class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorproduct_id.reset();
            fieldGeneratordisplay_name.reset();
            fieldGeneratorestimate.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UBERTIMEESTIMATEDETAILSJSON_H */
