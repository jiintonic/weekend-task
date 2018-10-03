/* file "AreaCodeQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef AREACODEQUERYSTATEJSON_H
#define AREACODEQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerUnboundRangeGenerator.h"
#include <string>
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class AreaCodeQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeQueryType
      {
        QueryType_CityOfGivenAreaCode,
        QueryType_AreaCodeOfGivenCity
      };

    static TypeQueryType  stringToQueryType(const char *chars);
    static const char * stringFromQueryType(TypeQueryType the_enum);

  private:
    bool flagHasQueryType;
    TypeQueryType storeQueryType;
    bool flagHasAreaCode;
    OInteger storeAreaCode;
    bool flagHasCity;
    std::string storeCity;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    AreaCodeQueryStateJSON(const AreaCodeQueryStateJSON &);
    AreaCodeQueryStateJSON & operator=(const AreaCodeQueryStateJSON &other);

    void  fromJSONQueryType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONAreaCode(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONCity(JSONValue *json_value, bool ignore_extras = false);


  public:
    AreaCodeQueryStateJSON(void);
    virtual ~AreaCodeQueryStateJSON(void);
    bool  hasQueryType(void) const;
    TypeQueryType  getQueryType(void);
    const TypeQueryType  getQueryType(void) const;
    const char * getQueryTypeAsChars(void) const;
    std::string  getQueryTypeAsString(void) const;
    bool  hasAreaCode(void) const;
    OInteger  getAreaCode(void);
    const OInteger  getAreaCode(void) const;
    bool  hasCity(void) const;
    std::string  getCity(void);
    const std::string  getCity(void) const;

    virtual size_t extraAreaCodeQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraAreaCodeQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraAreaCodeQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraAreaCodeQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraAreaCodeQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraAreaCodeQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setQueryType(TypeQueryType new_value)
      {
        flagHasQueryType = true;
        storeQueryType = new_value;
      }
    void setQueryType(const char *chars)
      {
        setQueryType(stringToQueryType(chars));
      }
    void setQueryType(std::string the_string)
      {
        setQueryType(stringToQueryType(the_string.c_str()));
      }
    void unsetQueryType(void)
      {
        flagHasQueryType = false;
      }
    void setAreaCode(OInteger new_value)
      {
        flagHasAreaCode = true;
        storeAreaCode = new_value;
      }
    void unsetAreaCode(void)
      {
        flagHasAreaCode = false;
      }
    void setCity(std::string new_value)
      {
        flagHasCity = true;
        storeCity = new_value;
      }
    void unsetCity(void)
      {
        flagHasCity = false;
      }

    virtual void extraAreaCodeQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraAreaCodeQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraAreaCodeQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraAreaCodeQueryStateAppendPair(key, new_component);
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

    virtual void write_as_json(JSONHandler *handler) const
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
        assert(flagHasQueryType);
        handler->start_pair("QueryType");
        switch (storeQueryType)
          {
            case QueryType_CityOfGivenAreaCode:
                handler->string_value("CityOfGivenAreaCode");
                break;
            case QueryType_AreaCodeOfGivenCity:
                handler->string_value("AreaCodeOfGivenCity");
                break;
            default:
                assert(false);
          }
        if (flagHasAreaCode)
          {
            handler->start_pair("AreaCode");
            handler->number_value(storeAreaCode.get_o_integer());
          }
        if (flagHasCity)
          {
            handler->start_pair("City");
            handler->string_value(storeCity);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasQueryType()))
          {
            return "When parsing the object for %what%, the \"QueryType\" field was missing.";
          }
        return NULL;
      }

    static AreaCodeQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static AreaCodeQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        AreaCodeQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeQueryStateJSON>, AreaCodeQueryStateJSON *, bool> generator("Type AreaCodeQueryState", ignore_extras);
            parse_json_value(text, "Text for AreaCodeQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static AreaCodeQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        AreaCodeQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<AreaCodeQueryStateJSON>, AreaCodeQueryStateJSON *, bool> generator("Type AreaCodeQueryState", ignore_extras);
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
    class FieldGeneratorQueryType : public JSONStringGenerator
          {
          protected:
            FieldGeneratorQueryType(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorQueryType(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToQueryType(result));
              }
            virtual void handle_result(TypeQueryType result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorQueryType, TypeQueryType, TypeQueryType > fieldGeneratorQueryType;
        JSONHoldingGenerator<JSONIntegerUnboundRangeGenerator, OInteger, o_integer > fieldGeneratorAreaCode;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorCity;
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
            AreaCodeQueryStateJSON *result = new AreaCodeQueryStateJSON();
            assert(result != NULL);
            RCHandle<AreaCodeQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraAreaCodeQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(AreaCodeQueryStateJSON *result)
          {
            if (fieldGeneratorQueryType.have_value)
              {
                result->setQueryType(fieldGeneratorQueryType.value);
                fieldGeneratorQueryType.have_value = false;
              }
            else if (!(result->hasQueryType()))
              {
                error("When parsing the object for %what%, the \"QueryType\" field was missing.");
              }
            if (fieldGeneratorAreaCode.have_value)
              {
                result->setAreaCode(fieldGeneratorAreaCode.value);
                fieldGeneratorAreaCode.have_value = false;
              }
            if (fieldGeneratorCity.have_value)
              {
                result->setCity(fieldGeneratorCity.value);
                fieldGeneratorCity.have_value = false;
              }
          }
        virtual void handle_result(AreaCodeQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'A':
                    if (strcmp(&(field_name[1]), "reaCode") == 0)
                        return &fieldGeneratorAreaCode;
                    break;
                case 'C':
                    if (strcmp(&(field_name[1]), "ity") == 0)
                        return &fieldGeneratorCity;
                    break;
                case 'Q':
                    if (strcmp(&(field_name[1]), "ueryType") == 0)
                        return &fieldGeneratorQueryType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorQueryType("field \"QueryType\" of the AreaCodeQueryState class"), fieldGeneratorAreaCode("field \"AreaCode\" of the AreaCodeQueryState class"), fieldGeneratorCity("field \"City\" of the AreaCodeQueryState class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the AreaCodeQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorQueryType.reset();
            fieldGeneratorAreaCode.reset();
            fieldGeneratorCity.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* AREACODEQUERYSTATEJSON_H */
