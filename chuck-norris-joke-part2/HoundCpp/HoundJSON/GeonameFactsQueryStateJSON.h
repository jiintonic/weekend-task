/* file "GeonameFactsQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEFACTSQUERYSTATEJSON_H
#define GEONAMEFACTSQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "GeonameObjectJSON.h"
#include "GeonameAttributeWithArgumentsJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GeonameFactsQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeGeonameFactsCommandKind
      {
        GeonameFactsCommandKind_GeonameFactsInformationNugget,
        GeonameFactsCommandKind_GeonameFactsCommand
      };

    static TypeGeonameFactsCommandKind  stringToGeonameFactsCommandKind(const char *chars);
    static const char * stringFromGeonameFactsCommandKind(TypeGeonameFactsCommandKind the_enum);

  private:
    bool flagHasGeonameFactsCommandKind;
    TypeGeonameFactsCommandKind storeGeonameFactsCommandKind;
    bool flagHasGeonames;
    std::vector< GeonameObjectJSON * > storeGeonames;
    bool flagHasGeonameAttributes;
    std::vector< GeonameAttributeWithArgumentsJSON * > storeGeonameAttributes;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    GeonameFactsQueryStateJSON(const GeonameFactsQueryStateJSON &);
    GeonameFactsQueryStateJSON & operator=(const GeonameFactsQueryStateJSON &other);

    void  fromJSONGeonameFactsCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeonames(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGeonameAttributes(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameFactsQueryStateJSON(void);
    virtual ~GeonameFactsQueryStateJSON(void);
    bool  hasGeonameFactsCommandKind(void) const;
    TypeGeonameFactsCommandKind  getGeonameFactsCommandKind(void);
    const TypeGeonameFactsCommandKind  getGeonameFactsCommandKind(void) const;
    const char * getGeonameFactsCommandKindAsChars(void) const;
    std::string  getGeonameFactsCommandKindAsString(void) const;
    bool  hasGeonames(void) const;
    size_t  countOfGeonames(void) const;
    GeonameObjectJSON *  elementOfGeonames(size_t element_num);
    const GeonameObjectJSON *  elementOfGeonames(size_t element_num) const;
    std::vector< GeonameObjectJSON * >  getGeonames(void);
    const std::vector< GeonameObjectJSON * >  getGeonames(void) const;
    bool  hasGeonameAttributes(void) const;
    size_t  countOfGeonameAttributes(void) const;
    GeonameAttributeWithArgumentsJSON *  elementOfGeonameAttributes(size_t element_num);
    const GeonameAttributeWithArgumentsJSON *  elementOfGeonameAttributes(size_t element_num) const;
    std::vector< GeonameAttributeWithArgumentsJSON * >  getGeonameAttributes(void);
    const std::vector< GeonameAttributeWithArgumentsJSON * >  getGeonameAttributes(void) const;

    virtual size_t extraGeonameFactsQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraGeonameFactsQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraGeonameFactsQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraGeonameFactsQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraGeonameFactsQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraGeonameFactsQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setGeonameFactsCommandKind(TypeGeonameFactsCommandKind new_value)
      {
        flagHasGeonameFactsCommandKind = true;
        storeGeonameFactsCommandKind = new_value;
      }
    void setGeonameFactsCommandKind(const char *chars)
      {
        setGeonameFactsCommandKind(stringToGeonameFactsCommandKind(chars));
      }
    void setGeonameFactsCommandKind(std::string the_string)
      {
        setGeonameFactsCommandKind(stringToGeonameFactsCommandKind(the_string.c_str()));
      }
    void unsetGeonameFactsCommandKind(void)
      {
        flagHasGeonameFactsCommandKind = false;
      }
    void initGeonames(void)
      {
        if (flagHasGeonames)
          {
            for (size_t num3 = 0; num3 < storeGeonames.size(); ++num3)
              {
                storeGeonames[num3]->remove_reference();
              }
          }
        flagHasGeonames = true;
        storeGeonames.clear();
      }
    void appendGeonames(GeonameObjectJSON * to_append)
      {
        if (!flagHasGeonames)
          {
            flagHasGeonames = true;
            storeGeonames.clear();
          }
        assert(flagHasGeonames);
        to_append->add_reference();
        storeGeonames.push_back(to_append);
      }
    void unsetGeonames(void)
      {
        if (flagHasGeonames)
          {
            for (size_t num4 = 0; num4 < storeGeonames.size(); ++num4)
              {
                storeGeonames[num4]->remove_reference();
              }
          }
        flagHasGeonames = false;
        storeGeonames.clear();
      }
    void initGeonameAttributes(void)
      {
        if (flagHasGeonameAttributes)
          {
            for (size_t num5 = 0; num5 < storeGeonameAttributes.size(); ++num5)
              {
                storeGeonameAttributes[num5]->remove_reference();
              }
          }
        flagHasGeonameAttributes = true;
        storeGeonameAttributes.clear();
      }
    void appendGeonameAttributes(GeonameAttributeWithArgumentsJSON * to_append)
      {
        if (!flagHasGeonameAttributes)
          {
            flagHasGeonameAttributes = true;
            storeGeonameAttributes.clear();
          }
        assert(flagHasGeonameAttributes);
        to_append->add_reference();
        storeGeonameAttributes.push_back(to_append);
      }
    void unsetGeonameAttributes(void)
      {
        if (flagHasGeonameAttributes)
          {
            for (size_t num6 = 0; num6 < storeGeonameAttributes.size(); ++num6)
              {
                storeGeonameAttributes[num6]->remove_reference();
              }
          }
        flagHasGeonameAttributes = false;
        storeGeonameAttributes.clear();
      }

    virtual void extraGeonameFactsQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraGeonameFactsQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraGeonameFactsQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraGeonameFactsQueryStateAppendPair(key, new_component);
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
        if (flagHasGeonameFactsCommandKind)
          {
            handler->start_pair("GeonameFactsCommandKind");
            switch (storeGeonameFactsCommandKind)
              {
                case GeonameFactsCommandKind_GeonameFactsInformationNugget:
                    handler->string_value("GeonameFactsInformationNugget");
                    break;
                case GeonameFactsCommandKind_GeonameFactsCommand:
                    handler->string_value("GeonameFactsCommand");
                    break;
                default:
                    assert(false);
              }
          }
        if (flagHasGeonames)
          {
            handler->start_pair("Geonames");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGeonames.size(); ++num1)
              {
                storeGeonames[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        if (flagHasGeonameAttributes)
          {
            handler->start_pair("GeonameAttributes");
            handler->start_array();
            for (size_t num2 = 0; num2 < storeGeonameAttributes.size(); ++num2)
              {
                storeGeonameAttributes[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static GeonameFactsQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameFactsQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameFactsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsQueryStateJSON>, GeonameFactsQueryStateJSON *, bool> generator("Type GeonameFactsQueryState", ignore_extras);
            parse_json_value(text, "Text for GeonameFactsQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameFactsQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameFactsQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsQueryStateJSON>, GeonameFactsQueryStateJSON *, bool> generator("Type GeonameFactsQueryState", ignore_extras);
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
    class FieldGeneratorGeonameFactsCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorGeonameFactsCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorGeonameFactsCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToGeonameFactsCommandKind(result));
              }
            virtual void handle_result(TypeGeonameFactsCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorGeonameFactsCommandKind, TypeGeonameFactsCommandKind, TypeGeonameFactsCommandKind > fieldGeneratorGeonameFactsCommandKind;
        JSONHoldingArrayGenerator<GeonameObjectJSON::Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool > fieldGeneratorGeonames;
        JSONHoldingArrayGenerator<GeonameAttributeWithArgumentsJSON::Generator, RCHandle<GeonameAttributeWithArgumentsJSON>, GeonameAttributeWithArgumentsJSON *, bool > fieldGeneratorGeonameAttributes;
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
            GeonameFactsQueryStateJSON *result = new GeonameFactsQueryStateJSON();
            assert(result != NULL);
            RCHandle<GeonameFactsQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraGeonameFactsQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(GeonameFactsQueryStateJSON *result)
          {
            if (fieldGeneratorGeonameFactsCommandKind.have_value)
              {
                result->setGeonameFactsCommandKind(fieldGeneratorGeonameFactsCommandKind.value);
                fieldGeneratorGeonameFactsCommandKind.have_value = false;
              }
            if (fieldGeneratorGeonames.have_value)
              {
                result->initGeonames();
                size_t count = fieldGeneratorGeonames.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGeonames(fieldGeneratorGeonames.value[num].referenced());
                  }
                fieldGeneratorGeonames.value.clear();
                fieldGeneratorGeonames.have_value = false;
              }
            if (fieldGeneratorGeonameAttributes.have_value)
              {
                result->initGeonameAttributes();
                size_t count = fieldGeneratorGeonameAttributes.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGeonameAttributes(fieldGeneratorGeonameAttributes.value[num].referenced());
                  }
                fieldGeneratorGeonameAttributes.value.clear();
                fieldGeneratorGeonameAttributes.have_value = false;
              }
          }
        virtual void handle_result(GeonameFactsQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "Geoname", 7) == 0)
              {
                switch ((unsigned char)(field_name[7]))
                  {
                    case 'A':
                        if (strcmp(&(field_name[8]), "ttributes") == 0)
                            return &fieldGeneratorGeonameAttributes;
                        break;
                    case 'F':
                        if (strcmp(&(field_name[8]), "actsCommandKind") == 0)
                            return &fieldGeneratorGeonameFactsCommandKind;
                        break;
                    case 's':
                        if (field_name[8] == 0)
                            return &fieldGeneratorGeonames;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorGeonameFactsCommandKind("field \"GeonameFactsCommandKind\" of the GeonameFactsQueryState class"), fieldGeneratorGeonames("field \"Geonames\" of the GeonameFactsQueryState class", ignore_extras), fieldGeneratorGeonameAttributes("field \"GeonameAttributes\" of the GeonameFactsQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the GeonameFactsQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorGeonameFactsCommandKind.reset();
            fieldGeneratorGeonames.reset();
            fieldGeneratorGeonameAttributes.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* GEONAMEFACTSQUERYSTATEJSON_H */
