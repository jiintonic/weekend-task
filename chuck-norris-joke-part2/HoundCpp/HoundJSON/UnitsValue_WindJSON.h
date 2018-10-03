/* file "UnitsValue_WindJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITSVALUE_WINDJSON_H
#define UNITSVALUE_WINDJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
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


class UnitsValue_WindJSON : public ReferenceCounted
  {
  private:
    bool flagHasFormat;
    std::string storeFormat;
    bool flagHasUnits;
    std::string storeUnits;
    bool flagHasWrittenUnits;
    std::string storeWrittenUnits;
    bool flagHasSpokenUnits;
    std::string storeSpokenUnits;
    bool flagHasValue;
    OInteger storeValue;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UnitsValue_WindJSON(const UnitsValue_WindJSON &);
    UnitsValue_WindJSON & operator=(const UnitsValue_WindJSON &other);

    void  fromJSONFormat(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONWrittenUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONSpokenUnits(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitsValue_WindJSON(void);
    virtual ~UnitsValue_WindJSON(void);
    bool  hasFormat(void) const;
    std::string  getFormat(void);
    const std::string  getFormat(void) const;
    bool  hasUnits(void) const;
    std::string  getUnits(void);
    const std::string  getUnits(void) const;
    bool  hasWrittenUnits(void) const;
    std::string  getWrittenUnits(void);
    const std::string  getWrittenUnits(void) const;
    bool  hasSpokenUnits(void) const;
    std::string  getSpokenUnits(void);
    const std::string  getSpokenUnits(void) const;
    bool  hasValue(void) const;
    OInteger  getValue(void);
    const OInteger  getValue(void) const;

    virtual size_t extraUnitsValue_WindComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUnitsValue_WindComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUnitsValue_WindComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUnitsValue_WindComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUnitsValue_WindLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUnitsValue_WindLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setFormat(std::string new_value)
      {
        flagHasFormat = true;
        storeFormat = new_value;
      }
    void unsetFormat(void)
      {
        flagHasFormat = false;
      }
    void setUnits(std::string new_value)
      {
        flagHasUnits = true;
        storeUnits = new_value;
      }
    void unsetUnits(void)
      {
        flagHasUnits = false;
      }
    void setWrittenUnits(std::string new_value)
      {
        flagHasWrittenUnits = true;
        storeWrittenUnits = new_value;
      }
    void unsetWrittenUnits(void)
      {
        flagHasWrittenUnits = false;
      }
    void setSpokenUnits(std::string new_value)
      {
        flagHasSpokenUnits = true;
        storeSpokenUnits = new_value;
      }
    void unsetSpokenUnits(void)
      {
        flagHasSpokenUnits = false;
      }
    void setValue(OInteger new_value)
      {
        flagHasValue = true;
        if (new_value < 0)
            throw("The value for field Value of UnitsValue_WindJSON is less than the lower bound (0) for that field.");
        storeValue = new_value;
      }
    void unsetValue(void)
      {
        flagHasValue = false;
      }

    virtual void extraUnitsValue_WindAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUnitsValue_WindSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUnitsValue_WindLookup(key);
        if (old_field == NULL)
          {
            extraUnitsValue_WindAppendPair(key, new_component);
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
        assert(flagHasFormat);
        handler->start_pair("Format");
        handler->string_value(storeFormat);
        assert(flagHasUnits);
        handler->start_pair("Units");
        handler->string_value(storeUnits);
        assert(flagHasWrittenUnits);
        handler->start_pair("WrittenUnits");
        handler->string_value(storeWrittenUnits);
        assert(flagHasSpokenUnits);
        handler->start_pair("SpokenUnits");
        handler->string_value(storeSpokenUnits);
        assert(flagHasValue);
        handler->start_pair("Value");
        handler->number_value(storeValue.get_o_integer());
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasFormat()))
          {
            return "When parsing the object for %what%, the \"Format\" field was missing.";
          }
        if (!(hasUnits()))
          {
            return "When parsing the object for %what%, the \"Units\" field was missing.";
          }
        if (!(hasWrittenUnits()))
          {
            return "When parsing the object for %what%, the \"WrittenUnits\" field was missing.";
          }
        if (!(hasSpokenUnits()))
          {
            return "When parsing the object for %what%, the \"SpokenUnits\" field was missing.";
          }
        if (!(hasValue()))
          {
            return "When parsing the object for %what%, the \"Value\" field was missing.";
          }
        return NULL;
      }

    static UnitsValue_WindJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitsValue_WindJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitsValue_WindJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitsValue_WindJSON>, UnitsValue_WindJSON *, bool> generator("Type UnitsValue_Wind", ignore_extras);
            parse_json_value(text, "Text for UnitsValue_WindJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitsValue_WindJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitsValue_WindJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitsValue_WindJSON>, UnitsValue_WindJSON *, bool> generator("Type UnitsValue_Wind", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorFormat;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorUnits;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorWrittenUnits;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorSpokenUnits;
        static char lowerBoundValue[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundValue>, OInteger, o_integer > fieldGeneratorValue;
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
            UnitsValue_WindJSON *result = new UnitsValue_WindJSON();
            assert(result != NULL);
            RCHandle<UnitsValue_WindJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUnitsValue_WindAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UnitsValue_WindJSON *result)
          {
            if (fieldGeneratorFormat.have_value)
              {
                result->setFormat(fieldGeneratorFormat.value);
                fieldGeneratorFormat.have_value = false;
              }
            else if (!(result->hasFormat()))
              {
                error("When parsing the object for %what%, the \"Format\" field was missing.");
              }
            if (fieldGeneratorUnits.have_value)
              {
                result->setUnits(fieldGeneratorUnits.value);
                fieldGeneratorUnits.have_value = false;
              }
            else if (!(result->hasUnits()))
              {
                error("When parsing the object for %what%, the \"Units\" field was missing.");
              }
            if (fieldGeneratorWrittenUnits.have_value)
              {
                result->setWrittenUnits(fieldGeneratorWrittenUnits.value);
                fieldGeneratorWrittenUnits.have_value = false;
              }
            else if (!(result->hasWrittenUnits()))
              {
                error("When parsing the object for %what%, the \"WrittenUnits\" field was missing.");
              }
            if (fieldGeneratorSpokenUnits.have_value)
              {
                result->setSpokenUnits(fieldGeneratorSpokenUnits.value);
                fieldGeneratorSpokenUnits.have_value = false;
              }
            else if (!(result->hasSpokenUnits()))
              {
                error("When parsing the object for %what%, the \"SpokenUnits\" field was missing.");
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
          }
        virtual void handle_result(UnitsValue_WindJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'F':
                    if (strcmp(&(field_name[1]), "ormat") == 0)
                        return &fieldGeneratorFormat;
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "pokenUnits") == 0)
                        return &fieldGeneratorSpokenUnits;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nits") == 0)
                        return &fieldGeneratorUnits;
                    break;
                case 'V':
                    if (strcmp(&(field_name[1]), "alue") == 0)
                        return &fieldGeneratorValue;
                    break;
                case 'W':
                    if (strcmp(&(field_name[1]), "rittenUnits") == 0)
                        return &fieldGeneratorWrittenUnits;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorFormat("field \"Format\" of the UnitsValue_Wind class"), fieldGeneratorUnits("field \"Units\" of the UnitsValue_Wind class"), fieldGeneratorWrittenUnits("field \"WrittenUnits\" of the UnitsValue_Wind class"), fieldGeneratorSpokenUnits("field \"SpokenUnits\" of the UnitsValue_Wind class"), fieldGeneratorValue("field \"Value\" of the UnitsValue_Wind class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UnitsValue_Wind class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorFormat.reset();
            fieldGeneratorUnits.reset();
            fieldGeneratorWrittenUnits.reset();
            fieldGeneratorSpokenUnits.reset();
            fieldGeneratorValue.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UNITSVALUE_WINDJSON_H */
