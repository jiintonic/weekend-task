/* file "SenderConfigJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef SENDERCONFIGJSON_H
#define SENDERCONFIGJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONStringGenerator.h"
#include "JSONNumberTextGenerator.h"
#include "JSONDoubleGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include "JSONBooleanGenerator.h"
#include "OInteger.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class SenderConfigJSON : public ReferenceCounted
  {
  private:
    bool flagHasPrintResponses;
    bool storePrintResponses;
    bool flagHasHTTPTimeout;
    double storeHTTPTimeout;
    std::string textStoreHTTPTimeout;
    bool flagHasFlags;
    OInteger storeFlags;

    SenderConfigJSON(const SenderConfigJSON &);
    SenderConfigJSON & operator=(const SenderConfigJSON &other);

    void  fromJSONPrintResponses(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONHTTPTimeout(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONFlags(JSONValue *json_value, bool ignore_extras = false);


  public:
    SenderConfigJSON(void);
    virtual ~SenderConfigJSON(void);
    virtual const char *getCommandSenderKind(void) const = 0;
    bool  hasPrintResponses(void) const;
    bool  getPrintResponses(void);
    const bool  getPrintResponses(void) const;
    bool  hasHTTPTimeout(void) const;
    double  getHTTPTimeout(void);
    const double  getHTTPTimeout(void) const;
    std::string  getHTTPTimeoutAsText(void) const;
    bool  hasFlags(void) const;
    OInteger  getFlags(void);
    const OInteger  getFlags(void) const;

    virtual size_t extraSenderConfigComponentCount(void) const = 0;
    virtual const char *extraSenderConfigComponentKey(size_t component_num) const = 0;
    virtual JSONValue *extraSenderConfigComponentValue(size_t component_num) = 0;
    virtual const JSONValue *extraSenderConfigComponentValue(size_t component_num) const = 0;
    virtual JSONValue *extraSenderConfigLookup(const char *field_name) = 0;
    virtual const JSONValue *extraSenderConfigLookup(const char *field_name) const = 0;

    void setPrintResponses(bool new_value)
      {
        flagHasPrintResponses = true;
        storePrintResponses = new_value;
      }
    void unsetPrintResponses(void)
      {
        flagHasPrintResponses = false;
      }
    void setHTTPTimeout(double new_value)
      {
        flagHasHTTPTimeout = true;
        if (new_value < 0.5)
            throw("The value for field HTTPTimeout of SenderConfigJSON is less than the lower bound (0.5) for that field.");
        if (new_value > 60)
            throw("The value for field HTTPTimeout of SenderConfigJSON is greater than the upper bound (60) for that field.");
        storeHTTPTimeout = new_value;
        textStoreHTTPTimeout = "";
      }
    void setHTTPTimeoutText(std::string new_value)
      {
        flagHasHTTPTimeout = true;
        if (!(JSONWriter::is_valid_number_format(new_value.c_str())))
            throw("The text value for field HTTPTimeout of SenderConfigJSON is not a valid number.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "5", "", false, "0") < 0)
            throw("The value for field HTTPTimeout of SenderConfigJSON is less than the lower bound (0.5) for that field.");
        if (JSONWriter::compare_number_text_to_repeating_fraction(new_value.c_str(), false, "60", "", false, "2") > 0)
            throw("The value for field HTTPTimeout of SenderConfigJSON is greater than the upper bound (60) for that field.");
        textStoreHTTPTimeout = new_value;
      }
    void unsetHTTPTimeout(void)
      {
        flagHasHTTPTimeout = false;
      }
    void setFlags(OInteger new_value)
      {
        flagHasFlags = true;
        if (new_value < 0)
            throw("The value for field Flags of SenderConfigJSON is less than the lower bound (0) for that field.");
        storeFlags = new_value;
      }
    void unsetFlags(void)
      {
        flagHasFlags = false;
      }

    virtual void extraSenderConfigAppendPair(const char *key, JSONValue *new_component) = 0;
    virtual void extraSenderConfigSetField(const char *key, JSONValue *new_component) = 0;

    virtual void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        handler->pair("CommandSenderKind", getCommandSenderKind());
        if (flagHasPrintResponses)
          {
            handler->start_pair("PrintResponses");
            handler->boolean_value(storePrintResponses);
          }
        if (flagHasHTTPTimeout)
          {
            handler->start_pair("HTTPTimeout");
            if (textStoreHTTPTimeout != "")
                handler->number_value(textStoreHTTPTimeout.c_str());
            else if (((double)(long int)storeHTTPTimeout) == storeHTTPTimeout)
                handler->number_value((long int)storeHTTPTimeout);
            else
                handler->number_value(storeHTTPTimeout);
          }
        if (flagHasFlags)
          {
            handler->start_pair("Flags");
            handler->number_value(storeFlags.get_o_integer());
          }
      }
    virtual const char *missing_field_error(void) const
      {
        return NULL;
      }

    static SenderConfigJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static SenderConfigJSON *from_text(const char *text, bool ignore_extras = false)
      {
        SenderConfigJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SenderConfigJSON>, SenderConfigJSON *, bool> generator("Type SenderConfig", ignore_extras);
            parse_json_value(text, "Text for SenderConfigJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static SenderConfigJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        SenderConfigJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<SenderConfigJSON>, SenderConfigJSON *, bool> generator("Type SenderConfig", ignore_extras);
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
        JSONHoldingGenerator<JSONBooleanGenerator, bool, bool > fieldGeneratorPrintResponses;
        JSONHoldingGenerator<JSONNumberTextGenerator, std::string, const char * > fieldGeneratorHTTPTimeout;
        static char lowerBoundFlags[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundFlags>, OInteger, o_integer > fieldGeneratorFlags;
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
        JSONHoldingGenerator<JSONStringGenerator, std::string, const char *> keyGenerator;


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
            if (!(keyGenerator.have_value))
                throw("The `CommandSenderKind' field is missing.");
            SenderConfigJSON *result = createForKey(keyGenerator.value.c_str(), unknownFieldGenerator.index);
            assert(result != NULL);
            RCHandle<SenderConfigJSON> result_holder = result;
            finish(result);
            size_t extra_count = unknownFieldGenerator.field_names.size();
            assert(extra_count == unknownFieldGenerator.field_values.size());
            for (size_t extra_num = 0; extra_num < extra_count; ++extra_num)
              {
                result->extraSenderConfigAppendPair(unknownFieldGenerator.field_names[extra_num].c_str(), unknownFieldGenerator.field_values[extra_num].referenced());
              }
            unknownFieldGenerator.field_names.clear();
            unknownFieldGenerator.field_values.clear();
            destroy_string_index(unknownFieldGenerator.index);
        unknownFieldGenerator.index = create_string_index();
            const char *missing_field_error = result->missing_field_error();
            if (missing_field_error != NULL)
                error(missing_field_error);
            handle_result(result);
          }
        std::string getSenderConfigJSONKey(void)
          {
            if (!(keyGenerator.have_value))
                throw("The `CommandSenderKind' field is missing.");
            return keyGenerator.value;
          }
        void finish(SenderConfigJSON *result)
          {
            if (fieldGeneratorPrintResponses.have_value)
              {
                result->setPrintResponses(fieldGeneratorPrintResponses.value);
                fieldGeneratorPrintResponses.have_value = false;
              }
            if (fieldGeneratorHTTPTimeout.have_value)
              {
                result->setHTTPTimeoutText(fieldGeneratorHTTPTimeout.value);
                fieldGeneratorHTTPTimeout.have_value = false;
              }
            if (fieldGeneratorFlags.have_value)
              {
                result->setFlags(fieldGeneratorFlags.value);
                fieldGeneratorFlags.have_value = false;
              }
          }
        virtual void handle_result(SenderConfigJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            switch ((unsigned char)(field_name[0]))
              {
                case 'C':
                    if (strcmp(&(field_name[1]), "ommandSenderKind") == 0)
                        {
                        keyGenerator.reset();
                        return &keyGenerator;
                        }
                    break;
                case 'F':
                    if (strcmp(&(field_name[1]), "lags") == 0)
                        return &fieldGeneratorFlags;
                    break;
                case 'H':
                    if (strcmp(&(field_name[1]), "TTPTimeout") == 0)
                        return &fieldGeneratorHTTPTimeout;
                    break;
                case 'P':
                    if (strcmp(&(field_name[1]), "rintResponses") == 0)
                        return &fieldGeneratorPrintResponses;
                    break;
                default:
                    break;
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorPrintResponses("field \"PrintResponses\" of the SenderConfig class"), fieldGeneratorHTTPTimeout("field \"HTTPTimeout\" of the SenderConfig class"), fieldGeneratorFlags("field \"Flags\" of the SenderConfig class"), unknownFieldGenerator(ignore_extras), keyGenerator("key field \"CommandSenderKind\" of the SenderConfig class")
          {
            set_what("the SenderConfig class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorPrintResponses.reset();
            fieldGeneratorHTTPTimeout.reset();
            fieldGeneratorFlags.reset();
            JSONObjectGenerator::reset();
            unknownFieldGenerator.reset();
          }
      };
    static SenderConfigJSON *createForKey(const char *key, string_index *other_field_index);
  };

#endif /* SENDERCONFIGJSON_H */
