/* file "BaseConverterInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BASECONVERTERINFORMATIONNUGGETJSON_H
#define BASECONVERTERINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "ConversionRowJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BaseConverterInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasConversionRows;
    std::vector< ConversionRowJSON * > storeConversionRows;
    bool flagHasErrorMessage;
    std::string storeErrorMessage;
    std::vector<std::string> extraKeys;
    std::vector<JSONValue *> extraValues;
    string_index *extraIndex;

    BaseConverterInformationNuggetJSON(const BaseConverterInformationNuggetJSON &);
    BaseConverterInformationNuggetJSON & operator=(const BaseConverterInformationNuggetJSON &other);

    JSONValue * extraConversionRowsToJSON(void) const;
    JSONValue * extraErrorMessageToJSON(void) const;

    void  fromJSONConversionRows(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrorMessage(JSONValue *json_value, bool ignore_extras = false);


  public:
    BaseConverterInformationNuggetJSON(void);
    virtual ~BaseConverterInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasConversionRows(void) const;
    size_t  countOfConversionRows(void) const;
    ConversionRowJSON *  elementOfConversionRows(size_t element_num);
    const ConversionRowJSON *  elementOfConversionRows(size_t element_num) const;
    std::vector< ConversionRowJSON * >  getConversionRows(void);
    const std::vector< ConversionRowJSON * >  getConversionRows(void) const;
    bool  hasErrorMessage(void) const;
    std::string  getErrorMessage(void);
    const std::string  getErrorMessage(void) const;

    virtual size_t extraBaseConverterInformationNuggetComponentCount(void) const
      {
        assert(extraKeys.size() == extraValues.size());
        return extraKeys.size();
      }
    virtual const char *extraBaseConverterInformationNuggetComponentKey(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraKeys[component_num].c_str();
      }
    virtual JSONValue *extraBaseConverterInformationNuggetComponentValue(size_t component_num)
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual const JSONValue *extraBaseConverterInformationNuggetComponentValue(size_t component_num) const
      {
        assert(extraKeys.size() == extraValues.size());
        assert(component_num < extraValues.size());
        return extraValues[component_num];
      }
    virtual JSONValue *extraBaseConverterInformationNuggetLookup(const char *field_name)
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    virtual const JSONValue *extraBaseConverterInformationNuggetLookup(const char *field_name) const
      {
        JSONValue *result = (JSONValue *)(lookup_in_string_index(extraIndex, field_name));
        if (result != NULL)
            result->add_reference();
        return result;
      }
    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasConversionRows)
            ++result;
        if (flagHasErrorMessage)
            ++result;
        result += extraBaseConverterInformationNuggetComponentCount();
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversionRows)
          {
            if (remainder == 0)
                return "ConversionRows";
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return "ErrorMessage";
            --remainder;
          }
        return extraBaseConverterInformationNuggetComponentKey(remainder);
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasConversionRows)
          {
            if (remainder == 0)
                return extraConversionRowsToJSON();
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return extraErrorMessageToJSON();
            --remainder;
          }
        return extraBaseConverterInformationNuggetComponentValue(remainder);
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversionRows)
          {
            if (remainder == 0)
                return extraConversionRowsToJSON();
            --remainder;
          }
        if (flagHasErrorMessage)
          {
            if (remainder == 0)
                return extraErrorMessageToJSON();
            --remainder;
          }
        return extraBaseConverterInformationNuggetComponentValue(remainder);
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "onversionRows") == 0)
                    return (flagHasConversionRows ? extraConversionRowsToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                    return (flagHasErrorMessage ? extraErrorMessageToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBaseConverterInformationNuggetLookup(field_name);
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "onversionRows") == 0)
                    return (flagHasConversionRows ? extraConversionRowsToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                    return (flagHasErrorMessage ? extraErrorMessageToJSON() : NULL);
                break;
            default:
                break;
          }
        return extraBaseConverterInformationNuggetLookup(field_name);
      }

    void initConversionRows(void)
      {
        if (flagHasConversionRows)
          {
            for (size_t num2 = 0; num2 < storeConversionRows.size(); ++num2)
              {
                storeConversionRows[num2]->remove_reference();
              }
          }
        flagHasConversionRows = true;
        storeConversionRows.clear();
      }
    void appendConversionRows(ConversionRowJSON * to_append)
      {
        if (!flagHasConversionRows)
          {
            flagHasConversionRows = true;
            storeConversionRows.clear();
          }
        assert(flagHasConversionRows);
        to_append->add_reference();
        storeConversionRows.push_back(to_append);
      }
    void unsetConversionRows(void)
      {
        if (flagHasConversionRows)
          {
            for (size_t num3 = 0; num3 < storeConversionRows.size(); ++num3)
              {
                storeConversionRows[num3]->remove_reference();
              }
          }
        flagHasConversionRows = false;
        storeConversionRows.clear();
      }
    void setErrorMessage(std::string new_value)
      {
        flagHasErrorMessage = true;
        storeErrorMessage = new_value;
      }
    void unsetErrorMessage(void)
      {
        flagHasErrorMessage = false;
      }

    virtual void extraBaseConverterInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        assert(extraKeys.size() == extraValues.size());
        extraKeys.push_back(key);
        extraValues.push_back(new_component);
        enter_into_string_index(extraIndex, key, new_component);
        new_component->add_reference();
      }
    virtual void extraBaseConverterInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        assert(key != NULL);
        assert(new_component != NULL);

        JSONValue *old_field = extraBaseConverterInformationNuggetLookup(key);
        if (old_field == NULL)
          {
            extraBaseConverterInformationNuggetAppendPair(key, new_component);
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
    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "onversionRows") == 0)
                    {
                    fromJSONConversionRows(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "rrorMessage") == 0)
                    {
                    fromJSONErrorMessage(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBaseConverterInformationNuggetAppendPair(key, new_component);
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "onversionRows") == 0)
                    {
                    fromJSONConversionRows(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "rrorMessage") == 0)
                    {
                    fromJSONErrorMessage(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
        extraBaseConverterInformationNuggetSetField(key, new_component);
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
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasConversionRows);
        handler->start_pair("ConversionRows");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeConversionRows.size(); ++num1)
          {
            storeConversionRows[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasErrorMessage)
          {
            handler->start_pair("ErrorMessage");
            handler->string_value(storeErrorMessage);
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasConversionRows()))
          {
            return "When parsing the object for %what%, the \"ConversionRows\" field was missing.";
          }
        return NULL;
      }

    static BaseConverterInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BaseConverterInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BaseConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BaseConverterInformationNuggetJSON>, BaseConverterInformationNuggetJSON *, bool> generator("Type BaseConverterInformationNugget", ignore_extras);
            parse_json_value(text, "Text for BaseConverterInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BaseConverterInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BaseConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BaseConverterInformationNuggetJSON>, BaseConverterInformationNuggetJSON *, bool> generator("Type BaseConverterInformationNugget", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public InformationNuggetJSON::Generator
      {
      private:
        JSONHoldingArrayGenerator<ConversionRowJSON::Generator, RCHandle<ConversionRowJSON>, ConversionRowJSON *, bool > fieldGeneratorConversionRows;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorErrorMessage;
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
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "BaseConverter") == 0))
                throw("The key field has a value other than `BaseConverter'.");
            BaseConverterInformationNuggetJSON *result = new BaseConverterInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<BaseConverterInformationNuggetJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraBaseConverterInformationNuggetAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((BaseConverterInformationNuggetJSON *)new_result);
          }
        void finish(BaseConverterInformationNuggetJSON *result)
          {
            if (fieldGeneratorConversionRows.have_value)
              {
                result->initConversionRows();
                size_t count = fieldGeneratorConversionRows.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendConversionRows(fieldGeneratorConversionRows.value[num].referenced());
                  }
                fieldGeneratorConversionRows.value.clear();
                fieldGeneratorConversionRows.have_value = false;
              }
            else if (!(result->hasConversionRows()))
              {
                error("When parsing the object for %what%, the \"ConversionRows\" field was missing.");
              }
            if (fieldGeneratorErrorMessage.have_value)
              {
                result->setErrorMessage(fieldGeneratorErrorMessage.value);
                fieldGeneratorErrorMessage.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(BaseConverterInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "onversionRows") == 0)
                        return &fieldGeneratorConversionRows;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rrorMessage") == 0)
                        return &fieldGeneratorErrorMessage;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorConversionRows("field \"ConversionRows\" of the BaseConverterInformationNugget class", ignore_extras), fieldGeneratorErrorMessage("field \"ErrorMessage\" of the BaseConverterInformationNugget class"), unknownFieldGenerator(ignore_extras)
          {
            set_what("the BaseConverterInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorConversionRows.reset();
            fieldGeneratorErrorMessage.reset();
            InformationNuggetJSON::Generator::reset();
            unknownFieldGenerator.reset();
          }
      };
  };

#endif /* BASECONVERTERINFORMATIONNUGGETJSON_H */
