/* file "GeonameAttributeWithArgumentsJSON.h" */

/* Generated automatically by Classy JSON. */


#ifndef GEONAMEATTRIBUTEWITHARGUMENTSJSON_H
#define GEONAMEATTRIBUTEWITHARGUMENTSJSON_H

#pragma interface

#include "JSONRep.h"
#include "JSONHoldingGenerator.h"
#include "JSONObjectGenerator.h"
#include "JSONHoldingArrayGenerator.h"
#include "JSONIntegerLowerBoundOnlyGenerator.h"
#include <vector>
#include "OInteger.h"
#include "GeonameAttributeArgumentJSON.h"
#include "JSONHandler.h"
#include "JSONCheckingHandler.h"
#include "ReferenceCounted.h"
#include "RCHandle.h"
#include "JSONParse.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


class GeonameAttributeWithArgumentsJSON : public ReferenceCounted
  {
  private:
    bool flagHasAttributeID;
    OInteger storeAttributeID;
    bool flagHasArguments;
    std::vector< GeonameAttributeArgumentJSON * > storeArguments;

    GeonameAttributeWithArgumentsJSON(const GeonameAttributeWithArgumentsJSON &);
    GeonameAttributeWithArgumentsJSON & operator=(const GeonameAttributeWithArgumentsJSON &other);

    void  fromJSONAttributeID(JSONValue *json_value, bool ignore_extras = false);

    void  fromJSONArguments(JSONValue *json_value, bool ignore_extras = false);


  public:
    GeonameAttributeWithArgumentsJSON(void);
    virtual ~GeonameAttributeWithArgumentsJSON(void);
    bool  hasAttributeID(void) const;
    OInteger  getAttributeID(void);
    const OInteger  getAttributeID(void) const;
    bool  hasArguments(void) const;
    size_t  countOfArguments(void) const;
    GeonameAttributeArgumentJSON *  elementOfArguments(size_t element_num);
    const GeonameAttributeArgumentJSON *  elementOfArguments(size_t element_num) const;
    std::vector< GeonameAttributeArgumentJSON * >  getArguments(void);
    const std::vector< GeonameAttributeArgumentJSON * >  getArguments(void) const;


    void setAttributeID(OInteger new_value)
      {
        flagHasAttributeID = true;
        if (new_value < 1)
            throw("The value for field AttributeID of GeonameAttributeWithArgumentsJSON is less than the lower bound (1) for that field.");
        storeAttributeID = new_value;
      }
    void unsetAttributeID(void)
      {
        flagHasAttributeID = false;
      }
    void initArguments(void)
      {
        if (flagHasArguments)
          {
            for (size_t num2 = 0; num2 < storeArguments.size(); ++num2)
              {
                storeArguments[num2]->remove_reference();
              }
          }
        flagHasArguments = true;
        storeArguments.clear();
      }
    void appendArguments(GeonameAttributeArgumentJSON * to_append)
      {
        if (!flagHasArguments)
          {
            flagHasArguments = true;
            storeArguments.clear();
          }
        assert(flagHasArguments);
        to_append->add_reference();
        storeArguments.push_back(to_append);
      }
    void unsetArguments(void)
      {
        if (flagHasArguments)
          {
            for (size_t num3 = 0; num3 < storeArguments.size(); ++num3)
              {
                storeArguments[num3]->remove_reference();
              }
          }
        flagHasArguments = false;
        storeArguments.clear();
      }


    void write_as_json(JSONHandler *handler) const
      {
        handler->start_object();
        write_fields_as_json(handler);
        handler->finish_object();
      }

    virtual void write_fields_as_json(JSONHandler *handler) const
      {
        assert(flagHasAttributeID);
        handler->start_pair("AttributeID");
        handler->number_value(storeAttributeID.get_o_integer());
        if (flagHasArguments)
          {
            handler->start_pair("Arguments");
            handler->start_array();
            for (size_t num1 = 0; num1 < storeArguments.size(); ++num1)
              {
                storeArguments[num1]->write_as_json(handler);
              }
            handler->finish_array();
          }
      }
    virtual const char *missing_field_error(void) const
      {
        if (!(hasAttributeID()))
          {
            return "When parsing the object for %what%, the \"AttributeID\" field was missing.";
          }
        return NULL;
      }

    static GeonameAttributeWithArgumentsJSON *from_json(JSONValue *json_value, bool ignore_extras = false);
    static GeonameAttributeWithArgumentsJSON *from_text(const char *text, bool ignore_extras = false)
      {
        GeonameAttributeWithArgumentsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeWithArgumentsJSON>, GeonameAttributeWithArgumentsJSON *, bool> generator("Type GeonameAttributeWithArguments", ignore_extras);
            parse_json_value(text, "Text for GeonameAttributeWithArgumentsJSON", &generator);
            assert(generator.have_value);
            result = generator.value.referenced();
            result->add_reference();
          };
        result->remove_reference_no_delete();
        return result;
      }
    static GeonameAttributeWithArgumentsJSON *from_file(FILE *fp, const char *file_name, bool ignore_extras = false)
      {
        GeonameAttributeWithArgumentsJSON *result;
          {
            JSONHoldingGenerator<Generator, RCHandle<GeonameAttributeWithArgumentsJSON>, GeonameAttributeWithArgumentsJSON *, bool> generator("Type GeonameAttributeWithArguments", ignore_extras);
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
        static char lowerBoundAttributeID[];
        JSONHoldingGenerator<JSONIntegerLowerBoundOnlyGenerator<lowerBoundAttributeID>, OInteger, o_integer > fieldGeneratorAttributeID;
        JSONHoldingArrayGenerator<GeonameAttributeArgumentJSON::Generator, RCHandle<GeonameAttributeArgumentJSON>, GeonameAttributeArgumentJSON *, bool > fieldGeneratorArguments;


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
            GeonameAttributeWithArgumentsJSON *result = new GeonameAttributeWithArgumentsJSON();
            assert(result != NULL);
            RCHandle<GeonameAttributeWithArgumentsJSON> result_holder = result;
            finish(result);
            handle_result(result);
          }
        void finish(GeonameAttributeWithArgumentsJSON *result)
          {
            if (fieldGeneratorAttributeID.have_value)
              {
                result->setAttributeID(fieldGeneratorAttributeID.value);
                fieldGeneratorAttributeID.have_value = false;
              }
            else if (!(result->hasAttributeID()))
              {
                error("When parsing the object for %what%, the \"AttributeID\" field was missing.");
              }
            if (fieldGeneratorArguments.have_value)
              {
                result->initArguments();
                size_t count = fieldGeneratorArguments.value.size();
                for (size_t num = 0; num < count; ++num)
                  {
                    result->appendArguments(fieldGeneratorArguments.value[num].referenced());
                  }
                fieldGeneratorArguments.value.clear();
                fieldGeneratorArguments.have_value = false;
              }
          }
        virtual void handle_result(GeonameAttributeWithArgumentsJSON *new_result) = 0;
        virtual JSONHandler *start_known_field(const char *field_name)
          {
            if (strncmp(field_name, "A", 1) == 0)
              {
                switch ((unsigned char)(field_name[1]))
                  {
                    case 'r':
                        if (strcmp(&(field_name[2]), "guments") == 0)
                            return &fieldGeneratorArguments;
                        break;
                    case 't':
                        if (strcmp(&(field_name[2]), "tributeID") == 0)
                            return &fieldGeneratorAttributeID;
                        break;
                    default:
                        break;
                  }
              }
            return NULL;
          }

      public:
        Generator(bool ignore_extras = false) : fieldGeneratorAttributeID("field \"AttributeID\" of the GeonameAttributeWithArguments class"), fieldGeneratorArguments("field \"Arguments\" of the GeonameAttributeWithArguments class", ignore_extras)
          {
            set_what("the GeonameAttributeWithArguments class");
          }
        ~Generator(void)
          {
          }

        void reset(void)
          {
            fieldGeneratorAttributeID.reset();
            fieldGeneratorArguments.reset();
            JSONObjectGenerator::reset();
          }
      };
  };

#endif /* GEONAMEATTRIBUTEWITHARGUMENTSJSON_H */
