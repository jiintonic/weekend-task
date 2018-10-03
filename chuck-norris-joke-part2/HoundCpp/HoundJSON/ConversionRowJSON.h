/* file "ConversionRowJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef CONVERSIONROWJSON_H
#define CONVERSIONROWJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class ConversionRowJSON : public ReferenceCounted
  {
  private:
    bool flagHasStringToConvert;
    std::string storeStringToConvert;
    bool flagHasInputBaseSmallName;
    std::string storeInputBaseSmallName;
    bool flagHasInputBaseFullName;
    std::string storeInputBaseFullName;
    bool flagHasBaseSmallName;
    std::string storeBaseSmallName;
    bool flagHasBaseFullName;
    std::string storeBaseFullName;
    bool flagHasConvertedNumber;
    std::string storeConvertedNumber;
    bool flagHasConvertedNumberSpoken;
    std::string storeConvertedNumberSpoken;

    ConversionRowJSON(const ConversionRowJSON &);
    ConversionRowJSON & operator=(const ConversionRowJSON &other);

    void  fromJSONStringToConvert(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputBaseSmallName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONInputBaseFullName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBaseSmallName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONBaseFullName(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConvertedNumber(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONConvertedNumberSpoken(JSONValue *json_value, bool ignore_extras = false);


  public:
    ConversionRowJSON(void);
    virtual ~ConversionRowJSON(void);
    bool  hasStringToConvert(void) const;
    std::string  getStringToConvert(void);
    const std::string  getStringToConvert(void) const;
    bool  hasInputBaseSmallName(void) const;
    std::string  getInputBaseSmallName(void);
    const std::string  getInputBaseSmallName(void) const;
    bool  hasInputBaseFullName(void) const;
    std::string  getInputBaseFullName(void);
    const std::string  getInputBaseFullName(void) const;
    bool  hasBaseSmallName(void) const;
    std::string  getBaseSmallName(void);
    const std::string  getBaseSmallName(void) const;
    bool  hasBaseFullName(void) const;
    std::string  getBaseFullName(void);
    const std::string  getBaseFullName(void) const;
    bool  hasConvertedNumber(void) const;
    std::string  getConvertedNumber(void);
    const std::string  getConvertedNumber(void) const;
    bool  hasConvertedNumberSpoken(void) const;
    std::string  getConvertedNumberSpoken(void);
    const std::string  getConvertedNumberSpoken(void) const;


    void setStringToConvert(std::string new_value)
      {
        flagHasStringToConvert = true;
        storeStringToConvert = new_value;
      }
    void unsetStringToConvert(void)
      {
        flagHasStringToConvert = false;
      }
    void setInputBaseSmallName(std::string new_value)
      {
        flagHasInputBaseSmallName = true;
        storeInputBaseSmallName = new_value;
      }
    void unsetInputBaseSmallName(void)
      {
        flagHasInputBaseSmallName = false;
      }
    void setInputBaseFullName(std::string new_value)
      {
        flagHasInputBaseFullName = true;
        storeInputBaseFullName = new_value;
      }
    void unsetInputBaseFullName(void)
      {
        flagHasInputBaseFullName = false;
      }
    void setBaseSmallName(std::string new_value)
      {
        flagHasBaseSmallName = true;
        storeBaseSmallName = new_value;
      }
    void unsetBaseSmallName(void)
      {
        flagHasBaseSmallName = false;
      }
    void setBaseFullName(std::string new_value)
      {
        flagHasBaseFullName = true;
        storeBaseFullName = new_value;
      }
    void unsetBaseFullName(void)
      {
        flagHasBaseFullName = false;
      }
    void setConvertedNumber(std::string new_value)
      {
        flagHasConvertedNumber = true;
        storeConvertedNumber = new_value;
      }
    void unsetConvertedNumber(void)
      {
        flagHasConvertedNumber = false;
      }
    void setConvertedNumberSpoken(std::string new_value)
      {
        flagHasConvertedNumberSpoken = true;
        storeConvertedNumberSpoken = new_value;
      }
    void unsetConvertedNumberSpoken(void)
      {
        flagHasConvertedNumberSpoken = false;
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasStringToConvert);
        handler->start_pair("StringToConvert");
        handler->string_value(storeStringToConvert);
        assert(flagHasInputBaseSmallName);
        handler->start_pair("InputBaseSmallName");
        handler->string_value(storeInputBaseSmallName);
        assert(flagHasInputBaseFullName);
        handler->start_pair("InputBaseFullName");
        handler->string_value(storeInputBaseFullName);
        assert(flagHasBaseSmallName);
        handler->start_pair("BaseSmallName");
        handler->string_value(storeBaseSmallName);
        assert(flagHasBaseFullName);
        handler->start_pair("BaseFullName");
        handler->string_value(storeBaseFullName);
        assert(flagHasConvertedNumber);
        handler->start_pair("ConvertedNumber");
        handler->string_value(storeConvertedNumber);
        assert(flagHasConvertedNumberSpoken);
        handler->start_pair("ConvertedNumberSpoken");
        handler->string_value(storeConvertedNumberSpoken);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasStringToConvert()))
          {
            return "When parsing the object for %what%, the \"StringToConvert\" field was missing.";
          }
        if (!(hasInputBaseSmallName()))
          {
            return "When parsing the object for %what%, the \"InputBaseSmallName\" field was missing.";
          }
        if (!(hasInputBaseFullName()))
          {
            return "When parsing the object for %what%, the \"InputBaseFullName\" field was missing.";
          }
        if (!(hasBaseSmallName()))
          {
            return "When parsing the object for %what%, the \"BaseSmallName\" field was missing.";
          }
        if (!(hasBaseFullName()))
          {
            return "When parsing the object for %what%, the \"BaseFullName\" field was missing.";
          }
        if (!(hasConvertedNumber()))
          {
            return "When parsing the object for %what%, the \"ConvertedNumber\" field was missing.";
          }
        if (!(hasConvertedNumberSpoken()))
          {
            return "When parsing the object for %what%, the \"ConvertedNumberSpoken\" field was missing.";
          }
        return NULL;
      }

    static ConversionRowJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static ConversionRowJSON *from_text(const char *text, bool ignore_extras = false)
      {
        ConversionRowJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ConversionRowJSON>, ConversionRowJSON *, bool> generator("Type ConversionRow", ignore_extras);
            parse_json_value(text, "Text for ConversionRowJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static ConversionRowJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        ConversionRowJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<ConversionRowJSON>, ConversionRowJSON *, bool> generator("Type ConversionRow", ignore_extras);
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorStringToConvert;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputBaseSmallName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorInputBaseFullName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBaseSmallName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBaseFullName;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorConvertedNumber;
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorConvertedNumberSpoken;


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
            ConversionRowJSON *result = new ConversionRowJSON();
            assert(result != NULL);
            RCHandle<ConversionRowJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(ConversionRowJSON *result)
          {
            if (fieldGeneratorStringToConvert.have_value)
              {
                result->setStringToConvert(fieldGeneratorStringToConvert.value);
                fieldGeneratorStringToConvert.have_value = false;
              }
            else if (!(result->hasStringToConvert()))
              {
                error("When parsing the object for %what%, the \"StringToConvert\" field was missing.");
              }
            if (fieldGeneratorInputBaseSmallName.have_value)
              {
                result->setInputBaseSmallName(fieldGeneratorInputBaseSmallName.value);
                fieldGeneratorInputBaseSmallName.have_value = false;
              }
            else if (!(result->hasInputBaseSmallName()))
              {
                error("When parsing the object for %what%, the \"InputBaseSmallName\" field was missing.");
              }
            if (fieldGeneratorInputBaseFullName.have_value)
              {
                result->setInputBaseFullName(fieldGeneratorInputBaseFullName.value);
                fieldGeneratorInputBaseFullName.have_value = false;
              }
            else if (!(result->hasInputBaseFullName()))
              {
                error("When parsing the object for %what%, the \"InputBaseFullName\" field was missing.");
              }
            if (fieldGeneratorBaseSmallName.have_value)
              {
                result->setBaseSmallName(fieldGeneratorBaseSmallName.value);
                fieldGeneratorBaseSmallName.have_value = false;
              }
            else if (!(result->hasBaseSmallName()))
              {
                error("When parsing the object for %what%, the \"BaseSmallName\" field was missing.");
              }
            if (fieldGeneratorBaseFullName.have_value)
              {
                result->setBaseFullName(fieldGeneratorBaseFullName.value);
                fieldGeneratorBaseFullName.have_value = false;
              }
            else if (!(result->hasBaseFullName()))
              {
                error("When parsing the object for %what%, the \"BaseFullName\" field was missing.");
              }
            if (fieldGeneratorConvertedNumber.have_value)
              {
                result->setConvertedNumber(fieldGeneratorConvertedNumber.value);
                fieldGeneratorConvertedNumber.have_value = false;
              }
            else if (!(result->hasConvertedNumber()))
              {
                error("When parsing the object for %what%, the \"ConvertedNumber\" field was missing.");
              }
            if (fieldGeneratorConvertedNumberSpoken.have_value)
              {
                result->setConvertedNumberSpoken(fieldGeneratorConvertedNumberSpoken.value);
                fieldGeneratorConvertedNumberSpoken.have_value = false;
              }
            else if (!(result->hasConvertedNumberSpoken()))
              {
                error("When parsing the object for %what%, the \"ConvertedNumberSpoken\" field was missing.");
              }
          }
        virtual void handle_result(ConversionRowJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'B':
                    if (strncmp(&(field_name[1]), "ase", 3) == 0)
                      {
                        switch ((unsigned char)(field_name[4]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[5]), "ullName") == 0)
                                    return &fieldGeneratorBaseFullName;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[5]), "mallName") == 0)
                                    return &fieldGeneratorBaseSmallName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'C':
                    if (strncmp(&(field_name[1]), "onvertedNumber", 14) == 0)
                      {
                        switch ((unsigned char)(field_name[15]))
                          {
                            case 0:
                                return &fieldGeneratorConvertedNumber;
                            case 'S':
                                if (strcmp(&(field_name[16]), "poken") == 0)
                                    return &fieldGeneratorConvertedNumberSpoken;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'I':
                    if (strncmp(&(field_name[1]), "nputBase", 8) == 0)
                      {
                        switch ((unsigned char)(field_name[9]))
                          {
                            case 'F':
                                if (strcmp(&(field_name[10]), "ullName") == 0)
                                    return &fieldGeneratorInputBaseFullName;
                                break;
                            case 'S':
                                if (strcmp(&(field_name[10]), "mallName") == 0)
                                    return &fieldGeneratorInputBaseSmallName;
                                break;
                            default:
                                break;
                          }
                      }
                    break;
                case 'S':
                    if (strcmp(&(field_name[1]), "tringToConvert") == 0)
                        return &fieldGeneratorStringToConvert;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorStringToConvert("field \"StringToConvert\" of the ConversionRow class"), fieldGeneratorInputBaseSmallName("field \"InputBaseSmallName\" of the ConversionRow class"), fieldGeneratorInputBaseFullName("field \"InputBaseFullName\" of the ConversionRow class"), fieldGeneratorBaseSmallName("field \"BaseSmallName\" of the ConversionRow class"), fieldGeneratorBaseFullName("field \"BaseFullName\" of the ConversionRow class"), fieldGeneratorConvertedNumber("field \"ConvertedNumber\" of the ConversionRow class"), fieldGeneratorConvertedNumberSpoken("field \"ConvertedNumberSpoken\" of the ConversionRow class")
          {
            set_what("the ConversionRow class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorStringToConvert.reset();
            fieldGeneratorInputBaseSmallName.reset();
            fieldGeneratorInputBaseFullName.reset();
            fieldGeneratorBaseSmallName.reset();
            fieldGeneratorBaseFullName.reset();
            fieldGeneratorConvertedNumber.reset();
            fieldGeneratorConvertedNumberSpoken.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* CONVERSIONROWJSON_H */
