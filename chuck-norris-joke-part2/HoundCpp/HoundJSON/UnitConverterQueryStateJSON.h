/* file "UnitConverterQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITCONVERTERQUERYSTATEJSON_H
#define UNITCONVERTERQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include "MeasuredAmountJSON.h"
#include "MeasuredAmountJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UnitConverterQueryStateJSON : public ReferenceCounted
  {
  public:
    enum TypeUnitConverterCommandKind
      {
        UnitConverterCommandKind_UnitConverterCommand
      };

    static TypeUnitConverterCommandKind  stringToUnitConverterCommandKind(const char *chars);
    static const char * stringFromUnitConverterCommandKind(TypeUnitConverterCommandKind the_enum);

  private:
    bool flagHasUnitConverterCommandKind;
    bool flagHasInputValue;
    std::vector< MeasuredAmountJSON * > storeInputValue;
    bool flagHasOutputValue;
    std::vector< MeasuredAmountJSON * > storeOutputValue;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    UnitConverterQueryStateJSON(const UnitConverterQueryStateJSON &);
    UnitConverterQueryStateJSON & operator=(const UnitConverterQueryStateJSON &other);

    void  fromJSONUnitConverterCommandKind(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputValue(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONOutputValue(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitConverterQueryStateJSON(void);
    virtual ~UnitConverterQueryStateJSON(void);
    bool  hasUnitConverterCommandKind(void) const;
    TypeUnitConverterCommandKind  getUnitConverterCommandKind(void);
    const TypeUnitConverterCommandKind  getUnitConverterCommandKind(void) const;
    const char * getUnitConverterCommandKindAsChars(void) const;
    std::string  getUnitConverterCommandKindAsString(void) const;
    bool  hasInputValue(void) const;
    size_t  countOfInputValue(void) const;
    MeasuredAmountJSON *  elementOfInputValue(size_t element_num);
    const MeasuredAmountJSON *  elementOfInputValue(size_t element_num) const;
    std::vector< MeasuredAmountJSON * >  getInputValue(void);
    const std::vector< MeasuredAmountJSON * >  getInputValue(void) const;
    bool  hasOutputValue(void) const;
    size_t  countOfOutputValue(void) const;
    MeasuredAmountJSON *  elementOfOutputValue(size_t element_num);
    const MeasuredAmountJSON *  elementOfOutputValue(size_t element_num) const;
    std::vector< MeasuredAmountJSON * >  getOutputValue(void);
    const std::vector< MeasuredAmountJSON * >  getOutputValue(void) const;

    virtual size_t extraUnitConverterQueryStateComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraUnitConverterQueryStateComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraUnitConverterQueryStateComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraUnitConverterQueryStateComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraUnitConverterQueryStateLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraUnitConverterQueryStateLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }

    void setUnitConverterCommandKind(void)
      {
        flagHasUnitConverterCommandKind = true;
      }
    void setUnitConverterCommandKind(TypeUnitConverterCommandKind new_value)
      {
        setUnitConverterCommandKind();
      }
    void setUnitConverterCommandKind(const char *chars)
      {
        setUnitConverterCommandKind(stringToUnitConverterCommandKind(chars));
      }
    void setUnitConverterCommandKind(std::string the_string)
      {
        setUnitConverterCommandKind(stringToUnitConverterCommandKind(the_string.c_str()));
      }
    void unsetUnitConverterCommandKind(void)
      {
        flagHasUnitConverterCommandKind = false;
      }
    void initInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num3 = 0; num3 < storeInputValue.size(); ++num3)
              {
                storeInputValue[num3]->remove_reference();
              }
          }
        flagHasInputValue = true;
        storeInputValue.clear();
      }
    void appendInputValue(MeasuredAmountJSON * to_append)
      {
        if (!flagHasInputValue)
          {
            flagHasInputValue = true;
            storeInputValue.clear();
          }
        assert(flagHasInputValue);
        to_append->add_reference();
        storeInputValue.push_back(to_append);
      }
    void unsetInputValue(void)
      {
        if (flagHasInputValue)
          {
            for (size_t num4 = 0; num4 < storeInputValue.size(); ++num4)
              {
                storeInputValue[num4]->remove_reference();
              }
          }
        flagHasInputValue = false;
        storeInputValue.clear();
      }
    void initOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num5 = 0; num5 < storeOutputValue.size(); ++num5)
              {
                storeOutputValue[num5]->remove_reference();
              }
          }
        flagHasOutputValue = true;
        storeOutputValue.clear();
      }
    void appendOutputValue(MeasuredAmountJSON * to_append)
      {
        if (!flagHasOutputValue)
          {
            flagHasOutputValue = true;
            storeOutputValue.clear();
          }
        assert(flagHasOutputValue);
        to_append->add_reference();
        storeOutputValue.push_back(to_append);
      }
    void unsetOutputValue(void)
      {
        if (flagHasOutputValue)
          {
            for (size_t num6 = 0; num6 < storeOutputValue.size(); ++num6)
              {
                storeOutputValue[num6]->remove_reference();
              }
          }
        flagHasOutputValue = false;
        storeOutputValue.clear();
      }

    virtual void extraUnitConverterQueryStateAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraUnitConverterQueryStateSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraUnitConverterQueryStateLookup(key);
        if (old_field == NULL)
          {
            extraUnitConverterQueryStateAppendPair(key, new_component);
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
        assert(flagHasUnitConverterCommandKind);
        handler->start_pair("UnitConverterCommandKind");
        handler->string_value("UnitConverterCommand");
        assert(flagHasInputValue);
        handler->start_pair("InputValue");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeInputValue.size(); ++num1)
          {
            storeInputValue[num1]->write_as_json(handler);
          }
        handler->finish_array();
        assert(flagHasOutputValue);
        handler->start_pair("OutputValue");
        handler->start_array();
        for (size_t num2 = 0; num2 < storeOutputValue.size(); ++num2)
          {
            storeOutputValue[num2]->write_as_json(handler);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasUnitConverterCommandKind()))
          {
            return "When parsing the object for %what%, the \"UnitConverterCommandKind\" field was missing.";
          }
        if (!(hasInputValue()))
          {
            return "When parsing the object for %what%, the \"InputValue\" field was missing.";
          }
        if (!(hasOutputValue()))
          {
            return "When parsing the object for %what%, the \"OutputValue\" field was missing.";
          }
        return NULL;
      }

    static UnitConverterQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitConverterQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitConverterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConverterQueryStateJSON>, UnitConverterQueryStateJSON *, bool> generator("Type UnitConverterQueryState", ignore_extras);
            parse_json_value(text, "Text for UnitConverterQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitConverterQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitConverterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConverterQueryStateJSON>, UnitConverterQueryStateJSON *, bool> generator("Type UnitConverterQueryState", ignore_extras);
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
    class FieldGeneratorUnitConverterCommandKind : public JSONStringGenerator
          {
          protected:
            FieldGeneratorUnitConverterCommandKind(const char *what)
              {
                set_what(what);
              }
            FieldGeneratorUnitConverterCommandKind(void)
              {
              }
            void handle_result(const char *result)
              {
                handle_result(stringToUnitConverterCommandKind(result));
              }
            virtual void handle_result(TypeUnitConverterCommandKind result) = 0;
          };
        JSONHoldingGenerator<FieldGeneratorUnitConverterCommandKind, TypeUnitConverterCommandKind, TypeUnitConverterCommandKind > fieldGeneratorUnitConverterCommandKind;
        JSONHoldingArrayGenerator<MeasuredAmountJSON::Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool > fieldGeneratorInputValue;
        JSONHoldingArrayGenerator<MeasuredAmountJSON::Generator, RCHandle<MeasuredAmountJSON>, MeasuredAmountJSON *, bool > fieldGeneratorOutputValue;
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
            UnitConverterQueryStateJSON *result = new UnitConverterQueryStateJSON();
            assert(result != NULL);
            RCHandle<UnitConverterQueryStateJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraUnitConverterQueryStateAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void finish(UnitConverterQueryStateJSON *result)
          {
            if (fieldGeneratorUnitConverterCommandKind.have_value)
              {
                result->setUnitConverterCommandKind();
                fieldGeneratorUnitConverterCommandKind.have_value = false;
              }
            else if (!(result->hasUnitConverterCommandKind()))
              {
                error("When parsing the object for %what%, the \"UnitConverterCommandKind\" field was missing.");
              }
            if (fieldGeneratorInputValue.have_value)
              {
                result->initInputValue();
                size_t count = fieldGeneratorInputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendInputValue(fieldGeneratorInputValue.value[num].referenced());
                  }
                fieldGeneratorInputValue.value.clear();
                fieldGeneratorInputValue.have_value = false;
              }
            else if (!(result->hasInputValue()))
              {
                error("When parsing the object for %what%, the \"InputValue\" field was missing.");
              }
            if (fieldGeneratorOutputValue.have_value)
              {
                result->initOutputValue();
                size_t count = fieldGeneratorOutputValue.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendOutputValue(fieldGeneratorOutputValue.value[num].referenced());
                  }
                fieldGeneratorOutputValue.value.clear();
                fieldGeneratorOutputValue.have_value = false;
              }
            else if (!(result->hasOutputValue()))
              {
                error("When parsing the object for %what%, the \"OutputValue\" field was missing.");
              }
          }
        virtual void handle_result(UnitConverterQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'I':
                    if (strcmp(&(field_name[1]), "nputValue") == 0)
                        return &fieldGeneratorInputValue;
                    break;
                case 'O':
                    if (strcmp(&(field_name[1]), "utputValue") == 0)
                        return &fieldGeneratorOutputValue;
                    break;
                case 'U':
                    if (strcmp(&(field_name[1]), "nitConverterCommandKind") == 0)
                        return &fieldGeneratorUnitConverterCommandKind;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorUnitConverterCommandKind("field \"UnitConverterCommandKind\" of the UnitConverterQueryState class"), fieldGeneratorInputValue("field \"InputValue\" of the UnitConverterQueryState class", ignore_extras), fieldGeneratorOutputValue("field \"OutputValue\" of the UnitConverterQueryState class", ignore_extras), unknownFieldGenerator(ignore_extras)
          {
            set_what("the UnitConverterQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorUnitConverterCommandKind.reset();
            fieldGeneratorInputValue.reset();
            fieldGeneratorOutputValue.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* UNITCONVERTERQUERYSTATEJSON_H */
