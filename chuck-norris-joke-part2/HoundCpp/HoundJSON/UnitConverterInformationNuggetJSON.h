/* file "UnitConverterInformationNuggetJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef UNITCONVERTERINFORMATIONNUGGETJSON_H
#define UNITCONVERTERINFORMATIONNUGGETJSON_H

#pragma interface

#include "InformationNuggetJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include <vector>
#include "UnitConversionJSON.h"
#include "UnitConversionErrorJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class UnitConverterInformationNuggetJSON : public InformationNuggetJSON
  {
  private:
    bool flagHasConversions;
    std::vector< UnitConversionJSON * > storeConversions;
    bool flagHasErrors;
    std::vector< UnitConversionErrorJSON * > storeErrors;

    UnitConverterInformationNuggetJSON(const UnitConverterInformationNuggetJSON &);
    UnitConverterInformationNuggetJSON & operator=(const UnitConverterInformationNuggetJSON &other);

    JSONValue * extraConversionsToJSON(void) const;
    JSONValue * extraErrorsToJSON(void) const;

    void  fromJSONConversions(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONErrors(JSONValue *json_value, bool ignore_extras = false);


  public:
    UnitConverterInformationNuggetJSON(void);
    virtual ~UnitConverterInformationNuggetJSON(void);
    const char * getNuggetKind(void) const;
    bool  hasConversions(void) const;
    size_t  countOfConversions(void) const;
    UnitConversionJSON *  elementOfConversions(size_t element_num);
    const UnitConversionJSON *  elementOfConversions(size_t element_num) const;
    std::vector< UnitConversionJSON * >  getConversions(void);
    const std::vector< UnitConversionJSON * >  getConversions(void) const;
    bool  hasErrors(void) const;
    size_t  countOfErrors(void) const;
    UnitConversionErrorJSON *  elementOfErrors(size_t element_num);
    const UnitConversionErrorJSON *  elementOfErrors(size_t element_num) const;
    std::vector< UnitConversionErrorJSON * >  getErrors(void);
    const std::vector< UnitConversionErrorJSON * >  getErrors(void) const;

    size_t extraInformationNuggetComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasConversions)
            ++result;
        if (flagHasErrors)
            ++result;
        return result;
      }
    const char *extraInformationNuggetComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return "Conversions";
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return "Errors";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraInformationNuggetComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return extraConversionsToJSON();
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraInformationNuggetComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasConversions)
          {
            if (remainder == 0)
                return extraConversionsToJSON();
            --remainder;
          }
        if (flagHasErrors)
          {
            if (remainder == 0)
                return extraErrorsToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraInformationNuggetLookup(const char *field_name)
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "onversions") == 0)
                    return (flagHasConversions ? extraConversionsToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "rrors") == 0)
                    return (flagHasErrors ? extraErrorsToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }
    const JSONValue *extraInformationNuggetLookup(const char *field_name) const
      {
        switch ((unsigned char)(field_name[0]))
          {
            case 'C':
                if (strcmp(&(field_name[1]), "onversions") == 0)
                    return (flagHasConversions ? extraConversionsToJSON() : NULL);
                break;
            case 'E':
                if (strcmp(&(field_name[1]), "rrors") == 0)
                    return (flagHasErrors ? extraErrorsToJSON() : NULL);
                break;
            default:
                break;
          }
        return NULL;
      }

    void initConversions(void)
      {
        if (flagHasConversions)
          {
            for (size_t num3 = 0; num3 < storeConversions.size(); ++num3)
              {
                storeConversions[num3]->remove_reference();
              }
          }
        flagHasConversions = true;
        storeConversions.clear();
      }
    void appendConversions(UnitConversionJSON * to_append)
      {
        if (!flagHasConversions)
          {
            flagHasConversions = true;
            storeConversions.clear();
          }
        assert(flagHasConversions);
        to_append->add_reference();
        storeConversions.push_back(to_append);
      }
    void unsetConversions(void)
      {
        if (flagHasConversions)
          {
            for (size_t num4 = 0; num4 < storeConversions.size(); ++num4)
              {
                storeConversions[num4]->remove_reference();
              }
          }
        flagHasConversions = false;
        storeConversions.clear();
      }
    void initErrors(void)
      {
        if (flagHasErrors)
          {
            for (size_t num5 = 0; num5 < storeErrors.size(); ++num5)
              {
                storeErrors[num5]->remove_reference();
              }
          }
        flagHasErrors = true;
        storeErrors.clear();
      }
    void appendErrors(UnitConversionErrorJSON * to_append)
      {
        if (!flagHasErrors)
          {
            flagHasErrors = true;
            storeErrors.clear();
          }
        assert(flagHasErrors);
        to_append->add_reference();
        storeErrors.push_back(to_append);
      }
    void unsetErrors(void)
      {
        if (flagHasErrors)
          {
            for (size_t num6 = 0; num6 < storeErrors.size(); ++num6)
              {
                storeErrors[num6]->remove_reference();
              }
          }
        flagHasErrors = false;
        storeErrors.clear();
      }

    void extraInformationNuggetAppendPair(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "onversions") == 0)
                    {
                    fromJSONConversions(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "rrors") == 0)
                    {
                    fromJSONErrors(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }
    void extraInformationNuggetSetField(const char *key, JSONValue *new_component)
      {
        switch ((unsigned char)(key[0]))
          {
            case 'C':
                if (strcmp(&(key[1]), "onversions") == 0)
                    {
                    fromJSONConversions(new_component, false);
                    return;
                    }
                break;
            case 'E':
                if (strcmp(&(key[1]), "rrors") == 0)
                    {
                    fromJSONErrors(new_component, false);
                    return;
                    }
                break;
            default:
                break;
          }
      }

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        InformationNuggetJSON::write_fields_as_json(handler);
        assert(flagHasConversions);
        handler->start_pair("Conversions");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeConversions.size(); ++num1)
          {
            storeConversions[num1]->write_as_json(handler);
          }
        handler->finish_array();
        if (flagHasErrors)
          {
            handler->start_pair("Errors");
            assert(storeErrors.size() >= 1);
            handler->start_array();
            for (size_t num2 = 0; num2 < storeErrors.size(); ++num2)
              {
                storeErrors[num2]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasConversions()))
          {
            return "When parsing the object for %what%, the \"Conversions\" field was missing.";
          }
        return NULL;
      }

    static UnitConverterInformationNuggetJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static UnitConverterInformationNuggetJSON *from_text(const char *text, bool ignore_extras = false)
      {
        UnitConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConverterInformationNuggetJSON>, UnitConverterInformationNuggetJSON *, bool> generator("Type UnitConverterInformationNugget", ignore_extras);
            parse_json_value(text, "Text for UnitConverterInformationNuggetJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static UnitConverterInformationNuggetJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        UnitConverterInformationNuggetJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<UnitConverterInformationNuggetJSON>, UnitConverterInformationNuggetJSON *, bool> generator("Type UnitConverterInformationNugget", ignore_extras);
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
        JSONHoldingArrayGenerator<UnitConversionJSON::Generator, RCHandle<UnitConversionJSON>, UnitConversionJSON *, bool > fieldGeneratorConversions;
        JSONHoldingArrayGenerator<UnitConversionErrorJSON::Generator, RCHandle<UnitConversionErrorJSON>, UnitConversionErrorJSON *, bool > fieldGeneratorErrors;


      protected:
        void start(void)
          {
          }
        JSONHandler *start_field(const char *field_name)
          {
            JSONHandler *result = start_known_field(field_name);
            if (result != NULL)
                return result;
            std::string message("");
            message = message + "Field \"" + field_name + "\" found for a type that doesn't allow extra fields.";
            char *message_chars = (char *)(malloc(strlen(message.c_str()) + 1));
            strcpy(message_chars, message.c_str());
            throw(message_chars);
          }
        void finish_field(const char *field_name, JSONHandler *field_handler)
          {
          }
        void finish(void)
          {
            if (!(strcmp(getInformationNuggetJSONKey().c_str(), "UnitConverter") == 0))
                throw("The key field has a value other than `UnitConverter'.");
            UnitConverterInformationNuggetJSON *result = new UnitConverterInformationNuggetJSON();
            assert(result != NULL);
            RCHandle<UnitConverterInformationNuggetJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(InformationNuggetJSON *new_result)
          {
            handle_result((UnitConverterInformationNuggetJSON *)new_result);
          }
        void finish(UnitConverterInformationNuggetJSON *result)
          {
            if (fieldGeneratorConversions.have_value)
              {
                result->initConversions();
                size_t count = fieldGeneratorConversions.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendConversions(fieldGeneratorConversions.value[num].referenced());
                  }
                fieldGeneratorConversions.value.clear();
                fieldGeneratorConversions.have_value = false;
              }
            else if (!(result->hasConversions()))
              {
                error("When parsing the object for %what%, the \"Conversions\" field was missing.");
              }
            if (fieldGeneratorErrors.have_value)
              {
                result->initErrors();
                size_t count = fieldGeneratorErrors.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendErrors(fieldGeneratorErrors.value[num].referenced());
                  }
                fieldGeneratorErrors.value.clear();
                fieldGeneratorErrors.have_value = false;
              }
            InformationNuggetJSON::Generator::finish(result);
          }
        virtual void handle_result(UnitConverterInformationNuggetJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "onversions") == 0)
                        return &fieldGeneratorConversions;
                    break;
                case 'E':
                    if (strcmp(&(field_name[1]), "rrors") == 0)
                        return &fieldGeneratorErrors;
                    break;
                default:
                    break;
              }
            return InformationNuggetJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : InformationNuggetJSON::Generator(ignore_extras), fieldGeneratorConversions("field \"Conversions\" of the UnitConverterInformationNugget class", ignore_extras), fieldGeneratorErrors("field \"Errors\" of the UnitConverterInformationNugget class", ignore_extras)
          {
            set_what("the UnitConverterInformationNugget class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorConversions.reset();
            fieldGeneratorErrors.reset();
            InformationNuggetJSON::Generator::reset();
          }
      };
  };

#endif /* UNITCONVERTERINFORMATIONNUGGETJSON_H */
