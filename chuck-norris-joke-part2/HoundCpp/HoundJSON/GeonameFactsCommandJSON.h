/* file "GeonameFactsCommandJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEFACTSCOMMANDJSON_H
#define GEONAMEFACTSCOMMANDJSON_H

#pragma interface

#include "CommandResultJSON.h"
#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONStringGenerator.h"
#include <vector>
#include <string>
#include "GeonameObjectJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GeonameFactsCommandJSON : public CommandResultJSON
  {
  public:
    class TypeNativeDataJSON : public ReferenceCounted
      {
      private:
        bool flagHasTextResponse;
        std::string storeTextResponse;
        bool flagHasResults;
        std::vector< GeonameObjectJSON * > storeResults;

        TypeNativeDataJSON(const TypeNativeDataJSON &);
        TypeNativeDataJSON & operator=(const TypeNativeDataJSON &other);

        void  fromJSONTextResponse(JSONValue *json_value, bool ignore_extras = false);

        void  fromJSONResults(JSONValue *json_value, bool ignore_extras = false);


      public:
        TypeNativeDataJSON(void);
        virtual ~TypeNativeDataJSON(void);
        bool  hasTextResponse(void) const;
        std::string  getTextResponse(void);
        const std::string  getTextResponse(void) const;
        bool  hasResults(void) const;
        size_t  countOfResults(void) const;
        GeonameObjectJSON *  elementOfResults(size_t element_num);
        const GeonameObjectJSON *  elementOfResults(size_t element_num) const;
        std::vector< GeonameObjectJSON * >  getResults(void);
        const std::vector< GeonameObjectJSON * >  getResults(void) const;


        void setTextResponse(std::string new_value)
          {
            flagHasTextResponse = true;
            storeTextResponse = new_value;
          }
        void unsetTextResponse(void)
          {
            flagHasTextResponse = false;
          }
        void initResults(void)
          {
            if (flagHasResults)
              {
                for (size_t num2 = 0; num2 < storeResults.size(); ++num2)
                  {
                    storeResults[num2]->remove_reference();
                  }
              }
            flagHasResults = true;
            storeResults.clear();
          }
        void appendResults(GeonameObjectJSON * to_append)
          {
            if (!flagHasResults)
              {
                flagHasResults = true;
                storeResults.clear();
              }
            assert(flagHasResults);
            to_append->add_reference();
            storeResults.push_back(to_append);
          }
        void unsetResults(void)
          {
            if (flagHasResults)
              {
                for (size_t num3 = 0; num3 < storeResults.size(); ++num3)
                  {
                    storeResults[num3]->remove_reference();
                  }
              }
            flagHasResults = false;
            storeResults.clear();
          }


        void write_as_json(JSONHandler *handler) const
          {
            handler->start_object();
            write_fields_as_json(handler);
            handler->finish_object();
          }

        virtual void write_fields_as_json(JSONHandler *handler) const
          {
            assert(flagHasTextResponse);
            handler->start_pair("TextResponse");
            handler->string_value(storeTextResponse);
            assert(flagHasResults);
            handler->start_pair("Results");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeResults.size(); ++num1)
              {
                storeResults[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
        virtual const char *missing_field_error(void) const
          {
            if (!(hasTextResponse()))
              {
                return "When parsing the object for %what%, the \"TextResponse\" field was missing.";
              }
            if (!(hasResults()))
              {
                return "When parsing the object for %what%, the \"Results\" field was missing.";
              }
            return NULL;
          }

        static TypeNativeDataJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
        static TypeNativeDataJSON *from_text(const char *text, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
                parse_json_value(text, "Text for TypeNativeDataJSON", &generator);
                assert(generator.have_value);
                result = generator.value.referenced();
                result->add_reference();
              };
            result->remove_reference_no_delete();
            return result;
          }
        static TypeNativeDataJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
          {
            TypeNativeDataJSON *result;
              {
                JSONHoldingGenerator<Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool> generator("Type TypeNativeData", ignore_extras);
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
            JSONHoldingGenerator<JSONStringGenerator, std::string, const char * > fieldGeneratorTextResponse;
            JSONHoldingArrayGenerator<GeonameObjectJSON::Generator, RCHandle<GeonameObjectJSON>, GeonameObjectJSON *, bool > fieldGeneratorResults;


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
                TypeNativeDataJSON *result = new TypeNativeDataJSON();
                assert(result != NULL);
                RCHandle<TypeNativeDataJSON> result_holder = result;
                finish(result);
                handle_result(result);
              }
            void finish(TypeNativeDataJSON *result)
              {
                if (fieldGeneratorTextResponse.have_value)
                  {
                    result->setTextResponse(fieldGeneratorTextResponse.value);
                    fieldGeneratorTextResponse.have_value = false;
                  }
                else if (!(result->hasTextResponse()))
                  {
                    error("When parsing the object for %what%, the \"TextResponse\" field was missing.");
                  }
                if (fieldGeneratorResults.have_value)
                  {
                    result->initResults();
                    size_t count = fieldGeneratorResults.value.size();
                    for (size_t num = 0; num < count; ++num)
                      {
                        result->appendResults(fieldGeneratorResults.value[num].referenced());
                      }
                    fieldGeneratorResults.value.clear();
                    fieldGeneratorResults.have_value = false;
                  }
                else if (!(result->hasResults()))
                  {
                    error("When parsing the object for %what%, the \"Results\" field was missing.");
                  }
              }
            virtual void handle_result(TypeNativeDataJSON *new_result) = 0;
            virtual JSONHandler *start_known_field(const char *field_name)
              {
                switch ((unsigned char)(field_name[0]))
                  {
                    case 'R':
                        if (strcmp(&(field_name[1]), "esults") == 0)
                            return &fieldGeneratorResults;
                        break;
                    case 'T':
                        if (strcmp(&(field_name[1]), "extResponse") == 0)
                            return &fieldGeneratorTextResponse;
                        break;
                    default:
                        break;
                  }
                return NULL;
              }

          public:
            Generator(bool ignore_extras = false) : fieldGeneratorTextResponse("field \"TextResponse\" of the TypeNativeData class"), fieldGeneratorResults("field \"Results\" of the TypeNativeData class", ignore_extras)
              {
                set_what("the TypeNativeData class");
              }
            ~Generator(void)
              {
              }

            void reset(void)
              {
                fieldGeneratorTextResponse.reset();
                fieldGeneratorResults.reset();
                JSONObjectGenerator::reset();
              }
          };
      };

  private:
    bool flagHasNativeData;
    TypeNativeDataJSON * storeNativeData;

    GeonameFactsCommandJSON(const GeonameFactsCommandJSON &);
    GeonameFactsCommandJSON & operator=(const GeonameFactsCommandJSON &other);

    JSONValue * extraNativeDataToJSON(void) const;

    void  fromJSONNativeData(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameFactsCommandJSON(void);
    virtual ~GeonameFactsCommandJSON(void);
    const char * getCommandKind(void) const;
    bool  hasNativeData(void) const;
    TypeNativeDataJSON *  getNativeData(void);
    const TypeNativeDataJSON *  getNativeData(void) const;

    size_t extraCommandResultComponentCount(void) const
      {
        size_t result = 0;
        if (flagHasNativeData)
            ++result;
        return result;
      }
    const char *extraCommandResultComponentKey(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return "NativeData";
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultComponentValue(size_t component_num)
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    const JSONValue *extraCommandResultComponentValue(size_t component_num) const
      {
        size_t remainder = component_num;
        if (flagHasNativeData)
          {
            if (remainder == 0)
                return extraNativeDataToJSON();
            --remainder;
          }
        assert(false);
        return NULL;
      }
    JSONValue *extraCommandResultLookup(const char *field_name)
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }
    const JSONValue *extraCommandResultLookup(const char *field_name) const
      {
        if (strcmp(field_name, "NativeData") == 0)
            return (flagHasNativeData ? extraNativeDataToJSON() : NULL);
        return NULL;
      }

    void setNativeData(TypeNativeDataJSON * new_value)
      {
        new_value->add_reference();
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = true;
        storeNativeData = new_value;
      }
    void unsetNativeData(void)
      {
        if (flagHasNativeData)
          {
            storeNativeData->remove_reference();
          }
        flagHasNativeData = false;
      }

    void extraCommandResultAppendPair(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
            }
      }
    void extraCommandResultSetField(const char *key, JSONValue *new_component)
      {
        if (strcmp(key, "NativeData") == 0)
            {
            fromJSONNativeData(new_component, false);
            return;
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
        CommandResultJSON::write_fields_as_json(handler);
        assert(flagHasNativeData);
        handler->start_pair("NativeData");
        storeNativeData->write_as_json(handler);
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasNativeData()))
          {
            return "When parsing the object for %what%, the \"NativeData\" field was missing.";
          }
        return NULL;
      }

    static GeonameFactsCommandJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameFactsCommandJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameFactsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsCommandJSON>, GeonameFactsCommandJSON *, bool> generator("Type GeonameFactsCommand", ignore_extras);
            parse_json_value(text, "Text for GeonameFactsCommandJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameFactsCommandJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameFactsCommandJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameFactsCommandJSON>, GeonameFactsCommandJSON *, bool> generator("Type GeonameFactsCommand", ignore_extras);
            parse_json_value(fp, file_name, &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    class Generator : public CommandResultJSON::Generator
      {
      private:
        JSONHoldingGenerator<TypeNativeDataJSON::Generator, RCHandle<TypeNativeDataJSON>, TypeNativeDataJSON *, bool > fieldGeneratorNativeData;


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
            if (!(strcmp(getCommandResultJSONKey().c_str(), "GeonameFactsCommand") == 0))
                throw("The key field has a value other than `GeonameFactsCommand'.");
            GeonameFactsCommandJSON *result = new GeonameFactsCommandJSON();
            assert(result != NULL);
            RCHandle<GeonameFactsCommandJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void handle_result(CommandResultJSON *new_result)
          {
            handle_result((GeonameFactsCommandJSON *)new_result);
          }
        void finish(GeonameFactsCommandJSON *result)
          {
            if (fieldGeneratorNativeData.have_value)
              {
                result->setNativeData(fieldGeneratorNativeData.value.referenced());
                fieldGeneratorNativeData.have_value = false;
              }
            else if (!(result->hasNativeData()))
              {
                error("When parsing the object for %what%, the \"NativeData\" field was missing.");
              }
            CommandResultJSON::Generator::finish(result);
          }
        virtual void handle_result(GeonameFactsCommandJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strcmp(field_name, "NativeData") == 0)
                return &fieldGeneratorNativeData;
            return CommandResultJSON::Generator::start_known_field(field_name);
          }

      public:
        Generator(bool ignore_extras = false) : CommandResultJSON::Generator(ignore_extras), fieldGeneratorNativeData("field \"NativeData\" of the GeonameFactsCommand class", ignore_extras)
          {
            set_what("the GeonameFactsCommand class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorNativeData.reset();
            CommandResultJSON::Generator::reset();
          }
      };
  };

#endif /* GEONAMEFACTSCOMMANDJSON_H */
