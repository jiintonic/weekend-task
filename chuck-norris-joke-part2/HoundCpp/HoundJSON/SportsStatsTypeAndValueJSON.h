/* file "SportsStatsTypeAndValueJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SPORTSSTATSTYPEANDVALUEJSON_H
#define SPORTSSTATSTYPEANDVALUEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include <string>
#include "SportsStatsTypeJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SportsStatsTypeAndValueJSON : public ReferenceCounted
  {
  private:
    bool flagHasType;
    SportsStatsTypeJSON * storeType;
    bool flagHasValue;
    std::string storeValue;
    bool flagHasValueNumeric;
    double storeValueNumeric;
    std::string textStoreValueNumeric;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    SportsStatsTypeAndValueJSON(const SportsStatsTypeAndValueJSON &);
    SportsStatsTypeAndValueJSON & operator=(const SportsStatsTypeAndValueJSON &other);

    void  fromJSONType(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValueNumeric(JSONValue *json_value, bool ignore_extras = false);


  public:
    SportsStatsTypeAndValueJSON(void);
    virtual ~SportsStatsTypeAndValueJSON(void);
    bool  hasType(void) const;
    SportsStatsTypeJSON *  getType(void);
    const SportsStatsTypeJSON *  getType(void) const;
    SportsStatsTypeJSON::TypeValue  getTypeValue(void);
    const SportsStatsTypeJSON::TypeValue  getTypeValue(void) const;
    const char * getTypeAsChars(void) const;
    std::string  getTypeAsString(void) const;
    bool  hasValue(void) const;
    std::string  getValue(void);
    const std::string  getValue(void) const;
    bool  hasValueNumeric(void) const;
    double  getValueNumeric(void);
    const double  getValueNumeric(void) const;
    std::string  getValueNumericAsText(void) const;

    virtual size_t extraSportsStatsTypeAndValueComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraSportsStatsTypeAndValueComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraSportsStatsTypeAndValueComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraSportsStatsTypeAndValueComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraSportsStatsTypeAndValueLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraSportsStatsTypeAndValueLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setType(SportsStatsTypeJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasType)
          {
            storeType->remove_reference();
          }
        flagHasType = true;
        storeType = new_value;
      }
    void setType(SportsStatsTypeJSON::TypeValue new_value)
      {
        setType(new SportsStatsTypeJSON(new_value));
      }
    void setType(const char *chars)
      {
        SportsStatsTypeJSON::TypeValueKnownValues known = SportsStatsTypeJSON::stringToValue(chars);
        SportsStatsTypeJSON::TypeValue new_value;
        if (known == SportsStatsTypeJSON::Value__none)
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
    void setValue(std::string new_value)
      {
        flagHasValue = true;
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }
    void setValueNumeric(double new_value)
      {
        flagHasValueNumeric = true;
        storeValueNumeric = new_value;
        textStoreValueNumeric = "";
      }
    void setValueNumericText(std::string new_value)
      {
        flagHasValueNumeric = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field ValueNumeric of SportsStatsTypeAndValueJSON is not a valid number.");
        textStoreValueNumeric = new_value;
      }
    void unsetValueNumeric(void)
      {
        flagHasValueNumeric = false;
      }

    virtual void extraSportsStatsTypeAndValueAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraSportsStatsTypeAndValueSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraSportsStatsTypeAndValueLookup(key);
        if (old_field == NULL)
          {
            extraSportsStatsTypeAndValueAppendPair(key, new_component);
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
        assert(flagHasValue);
        handler->start_pair("Value");
        handler->string_value(storeValue);
        if (flagHasValueNumeric)
          {
            handler->start_pair("ValueNumeric");
            if (textStoreValueNumeric != "")
                handler->number_value(textStoreValueNumeric.c_str());
            else if (((double)(long int)storeValueNumeric) == storeValueNumeric)
                handler->number_value((long int)storeValueNumeric);
            else
                handler->number_value(storeValueNumeric);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasType()))
          {
            return "When parsing the object for %what%, the \"Type\" field was missing.";
          }
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        return NULL;
      }

    static SportsStatsTypeAndValueJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SportsStatsTypeAndValueJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SportsStatsTypeAndValueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsTypeAndValueJSON>, SportsStatsTypeAndValueJSON *, bool> generator("Type SportsStatsTypeAndValue", ignore_extras);
            parse_json_value(text, "Text for SportsStatsTypeAndValueJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SportsStatsTypeAndValueJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SportsStatsTypeAndValueJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SportsStatsTypeAndValueJSON>, SportsStatsTypeAndValueJSON *, bool> generator("Type SportsStatsTypeAndValue", ignore_extras);
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
        JSONHoldingGenerator<SportsStatsTypeJSON::Generator, RCHandle<SportsStatsTypeJSON>, SportsStatsTypeJSON *, bool > fieldGeneratorType;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorValue;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorValueNumeric;
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
            SportsStatsTypeAndValueJSON *result = new SportsStatsTypeAndValueJSON();
            assert(result != NULL);
            RCHandle<SportsStatsTypeAndValueJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSportsStatsTypeAndValueAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(SportsStatsTypeAndValueJSON *result)
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
            if (fieldGeneratorValue.have_value)
              {
                result->setValue(fieldGeneratorValue.value);
                fieldGeneratorValue.have_value = false;
              }
            else if (!(result->hasValue()))
              {
                error("When parsing the object for %what%, the \"Value\" field was missing.");
              }
            if (fieldGeneratorValueNumeric.have_value)
              {
                result->setValueNumericText(fieldGeneratorValueNumeric.value);
                fieldGeneratorValueNumeric.have_value = false;
              }
          }
        virtual void handle_result(SportsStatsTypeAndValueJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'T':
                    if (strcmp(&(field_name[1]), "ype") == 0)
                        return &fieldGeneratorType;
                    break;
                case 'V':
                    if (strncmp(&(field_name[1]), "alue", 4) == 0)
                      {
                        switch ((unsigned char)(field_name[5]))
                          {
                            case 0:
                                return &fieldGeneratorValue;
                            case 'N':
                                if (strcmp(&(field_name[6]), "umeric") == 0)
                                    return &fieldGeneratorValueNumeric;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorType("field \"Type\" of the SportsStatsTypeAndValue class", ignore_extras), fieldGeneratorValue("field \"Value\" of the SportsStatsTypeAndValue class"), fieldGeneratorValueNumeric("field \"ValueNumeric\" of the SportsStatsTypeAndValue class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the SportsStatsTypeAndValue class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorType.reset();
            fieldGeneratorValue.reset();
            fieldGeneratorValueNumeric.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* SPORTSSTATSTYPEANDVALUEJSON_H */
