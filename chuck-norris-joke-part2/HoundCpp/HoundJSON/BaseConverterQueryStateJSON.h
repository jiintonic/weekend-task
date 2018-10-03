/* file "BaseConverterQueryStateJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef BASECONVERTERQUERYSTATEJSON_H
#define BASECONVERTERQUERYSTATEJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class BaseConverterQueryStateJSON : public ReferenceCounted
  {
  private:
    bool flagHasBases;
    std::vector< std::string > storeBases;

    BaseConverterQueryStateJSON(const BaseConverterQueryStateJSON &);
    BaseConverterQueryStateJSON & operator=(const BaseConverterQueryStateJSON &other);

    void  fromJSONBases(JSONValue *json_value, bool ignore_extras = false);


  public:
    BaseConverterQueryStateJSON(void);
    virtual ~BaseConverterQueryStateJSON(void);
    bool  hasBases(void) const;
    size_t  countOfBases(void) const;
    std::string  elementOfBases(size_t element_num);
    const std::string  elementOfBases(size_t element_num) const;
    std::vector< std::string >  getBases(void);
    const std::vector< std::string >  getBases(void) const;


    void initBases(void)
      {
        flagHasBases = true;
        storeBases.clear();
      }
    void appendBases(std::string to_append)
      {
        if (!flagHasBases)
          {
            flagHasBases = true;
            storeBases.clear();
          }
        assert(flagHasBases);
        storeBases.push_back(to_append);
      }
    void unsetBases(void)
      {
        flagHasBases = false;
        storeBases.clear();
      }


    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasBases);
        handler->start_pair("Bases");
        handler->start_array();
        for (size_t num1 = 0; num1 < storeBases.size(); ++num1)
          {
            handler->string_value(storeBases[num1]);
          }
        handler->finish_array();
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasBases()))
          {
            return "When parsing the object for %what%, the \"Bases\" field was missing.";
          }
        return NULL;
      }

    static BaseConverterQueryStateJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static BaseConverterQueryStateJSON *from_text(const char *text, bool ignore_extras = false)
      {
        BaseConverterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BaseConverterQueryStateJSON>, BaseConverterQueryStateJSON *, bool> generator("Type BaseConverterQueryState", ignore_extras);
            parse_json_value(text, "Text for BaseConverterQueryStateJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static BaseConverterQueryStateJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        BaseConverterQueryStateJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<BaseConverterQueryStateJSON>, BaseConverterQueryStateJSON *, bool> generator("Type BaseConverterQueryState", ignore_extras);
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
        JSONHoldingArrayGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorBases;


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
            BaseConverterQueryStateJSON *result = new BaseConverterQueryStateJSON();
            assert(result != NULL);
            RCHandle<BaseConverterQueryStateJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(BaseConverterQueryStateJSON *result)
          {
            if (fieldGeneratorBases.have_value)
              {
                result->initBases();
                size_t count = fieldGeneratorBases.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendBases(fieldGeneratorBases.value[num]);
                  }
                fieldGeneratorBases.value.clear();
                fieldGeneratorBases.have_value = false;
              }
            else if (!(result->hasBases()))
              {
                error("When parsing the object for %what%, the \"Bases\" field was missing.");
              }
          }
        virtual void handle_result(BaseConverterQueryStateJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "Bases") == 0)
                return &fieldGeneratorBases;
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorBases("field \"Bases\" of the BaseConverterQueryState class")
          {
            set_what("the BaseConverterQueryState class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorBases.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* BASECONVERTERQUERYSTATEJSON_H */
