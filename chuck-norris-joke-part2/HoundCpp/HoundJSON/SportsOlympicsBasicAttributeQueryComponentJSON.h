/* file "SportsOlympicsBasicAttributeQueryComponentJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSOLYMPICSBASICATTRIBUTEQUERYCOMPONENTJSON_H
#define SPORTSOLYMPICSBASICATTRIBUTEQUERYCOMPONENTJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "SportsOlympicsBasicAttributeTypeJSON.h"
#include "SportsOlympicsBasicAttributeErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsOlympicsBasicAttributeQueryComponentJSON : public ReferenceCounted
  {
  private:
    bool flagHasType;
    SportsOlympicsBasicAttributeTypeJSON * storeType;
    bool flagHasGamesIndices;
    std::vector< OInteger > storeGamesIndices;
    bool flagHasError;
    SportsOlympicsBasicAttributeErrorJSON * storeError;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsOlympicsBasicAttributeQueryComponentJSON(const SportsOlympicsBasicAttributeQueryComponentJSON &);
    SportsOlympicsBasicAttributeQueryComponentJSON & operator=(const SportsOlympicsBasicAttributeQueryComponentJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONGamesIndices(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONError(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsOlympicsBasicAttributeQueryComponentJSON(void);
    virtual ~SportsOlympicsBasicAttributeQueryComponentJSON(void);
    bool  hasType(void) const;
    SportsOlympicsBasicAttributeTypeJSON *  getType(void);
    const SportsOlympicsBasicAttributeTypeJSON *  getType(void) const;
    SportsOlympicsBasicAttributeTypeJSON::TypeValue  getTypeValue(void);
    const SportsOlympicsBasicAttributeTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasGamesIndices(void) const;
    size_t  countOfGamesIndices(void) const;
    OInteger  elementOfGamesIndices(size_t element_num);
    const OInteger  elementOfGamesIndices(size_t element_num) const;
    std::vector< OInteger >  getGamesIndices(void);
    const std::vector< OInteger >  getGamesIndices(void) const;
    bool  hasError(void) const;
    SportsOlympicsBasicAttributeErrorJSON *  getError(void);
    const SportsOlympicsBasicAttributeErrorJSON *  getError(void) const;
    SportsOlympicsBasicAttributeErrorJSON::TypeValue  getErrorValue(void);
    const SportsOlympicsBasicAttributeErrorJSON::TypeValue  getErrorValue(void) const;
    const char * getErrorAsChars(void) const;
    std::string  getErrorAsString(void) const;

    virtual size_t extraSportsOlympicsBasicAttributeQueryComponentComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsOlympicsBasicAttributeQueryComponentComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeQueryComponentComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeQueryComponentComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsOlympicsBasicAttributeQueryComponentLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsOlympicsBasicAttributeQueryComponentLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(SportsOlympicsBasicAttributeTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsOlympicsBasicAttributeTypeJSON::TypeValue new_value)
      {
        setType(new SportsOlympicsBasicAttributeTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsOlympicsBasicAttributeTypeJSON::TypeValueKnownValues known = SportsOlympicsBasicAttributeTypeJSON::stringToValue(chars);
        SportsOlympicsBasicAttributeTypeJSON::TypeValue new_value;
        if (known == SportsOlympicsBasicAttributeTypeJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setType(new_value);
      }
    void setType(std::string the_string)
      {
        setType(the_string.c_str());
      }
    void unsetType(void)
      {
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = false;
      }
    void initGamesIndices(void)
      {
        flagHasGamesIndices = true;
        storeGamesIndices.clear();
      }
    void appendGamesIndices(OInteger to_append)
      {
        if (!flagHasGamesIndices)
          {
            flagHasGamesIndices = true;
            storeGamesIndices.clear();
          }
        assert(flagHasGamesIndices);
        storeGamesIndices.push_back(to_append);
      }
    void unsetGamesIndices(void)
      {
        flagHasGamesIndices = false;
        storeGamesIndices.clear();
      }
    void setError(SportsOlympicsBasicAttributeErrorJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = true;
        storeError = new_value;
      }
    void setError(SportsOlympicsBasicAttributeErrorJSON::TypeValue new_value)
      {
        setError(new SportsOlympicsBasicAttributeErrorJSON(new_value));
      }
    void setError(const char *chars)
      {
        SportsOlympicsBasicAttributeErrorJSON::TypeValueKnownValues known = SportsOlympicsBasicAttributeErrorJSON::stringToValue(chars);
        SportsOlympicsBasicAttributeErrorJSON::TypeValue new_value;
        if (known == SportsOlympicsBasicAttributeErrorJSON::Value__none)
          {
            new_value.in_known_list = false;
            new_value.string_value = chars;
          }
        else
          {
            new_value.in_known_list = true;
            new_value.list_value = known;
          }
        setError(new_value);
      }
    void setError(std::string the_string)
      {
        setError(the_string.c_str());
      }
    void unsetError(void)
      {
        if (flagHasError)
          {
            storeError->remove_reference();
          }
        flagHasError = false;
      }

    virtual void extraSportsOlympicsBasicAttributeQueryComponentAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsOlympicsBasicAttributeQueryComponentSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsOlympicsBasicAttributeQueryComponentLookup(key);
        if (old_field == NULL)
          {
            extraSportsOlympicsBasicAttributeQueryComponentAppendPair(key, new_component);
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
        assert(flagHasType);
        handler->start_pair("Type");
        storeType->write_as_json(handler);
        if (flagHasGamesIndices)
          {
            handler->start_pair("GamesIndices");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeGamesIndices.size(); ++num1)
              {
                handler->number_value(storeGamesIndices[num1].get_o_integer());
              }
            handler->finish_array();
          }
        if (flagHasError)
          {
            handler->start_pair("Error");
            storeError->write_as_json(handler);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        return NULL;
      }

    static SportsOlympicsBasicAttributeQueryComponentJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsOlympicsBasicAttributeQueryComponentJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeQueryComponentJSON>, SportsOlympicsBasicAttributeQueryComponentJSON *, bool> generator("Type SportsOlympicsBasicAttributeQueryComponent", ignore_extras);
            parse_json_value(text, "Text for SportsOlympicsBasicAttributeQueryComponentJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsOlympicsBasicAttributeQueryComponentJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsOlympicsBasicAttributeQueryComponentJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsOlympicsBasicAttributeQueryComponentJSON>, SportsOlympicsBasicAttributeQueryComponentJSON *, bool> generator("Type SportsOlympicsBasicAttributeQueryComponent", ignore_extras);
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
        JSONHoldingGenerator<SportsOlympicsBasicAttributeTypeJSON::Generator, RCHandle<SportsOlympicsBasicAttributeTypeJSON>, SportsOlympicsBasicAttributeTypeJSON *, bool > fieldGeneratorType;
        static char lowerBoundGamesIndices[];
        JSONHoldingArrayGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundGamesIndices>, OInteger, o_integer > fieldGeneratorGamesIndices;
        JSONHoldingGenerator<SportsOlympicsBasicAttributeErrorJSON::Generator, RCHandle<SportsOlympicsBasicAttributeErrorJSON>, SportsOlympicsBasicAttributeErrorJSON *, bool > fieldGeneratorError;
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
            SportsOlympicsBasicAttributeQueryComponentJSON *result = new SportsOlympicsBasicAttributeQueryComponentJSON();
            assert(result != NULL);
            RCHandle<SportsOlympicsBasicAttributeQueryComponentJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsOlympicsBasicAttributeQueryComponentAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsOlympicsBasicAttributeQueryComponentJSON *result)
          {
            if (fieldGeneratorType.have_value)
              {
                result->setType(fieldGeneratorType.value.referenced());
                fieldGeneratorType.have_value = false;
              }
            else if (!(result->hasType()))
              {
                error("When parsing the object for %what%, the \"Type\" field was missing.");
              }
            if (fieldGeneratorGamesIndices.have_value)
              {
                result->initGamesIndices();
                size_t count = fieldGeneratorGamesIndices.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendGamesIndices(fieldGeneratorGamesIndices.value[num]);
                  }
                fieldGeneratorGamesIndices.value.clear();
                fieldGeneratorGamesIndices.have_value = false;
              }
            if (fieldGeneratorError.have_value)
              {
                result->setError(fieldGeneratorError.value.referenced());
                fieldGeneratorError.have_value = false;
              }
          }
        virtual void handle_result(SportsOlympicsBasicAttributeQueryComponentJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'E':
                    if (strcmp(&(field_name[1]), "rror") == 0)
                        return &fieldGeneratorError;
                    break;
                case 'G':
                    if (strcmp(&(field_name[1]), "amesIndices") == 0)
                        return &fieldGeneratorGamesIndices;
                    break;
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsOlympicsBasicAttributeQueryComponent class", ignore_extras), fieldGeneratorGamesIndices("field \"GamesIndices\" of the SportsOlympicsBasicAttributeQueryComponent class"), fieldGeneratorError("field \"Error\" of the SportsOlympicsBasicAttributeQueryComponent class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsOlympicsBasicAttributeQueryComponent class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorGamesIndices.reset();
            fieldGeneratorError.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSOLYMPICSBASICATTRIBUTEQUERYCOMPONENTJSON_H */
