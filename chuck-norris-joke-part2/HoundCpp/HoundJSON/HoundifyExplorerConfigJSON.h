/* file "HoundifyExplorerConfigJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef HOUNDIFYEXPLORERCONFIGJSON_H
#define HOUNDIFYEXPLORERCONFIGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "HoundifyExplorerProfileJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class HoundifyExplorerConfigJSON : public ReferenceCounted
  {
  private:
    bool flagHasProfiles;
    std::vector< HoundifyExplorerProfileJSON * > storeProfiles;
    bool flagHasDefaultProfile;
    std::string storeDefaultProfile;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    HoundifyExplorerConfigJSON(const HoundifyExplorerConfigJSON &);
    HoundifyExplorerConfigJSON & operator=(const HoundifyExplorerConfigJSON &other);

    void  fromJSONProfiles(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONDefaultProfile(JSONValue *json_value, bool ignore_extras = false);


  public:
    HoundifyExplorerConfigJSON(void);
    virtual ~HoundifyExplorerConfigJSON(void);
    bool  hasProfiles(void) const;
    size_t  countOfProfiles(void) const;
    HoundifyExplorerProfileJSON *  elementOfProfiles(size_t element_num);
    const HoundifyExplorerProfileJSON *  elementOfProfiles(size_t element_num) const;
    std::vector< HoundifyExplorerProfileJSON * >  getProfiles(void);
    const std::vector< HoundifyExplorerProfileJSON * >  getProfiles(void) const;
    bool  hasDefaultProfile(void) const;
    std::string  getDefaultProfile(void);
    const std::string  getDefaultProfile(void) const;

    virtual size_t extraHoundifyExplorerConfigComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraHoundifyExplorerConfigComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraHoundifyExplorerConfigComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraHoundifyExplorerConfigComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraHoundifyExplorerConfigLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraHoundifyExplorerConfigLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void initProfiles(void)
      {
        if (flagHasProfiles)
          {
            for (size_t num2 = 0; num2 < storeProfiles.size(); ++num2)
              {
                storeProfiles[num2]->remove_reference();
              }
          }
        flagHasProfiles = true;
        storeProfiles.clear();
      }
    void appendProfiles(HoundifyExplorerProfileJSON * to_append)
      {
        if (!flagHasProfiles)
          {
            flagHasProfiles = true;
            storeProfiles.clear();
          }
        assert(flagHasProfiles);
        to_append->add_reference();
        storeProfiles.push_back(to_append);
      }
    void unsetProfiles(void)
      {
        if (flagHasProfiles)
          {
            for (size_t num3 = 0; num3 < storeProfiles.size(); ++num3)
              {
                storeProfiles[num3]->remove_reference();
              }
          }
        flagHasProfiles = false;
        storeProfiles.clear();
      }
    void setDefaultProfile(std::string new_value)
      {
        flagHasDefaultProfile = true;
        storeDefaultProfile = new_value;
      }
    void unsetDefaultProfile(void)
      {
        flagHasDefaultProfile = false;
      }

    virtual void extraHoundifyExplorerConfigAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraHoundifyExplorerConfigSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraHoundifyExplorerConfigLookup(key);
        if (old_field == NULL)
          {
            extraHoundifyExplorerConfigAppendPair(key, new_component);
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
        assert(flagHasProfiles);
        handler->start_pair("Profiles");
        assert(storeProfiles.size() >= 1);
        handler->start_array();
        for (size_t num1 = 0; num1 < storeProfiles.size(); ++num1)
          {
            storeProfiles[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasDefaultProfile);
        handler->start_pair("DefaultProfile");
        handler->string_value(storeDefaultProfile);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasProfiles()))
          {
            return "When parsing the object for %what%, the \"Profiles\" field was missing.";
          }
        if (!(hasDefaultProfile()))
          {
            return "When parsing the object for %what%, the \"DefaultProfile\" field was missing.";
          }
        return NULL;
      }

    static HoundifyExplorerConfigJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static HoundifyExplorerConfigJSON *from_text(const char *text, bool ignore_extras = false)
      {
        HoundifyExplorerConfigJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerConfigJSON>, HoundifyExplorerConfigJSON *, bool> generator("Type HoundifyExplorerConfig", ignore_extras);
            parse_json_value(text, "Text for HoundifyExplorerConfigJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static HoundifyExplorerConfigJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        HoundifyExplorerConfigJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<HoundifyExplorerConfigJSON>, HoundifyExplorerConfigJSON *, bool> generator("Type HoundifyExplorerConfig", ignore_extras);
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
        JSONHoldingArrayGenerator<HoundifyExplorerProfileJSON::Generator, RCHandle<HoundifyExplorerProfileJSON>, HoundifyExplorerProfileJSON *, bool > fieldGeneratorProfiles;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorDefaultProfile;
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
            HoundifyExplorerConfigJSON *result = new HoundifyExplorerConfigJSON();
            assert(result != NULL);
            RCHandle<HoundifyExplorerConfigJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraHoundifyExplorerConfigAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(HoundifyExplorerConfigJSON *result)
          {
            if (fieldGeneratorProfiles.have_value)
              {
                result->initProfiles();
                size_t count = fieldGeneratorProfiles.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendProfiles(fieldGeneratorProfiles.value[num].referenced());
                  }
                fieldGeneratorProfiles.value.clear();
                fieldGeneratorProfiles.have_value = false;
              }
            else if (!(result->hasProfiles()))
              {
                error("When parsing the object for %what%, the \"Profiles\" field was missing.");
              }
            if (fieldGeneratorDefaultProfile.have_value)
              {
                result->setDefaultProfile(fieldGeneratorDefaultProfile.value);
                fieldGeneratorDefaultProfile.have_value = false;
              }
            else if (!(result->hasDefaultProfile()))
              {
                error("When parsing the object for %what%, the \"DefaultProfile\" field was missing.");
              }
          }
        virtual void handle_result(HoundifyExplorerConfigJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'D':
                    if (strcmp(&(field_name[1]), "efaultProfile") == 0)
                        return &fieldGeneratorDefaultProfile;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "rofiles") == 0)
                        return &fieldGeneratorProfiles;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorProfiles("field \"Profiles\" of the HoundifyExplorerConfig class", ignore_extras), fieldGeneratorDefaultProfile("field \"DefaultProfile\" of the HoundifyExplorerConfig class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the HoundifyExplorerConfig class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorProfiles.reset();
            fieldGeneratorDefaultProfile.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* HOUNDIFYEXPLORERCONFIGJSON_H */
