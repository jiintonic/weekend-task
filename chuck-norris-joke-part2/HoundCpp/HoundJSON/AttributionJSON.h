/* file "AttributionJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef ATTRIBUTIONJSON_H
#define ATTRIBUTIONJSON_H

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


class AttributionJSON : public ReferenceCounted
  {
  private:
    bool flagHasLogoImageURL;
    std::string storeLogoImageURL;
    bool flagHasLogoImageGrayURL;
    std::string storeLogoImageGrayURL;
    bool flagHasLogoLabel;
    std::string storeLogoLabel;
    bool flagHasTextOnlyLabel;
    std::string storeTextOnlyLabel;
    bool flagHasProviderURL;
    std::string storeProviderURL;
    bool flagHasRequiredToIncludeInline;
    bool storeRequiredToIncludeInline;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AttributionJSON(const AttributionJSON &);
    AttributionJSON & operator=(const AttributionJSON &other);

    void  fromJSONLogoImageURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLogoImageGrayURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONLogoLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONTextOnlyLabel(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONProviderURL(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONRequiredToIncludeInline(JSONValue *json_value, bool ignore_extras = false);


  public:
    AttributionJSON(void);
    virtual ~AttributionJSON(void);
    bool  hasLogoImageURL(void) const;
    std::string  getLogoImageURL(void);
    const std::string  getLogoImageURL(void) const;
    bool  hasLogoImageGrayURL(void) const;
    std::string  getLogoImageGrayURL(void);
    const std::string  getLogoImageGrayURL(void) const;
    bool  hasLogoLabel(void) const;
    std::string  getLogoLabel(void);
    const std::string  getLogoLabel(void) const;
    bool  hasTextOnlyLabel(void) const;
    std::string  getTextOnlyLabel(void);
    const std::string  getTextOnlyLabel(void) const;
    bool  hasProviderURL(void) const;
    std::string  getProviderURL(void);
    const std::string  getProviderURL(void) const;
    bool  hasRequiredToIncludeInline(void) const;
    bool  getRequiredToIncludeInline(void);
    const bool  getRequiredToIncludeInline(void) const;

    virtual size_t extraAttributionComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAttributionComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAttributionComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAttributionComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAttributionLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAttributionLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setLogoImageURL(std::string new_value)
      {
        flagHasLogoImageURL = true;
        storeLogoImageURL = new_value;
      }
    void unsetLogoImageURL(void)
      {
        flagHasLogoImageURL = false;
      }
    void setLogoImageGrayURL(std::string new_value)
      {
        flagHasLogoImageGrayURL = true;
        storeLogoImageGrayURL = new_value;
      }
    void unsetLogoImageGrayURL(void)
      {
        flagHasLogoImageGrayURL = false;
      }
    void setLogoLabel(std::string new_value)
      {
        flagHasLogoLabel = true;
        storeLogoLabel = new_value;
      }
    void unsetLogoLabel(void)
      {
        flagHasLogoLabel = false;
      }
    void setTextOnlyLabel(std::string new_value)
      {
        flagHasTextOnlyLabel = true;
        storeTextOnlyLabel = new_value;
      }
    void unsetTextOnlyLabel(void)
      {
        flagHasTextOnlyLabel = false;
      }
    void setProviderURL(std::string new_value)
      {
        flagHasProviderURL = true;
        storeProviderURL = new_value;
      }
    void unsetProviderURL(void)
      {
        flagHasProviderURL = false;
      }
    void setRequiredToIncludeInline(bool new_value)
      {
        flagHasRequiredToIncludeInline = true;
        storeRequiredToIncludeInline = new_value;
      }
    void unsetRequiredToIncludeInline(void)
      {
        flagHasRequiredToIncludeInline = false;
      }

    virtual void extraAttributionAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAttributionSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAttributionLookup(key);
        if (old_field == NULL)
          {
            extraAttributionAppendPair(key, new_component);
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
        assert(flagHasLogoImageURL);
        handler->start_pair("LogoImageURL");
        handler->string_value(storeLogoImageURL);
        if (flagHasLogoImageGrayURL)
          {
            handler->start_pair("LogoImageGrayURL");
            handler->string_value(storeLogoImageGrayURL);
          }
        if (flagHasLogoLabel)
          {
            handler->start_pair("LogoLabel");
            handler->string_value(storeLogoLabel);
          }
        if (flagHasTextOnlyLabel)
          {
            handler->start_pair("TextOnlyLabel");
            handler->string_value(storeTextOnlyLabel);
          }
        if (flagHasProviderURL)
          {
            handler->start_pair("ProviderURL");
            handler->string_value(storeProviderURL);
          }
        assert(flagHasRequiredToIncludeInline);
        handler->start_pair("RequiredToIncludeInline");
        handler->boolean_value(storeRequiredToIncludeInline);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasLogoImageURL()))
          {
            return "When parsing the object for %what%, the \"LogoImageURL\" field was missing.";
          }
        if (!(hasRequiredToIncludeInline()))
          {
            return "When parsing the object for %what%, the \"RequiredToIncludeInline\" field was missing.";
          }
        return NULL;
      }

    static AttributionJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AttributionJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AttributionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool> generator("Type Attribution", ignore_extras);
            parse_json_value(text, "Text for AttributionJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AttributionJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AttributionJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AttributionJSON>, AttributionJSON *, bool> generator("Type Attribution", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLogoImageURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLogoImageGrayURL;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorLogoLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextOnlyLabel;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorProviderURL;
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorRequiredToIncludeInline;
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
            AttributionJSON *result = new AttributionJSON();
            assert(result != NULL);
            RCHandle<AttributionJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAttributionAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AttributionJSON *result)
          {
            if (fieldGeneratorLogoImageURL.have_value)
              {
                result->setLogoImageURL(fieldGeneratorLogoImageURL.value);
                fieldGeneratorLogoImageURL.have_value = false;
              }
            else if (!(result->hasLogoImageURL()))
              {
                error("When parsing the object for %what%, the \"LogoImageURL\" field was missing.");
              }
            if (fieldGeneratorLogoImageGrayURL.have_value)
              {
                result->setLogoImageGrayURL(fieldGeneratorLogoImageGrayURL.value);
                fieldGeneratorLogoImageGrayURL.have_value = false;
              }
            if (fieldGeneratorLogoLabel.have_value)
              {
                result->setLogoLabel(fieldGeneratorLogoLabel.value);
                fieldGeneratorLogoLabel.have_value = false;
              }
            if (fieldGeneratorTextOnlyLabel.have_value)
              {
                result->setTextOnlyLabel(fieldGeneratorTextOnlyLabel.value);
                fieldGeneratorTextOnlyLabel.have_value = false;
              }
            if (fieldGeneratorProviderURL.have_value)
              {
                result->setProviderURL(fieldGeneratorProviderURL.value);
                fieldGeneratorProviderURL.have_value = false;
              }
            if (fieldGeneratorRequiredToIncludeInline.have_value)
              {
                result->setRequiredToIncludeInline(fieldGeneratorRequiredToIncludeInline.value);
                fieldGeneratorRequiredToIncludeInline.have_value = false;
              }
            else if (!(result->hasRequiredToIncludeInline()))
              {
                error("When parsing the object for %what%, the \"RequiredToIncludeInline\" field was missing.");
              }
          }
        virtual void handle_result(AttributionJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'L':
                    if (strncmp(&(field_name[1]), "ogo", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'I':
                                if (strncmp(&(field_name[5]), "mage", 4) == 0)
                                  {
                                    switch ((unsigned char)(field_name[9]))
                                      {
                                        case 'G':
                                            if (strcmp(&(field_name[10]), "rayURL") == 0)
                                                return &fieldGeneratorLogoImageGrayURL;
                                            break;
                                        case 'U':
                                            if (strcmp(&(field_name[10]), "RL") == 0)
                                                return &fieldGeneratorLogoImageURL;
                                            break;
                                        default:
                                            break;
                                      }
                                  }
                                break;
                            case 'L':
                                if (strcmp(&(field_name[5]), "abel") == 0)
                                    return &fieldGeneratorLogoLabel;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "roviderURL") == 0)
                        return &fieldGeneratorProviderURL;
                    break;
                case 'R':
                    if (strcmp(&(field_name[1]), "equiredToIncludeInline") == 0)
                        return &fieldGeneratorRequiredToIncludeInline;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "extOnlyLabel") == 0)
                        return &fieldGeneratorTextOnlyLabel;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorLogoImageURL("field \"LogoImageURL\" of the Attribution class"), fieldGeneratorLogoImageGrayURL("field \"LogoImageGrayURL\" of the Attribution class"), fieldGeneratorLogoLabel("field \"LogoLabel\" of the Attribution class"), fieldGeneratorTextOnlyLabel("field \"TextOnlyLabel\" of the Attribution class"), fieldGeneratorProviderURL("field \"ProviderURL\" of the Attribution class"), fieldGeneratorRequiredToIncludeInline("field \"RequiredToIncludeInline\" of the Attribution class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the Attribution class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorLogoImageURL.reset();
            fieldGeneratorLogoImageGrayURL.reset();
            fieldGeneratorLogoLabel.reset();
            fieldGeneratorTextOnlyLabel.reset();
            fieldGeneratorProviderURL.reset();
            fieldGeneratorRequiredToIncludeInline.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* ATTRIBUTIONJSON_H */
